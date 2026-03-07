// attributes: thunk
char __fastcall CMILMatrix::IsIdentity(__int64 this)
{
  return CMILMatrix::IsIdentity<0>(this);
}
