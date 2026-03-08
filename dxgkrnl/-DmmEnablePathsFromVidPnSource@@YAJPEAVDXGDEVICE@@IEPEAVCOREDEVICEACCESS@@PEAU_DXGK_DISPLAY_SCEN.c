/*
 * XREFs of ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C40F4
 * Callers:
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0176048 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     DxgkDisplayOnOff @ 0x1C01C33B0 (DxgkDisplayOnOff.c)
 * Callees:
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C0001008 (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x1C00035C8 (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00094C0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?UsingDelayCreateCddAllocation@DXGADAPTER@@QEBAEXZ @ 0x1C000B124 (-UsingDelayCreateCddAllocation@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0164F3C (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01676B0 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0173EE4 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C0176278 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C01C6178 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?DmmResetModeState@@YAJQEAXK@Z @ 0x1C01E47B0 (-DmmResetModeState@@YAJQEAXK@Z.c)
 */

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
