/*
 * XREFs of ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0178EFC
 * Callers:
 *     DxgkSetVidPnSourceOwner @ 0x1C0178D80 (DxgkSetVidPnSourceOwner.c)
 * Callees:
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1C00033B4 (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0003504 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0003558 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003634 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003AA0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C0003DD8 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0006714 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C00069FC (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AF0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0007064 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0009408 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C0009440 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0024424 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0024440 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00250B4 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0025280 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C00252A8 (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0025314 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     DxgkStatusChangeNotify @ 0x1C0172E00 (DxgkStatusChangeNotify.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0176048 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C0177E48 (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 *     ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x1C0178240 (-CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z.c)
 *     DxgkShutdownBootGraphics @ 0x1C0178460 (DxgkShutdownBootGraphics.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1C01785A8 (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C01787D0 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C0178B04 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C0178BFC (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C0178D4C (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C017B0DC (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C01AFADC (DxgkReleaseSessionModeChangeLock.c)
 *     ?SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z @ 0x1C01D213C (-SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C02B9D34 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C02BA068 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?RemoveVidPnOwnership@DXGDEVICE@@QEAAXI@Z @ 0x1C02E7EC8 (-RemoveVidPnOwnership@DXGDEVICE@@QEAAXI@Z.c)
 */

__int64 __fastcall SetVidPnSourceOwnerInternal(
        const struct _D3DKMT_SETVIDPNSOURCEOWNER *a1,
        struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS a2,
        void *const *a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  struct DXGPROCESS *Current; // r14
  unsigned int v8; // r13d
  const void *v9; // r12
  char *v10; // r15
  size_t v11; // r8
  size_t v12; // r8
  __int64 v13; // rbx
  __int64 v15; // r8
  __int64 v16; // rbx
  __int64 v17; // rdi
  struct DXGDEVICE *v18; // rsi
  __int64 v19; // r12
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdi
  unsigned int i; // r14d
  __int64 v25; // rax
  __int64 v26; // rdx
  DISPLAY_SOURCE *v27; // rcx
  int v28; // r15d
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v30; // r9
  struct DXGDEVICE *v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rcx
  ADAPTER_DISPLAY *v34; // r12
  __int64 v35; // rax
  __int64 v36; // r14
  int v37; // edx
  int v38; // edx
  __int64 v39; // rdx
  __int64 v40; // r8
  unsigned int v41; // esi
  enum _D3DKMT_VIDPNSOURCEOWNER_TYPE v42; // eax
  unsigned int v43; // edx
  char v44; // [rsp+50h] [rbp-428h] BYREF
  unsigned __int8 v45; // [rsp+51h] [rbp-427h] BYREF
  unsigned __int8 v46[6]; // [rsp+52h] [rbp-426h] BYREF
  struct DXGDEVICE *v47; // [rsp+58h] [rbp-420h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v48; // [rsp+60h] [rbp-418h]
  _QWORD v49[2]; // [rsp+68h] [rbp-410h] BYREF
  struct DXGDEVICE *v50; // [rsp+78h] [rbp-400h] BYREF
  struct DXGDEVICE *v51; // [rsp+80h] [rbp-3F8h] BYREF
  _QWORD v52[2]; // [rsp+88h] [rbp-3F0h] BYREF
  _BYTE v53[16]; // [rsp+98h] [rbp-3E0h] BYREF
  _BYTE v54[24]; // [rsp+A8h] [rbp-3D0h] BYREF
  void *Src[2]; // [rsp+C0h] [rbp-3B8h]
  void *v56[2]; // [rsp+D0h] [rbp-3A8h]
  _BYTE v57[160]; // [rsp+E0h] [rbp-398h] BYREF
  _BYTE v58[432]; // [rsp+180h] [rbp-2F8h] BYREF
  unsigned int v59[16]; // [rsp+330h] [rbp-148h] BYREF
  enum _D3DKMT_VIDPNSOURCEOWNER_TYPE v60[16]; // [rsp+370h] [rbp-108h] BYREF
  void *v61[16]; // [rsp+3B0h] [rbp-C8h] BYREF

  v48 = a4;
  Current = DXGPROCESS::GetCurrent();
  v52[0] = Current;
  if ( !Current )
  {
    v41 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return v41;
  }
  memset(v61, 0, sizeof(v61));
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v53, Current);
  v59[0] = 0;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (const struct _D3DKMT_SETVIDPNSOURCEOWNER *)MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)&a1->hDevice;
  *(_OWORD *)v56 = *(_OWORD *)&a1->pVidPnSourceId;
  v8 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v56, 8));
  if ( v8 )
  {
    if ( v8 > 0x10 )
    {
      v13 = LODWORD(Src[0]);
      WdLogSingleEntry3(2LL, LODWORD(Src[0]), v8, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%I64x: VidPnSourceCount (0x%I64x) is too large, returning 0x%I64x",
        v13,
        v8,
        -1073741811LL,
        0LL,
        0LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v53);
      return 3221225485LL;
    }
    v9 = Src[1];
    v10 = (char *)v56[0];
    if ( !Src[1] || !v56[0] )
    {
      v16 = LODWORD(Src[0]);
      WdLogSingleEntry5(2LL, LODWORD(Src[0]), v8, Src[1], v56[0], -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%I64x: (0x%I64x) must have both Type (0x%I64x) and VidPnSourceId (0x%I64x) array, returning 0x%I64x",
        v16,
        v8,
        (__int64)v9,
        (__int64)v10,
        -1073741811LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v53);
      return 3221225485LL;
    }
    v11 = 4LL * v8;
    if ( (char *)Src[1] + v11 < Src[1] || (char *)Src[1] + v11 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v60, v9, v11);
    v12 = 4LL * v8;
    if ( &v10[v12] < v10 || (unsigned __int64)&v10[v12] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v59, v10, v12);
    if ( (*(_BYTE *)&a2.0 & 4) != 0 )
    {
      v15 = v8;
      if ( &a3[v15] < a3 || (unsigned __int64)&a3[v15] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v61, a3, v15 * 8);
    }
  }
  v51 = 0LL;
  v17 = LODWORD(Src[0]);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)&v47,
    (unsigned int)Src[0],
    (struct _KTHREAD **)Current,
    &v51);
  v18 = v51;
  if ( !v51 )
  {
    v41 = -1073741811;
    WdLogSingleEntry2(2LL, v17, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v17,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_111:
    if ( v47 && _InterlockedExchangeAdd64((volatile signed __int64 *)v47 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v47 + 2), v47);
LABEL_96:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v53);
    return v41;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v49, v51);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v54, (struct _KTHREAD **)v18 + 18);
  v19 = *((_QWORD *)v18 + 235);
  if ( !v19 )
  {
    v41 = -1073741637;
    WdLogSingleEntry2(2LL, v17, -1073741637LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkSetVidPnSourceOwner function is called on a render only device (0x%I64x), returning 0x%I64x.",
      v17,
      -1073741637LL,
      0LL,
      0LL,
      0LL);
LABEL_109:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v54);
    if ( v49[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v49);
    goto LABEL_111;
  }
  MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
    (MANAGEDPRIMARIESTRACKER *)v58,
    *(struct ADAPTER_DISPLAY **)(v19 + 2920),
    Current);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v58);
  DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v44);
  v20 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v44, 1);
  v23 = v20;
  if ( v20 < 0 )
  {
    WdLogSingleEntry1(2LL, v20);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire session mode change lock exclusively (Status = 0x%I64x)",
      v23,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v44);
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v58);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v54);
    if ( v49[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v49);
    if ( v47 && _InterlockedExchangeAdd64((volatile signed __int64 *)v47 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v47 + 2), v47);
    v41 = v23;
    goto LABEL_96;
  }
  for ( i = 0; i < v8; ++i )
  {
    v25 = *(_QWORD *)(v19 + 2920);
    v26 = v59[i];
    if ( (unsigned int)v26 >= *(_DWORD *)(v25 + 96) )
    {
      v41 = -1073741811;
      WdLogSingleEntry3(2LL, v26, i, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid VidPnSourceId (0x%I64x at index 0x%I64x) is specified, returning 0x%I64x",
        v59[i],
        i,
        -1073741811LL,
        0LL,
        0LL);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v44);
      MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v58);
      goto LABEL_109;
    }
    v27 = (DISPLAY_SOURCE *)(*(_QWORD *)(v25 + 128) + 4000 * v26);
    if ( v60[i] )
    {
      if ( !v27 || !DISPLAY_SOURCE::CheckSessionOwnership(v27, v26, v21, v22) )
      {
        DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v44);
        MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v58);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v54);
        if ( v49[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v49);
        if ( v47 && _InterlockedExchangeAdd64((volatile signed __int64 *)v47 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v47 + 2), v47);
        v41 = -1071774910;
        goto LABEL_96;
      }
      v28 = DXGDISPLAYMANAGEROBJECT::CheckOwnership(*(struct _LUID *)(v19 + 404), v59[i], v61[i]);
      if ( v28 < 0 )
      {
        WdLogSingleEntry1(2LL, v59[i]);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed DispMgr ownership check on VidPn source 0x%I64x",
          v59[i],
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_119;
      }
    }
  }
  v50 = 0LL;
  CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                           (struct _LUID *)(v19 + 404),
                                           &v50,
                                           0LL,
                                           0LL,
                                           0);
  if ( CddDeviceAndContextForCurrentSession < 0 )
    WdLogSingleEntry1(4LL, CddDeviceAndContextForCurrentSession);
  v31 = v50;
  if ( v50 )
  {
    DxgkShutdownBootGraphics(v50, 0);
    if ( *((_BYTE *)v31 + 1936) )
    {
      WdLogSingleEntry1(1LL, 3106LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pCddDevice->IsVsyncForced() == FALSE",
        3106LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( v31 )
    {
      v32 = *((_QWORD *)v18 + 2);
      if ( *((_QWORD *)v31 + 2) != v32 )
        v31 = 0LL;
      v50 = v31;
      if ( v31 )
      {
        if ( *((_QWORD *)v31 + 2) != v32 || *((_QWORD *)v31 + 235) != *((_QWORD *)v18 + 235) )
        {
          WdLogSingleEntry1(1LL, 3121LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"(pCddDevice == NULL) || ((pCddDevice->GetRenderCore() == pDevice->GetRenderCore()) && (pCddDevice->"
                      "GetDisplayAdapter(VidPnSourceId[0]) == pDevice->GetDisplayAdapter(VidPnSourceId[0])))",
            3121LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        *((_BYTE *)v31 + 1937) = 1;
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v53);
      }
    }
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v57, (__int64)v18, 1, v30, 0);
  v28 = COREDEVICEACCESS::AcquireExclusive((__int64)v57, 2LL);
  if ( v28 < 0 )
  {
    if ( v31 )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v53);
      *((_BYTE *)v31 + 1937) = 0;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v31 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v57);
LABEL_119:
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v44);
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v58);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v54);
    if ( v49[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v49);
    if ( v47 && _InterlockedExchangeAdd64((volatile signed __int64 *)v47 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v47 + 2), v47);
    v41 = v28;
    goto LABEL_96;
  }
  if ( !*(_QWORD *)(v19 + 2920) )
  {
    WdLogSingleEntry1(1LL, 3157LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
      3157LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v34 = *(ADAPTER_DISPLAY **)(v19 + 2920);
  LOBYTE(v33) = 0;
  if ( !v8 || v60[0] == D3DKMT_VIDPNSOURCEOWNER_UNOWNED && v8 == 1 && v59[0] < *((_DWORD *)v34 + 24) )
    LOBYTE(v33) = 1;
  if ( (_BYTE)v33 )
  {
    if ( !v8 && (ADAPTER_DISPLAY::IsVidPnSourceOwner(v34, v18) || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(v34, v18))
      || v8 == 1
      && (ADAPTER_DISPLAY::IsVidPnSourceOwner((DXGADAPTER **)v34, v18, v59[0])
       || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner((DXGADAPTER **)v34, v18, v59[0])) )
    {
      MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v58, v18, 0xFFFFFFFF);
      if ( v8 )
      {
        ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(v34, v18, v59[0]);
        v43 = 1;
      }
      else
      {
        ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(v34, v18);
        v43 = *((_DWORD *)v18 + 473);
      }
      DXGDEVICE::RemoveVidPnOwnership(v18, v43);
      DXGDEVICE::SetSchedulingPriorityAdjustment(v18, 0);
    }
    v36 = v52[0];
    goto LABEL_59;
  }
  if ( g_OSTestSigningEnabled )
  {
    v35 = *((_QWORD *)v18 + 5);
    v33 = *(_DWORD *)(v35 + 424) >> 13;
    if ( (*(_DWORD *)(v35 + 424) & 0x2000) != 0 )
    {
      v42 = v60[0];
      if ( v60[0] == D3DKMT_VIDPNSOURCEOWNER_SHARED )
        v42 = D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVE;
      v60[0] = v42;
    }
  }
  v36 = v52[0];
  if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v52[0] + 88LL) + 208LL))(v33, 0LL)
    && (v60[0] != D3DKMT_VIDPNSOURCEOWNER_SHARED && v60[0] != D3DKMT_VIDPNSOURCEOWNER_EMULATED
     || (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)(v36 + 88) + 304LL))(0LL)) )
  {
    MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v58, 0LL, 0xFFFFFFFF);
    v28 = ADAPTER_DISPLAY::AcquireVidPnSourceOwner(
            (PERESOURCE **)v34,
            (struct _ERESOURCE *)v18,
            v60,
            (char *)v59,
            v8,
            a2);
    if ( v28 < 0 )
      goto LABEL_59;
    switch ( v60[0] )
    {
      case D3DKMT_VIDPNSOURCEOWNER_SHARED:
        goto LABEL_57;
      case D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVE:
      case D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVEGDI:
        v37 = 7;
        break;
      case D3DKMT_VIDPNSOURCEOWNER_EMULATED:
LABEL_57:
        v37 = 3;
        break;
      default:
        WdLogSingleEntry1(1LL, 3241LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"Invalid VidPn source ownership!",
          3241LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v37 = 0;
        break;
    }
    DXGDEVICE::SetSchedulingPriorityAdjustment(v18, v37);
    *((_DWORD *)v18 + 473) += v8;
    goto LABEL_59;
  }
  v28 = -1073741790;
  WdLogSingleEntry1(4LL, -1073741790LL);
