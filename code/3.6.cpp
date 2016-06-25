class solution{
	public:
		stack<int> sort(stack<int>& s){
			stack<int> r;
			while (!s.empty()){
				int tmp = s.top();
				s.pop();
				while (!r.empty() && r.top() > tmp){
					s.push(r.top());
					r.pop();
				}
				r.push(tmp);
			}
			return r;
		}
};
