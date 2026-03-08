/*
 * XREFs of ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0190FF0
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0162BA0 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@E@Z @ 0x1C01788E4 (-GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C017B030 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     DxgkGetMultiPlaneOverlayCaps @ 0x1C017CB60 (DxgkGetMultiPlaneOverlayCaps.c)
 *     DxgkGetPostCompositionCaps @ 0x1C017CF50 (DxgkGetPostCompositionCaps.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1C017DFB0 (DxgkReserveGpuVirtualAddress.c)
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z @ 0x1C018D730 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@PEAD@Z.c)
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018DC00 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1C018F830 (DxgkWaitForVerticalBlankEventInternal.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C01911B0 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     DxgkEscape @ 0x1C01A3EE0 (DxgkEscape.c)
 *     DxgkGetDisplayModeList @ 0x1C01A95D0 (DxgkGetDisplayModeList.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C01AE290 (DxgkGetAdapterDeviceDesc.c)
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C01B3464 (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 *     ?DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z @ 0x1C01D6DA8 (-DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z.c)
 *     ?DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z @ 0x1C01D7F30 (-DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z.c)
 *     ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1C01DA364 (-DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@PEAPEAXPEA_K1@Z @ 0x1C01DAF00 (-DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@PEAPEAXPEA_K1@Z.c)
 *     DxgkGetPresentHistoryInternal @ 0x1C01DE730 (DxgkGetPresentHistoryInternal.c)
 *     DxgkGetPresentHistoryReadyEvent @ 0x1C01DFAA0 (DxgkGetPresentHistoryReadyEvent.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHHH@Z @ 0x1C01E3D30 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 *     ?DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDXGADAPTER@@@Z @ 0x1C02CA274 (-DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDX.c)
 *     DxgkCreateLightweightDeviceAndContext @ 0x1C02CC178 (DxgkCreateLightweightDeviceAndContext.c)
 *     DxgkGetScanLine @ 0x1C02CCB90 (DxgkGetScanLine.c)
 *     DxgkGetSharedPrimaryHandle @ 0x1C02CD270 (DxgkGetSharedPrimaryHandle.c)
 *     DxgkNeedToEnableCddPrimary @ 0x1C02CE440 (DxgkNeedToEnableCddPrimary.c)
 *     DxgkQueryModeListCacheLuid @ 0x1C02CF680 (DxgkQueryModeListCacheLuid.c)
 *     DxgkQueryStatisticsInternal @ 0x1C02CF990 (DxgkQueryStatisticsInternal.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1C02D44BC (DxgkChangeVideoMemoryReservationInternal.c)
 *     DxgkFreeGpuVirtualAddress @ 0x1C02D4C70 (DxgkFreeGpuVirtualAddress.c)
 *     DxgkQueryVideoMemoryInfo @ 0x1C02D6310 (DxgkQueryVideoMemoryInfo.c)
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C02D9700 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C02DABB0 (-DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z.c)
 *     ?PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z @ 0x1C02DD6A0 (-PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C02F5694 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     DxgkGetMultisampleMethodList @ 0x1C02FC880 (DxgkGetMultisampleMethodList.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z @ 0x1C03340B0 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z.c)
 *     DxgkSetStablePowerState @ 0x1C0342AC0 (DxgkSetStablePowerState.c)
 *     ?CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@_N@Z @ 0x1C034A924 (-CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00097B8 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E190 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x1C0221406 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C030D83C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
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
    WdLogSingleEntry1(1LL, 8283LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_pAdapter != NULL", 8283LL, 0LL, 0LL, 0LL, 0LL);
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
