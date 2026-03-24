/*
 * XREFs of ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E3A58
 * Callers:
 *     DxgkSetVidPnSourceOwner @ 0x1C00E3820 (DxgkSetVidPnSourceOwner.c)
 * Callees:
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1C0001EDC (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C000278C (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0002E48 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0002E9C (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0002F00 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0002F54 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00037C0 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00038D4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0005100 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0005218 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008F8C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000A008 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C000A39C (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000A3B8 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0025B3C (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C0025B64 (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E316C (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C00E432C (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00E43CC (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00E46BC (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     DxgkShutdownBootGraphics @ 0x1C00E4820 (DxgkShutdownBootGraphics.c)
 *     DxgkStatusChangeNotify @ 0x1C00E4A50 (DxgkStatusChangeNotify.c)
 *     ?SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z @ 0x1C00E4D18 (-SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1C00E5268 (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00E52AC (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 *     ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x1C00E56C0 (-CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C00EB6DC (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C00EB788 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C0120374 (DxgkReleaseSessionModeChangeLock.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C0173A30 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?RemoveVidPnOwnership@DXGDEVICE@@QEAAXI@Z @ 0x1C0174A3C (-RemoveVidPnOwnership@DXGDEVICE@@QEAAXI@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C02148A4 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 */

__int64 __fastcall SetVidPnSourceOwnerInternal(
        const struct _D3DKMT_SETVIDPNSOURCEOWNER *a1,
        struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS a2,
        void *const *a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGFASTMUTEX **Current; // r14
  __int64 v10; // rdx
  unsigned int v11; // r12d
  const void *v12; // rdi
  __int64 v13; // rsi
  _QWORD *v14; // rax
  void *const *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  DXGDEVICE *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r13
  int v25; // eax
  __int64 v26; // rdx
  DISPLAY_SOURCE *v27; // rcx
  __int64 v28; // rdi
  unsigned int i; // r14d
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  int v33; // r15d
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v35; // r9
  __int64 v36; // rdi
  struct DXGDEVICE *v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  int v43; // r14d
  ADAPTER_DISPLAY *v44; // r15
  __int64 v45; // rdx
  struct DXGFASTMUTEX **v46; // r13
  __int64 v47; // rdx
  __int64 v48; // rcx
  int v49; // edx
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rcx
  unsigned int v54; // edx
  __int64 v55; // rax
  unsigned int v56; // ebx
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  enum _D3DKMT_VIDPNSOURCEOWNER_TYPE v66; // eax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  char v70; // [rsp+30h] [rbp-438h] BYREF
  unsigned __int8 v71; // [rsp+31h] [rbp-437h] BYREF
  unsigned __int8 v72[6]; // [rsp+32h] [rbp-436h] BYREF
  struct DXGDEVICE *v73; // [rsp+38h] [rbp-430h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v74; // [rsp+40h] [rbp-428h]
  _QWORD v75[2]; // [rsp+48h] [rbp-420h] BYREF
  struct DXGFASTMUTEX **v76; // [rsp+58h] [rbp-410h]
  struct DXGDEVICE *v77; // [rsp+60h] [rbp-408h]
  DXGDEVICE *v78; // [rsp+68h] [rbp-400h] BYREF
  _BYTE v79[16]; // [rsp+70h] [rbp-3F8h] BYREF
  _BYTE v80[24]; // [rsp+80h] [rbp-3E8h] BYREF
  void *Src[2]; // [rsp+98h] [rbp-3D0h]
  void *v82[2]; // [rsp+A8h] [rbp-3C0h]
  _QWORD v83[3]; // [rsp+B8h] [rbp-3B0h] BYREF
  _BYTE v84[160]; // [rsp+D0h] [rbp-398h] BYREF
  _BYTE v85[432]; // [rsp+170h] [rbp-2F8h] BYREF
  unsigned int v86[16]; // [rsp+320h] [rbp-148h] BYREF
  enum _D3DKMT_VIDPNSOURCEOWNER_TYPE v87[16]; // [rsp+360h] [rbp-108h] BYREF
  void *v88[16]; // [rsp+3A0h] [rbp-C8h] BYREF

  v74 = a4;
  Current = (struct DXGFASTMUTEX **)DXGPROCESS::GetCurrent();
  v76 = Current;
  if ( !Current )
  {
    v57 = WdLogNewEntry5_WdError(v8, v7);
    v56 = -1073741811;
    *(_QWORD *)(v57 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v57);
    return v56;
  }
  memset(v88, 0, sizeof(v88));
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v79, Current);
  v86[0] = 0;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (const struct _D3DKMT_SETVIDPNSOURCEOWNER *)MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)&a1->hDevice;
  *(_OWORD *)v82 = *(_OWORD *)&a1->pVidPnSourceId;
  v11 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v82, 8));
  if ( v11 )
  {
    if ( v11 > 0x10 )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdError(MmUserProbeAddress, v10);
      v14[3] = LODWORD(Src[0]);
      v14[4] = v11;
      v14[5] = -1073741811LL;
      WdLogEvent5_WdError(v14);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v79);
      return 3221225485LL;
    }
    v12 = Src[1];
    if ( !Src[1] || !v82[0] )
    {
      v17 = WdLogNewEntry5_WdError(MmUserProbeAddress, v10);
      *(_QWORD *)(v17 + 24) = LODWORD(Src[0]);
      *(_QWORD *)(v17 + 32) = v11;
      *(_QWORD *)(v17 + 40) = v12;
      *(void **)(v17 + 48) = v82[0];
      *(_QWORD *)(v17 + 56) = -1073741811LL;
      WdLogEvent5_WdError(v17);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v79);
      return 3221225485LL;
    }
    v13 = 4LL * v11;
    if ( (char *)Src[1] + v13 < Src[1] || (char *)Src[1] + v13 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v87, v12, 4LL * v11);
    if ( (char *)v82[0] + v13 < v82[0] || (char *)v82[0] + v13 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v86, v82[0], 4LL * v11);
    if ( (*(_BYTE *)&a2.0 & 4) != 0 )
    {
      v16 = &a3[v11];
      if ( v16 < a3 || (unsigned __int64)v16 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v88, a3, 8LL * v11);
    }
    Current = v76;
  }
  v78 = 0LL;
  v18 = LODWORD(Src[0]);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v73, LODWORD(Src[0]), Current, &v78);
  v21 = v78;
  if ( !v78 )
  {
    v58 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v58 + 24) = v18;
    v56 = -1073741811;
    *(_QWORD *)(v58 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v58);
