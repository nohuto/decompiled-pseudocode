__int64 __fastcall QueryCoreInterface(_QWORD *a1, unsigned int a2, int a3)
{
  if ( a3 || a2 < 0x30 )
    return 3221225485LL;
  *a1 = DxgkTestBeginTest;
  a1[1] = DxgkTestEndTest;
  a1[2] = DxgkEnumAdapters3Internal;
  a1[3] = DxgkOpenAdapterFromLuidInternal;
  a1[4] = DxgkCloseAdapterInternal;
  a1[5] = DxgkQueryAdapterInfoInternal;
  a1[6] = DxgkTestGetSysMmAdapter;
  return 0LL;
}
