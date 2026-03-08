/*
 * XREFs of ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0024834
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C001E2BC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0022E20 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C001DC20 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C001F7C4 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ldevLoadDriver @ 0x1C0024CA0 (ldevLoadDriver.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0025090 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00273B4 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C00274B0 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x1C0027AEC (-DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C0027D30 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     ldevUnloadImage @ 0x1C002B6B0 (ldevUnloadImage.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C003C110 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C00448F0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00466C0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0049800 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0049E20 (EtwTraceGreLockReleaseSemaphore.c)
 *     HmgShareLockCheck @ 0x1C0049E60 (HmgShareLockCheck.c)
 *     EngAcquireSemaphore @ 0x1C004B690 (EngAcquireSemaphore.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0062994 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1C006D990 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?hdev@SURFACE@@QEAAXPEAUHDEV__@@@Z @ 0x1C00A40A0 (-hdev@SURFACE@@QEAAXPEAUHDEV__@@@Z.c)
 *     ldevLoadInternal @ 0x1C00CD9B0 (ldevLoadInternal.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C00CE230 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00D7E30 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     memcmp @ 0x1C00E17D0 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     ?DevmodeEqualEx@@YAHPEBU_devicemodeW@@0@Z @ 0x1C018D614 (-DevmodeEqualEx@@YAHPEBU_devicemodeW@@0@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

HDEV __fastcall hCreateHDEV(
        struct tagGRAPHICS_DEVICE *a1,
        struct _DRV_NAMES *a2,
        struct _devicemodeW *a3,
        void *a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        int a8,
        unsigned int a9,
        HDEV *a10)
{
  struct tagGRAPHICS_DEVICE *v11; // r12
  __int64 v12; // rcx
  HDEV v13; // rbx
  BOOL v14; // r13d
  __int64 v15; // rsi
  HDEV v16; // rdi
  const struct _devicemodeW *v17; // r14
  struct tagGRAPHICS_DEVICE *v18; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v19; // rbx
  int v20; // eax
  __int64 Pool2; // rdi
  struct _DRV_NAMES *v22; // rcx
  unsigned int v23; // r15d
  char *v24; // rbx
  struct _LDEV *Driver; // rax
  struct _LDEV *v26; // r12
  struct tagGRAPHICS_DEVICE *v27; // r12
  __int64 v28; // rdx
  HDEV v29; // rax
  __int64 v30; // rax
  struct BRUSH *v31; // rbx
  bool v32; // zf
  void *v33; // rcx
  unsigned __int16 *v34; // rdx
  unsigned int v35; // ecx
  void *v36; // rax
  void *v37; // rcx
  void *v38; // rcx
  HDEV v40; // r15
  HDEV v41; // r12
  const struct _devicemodeW *v42; // rdx
  int v43; // ecx
  int v44; // eax
  struct _ERESOURCE *v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  struct _MDEV *v48; // rcx
  struct _ERESOURCE *v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  struct _ERESOURCE *v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  struct _ERESOURCE *v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  struct _ERESOURCE *v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  struct _ERESOURCE *v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rcx
  struct _ERESOURCE *v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  struct _ERESOURCE *v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rcx
  HSEMAPHORE v70; // rcx
  struct _ERESOURCE *v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rcx
  _QWORD *v74; // rax
  __int64 v75; // r10
  HDEV v76; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v77; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v78; // [rsp+80h] [rbp-80h] BYREF
  __int64 v79; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v80[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v81; // [rsp+A0h] [rbp-60h] BYREF
  PVOID BackTrace[28]; // [rsp+B0h] [rbp-50h] BYREF
  struct tagGRAPHICS_DEVICE *v83; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _DRV_NAMES *v84; // [rsp+1A8h] [rbp+A8h]
  void *Src; // [rsp+1B0h] [rbp+B0h]
  void *v86; // [rsp+1B8h] [rbp+B8h]

  v86 = a4;
  Src = a3;
  v84 = a2;
  v83 = a1;
  v11 = a1;
  WdLogSingleEntry5(4LL, a1, a4, a5, a6, a9);
  v13 = 0LL;
  v14 = 0;
  v15 = *(_QWORD *)(SGDGetSessionState(v12) + 24);
  *a10 = 0LL;
  if ( v11 == (struct tagGRAPHICS_DEVICE *)-4LL )
    goto LABEL_11;
  if ( !a3 )
  {
    WdLogSingleEntry0(5LL);
    return 0LL;
  }
  v16 = (HDEV)hdevEnumerate<1>(0LL);
  if ( !v16 )
    goto LABEL_10;
  v17 = (const struct _devicemodeW *)Src;
  do
  {
    v18 = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)v16 + 319);
    v76 = v16;
    if ( (((unsigned __int64)v18 + 4) & 0xFFFFFFFFFFFFFFFBuLL) == 0 || v11 != v18 )
      goto LABEL_7;
    EngAcquireSemaphore(*(HSEMAPHORE *)(v15 + 80));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDynamicModeChange", *(_QWORD *)(v15 + 80), 1LL);
    EngAcquireSemaphore(*((HSEMAPHORE *)v16 + 6));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *((_QWORD *)v16 + 6), 11LL);
    v40 = 0LL;
    v41 = 0LL;
    if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v76) )
      v43 = DevmodeEqualEx(v17, v42);
    else
      v43 = memcmp(v17, v42, 0xDCuLL) == 0;
    v44 = *((_DWORD *)v16 + 10);
    if ( (v44 & 0x80000) != 0
      || *((void **)v16 + 318) != v86
      || *((_DWORD *)v16 + 646) != a5
      || *((_DWORD *)v16 + 647) != a6
      || !v43
      || a8 )
    {
      if ( a7 == 1 )
        v14 = 1;
      else
        v40 = v16;
      goto LABEL_55;
    }
    if ( !v13 )
      goto LABEL_50;
    if ( (v44 & 0x400) == 0 )
    {
      v40 = v13;
LABEL_50:
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v76);
      v13 = v16;
    }
    v41 = v40;
LABEL_55:
    EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", *((_QWORD *)v16 + 6));
    v45 = (struct _ERESOURCE *)*((_QWORD *)v16 + 6);
    if ( v45 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v45);
      PsLeavePriorityRegion(v47, v46);
    }
    if ( v40 )
    {
      if ( *(_DWORD *)(v15 + 1236) )
      {
        v48 = *(struct _MDEV **)(v15 + 1240);
        *(_DWORD *)(v15 + 1236) = 0;
        v14 = DrvDisableMDEVChildren(v48, 0, 0) == 0;
      }
      EngAcquireSemaphore(*((HSEMAPHORE *)v40 + 6));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"poDisable.hsemDevLock()", *((_QWORD *)v40 + 6), 11LL);
      if ( ((_DWORD)v40[10] & 0x400) == 0 )
      {
        if ( (unsigned int)DrvDisableDisplay((HSEMAPHORE *)v40, 0) )
          *a10 = v40;
        else
          v14 = 1;
      }
      EtwTraceGreLockReleaseSemaphore(L"poDisable.hsemDevLock()", *((_QWORD *)v40 + 6));
      v49 = (struct _ERESOURCE *)*((_QWORD *)v40 + 6);
      if ( v49 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v49);
        PsLeavePriorityRegion(v51, v50);
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange", *(_QWORD *)(v15 + 80));
    v52 = *(struct _ERESOURCE **)(v15 + 80);
    if ( v52 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v52);
      PsLeavePriorityRegion(v54, v53);
    }
    if ( v41 )
    {
      v80[0] = v41;
      PDEVOBJ::vUnreferencePdev((PDEVOBJ *)v80);
    }
    v11 = v83;
LABEL_7:
    v16 = (HDEV)hdevEnumerate<1>(v16);
  }
  while ( v16 );
  if ( v14 )
  {
    if ( v13 )
    {
      v83 = (struct tagGRAPHICS_DEVICE *)v13;
      PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v83);
    }
    goto LABEL_105;
  }
  if ( v13 )
  {
    EngAcquireSemaphore(*(HSEMAPHORE *)(v15 + 8));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v15 + 8), 16LL);
    *((_QWORD *)v13 + 4) = 0LL;
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v15 + 8));
    v55 = *(struct _ERESOURCE **)(v15 + 8);
    if ( v55 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v55);
      PsLeavePriorityRegion(v57, v56);
    }
    EngAcquireSemaphore(*(HSEMAPHORE *)(v15 + 80));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDynamicModeChange", *(_QWORD *)(v15 + 80), 1LL);
    EngAcquireSemaphore(*((HSEMAPHORE *)v13 + 6));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *((_QWORD *)v13 + 6), 11LL);
    EngAcquireSemaphore(*(HSEMAPHORE *)(v15 + 8));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v15 + 8), 16LL);
    ++*((_DWORD *)v13 + 3);
    if ( ((_DWORD)v13[10] & 0x400) != 0 )
    {
      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v15 + 8));
      v58 = *(struct _ERESOURCE **)(v15 + 8);
      if ( v58 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v58);
        PsLeavePriorityRegion(v60, v59);
      }
      DrvEnableDisplay(v13);
      EngAcquireSemaphore(*(HSEMAPHORE *)(v15 + 8));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v15 + 8), 16LL);
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v15 + 8));
    v61 = *(struct _ERESOURCE **)(v15 + 8);
    if ( v61 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v61);
      PsLeavePriorityRegion(v63, v62);
    }
    EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", *((_QWORD *)v13 + 6));
    v64 = (struct _ERESOURCE *)*((_QWORD *)v13 + 6);
    if ( v64 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v64);
      PsLeavePriorityRegion(v66, v65);
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange", *(_QWORD *)(v15 + 80));
    v67 = *(struct _ERESOURCE **)(v15 + 80);
    if ( v67 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v67);
      PsLeavePriorityRegion(v69, v68);
    }
    WdLogSingleEntry1(5LL, v13);
    return v13;
  }
LABEL_10:
  if ( *(_DWORD *)(v15 + 1236) )
  {
    v70 = *(HSEMAPHORE *)(v15 + 80);
    *(_DWORD *)(v15 + 1236) = 0;
    EngAcquireSemaphore(v70);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDynamicModeChange", *(_QWORD *)(v15 + 80), 1LL);
    v14 = DrvDisableMDEVChildren(*(struct _MDEV **)(v15 + 1240), 0, 0) == 0;
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange", *(_QWORD *)(v15 + 80));
    v71 = *(struct _ERESOURCE **)(v15 + 80);
    if ( v71 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v71);
      PsLeavePriorityRegion(v73, v72);
    }
    if ( v14 )
      goto LABEL_103;
  }
LABEL_11:
  v19 = gpLeakTrackingAllocator;
  v77 = 1886221383;
  v79 = 260LL;
  v81 = 2184LL;
  v20 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    Pool2 = ExAllocatePool2(260LL, 2184LL, 1886221383LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v19 + 14);
    goto LABEL_14;
  }
  if ( v20 == 1 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x706D7447u) )
      goto LABEL_103;
    v74 = (_QWORD *)ExAllocatePool2(v79 & 0xFFFFFFFFFFFFFFFDuLL, 2200LL, v77);
    Pool2 = (__int64)v74;
    if ( !v74
      || (_InterlockedIncrement64((volatile signed __int64 *)v19 + 14),
          *v74 = 1886221383LL,
          Pool2 = (__int64)(v74 + 2),
          v74 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v19 + 1),
        (const void *)0x706D7447);
    }
    goto LABEL_14;
  }
  if ( v20 != 2 )
    goto LABEL_103;
  v78 = 0LL;
  if ( NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x706D7447u, &v78) )
  {
    Pool2 = ExAllocatePool2(v75, 2200LL, 1886221383LL);
    if ( !Pool2 )
      goto LABEL_103;
    _InterlockedIncrement64((volatile signed __int64 *)v19 + 16);
    NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v19,
                              Pool2,
                              v78,
                              BackTrace) )
      {
        Pool2 += 16LL;
        goto LABEL_14;
      }
    }
    else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                 v19,
                                 Pool2,
                                 v78,
                                 BackTrace) )
    {
      goto LABEL_15;
    }
    _InterlockedIncrement64((volatile signed __int64 *)v19 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    goto LABEL_103;
  }
  v80[0] = &v79;
  v80[1] = &v77;
  Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
            v19,
            v80,
            &v81);
LABEL_14:
  if ( !Pool2 )
    goto LABEL_103;
LABEL_15:
  v22 = v84;
  v23 = 0;
  if ( !*(_DWORD *)v84 )
    goto LABEL_121;
  while ( 2 )
  {
    if ( a9 == 1 )
    {
LABEL_17:
      v24 = (char *)v22 + 16 * v23;
      Driver = (struct _LDEV *)ldevLoadDriver(*((PCWSTR *)v24 + 2));
      goto LABEL_18;
    }
    if ( a9 != 2 )
    {
      if ( a9 == 4 )
        goto LABEL_17;
      goto LABEL_113;
    }
    v24 = (char *)v22 + 16 * v23;
    Driver = (struct _LDEV *)ldevLoadInternal(*((_QWORD *)v24 + 2), 3LL);
LABEL_18:
    v26 = Driver;
    if ( !Driver )
    {
LABEL_113:
      WdLogSingleEntry0(5LL);
      goto LABEL_116;
    }
    PDEVOBJ::PDEVOBJ(
      (PDEVOBJ *)&v76,
      Driver,
      (struct _devicemodeW *)Src,
      0LL,
      0LL,
      *((unsigned __int16 **)v24 + 2),
      *((void **)v24 + 1),
      0LL,
      0LL,
      0LL,
      0,
      a5,
      a6);
    if ( !v76 )
    {
      WdLogSingleEntry0(5LL);
      ldevUnloadImage(v26);
LABEL_116:
      v22 = v84;
      if ( ++v23 >= *(_DWORD *)v84 )
        goto LABEL_121;
      continue;
    }
    break;
  }
  v27 = v83;
  *((_QWORD *)v76 + 319) = v83;
  if ( !(unsigned int)PDEVOBJ::bMakeSurface((PDEVOBJ *)&v76, 0LL) )
  {
    PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v76);
    goto LABEL_116;
  }
  v29 = v76;
  LOBYTE(v28) = 16;
  *((_QWORD *)v76 + 196) = 0LL;
  *((_QWORD *)v29 + 193) = 0LL;
  *((_DWORD *)v29 + 388) = 0;
  v30 = HmgShareLockCheck(*(_QWORD *)(v15 + 224), v28);
  *(_QWORD *)(Pool2 + 976) = Pool2 + 544;
  v31 = (struct BRUSH *)v30;
  *(_DWORD *)(Pool2 + 728) = 0;
  *(_DWORD *)(*(_QWORD *)(Pool2 + 976) + 176LL) = 0xFFFFFF;
  *(_DWORD *)(Pool2 + 120) = 0;
  *(_QWORD *)(*(_QWORD *)(Pool2 + 976) + 248LL) = 0LL;
  EBRUSHOBJ::vInitBrush(
    v76 + 384,
    Pool2,
    v30,
    *(_QWORD *)(v15 + 6000),
    *(_QWORD *)(*((_QWORD *)v76 + 316) + 128LL),
    *((_QWORD *)v76 + 316),
    1);
  DEC_SHARE_REF_CNT_LAZY0(v31);
  if ( !WPP_MAIN_CB.Queue.ListEntry.Blink[3].Flink )
    SURFACE::hdev((SURFACE *)WPP_MAIN_CB.Queue.ListEntry.Blink, v76);
  v32 = a9 == 2;
  v33 = v86;
  *((_QWORD *)v76 + 319) = v27;
  *((_QWORD *)v76 + 318) = v33;
  if ( !v32 )
  {
    v34 = (unsigned __int16 *)Src;
    v35 = *((unsigned __int16 *)Src + 34) + *((unsigned __int16 *)Src + 35);
    if ( v35 )
    {
      v36 = NSInstrumentation::CLeakTrackingAllocator::Allocate(gpLeakTrackingAllocator, 0x104uLL, v35, 0x76656447u);
      v34 = (unsigned __int16 *)Src;
      v37 = v36;
    }
    else
    {
      v37 = 0LL;
    }
    *((_QWORD *)v76 + 321) = v37;
    v38 = (void *)*((_QWORD *)v76 + 321);
    if ( v38 )
    {
      memmove(v38, v34, v34[35] + (unsigned __int64)v34[34]);
      *(_DWORD *)(*((_QWORD *)v76 + 321) + 72LL) |= 0x20u;
      DrvUpdateAttachFlag(v27, 1u);
    }
    else
    {
      v14 = 1;
    }
  }
  PDEVOBJ::bDisabled((PDEVOBJ *)&v76, 0);
  if ( ((_DWORD)v76[10] & 0x20000) == 0 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v76 + 319) + 160LL) & 0x800000) != 0 )
    {
      *((_DWORD *)v76 + 11) |= 4u;
    }
    else if ( qword_1C02D5920 && (int)qword_1C02D5920() >= 0 && qword_1C02D5928 )
    {
      qword_1C02D5928(&v76);
    }
  }
  if ( !v14 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)Pool2);
    WdLogSingleEntry1(5LL, v76);
    return v76;
  }
  PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v76);
LABEL_121:
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)Pool2);
LABEL_103:
  if ( *a10 )
    DrvEnableDisplay(*a10);
LABEL_105:
  WdLogSingleEntry0(5LL);
  return 0LL;
}
