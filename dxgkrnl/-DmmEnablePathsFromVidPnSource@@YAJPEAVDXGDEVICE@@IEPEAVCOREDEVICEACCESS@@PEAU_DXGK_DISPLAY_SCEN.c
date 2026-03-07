__int64 __fastcall DmmEnablePathsFromVidPnSource(
        struct DXGDEVICE *a1,
        unsigned int a2,
        char a3,
        struct COREDEVICEACCESS *a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  __int64 v6; // rsi
  __int64 v9; // rdi
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  struct DXGADAPTERALLOCATION *v11; // rbx
  VIDPN_MGR *v12; // rbx
  int v13; // edx
  const struct _D3DKMT_DISPLAYMODE *CddDisplayMode; // rax
  int CddAllocations; // eax
  __int64 v17; // rdx
  _BYTE v18[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v20[68]; // [rsp+60h] [rbp-A0h] BYREF

  v6 = a2;
  memset(v20, 0, 0x104uLL);
  v9 = *((_QWORD *)a1 + 235);
  v18[0] = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v9) )
    WdLogSingleEntry0(1LL);
  if ( *(_QWORD *)(v9 + 2928) && !a3 )
    DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(*(ADAPTER_DISPLAY **)(v9 + 2920), v6);
  else
    DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(ADAPTER_DISPLAY **)(v9 + 2920), v6, 0);
  v11 = DisplayedPrimaryAllocation;
  if ( DXGADAPTER::UsingDelayCreateCddAllocation((DXGADAPTER *)v9)
    || v11 && (*((_DWORD *)v11 + 1) & 0x10) == 0 && *((_QWORD *)v11 + 2) )
  {
    goto LABEL_7;
  }
  CddDisplayMode = ADAPTER_DISPLAY::GetCddDisplayMode(*(DXGADAPTER ***)(v9 + 2920), v6);
  if ( !CddDisplayMode->Width || !CddDisplayMode->Height )
  {
    WdLogSingleEntry2(3LL, v6, v9);
    return 0LL;
  }
  CddAllocations = ADAPTER_DISPLAY::CreateCddAllocations(*(ADAPTER_DISPLAY **)(v9 + 2920), a1, v6, CddDisplayMode, a4);
  if ( CddAllocations >= 0 )
  {
LABEL_7:
    v12 = *(VIDPN_MGR **)(*(_QWORD *)(v9 + 2920) + 104LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v19, (__int64)v12);
    WdLogSingleEntry2(7LL, v6, v12);
    v20[8] = 1 << v6;
    v13 = VIDPN_MGR::SetTimingsFromVidPn(v12, 0, 5u, 0LL, (struct D3DKMT_VIDPN_SOURCE_MASKS *)v20, v18, 0, 0LL, 0LL);
    if ( v13 < 0 )
    {
      v20[21] = -1;
      FillFailedStatus((struct D3DKMT_VIDPN_SOURCE_MASKS *)v20, v13);
      WdLogSingleEntry4(2LL, v6, *(int *)(v9 + 408), *(unsigned int *)(v9 + 404), v17);
    }
    if ( v20[21] )
    {
      v18[0] |= 2u;
      if ( (int)DmmResetModeState((void *const)v9, v20[21]) < 0 )
        WdLogSingleEntry0(1LL);
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v19 + 40));
  }
  else
  {
    WdLogSingleEntry3(2LL, v6, v9, CddAllocations);
    v18[0] |= 2u;
  }
  DmmHandleSetTimingsResult((ADAPTER_DISPLAY **)v9, (struct _DMM_SET_TIMING_RESULT *)v18, a5);
  return 0LL;
}
