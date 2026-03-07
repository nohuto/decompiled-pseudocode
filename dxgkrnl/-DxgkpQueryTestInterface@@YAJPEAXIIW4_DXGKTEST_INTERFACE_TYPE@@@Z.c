__int64 __fastcall DxgkpQueryTestInterface(_QWORD *a1, unsigned int a2, unsigned int a3, int a4)
{
  if ( !DxgkpIsDrtEnabled((__int64)a1) )
    return 3221225485LL;
  if ( !a4 )
    return QueryCoreInterface(a1, a2, a3);
  if ( a4 != 1 )
    return 3221225485LL;
  return SysMmQueryTestInterface(a1, a2, a3);
}