LABEL_128:
    if ( v73 && _InterlockedExchangeAdd64((volatile signed __int64 *)v73 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v73 + 2), v73);
LABEL_108:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v79);
    return v56;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v75, v78);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v80, (DXGDEVICE *)((char *)v21 + 144));
  v24 = *((_QWORD *)v21 + 231);
  if ( !v24 )
  {
    v59 = WdLogNewEntry5_WdError(v23, v22);
    *(_QWORD *)(v59 + 24) = v18;
    v56 = -1073741637;
    *(_QWORD *)(v59 + 32) = -1073741637LL;
    WdLogEvent5_WdError(v59);
LABEL_126:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v80);
    if ( v75[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v75);
    goto LABEL_128;
  }
  MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
    (MANAGEDPRIMARIESTRACKER *)v85,
    *(struct ADAPTER_DISPLAY **)(v24 + 2696),
    (struct DXGPROCESS *)Current);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v85);
  DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v70);
  v25 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v70, 1);
  v28 = v25;
  if ( v25 < 0 )
  {
    v60 = WdLogNewEntry5_WdError(v27, v26);
    *(_QWORD *)(v60 + 24) = v28;
    WdLogEvent5_WdError(v60);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v70);
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v85);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v80);
    if ( v75[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v75);
    if ( v73 && _InterlockedExchangeAdd64((volatile signed __int64 *)v73 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v73 + 2), v73);
    v56 = v28;
    goto LABEL_108;
  }
  for ( i = 0; i < v11; ++i )
  {
    v30 = *(_QWORD *)(v24 + 2696);
    v31 = v86[i];
    if ( (unsigned int)v31 >= *(_DWORD *)(v30 + 80) )
    {
      v62 = (_QWORD *)WdLogNewEntry5_WdError(v27, v30);
      v62[3] = v86[i];
      v62[4] = i;
      v56 = -1073741811;
      v62[5] = -1073741811LL;
      WdLogEvent5_WdError(v62);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v70);
      MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v85);
      goto LABEL_126;
    }
    v27 = (DISPLAY_SOURCE *)(*(_QWORD *)(v30 + 112) + 3968 * v31);
    if ( v87[i] )
    {
      if ( !v27 || !DISPLAY_SOURCE::CheckSessionOwnership(v27) )
      {
        DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v70);
        MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v85);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v80);
        if ( v75[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v75);
        if ( v73 && _InterlockedExchangeAdd64((volatile signed __int64 *)v73 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v73 + 2), v73);
        v56 = -1071774910;
        goto LABEL_108;
      }
      v33 = DXGDISPLAYMANAGEROBJECT::CheckOwnership(*(struct _LUID *)(v24 + 316), v86[i], v88[i]);
      if ( v33 < 0 )
      {
        v61 = WdLogNewEntry5_WdError(v27, v32);
        *(_QWORD *)(v61 + 24) = v86[i];
        WdLogEvent5_WdError(v61);
        DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v70);
        MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v85);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v80);
        if ( v75[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v75);
        if ( v73 && _InterlockedExchangeAdd64((volatile signed __int64 *)v73 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v73 + 2), v73);
        v56 = v33;
        goto LABEL_108;
      }
    }
  }
  v77 = 0LL;
  CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession((struct _LUID *)(v24 + 316), 0);
  v36 = CddDeviceAndContextForCurrentSession;
  if ( CddDeviceAndContextForCurrentSession < 0 )
  {
    v55 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v55 + 24) = v36;
    WdLogEvent5_WdEvent(v55);
  }
  v37 = v77;
  if ( v77 )
  {
    DxgkShutdownBootGraphics(v77, 0LL);
    if ( *((_BYTE *)v37 + 1904) )
    {
      v63 = WdLogNewEntry5_WdAssertion(v39, v38);
      *(_QWORD *)(v63 + 24) = 3036LL;
      WdLogEvent5_WdAssertion(v63);
    }
    if ( v37 )
    {
      v40 = *((_QWORD *)v21 + 2);
      if ( *((_QWORD *)v37 + 2) != v40 )
        v37 = 0LL;
      v77 = v37;
      if ( v37 )
      {
        if ( *((_QWORD *)v37 + 2) != v40 || *((_QWORD *)v37 + 231) != *((_QWORD *)v21 + 231) )
        {
          v64 = WdLogNewEntry5_WdAssertion(v39, v38);
          *(_QWORD *)(v64 + 24) = 3051LL;
          WdLogEvent5_WdAssertion(v64);
        }
        *((_BYTE *)v37 + 1905) = 1;
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v79);
      }
    }
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v84, (__int64)v21, 1, v35, 0);
  v43 = COREDEVICEACCESS::AcquireExclusive((__int64)v84, 2LL);
  if ( v43 < 0 )
  {
    if ( v37 )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v79, v41);
      *((_BYTE *)v37 + 1905) = 0;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v77 + 2), v77);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v84);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v70);
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v85);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v80);
    if ( v75[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v75);
    if ( v73 && _InterlockedExchangeAdd64((volatile signed __int64 *)v73 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v73 + 2), v73);
    v56 = v43;
    goto LABEL_108;
  }
  v44 = *(ADAPTER_DISPLAY **)(v24 + 2696);
  v45 = 0LL;
  if ( !v44 )
  {
    v65 = WdLogNewEntry5_WdAssertion(v42, 0LL);
    *(_QWORD *)(v65 + 24) = 3087LL;
    WdLogEvent5_WdAssertion(v65);
    v44 = *(ADAPTER_DISPLAY **)(v24 + 2696);
    v45 = 0LL;
  }
  LOBYTE(v42) = 0;
  if ( !v11 || v87[0] == D3DKMT_VIDPNSOURCEOWNER_UNOWNED && v11 == 1 && v86[0] < *((_DWORD *)v44 + 20) )
    LOBYTE(v42) = 1;
  if ( (_BYTE)v42 )
  {
    if ( !v11
      && (ADAPTER_DISPLAY::IsVidPnSourceOwner(v44, v21) || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(v44, v21))
      || v11 == 1
      && (ADAPTER_DISPLAY::IsVidPnSourceOwner((DXGADAPTER **)v44, v21, v86[0])
       || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner((DXGADAPTER **)v44, v21, v86[0])) )
    {
      MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v85, v21, 0xFFFFFFFF);
      if ( v11 )
      {
        ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(v44, v21, v86[0]);
        v54 = 1;
      }
      else
      {
        ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(v44, v21);
        v54 = *((_DWORD *)v21 + 465);
      }
      DXGDEVICE::RemoveVidPnOwnership(v21, v54);
      DXGDEVICE::SetSchedulingPriorityAdjustment(v21, 0);
    }
    v46 = v76;
    goto LABEL_59;
  }
  if ( g_OSTestSigningEnabled )
  {
    v45 = 2LL;
    if ( (*(_BYTE *)(*((_QWORD *)v21 + 5) + 348LL) & 2) != 0 )
    {
      v66 = v87[0];
      if ( v87[0] == D3DKMT_VIDPNSOURCEOWNER_SHARED )
        v66 = D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVE;
      v87[0] = v66;
    }
  }
  v46 = v76;
  if ( (*((unsigned int (__fastcall **)(__int64, __int64))v76[11] + 26))(v42, v45)
    && (v87[0] != D3DKMT_VIDPNSOURCEOWNER_SHARED && v87[0] != D3DKMT_VIDPNSOURCEOWNER_EMULATED
     || (*((unsigned int (__fastcall **)(_QWORD))v46[11] + 38))(0LL)) )
  {
    MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v85, 0LL, 0xFFFFFFFF);
    v43 = ADAPTER_DISPLAY::AcquireVidPnSourceOwner(v44, v21, v87, v86, v11, a2);
    if ( v43 < 0 )
      goto LABEL_59;
    if ( v87[0] == D3DKMT_VIDPNSOURCEOWNER_SHARED )
    {
      LODWORD(v47) = 3;
    }
    else
    {
      if ( v87[0] <= D3DKMT_VIDPNSOURCEOWNER_SHARED )
        goto LABEL_145;
      v47 = 3LL;
      if ( v87[0] <= D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVEGDI )
      {
        LODWORD(v47) = 7;
        goto LABEL_58;
      }
      if ( v87[0] != D3DKMT_VIDPNSOURCEOWNER_EMULATED )
      {
LABEL_145:
        v67 = WdLogNewEntry5_WdAssertion(v48, v47);
        *(_QWORD *)(v67 + 24) = 3171LL;
        WdLogEvent5_WdAssertion(v67);
        LODWORD(v47) = 0;
      }
    }
