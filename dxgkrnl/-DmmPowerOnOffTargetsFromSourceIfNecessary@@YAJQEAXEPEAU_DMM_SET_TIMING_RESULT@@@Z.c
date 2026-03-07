__int64 __fastcall DmmPowerOnOffTargetsFromSourceIfNecessary(
        PERESOURCE *a1,
        unsigned __int8 a2,
        struct _DMM_SET_TIMING_RESULT *a3)
{
  PERESOURCE v6; // rax
  VIDPN_MGR *Flink; // rdi
  struct _DMM_SET_TIMING_RESULT *v8; // rax
  int v9; // eax
  unsigned int v10; // edi
  char v12; // [rsp+50h] [rbp-148h] BYREF
  __int64 v13; // [rsp+58h] [rbp-140h] BYREF
  _BYTE v14[272]; // [rsp+60h] [rbp-138h] BYREF

  if ( !a1 )
  {
    WdLogSingleEntry0(2LL);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
    WdLogSingleEntry0(1LL);
  v6 = a1[365];
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223191554LL;
  }
  Flink = (VIDPN_MGR *)v6[1].SystemResourcesList.Flink;
  if ( Flink )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v13, (__int64)v6[1].SystemResourcesList.Flink);
    memset(v14, 0, 0x104uLL);
    v12 = 0;
    v8 = (struct _DMM_SET_TIMING_RESULT *)&v12;
    if ( a3 )
      v8 = a3;
    v9 = VIDPN_MGR::SetTimingsFromVidPn(Flink, 0, 4u, 0LL, (struct D3DKMT_VIDPN_SOURCE_MASKS *)v14, v8, a2, 0LL, 0LL);
    v10 = v9;
    if ( v9 < 0 )
      WdLogSingleEntry3(2LL, *((int *)a1 + 102), *((unsigned int *)a1 + 101), v9);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v13 + 40));
    return v10;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
}