LABEL_59:
  v45 = 0;
  v46[0] = 0;
  if ( v28 < 0 )
    goto LABEL_79;
  if ( v31 )
    ADAPTER_DISPLAY::EnsureGdiOutput(v34, v31, (struct COREDEVICEACCESS *)v57, &v45, v46, v48);
  v38 = 1;
  if ( !v45 )
LABEL_79:
    v38 = 0;
  MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v58, v38);
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)v57);
  if ( v31 )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v53);
    *((_BYTE *)v31 + 1937) = 0;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v31 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
    v18 = v51;
  }
  if ( v44 )
  {
    v44 = 0;
    DxgkReleaseSessionModeChangeLock();
  }
  if ( v28 >= 0 )
  {
    if ( v46[0] && v45 )
      (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)v18 + 5) + 88LL) + 192LL))();
    (*(void (**)(void))(*(_QWORD *)(v36 + 88) + 344LL))();
    v52[0] = 1LL;
    v52[1] = 0LL;
    if ( (int)DxgkStatusChangeNotify((int *)v52, v39, v40) < 0 )
    {
      WdLogSingleEntry1(1LL, 3355LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(_Status)", 3355LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v57);
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v44);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v58);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v54);
  if ( v49[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v49);
  if ( v47 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v47 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v47 + 2), v47);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v53);
  return (unsigned int)v28;
}
