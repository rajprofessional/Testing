puzzles:
	in stack:
		infix
		prefix
		postfix
		
		infix: a+b
		postfix: ab+
		prefix: +ab
		
		
		infix : a+b/c
		postfix: abc/+
		
		
		
		infix to postfix:
1) operands -> read & print
2) operators -> go to stack & store on it -> priority ()*/+-


Example code: (a+b/c*(d+e)-f)
s.no	data			stack				postfix
1		(				(					
2		a				(					a
3		+				(+					a
4		b				(+					ab
5		/				(+/					ab
6		c				(+/					abc
7		*				(+*					abc/
8		(				(+*(				abc/
9		d				(+*(				abc/d
10		+				(+*(+				abc/d
11		e				(+*(+				abc/de
12		)				(+*(+)				abc/de+
13		-				(-					abc/de+*+
14		f				(-					abc/de+*+f
15		)				(-)					abc/de+*+f-


Example code: (a+b*c-(d/e)-(f+g))

Example code: ((a*b)/c-(d+e)*f)+(g/h)+i

Answer: ab*c/de+f-*gh/+i+


Infix: to PREFIX :(a+b)*c-d+f
reverse: f+d-c*(b+a)

s.no	data		stack		prefix
1		f						f
2		+			+			f
3		d			+			fd
4		-			-			fd+
5		c			-			fd+c
6		*			-*			fd+c
7		(			-*(			fd+c
8		b			-*(			fd+cb
9		+			-*(+		fd+cb
10		a			-*(+		fd+cba
11		)			-*			fd+cba+
12					-			fd+cba+*
13								fd+cba+*-

Answer: -*+abc+df

Infix: to PREFIX :(a+b)/(c+d)+(e*f)/g
reverse: g/(f*e)+(d+c)/(b+a)

Answer: gfe*/dc+ba+/+
+/+ab+cd/*efg
























