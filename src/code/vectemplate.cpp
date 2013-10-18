template <int length>
class intVector{
	int values[length];
public:
	intVector() {}
	intVector(int v) {
		for (int i = 0; i < length; i++)
			this->values[i] = v;
	}

	template <int other_length>
	intVector<other_length> read(intVector<other_length> readSequence) {
		intVector<other_length> rdVector;
		for (int i = 0; i < other_length; i++)
			rdVector.values[i] = this->values[readSequence.values[i]];
		return rdVector;
	}

	template <int other_length>
	intVector<other_length> write(intVector<other_length>writeSequence, intVector<other_length> values) {
		int pos;int value;
		for (int i = 0; i < other_length; i++) {
			pos = writeSequence.values[i];
			value = values.values[i];
			this->values[pos] = value;
		}
	return values;
	}

	template <int other_length>
	intVector<length + other_length> operator,(intVector<other_length> other) {
		intVector<length + other_length> result; int i = 0;
		for (i = 0; i < length; i++)
			result.values[i] = this->values[i];
		for (int j = 0; j < other_length; i++, j++)
			result.values[i] = other.values[j];
		return result;
	}

	intVector<length + 1> operator,(int value) {
		intVector<length + 1> result;
		for (int i = 0; i < length; i++)
			result.values[i] = this->values[i];
		result[length] = value;
		return result;
	}

	intVector<length> operator+(intVector<length> other) {
		intVector<length> result;
		for (int i = 0; i < length; i++)
			result.values[i] = this->values[i] + other.values[i];
		return result;
	}

	friend intVector<length> operator+(intVector<length> lhs, int rhs) {
		return lhs + intVector<length>(rhs);
	}

	friend intVector<length> operator+(int lhs, intVector<length> rhs) {
		return intVector<length>(lhs) + rhs;
	}

	intVector<length> operator*(intVector<length> other) {
		intVector<length> result;
		for (int i = 0; i < length; i++)
			result.values[i] = this->values[i] * other.values[i];
		return result;
	}

	friend intVector<length> operator*(intVector<length> lhs, int rhs) {
		return lhs * intVector<length>(rhs);
	}

	friend intVector<length> operator*(int lhs, intVector<length> rhs) {
		return intVector<length>(lhs) * rhs;
	}

	intVector<length> operator-(intVector<length> other) {
		intVector<length> result;
		for (int i = 0; i < length; i++)
			result.values[i] = this->values[i] - other.values[i];
		return result;
	}

	friend intVector<length> operator-(intVector<length> lhs, int rhs) {
		return lhs - intVector<length>(rhs);
	}

	friend intVector<length> operator-(int lhs, intVector<length> rhs) {
		return intVector<length>(lhs) - rhs;
	}

	intVector<length> operator/(intVector<length> other) {
		intVector<length> result;
		for (int i = 0; i < length; i++)
			result.values[i] = this->values[i] / other.values[i];
		return result;
	}

	friend intVector<length> operator/(intVector<length> lhs, int rhs) {
		return lhs / intVector<length>(rhs);
	}

	friend intVector<length> operator/(int lhs, intVector<length> rhs) {
		return intVector<length>(lhs) / rhs;
	}

	intVector<length> operator%(intVector<length> other) {
		intVector<length> result;
		for (int i = 0; i < length; i++)
			result.values[i] = this->values[i] % other.values[i];
		return result;
	}

	friend intVector<length> operator%(intVector<length> lhs, int rhs) {
		return lhs % intVector<length>(rhs);
	}

	friend intVector<length> operator%(int lhs, intVector<length> rhs) {
		return intVector<length>(lhs) % rhs;
	}

	intVector<length> operator+() {return *this;}

	intVector<length> operator-() {return *this * -1;}

	intVector<length>& operator++() {
		for (int i = 0; i < length; i++) 
			this->values[i]++;
		return *this;
	}

	intVector<length> operator++(int dummy) {
		intVector<length> ans = *this;
		operator++();
		return ans;
	}

	intVector<length>& operator--() {
		for (int i = 0; i < length; i++) 
			this->values[i]--;
		return *this;
	}

	intVector<length> operator--(int dummy) {
		intVector<length> ans = *this;
		operator--();
		return ans;
	}

	intVector<length> operator<(intVector<length> other) {
		intVector<length> result;
		for (int i = 0; i < length; i++)
			result.values[i] = ((this->values[i] <other.values[i]) ? ~0 : 0);
		return result;
	}

	friend intVector<length> operator<(intVector<length> lhs, int rhs) {
		return lhs < intVector<length>(rhs);
	}

	friend intVector<length> operator<(int lhs, intVector<length> rhs) {
		return intVector<length>(lhs) < rhs;
	}

	intVector<length> operator>(intVector<length> other) {
		intVector<length> result;
		for (int i = 0; i < length; i++)
			result.values[i] = ((this->values[i] >other.values[i]) ? ~0 : 0);
		return result;
	}

	friend intVector<length> operator>(intVector<length> lhs, int rhs) {
		return lhs > intVector<length>(rhs);
	}

