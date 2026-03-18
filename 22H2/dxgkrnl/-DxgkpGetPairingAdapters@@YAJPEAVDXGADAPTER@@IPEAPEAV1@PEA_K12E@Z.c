/*
 * XREFs of ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01C71F0
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0168160 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     DxgkGetMultiPlaneOverlayCaps @ 0x1C01787D0 (DxgkGetMultiPlaneOverlayCaps.c)
 *     DxgkGetPostCompositionCaps @ 0x1C0178BC0 (DxgkGetPostCompositionCaps.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1C017B640 (DxgkReserveGpuVirtualAddress.c)
 *     ?GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@E@Z @ 0x1C018871C (-GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQ.c)
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018FB80 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z @ 0x1C01944D0 (-DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C019BA70 (DxgkGetAdapterDeviceDesc.c)
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C01A1184 (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 *     DxgkGetDisplayModeList @ 0x1C01A7B20 (DxgkGetDisplayModeList.c)
 *     DxgkEscape @ 0x1C01B43F0 (DxgkEscape.c)
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1C01C59D0 (DxgkWaitForVerticalBlankEventInternal.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C01C73B0 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z @ 0x1C01D4F10 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C01E11B4 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z @ 0x1C01E3C48 (-DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z.c)
 *     ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1C01E6D04 (-DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@PEAPEAXPEA_K1@Z @ 0x1C01E7A90 (-DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@PEAPEAXPEA_K1@Z.c)
 *     DxgkGetPresentHistoryInternal @ 0x1C01EB820 (DxgkGetPresentHistoryInternal.c)
 *     DxgkGetPresentHistoryReadyEvent @ 0x1C01EE580 (DxgkGetPresentHistoryReadyEvent.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHHH@Z @ 0x1C01F2650 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 *     ?DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDXGADAPTER@@@Z @ 0x1C02CEFF4 (-DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDX.c)
 *     DxgkCreateLightweightDeviceAndContext @ 0x1C02D0EF8 (DxgkCreateLightweightDeviceAndContext.c)
 *     DxgkGetScanLine @ 0x1C02D1910 (DxgkGetScanLine.c)
 *     DxgkGetSharedPrimaryHandle @ 0x1C02D1FF0 (DxgkGetSharedPrimaryHandle.c)
 *     DxgkNeedToEnableCddPrimary @ 0x1C02D31C0 (DxgkNeedToEnableCddPrimary.c)
 *     DxgkQueryModeListCacheLuid @ 0x1C02D4400 (DxgkQueryModeListCacheLuid.c)
 *     DxgkQueryStatisticsInternal @ 0x1C02D4710 (DxgkQueryStatisticsInternal.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1C02D924C (DxgkChangeVideoMemoryReservationInternal.c)
 *     DxgkFreeGpuVirtualAddress @ 0x1C02D9A00 (DxgkFreeGpuVirtualAddress.c)
 *     DxgkQueryVideoMemoryInfo @ 0x1C02DB0A0 (DxgkQueryVideoMemoryInfo.c)
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C02DE490 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C02DF940 (-DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z.c)
 *     ?PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z @ 0x1C02E2430 (-PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C02FA4C4 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     DxgkGetMultisampleMethodList @ 0x1C03016B0 (DxgkGetMultisampleMethodList.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z @ 0x1C0338AF0 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z.c)
 *     DxgkSetStablePowerState @ 0x1C0347500 (DxgkSetStablePowerState.c)
 *     ?CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@_N@Z @ 0x1C034F384 (-CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000295C (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00074A8 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C00076A0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x1C022F9AC (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C031266C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkpGetPairingAdapters(
        struct DXGADAPTER *this,
        unsigned int a2,
        struct DXGADAPTER **a3,
        unsigned __int64 *a4,
        struct DXGADAPTER **a5,
        unsigned __int64 *a6,
        unsigned __int8 a7)
{
  __int64 v7; // r15
  DXGADAPTER *v10; // rcx
  struct DXGADAPTER *v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // r15
  unsigned int v15; // edi
  struct DXGGLOBAL *Global; // rax
  int IndirectDisplayPairedAdapter; // eax
  __int64 v19; // r13
  DXGADAPTER *v20; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v21; // [rsp+58h] [rbp-40h]
  _BYTE v22[8]; // [rsp+60h] [rbp-38h] BYREF
  char v23; // [rsp+68h] [rbp-30h]
  unsigned __int64 v24; // [rsp+A0h] [rbp+8h]

  v7 = a2;
  v10 = 0LL;
  v20 = 0LL;
  v12 = 0LL;
  if ( !this )
  {
    WdLogSingleEntry1(1LL, 8286LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_pAdapter != NULL", 8286LL, 0LL, 0LL, 0LL, 0LL);
    v10 = v20;
  }
  v13 = *((_QWORD *)this + 365);
  if ( v13 )
  {
    if ( (unsigned int)v7 >= *(_DWORD *)(v13 + 96) )
    {
      v15 = -1073741811;
      WdLogSingleEntry2(2LL, v7, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid VidPnSourceId (0x%I64x) specified, returning 0x%I64x",
        v7,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_22;
    }
    v12 = this;
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    v10 = v20;
    v14 = -1LL;
  }
  else
  {
    if ( a5 )
    {
      WdLogSingleEntry2(4LL, this, -1073741637LL);
      v15 = -1073741637;
      goto LABEL_22;
    }
    v14 = v24;
  }
  if ( !a3 )
  {
LABEL_10:
    if ( a5 )
    {
      *a5 = v12;
      v12 = 0LL;
      *a6 = v14;
    }
    v15 = 0;
    goto LABEL_13;
  }
  if ( *((_QWORD *)this + 366) )
  {
    v20 = this;
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    v21 = -1LL;
LABEL_9:
    v10 = 0LL;
    *a3 = v20;
    *a4 = v21;
    v20 = 0LL;
    goto LABEL_10;
  }
  if ( (*((_DWORD *)this + 109) & 0x100) != 0 )
  {
    IndirectDisplayPairedAdapter = DxgkpGetIndirectDisplayPairedAdapter(this, a7, (struct DXGADAPTER_REFERENCE *)&v20);
    v19 = IndirectDisplayPairedAdapter;
    if ( IndirectDisplayPairedAdapter >= 0 )
      goto LABEL_9;
    WdLogSingleEntry2(2LL, this, IndirectDisplayPairedAdapter);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get the paired render adapter for indirect display adapter 0x%I64x, (Status = 0x%I64x).",
      (__int64)this,
      v19,
      0LL,
      0LL,
      0LL);
    v15 = v19;
LABEL_22:
    v10 = v20;
    goto LABEL_13;
  }
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v22);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
  Global = DXGGLOBAL::GetGlobal();
  DXGADAPTER_REFERENCE::Assign(&v20, *((struct DXGADAPTER **)Global + 121));
  if ( v20 )
  {
    if ( v23 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
    goto LABEL_9;
  }
  WdLogSingleEntry2(2LL, this, -1073741637LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"WARP render only adapter is not ready to be used with display only adapter 0x%I64x, returning 0x%I64x.",
    (__int64)this,
    -1073741637LL,
    0LL,
    0LL,
    0LL);
  if ( v23 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
  v10 = v20;
  v15 = -1073741637;
LABEL_13:
  if ( v10 )
    DXGADAPTER::ReleaseReference(v10);
  v20 = 0LL;
  if ( v12 && _InterlockedExchangeAdd64((volatile signed __int64 *)v12 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v12 + 2), v12);
  return v15;
}
