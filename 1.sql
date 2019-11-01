select a.*,
concat((a.zz-b.zz)/a.zz*100,"%")
as '年度利润比'
from yrprofit as a left join 
yrprofit as b
on a.year=b.year+1;