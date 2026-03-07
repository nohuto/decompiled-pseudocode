__int64 __fastcall ADAPTER_RENDER::IommuOnEnable(struct SYSMM_ADAPTER *a1, _QWORD *a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  if ( !a2[96] )
    return 0LL;
  v2 = (*(__int64 (**)(void))(*(_QWORD *)(a2[95] + 8LL) + 1208LL))();
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  WdLogSingleEntry1(3LL, v2);
  return v3;
}