LABEL_58:
    DXGDEVICE::SetSchedulingPriorityAdjustment(v21, v47);
    *((_DWORD *)v21 + 465) += v11;
    goto LABEL_59;
  }
  v68 = WdLogNewEntry5_WdEvent();
  v43 = -1073741790;
  *(_QWORD *)(v68 + 24) = -1073741790LL;
  WdLogEvent5_WdEvent(v68);
LABEL_59:
  v71 = 0;
  v72[0] = 0;
  if ( v43 < 0 )
    goto LABEL_95;
  if ( v37 )
    ADAPTER_DISPLAY::EnsureGdiOutput(v44, v37, (struct COREDEVICEACCESS *)v84, &v71, v72, v74);
  v49 = 1;
  if ( !v71 )
LABEL_95:
    v49 = 0;
  MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v85, v49);
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)v84, v50);
  if ( v37 )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v79, v51);
    *((_BYTE *)v37 + 1905) = 0;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v77 + 2), v77);
    v21 = v78;
  }
  if ( v70 )
  {
    v70 = 0;
    DxgkReleaseSessionModeChangeLock();
  }
  if ( v43 >= 0 )
  {
    if ( v72[0] && v71 )
      (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)v21 + 5) + 88LL) + 192LL))();
    (*((void (**)(void))v46[11] + 43))();
    v83[0] = 1LL;
    v83[1] = 0LL;
    if ( (int)DxgkStatusChangeNotify(v83) < 0 )
    {
      v69 = WdLogNewEntry5_WdAssertion(v53, v52);
      *(_QWORD *)(v69 + 24) = 3285LL;
      WdLogEvent5_WdAssertion(v69);
    }
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v84);
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v70);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v85);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v80);
  if ( v75[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v75);
  if ( v73 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v73 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v73 + 2), v73);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v79);
  return (unsigned int)v43;
}