	friend intVector<length> operator>(int lhs, intVector<length> rhs) {
		return intVector<length>(lhs) > rhs;
	}

	intVector<length> operator<=(intVector<length> other) {
		intVector<length> result;
		for (int i = 0; i < length; i++)
			result.values[i] = ((this->values[i] <=other.values[i]) ? ~0 : 0);
		return result;
	}

	friend intVector<length> operator<=(intVector<length> lhs, int rhs) {
		return lhs <= intVector<length>(rhs);
	}

	friend intVector<length> operator<=(int lhs, intVector<length> rhs) {
		return intVector<length>(lhs) <= rhs;
	}

	intVector<length> operator>=(intVector<length> other) {
		intVector<length> result;
		for (int i = 0; i < length; i++)
			result.values[i] = ((this->values[i] >=other.values[i]) ? ~0 : 0);
		return result;
	}

	friend intVector<length> operator>=(intVector<length> lhs, int rhs) {
		return lhs >= intVector<length>(rhs);
	}

	friend intVector<length> operator>=(int lhs, intVector<length> rhs) {
		return intVector<length>(lhs) >= rhs;
	}

	intVector<length> operator==(intVector<length> other) {
		intVector<length> result;
		for (int i = 0; i < length; i++)
			result.values[i] = ((this->values[i] ==other.values[i]) ? ~0 : 0);
		return result;
	}

	friend intVector<length> operator==(intVector<length> lhs, int rhs) {
		return lhs == intVector<length>(rhs);
	}

	friend intVector<length> operator==(int lhs, intVector<length> rhs) {
		return intVector<length>(lhs) == rhs;
	}

	intVector<length> operator!=(intVector<length> other) {
		intVector<length> result;
		for (int i = 0; i < length; i++)
			result.values[i] = ((this->values[i] !=other.values[i]) ? ~0 : 0);
		return result;
	}

	friend intVector<length> operator!=(intVector<length> lhs, int rhs) {
		return lhs != intVector<length>(rhs);
	}

	friend intVector<length> operator!=(int lhs, intVector<length> rhs) {
		return intVector<length>(lhs) != rhs;
	}

	intVector<length> operator&(intVector<length> other) {
		intVector<length> result;
		for (int i = 0; i < length; i++)
			result.values[i] = this->values[i] & other.values[i];
		return result;
	}

	friend intVector<length> operator&(intVector<length> lhs, int rhs) {
		return lhs & intVector<length>(rhs);
	}

	friend intVector<length> operator&(int lhs, intVector<length> rhs) {
		return intVector<length>(lhs) & rhs;
	}

	intVector<length> operator|(intVector<length> other) {
		intVector<length> result;
		for (int i = 0; i < length; i++)
			result.values[i] = this->values[i] | other.values[i];
		return result;
	}

	friend intVector<length> operator|(intVector<length> lhs, int rhs) {
		return lhs | intVector<length>(rhs);
	}

	friend intVector<length> operator|(int lhs, intVector<length> rhs) {
		return intVector<length>(lhs) | rhs;
	}

	intVector<length> operator^(intVector<length> other) {
		intVector<length> result;
		for (int i = 0; i < length; i++)
			result.values[i] = this->values[i] ^ other.values[i];
		return result;
	}

	friend intVector<length> operator^(intVector<length> lhs, int rhs) {
		return lhs ^ intVector<length>(rhs);
	}

	friend intVector<length> operator^(int lhs, intVector<length> rhs) {
		return intVector<length>(lhs) ^ rhs;
	}

	intVector<length> operator~() {
		intVector<length> result;
		for (int i = 0 ; i < length; i++)
			result.values[i] = ~(this->values[i]);
		return result;
	}

	friend class intVector<1>;
	friend class intVector<0>;
};

template <>
class intVector<1>{
	int values[1];
public:
	intVector() {}
	intVector(int v) {
		for (int i = 0; i < 1; i++)
			this->values[i] = v;
	}

	template <int other_length>
	intVector<1 + other_length> operator,(intVector<other_length> other) {
		intVector<1 + other_length> result; int i = 0;
		for (i = 0; i < 1; i++)
			result.values[i] = this->values[i];
		for (int j = 0; j < other_length; i++, j++)
			result.values[i] = other.values[j];
		return result;
	}

	intVector<1 + 1> operator,(int value) {
		intVector<1 + 1> result;
		for (int i = 0; i < 1; i++)
			result.values[i] = this->values[i];
		result[1] = value;
		return result;
	}

	operator int() const { return values[0];}
};

template <>
class intVector<0>{
public:
	template <int other_length>
	intVector<0 + other_length> operator,(intVector<other_length> other) {
		intVector<0 + other_length> result; int i = 0;
		for (int j = 0; j < other_length; i++, j++)
			result.values[i] = other.values[j];
		return result;
	}

	intVector<0 + 1> operator,(int value) {
		intVector<0 + 1> result;
		result[0] = value;
		return result;
	}
};
