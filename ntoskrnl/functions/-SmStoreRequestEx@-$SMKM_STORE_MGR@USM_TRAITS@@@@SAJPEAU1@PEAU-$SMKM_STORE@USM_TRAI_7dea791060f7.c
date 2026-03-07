__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmStoreRequestEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  if ( a5 )
  {
    a5[1] = 0LL;
    *a5 = a4;
  }
  *(_QWORD *)(a3 + 32) = a5;
  SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(a2, a3, 0);
  return 259LL;
}
