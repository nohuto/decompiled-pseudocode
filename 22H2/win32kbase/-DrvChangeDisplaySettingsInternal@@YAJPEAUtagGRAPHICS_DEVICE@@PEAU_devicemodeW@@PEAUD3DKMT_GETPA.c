/*
 * XREFs of ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C001B5AC
 * Callers:
 *     ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x1C0016214 (-DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z.c)
 *     ApplyPathsModality @ 0x1C001851C (ApplyPathsModality.c)
 *     DrvChangeDisplaySettings @ 0x1C016570C (DrvChangeDisplaySettings.c)
 * Callees:
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C00179AC (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00182FC (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x1C0018E08 (-vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C0018F50 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     GreUpdateSharedDevCaps @ 0x1C00197AC (GreUpdateSharedDevCaps.c)
 *     IsGreHideSpritesSupported @ 0x1C0019A34 (IsGreHideSpritesSupported.c)
 *     ?DrvAcquireChangeDisplaySettingLocks@@YAXXZ @ 0x1C0019A60 (-DrvAcquireChangeDisplaySettingLocks@@YAXXZ.c)
 *     ?DrvReleaseChangeDisplaySettingLocks@@YAXXZ @ 0x1C0019B08 (-DrvReleaseChangeDisplaySettingLocks@@YAXXZ.c)
 *     DrvDisableMDEV @ 0x1C001A570 (DrvDisableMDEV.c)
 *     DrvEnableMDEV @ 0x1C001A7D8 (DrvEnableMDEV.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C001AA80 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z @ 0x1C001AEB0 (-DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z.c)
 *     ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x1C001AF6C (-DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z.c)
 *     ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x1C001C0E8 (--_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C001C144 (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C001C26C (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C001C3F8 (DrvUpdateDisplayDriverParameters.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C001CAB4 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C001F9B8 (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C001FC24 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00245E8 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0029EC8 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     bDynamicProcessAllDriverRealizations @ 0x1C0035B30 (bDynamicProcessAllDriverRealizations.c)
 *     ?hdev@SURFACE@@QEAAXPEAUHDEV__@@@Z @ 0x1C0040210 (-hdev@SURFACE@@QEAAXPEAUHDEV__@@@Z.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0041CF0 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00427F0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0042870 (GreAcquireHmgrSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00428F0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0042EC0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0044400 (EngAcquireSemaphore.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     DrvDestroyMDEV @ 0x1C00A09A8 (DrvDestroyMDEV.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00BD990 (GreIncrementDisplaySettingsUniqueness.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00C6D84 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     bDynamicModeChange @ 0x1C00C75B0 (bDynamicModeChange.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00DF278 (McTemplateK0_EtwWriteTransfer.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C0160B38 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C0160E9C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z @ 0x1C0161D00 (-DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z.c)
 *     ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1C0161D84 (-DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C0161E64 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0161F78 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     DrvLogDrvChangeDisplaySettingsFailures @ 0x1C01676F4 (DrvLogDrvChangeDisplaySettingsFailures.c)
 *     IsDrvRealizeHalftonePaletteSupported @ 0x1C0232694 (IsDrvRealizeHalftonePaletteSupported.c)
 */

__int64 __fastcall DrvChangeDisplaySettingsInternal(
        WCHAR *a1,
        struct _devicemodeW *a2,
        struct D3DKMT_GETPATHSMODALITY *a3,
        HSEMAPHORE a4,
        int a5,
        int a6,
        struct _MDEV *a7,
        void **a8,
        unsigned int a9,
        int a10,
        int a11,
        int a12,
        char a13)
{
  unsigned int v13; // r12d
  int v14; // r15d
  WCHAR *v15; // rbx
  struct _devicemodeW *Src; // rdi
  int v17; // r14d
  __int64 v18; // rcx
  __int64 v19; // rsi
  struct _MDEV *MDEV; // rdi
  __int64 v21; // rcx
  HDEV CloneHDEV; // rbx
  MULTIDEVLOCKOBJ *v23; // rax
  NSInstrumentation::CLeakTrackingAllocator *v24; // rcx
  MULTIDEVLOCKOBJ *v25; // rax
  unsigned int v26; // edx
  struct _ERESOURCE *v27; // rcx
  unsigned int v28; // esi
  HSEMAPHORE v29; // rax
  unsigned int v30; // edx
  unsigned int v31; // ecx
  unsigned int v32; // eax
  HDEV v33; // r9
  __int64 v34; // r8
  HDEV v35; // rdx
  HDEV v36; // rcx
  int v37; // eax
  HDEV v38; // rdx
  struct _ERESOURCE *v39; // rcx
  struct _ERESOURCE *v40; // rcx
  struct _ERESOURCE *v41; // rcx
  struct _ERESOURCE *v42; // rcx
  unsigned int v43; // r8d
  int v44; // ebx
  struct _MDEV *v45; // rcx
  struct _ERESOURCE *v46; // rbx
  __int64 v47; // rbx
  struct _ERESOURCE *v48; // rbx
  struct _ERESOURCE *v49; // rcx
  struct _ERESOURCE *v50; // rcx
  HDEV *v51; // rbx
  unsigned int k; // edx
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 m; // rax
  unsigned int n; // r9d
  __int64 v57; // r8
  __int64 v58; // rax
  __int64 v59; // rdx
  int v60; // ecx
  int v61; // r10d
  unsigned int i; // ebx
  unsigned int v63; // r8d
  unsigned int v64; // edx
  __int64 j; // r9
  MULTIDEVLOCKOBJ *v66; // rax
  void **v67; // rbx
  __int64 v68; // rcx
  struct _UNICODE_STRING *v70; // r15
  int v71; // eax
  __int64 v72; // rcx
  int v73; // eax
  int v74; // ebx
  struct _MDEV *v75; // rax
  unsigned int v76; // r11d
  unsigned int v77; // r10d
  signed __int64 v78; // r8
  __int64 v79; // rdx
  __int64 v80; // rcx
  int v81; // ebx
  __int64 v82; // r8
  DWORD dmFields; // r15d
  __int64 dmDisplayOrientation; // rbx
  __int64 dmBitsPerPel; // rdi
  DWORD dmPelsHeight; // esi
  DWORD dmPelsWidth; // r14d
  __int64 CurrentProcess; // rax
  int v89; // eax
  int updated; // eax
  __int64 v91; // rcx
  __int64 v92; // r9
  __int64 v93; // rdx
  __int64 v94; // rcx
  unsigned int v95; // edx
  HDEV v96; // r8
  PERESOURCE v97; // rax
  unsigned int v98; // ecx
  HDEV v99; // r8
  HDEV v100; // rax
  PERESOURCE v101; // rcx
  int v102; // r10d
  int v103; // r11d
  bool v104; // zf
  __int64 v105; // rcx
  unsigned int v106; // esi
  __int64 v107; // r10
  void *v108; // r9
  HDEV v109; // rax
  HDEV v110; // rdx
  __int64 v111; // rdx
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // rcx
  __int64 v115; // rcx
  struct _ERESOURCE *v116; // rcx
  struct _ERESOURCE *v117; // rcx
  struct _ERESOURCE *v118; // rcx
  struct _ERESOURCE *v119; // rcx
  struct _ERESOURCE *v120; // rcx
  SURFACE *v121; // rcx
  signed __int32 v122; // ett
  signed __int32 v123; // ett
  HDEV v124; // rax
  HDEV v125; // r15
  unsigned int v126; // edx
  bool v127; // cc
  HDEV v128; // rdx
  unsigned int v129; // [rsp+50h] [rbp-B0h]
  __int16 v130; // [rsp+50h] [rbp-B0h]
  int PruneFlag; // [rsp+54h] [rbp-ACh]
  int v132; // [rsp+54h] [rbp-ACh]
  int v133; // [rsp+58h] [rbp-A8h]
  int v134; // [rsp+58h] [rbp-A8h]
  unsigned int v135; // [rsp+60h] [rbp-A0h]
  HDEV v136; // [rsp+68h] [rbp-98h]
  struct _ERESOURCE *v138; // [rsp+70h] [rbp-90h]
  PERESOURCE v139; // [rsp+78h] [rbp-88h] BYREF
  HSEMAPHORE hsem; // [rsp+80h] [rbp-80h]
  PERESOURCE Resource; // [rsp+88h] [rbp-78h]
  PERESOURCE v142; // [rsp+90h] [rbp-70h]
  MULTIDEVLOCKOBJ *v143; // [rsp+98h] [rbp-68h]
  void **v144; // [rsp+A0h] [rbp-60h]
  struct _devicemodeW *v145; // [rsp+A8h] [rbp-58h]
  __int64 v146; // [rsp+B0h] [rbp-50h] BYREF
  int v147; // [rsp+B8h] [rbp-48h]
  MULTIDEVLOCKOBJ *v148; // [rsp+C0h] [rbp-40h]
  struct _devicemodeW *v149; // [rsp+C8h] [rbp-38h] BYREF
  int v150; // [rsp+D0h] [rbp-30h] BYREF
  HDEV v151; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v152; // [rsp+E0h] [rbp-20h]
  void *v153; // [rsp+E8h] [rbp-18h]
  HDEV v154; // [rsp+F0h] [rbp-10h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v156[3]; // [rsp+108h] [rbp+8h] BYREF
  HDEV v157[2]; // [rsp+120h] [rbp+20h] BYREF
  __int128 v158; // [rsp+130h] [rbp+30h]
  __int128 v159; // [rsp+140h] [rbp+40h]
  __int64 v160; // [rsp+150h] [rbp+50h]

  v13 = 0;
  v14 = a10;
  v15 = a1;
  v153 = a1;
  Src = a2;
  v17 = 0;
  v144 = a8;
  hsem = a4;
  PruneFlag = a9 != 0;
  v145 = a2;
  v133 = a10;
  DestinationString = 0LL;
  Resource = 0LL;
  v149 = 0LL;
  v150 = 0;
  v143 = 0LL;
  v148 = 0LL;
  v19 = *(_QWORD *)(SGDGetSessionState(a9 != 0) + 24);
  v152 = v19;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    McTemplateK0_EtwWriteTransfer(v18, &DrvChangeDisplaySettingsStart, 0LL);
  WdLogSingleEntry5(4LL, v15, a6, a5, a9, a10);
  if ( Src )
  {
    if ( !v15 )
      WdLogSingleEntry0(1LL);
    if ( a3 )
      WdLogSingleEntry0(1LL);
  }
  *v144 = 0LL;
  *(_DWORD *)(v19 + 1236) = 0;
  *(_QWORD *)(v19 + 1240) = 0LL;
  if ( v15 )
  {
    if ( a9 == -1 )
      PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)v15);
    RtlInitUnicodeString(&DestinationString, v15 + 32);
    Resource = (PERESOURCE)&DestinationString;
    if ( Src )
    {
      v81 = DrvProbeAndCaptureDevmode(
              (struct tagGRAPHICS_DEVICE *)v15,
              &v149,
              &v150,
              0LL,
              Src,
              0,
              PruneFlag,
              a10,
              a12,
              0LL);
      if ( v81 < 0 )
      {
        if ( v149 )
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v149);
        WdLogSingleEntry0(5LL);
        v17 = -2;
        goto LABEL_165;
      }
      dmFields = Src->dmFields;
      dmDisplayOrientation = Src->dmDisplayOrientation;
      dmBitsPerPel = Src->dmBitsPerPel;
      dmPelsHeight = v145->dmPelsHeight;
      dmPelsWidth = v145->dmPelsWidth;
      CurrentProcess = PsGetCurrentProcess(v80, v79, v82);
      WdLogSingleEntry5(4LL, CurrentProcess, dmPelsWidth, dmPelsHeight, dmBitsPerPel, dmDisplayOrientation);
      v19 = v152;
      Src = v145;
      v89 = 1;
      if ( dmFields )
        v89 = a10;
      v17 = 0;
      v15 = (WCHAR *)v153;
      v14 = v89;
    }
    else
    {
      v14 = 1;
    }
    v133 = v14;
  }
  if ( a5 && v15 && Src && gProtocolType != -1 )
  {
    updated = DrvUpdateDisplayDriverParameters((struct tagGRAPHICS_DEVICE *)v15, v149, v150);
    if ( updated < 0 )
    {
      v17 = -2;
      if ( updated == -1073741582 )
        v17 = -5;
    }
    DrvLogDrvChangeDisplaySettingsFailures(1LL, (unsigned int)updated);
  }
  if ( !a6 || v17 )
    goto LABEL_106;
  DrvAcquireChangeDisplaySettingLocks();
  v17 = -1;
  MDEV = 0LL;
  if ( !a7 )
  {
    CheckAndNotifyDualView(Resource, 0LL);
    MDEV = DrvCreateMDEV((struct _UNICODE_STRING *)Resource, v149, hsem, a11 != 0 ? 4 : 0, 0LL, a9, v14, a12, a3);
    if ( MDEV )
    {
      v17 = 0;
      goto LABEL_11;
    }
    v94 = 3LL;
    goto LABEL_177;
  }
  v70 = (struct _UNICODE_STRING *)Resource;
  v71 = CheckAndNotifyDualView(Resource, a7);
  if ( !v71 )
  {
    v74 = v133;
    goto LABEL_120;
  }
  v73 = v71 - 1;
  if ( v73 )
  {
    if ( v73 == 1 )
    {
      v74 = 1;
      *(_QWORD *)(v19 + 1240) = a7;
      *(_DWORD *)(v19 + 1236) = 1;
      goto LABEL_120;
    }
    DrvReleaseChangeDisplaySettingLocks(v72);
    if ( v149 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v149);
    WdLogSingleEntry0(5LL);
    v17 = -6;
    v81 = -1073741823;
    v13 = 2;
LABEL_165:
    DrvLogDrvChangeDisplaySettingsFailures(v13, (unsigned int)v81);
    goto LABEL_114;
  }
  v74 = 1;
LABEL_120:
  if ( (a13 & 1) != 0 && (unsigned int)DrvUpdateDisplayModeInMdev(a7, a3) )
  {
    v67 = v144;
    *v144 = a7;
    DrvReleaseChangeDisplaySettingLocks(v91);
    v17 = 3;
    WdLogSingleEntry0(4LL);
    goto LABEL_107;
  }
  if ( !(unsigned int)DrvDisableMDEV(a7, 0, 0) )
  {
    v94 = 4LL;
LABEL_177:
    DrvLogDrvChangeDisplaySettingsFailures(v94, 3221225473LL);
    goto LABEL_11;
  }
  v130 = *(_WORD *)(v19 + 1248);
  v75 = DrvCreateMDEV(v70, v149, hsem, a11 != 0 ? 4 : 0, a7, a9, v74, a12, a3);
  MDEV = v75;
  if ( v75 )
  {
    v76 = *((_DWORD *)v75 + 5);
    v17 = 2;
    if ( v76 == *((_DWORD *)a7 + 5) && v130 == *(_WORD *)(v19 + 1248) )
    {
      v77 = 0;
      if ( v76 )
      {
        v21 = (__int64)v75 + 40;
        v78 = a7 - v75;
        do
        {
          if ( *(_QWORD *)v21 != *(_QWORD *)(v78 + v21) || *(_DWORD *)(v21 + 32) != *(_DWORD *)(v78 + v21 + 32) )
            goto LABEL_128;
          v92 = 56LL * v77;
          v93 = *(_QWORD *)((char *)v75 + v92 + 56) - *(_QWORD *)((char *)a7 + v92 + 56);
          if ( !v93 )
            v93 = *(_QWORD *)((char *)v75 + v92 + 64) - *(_QWORD *)((char *)a7 + v92 + 64);
          if ( v93 )
LABEL_128:
            v17 = 0;
          ++v77;
          v21 += 56LL;
        }
        while ( v77 < v76 );
      }
    }
    else
    {
      v17 = 0;
    }
  }
  else
  {
    DrvLogDrvChangeDisplaySettingsFailures(3LL, 3221225473LL);
    DrvEnableMDEV((__int64 *)a7, 0, 0);
  }
LABEL_11:
  CloneHDEV = 0LL;
  v129 = 0;
  v136 = 0LL;
  v134 = 0;
  *v144 = MDEV;
  v132 = 0;
  if ( v17 )
  {
    if ( v17 == 2 )
    {
      v127 = *((_DWORD *)MDEV + 5) <= 1u;
      *(_QWORD *)MDEV = *(_QWORD *)a7;
      *((_QWORD *)MDEV + 1) = *((_QWORD *)a7 + 1);
      if ( !v127 )
      {
        EngAcquireSemaphore(*(HSEMAPHORE *)(v19 + 8));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v19 + 8), 16LL);
        v128 = *(HDEV *)MDEV;
        ++*((_DWORD *)v128 + 3);
        ++*((_DWORD *)v128 + 2);
        TrackObjectReferenceIncrement(1LL, *((_QWORD *)v128 + 440));
        EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v19 + 8));
        v21 = *(_QWORD *)(v19 + 8);
        if ( v21 )
        {
          ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)v21);
          PsLeavePriorityRegion();
        }
      }
    }
LABEL_91:
    if ( a7 && (v17 & 0xFFFFFFFD) == 0 )
    {
      DrvEnableMDEV((__int64 *)MDEV, 0, 0);
      if ( !v17 )
      {
        for ( i = 0; i < *((_DWORD *)a7 + 5); ++i )
        {
          v63 = *((_DWORD *)MDEV + 5);
          v64 = 0;
          for ( j = *((_QWORD *)a7 + 7 * i + 5); v64 < v63; ++v64 )
          {
            if ( *(_QWORD *)(j + 2552) == *(_QWORD *)(*((_QWORD *)MDEV + 7 * v64 + 5) + 2552LL) )
              break;
          }
          if ( v64 == v63 )
            DrvDisableDisplay((HSEMAPHORE *)j, 1);
        }
      }
      DrvDestroyMDEV(a7);
    }
    DrvReleaseChangeDisplaySettingLocks(v21);
    if ( v148 )
      MULTIDEVLOCKOBJ::`scalar deleting destructor'(v148, v26);
    v66 = v143;
    if ( !v143 )
      goto LABEL_106;
    goto LABEL_105;
  }
  v153 = 0LL;
  v142 = 0LL;
  v160 = 0LL;
  Resource = 0LL;
  *(_OWORD *)v157 = 0LL;
  v138 = 0LL;
  v158 = 0LL;
  v159 = 0LL;
  v23 = (MULTIDEVLOCKOBJ *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                             gpLeakTrackingAllocator,
                             0x104uLL,
                             0x68uLL,
                             0x6C6D6847u);
  v143 = v23;
  if ( v23 )
  {
    v24 = gpLeakTrackingAllocator;
    *(_QWORD *)v23 = 1LL;
    *((_QWORD *)v23 + 1) = 0LL;
    *((_QWORD *)v23 + 2) = 0LL;
    v25 = (MULTIDEVLOCKOBJ *)NSInstrumentation::CLeakTrackingAllocator::Allocate(v24, 0x104uLL, 0x68uLL, 0x6C6D6847u);
    v148 = v25;
    if ( !v25 )
    {
      v66 = v143;
LABEL_105:
      MULTIDEVLOCKOBJ::`scalar deleting destructor'(v66, v26);
      goto LABEL_106;
    }
    *(_QWORD *)v25 = 1LL;
    *((_QWORD *)v25 + 1) = 0LL;
    *((_QWORD *)v25 + 2) = 0LL;
    if ( *((_DWORD *)MDEV + 5) )
    {
      v148 = v25;
      v28 = 0;
      do
        DrvUpdatePDevForWDDMDevice(*((_QWORD *)MDEV + 7 * v28++ + 5));
      while ( v28 < *((_DWORD *)MDEV + 5) );
      v19 = v152;
    }
    if ( !a7 )
    {
      v43 = 0;
      goto LABEL_47;
    }
    v153 = DrvDisableDirectDrawForModeChange(a7, MDEV, v157);
    if ( !v153 )
    {
      DrvLogDrvChangeDisplaySettingsFailures(5LL, 3221225473LL);
      v129 = 1;
      goto LABEL_52;
    }
    MULTIDEVLOCKOBJ::vInit(v148, a7);
    MULTIDEVLOCKOBJ::vInit(v143, MDEV);
    if ( (*(_DWORD *)v143 & 1) == 0 || (*(_DWORD *)v148 & 1) == 0 )
    {
      DrvLogDrvChangeDisplaySettingsFailures(8LL, 3221225473LL);
      v44 = 1;
      v129 = 1;
      goto LABEL_53;
    }
    v29 = *(HSEMAPHORE *)(*(_QWORD *)a7 + 56LL);
    hsem = *(HSEMAPHORE *)(*(_QWORD *)a7 + 48LL);
    v145 = (struct _devicemodeW *)v29;
    EngAcquireSemaphore(v29);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemOrgMdevPointer", v145, 4LL);
    EngAcquireSemaphore(*(HSEMAPHORE *)(v19 + 112));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemSprite", *(_QWORD *)(v19 + 112), 5LL);
    EngAcquireSemaphore(*(HSEMAPHORE *)(v19 + 136));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemHT", *(_QWORD *)(v19 + 136), 6LL);
    EngAcquireSemaphore(hsem);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemOrgMdevDevLock", hsem, 11LL);
    MULTIDEVLOCKOBJ::vLock(v148);
    MULTIDEVLOCKOBJ::vLock(v143);
    if ( (int)IsGreHideSpritesSupported() >= 0 && qword_1C0294818 )
      qword_1C0294818(*(_QWORD *)a7, 1LL);
    v30 = *((_DWORD *)MDEV + 5);
    v31 = *((_DWORD *)a7 + 5);
    if ( v30 == 1 )
    {
      if ( v31 == 1 )
        goto LABEL_27;
      v95 = 0;
      if ( !v31 )
        goto LABEL_27;
      v96 = (HDEV)*((_QWORD *)MDEV + 5);
      while ( 1 )
      {
        v139 = (PERESOURCE)(56LL * v95);
        if ( *(HDEV *)((char *)a7 + (_QWORD)v139 + 40) == v96 )
          break;
        if ( ++v95 >= v31 )
          goto LABEL_27;
      }
      CloneHDEV = DrvCreateCloneHDEV(v96, v95);
      if ( !CloneHDEV )
      {
        DrvLogDrvChangeDisplaySettingsFailures(6LL, 3221225473LL);
        v32 = 1;
        v129 = 1;
LABEL_135:
        if ( v32 )
        {
LABEL_28:
          v33 = v136;
          v34 = v32;
          v35 = (HDEV)v142;
          Resource = (PERESOURCE)hsem;
          v138 = (struct _ERESOURCE *)v145;
          v19 = v152;
          v151 = (HDEV)v142;
          v147 = v132;
          v135 = v134;
          v146 = (__int64)v136;
          v129 = v32;
          if ( v136 )
          {
            v129 = v32;
            Resource = (PERESOURCE)hsem;
            v138 = (struct _ERESOURCE *)v145;
            v154 = v136;
            if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v154) )
            {
              v104 = ((_DWORD)v33[524] & 0x10000) == 0;
              Resource = (PERESOURCE)hsem;
              v138 = (struct _ERESOURCE *)v145;
              v129 = v34;
              v136 = v33;
              v134 = v103;
              v132 = v102;
              v142 = (PERESOURCE)v35;
              if ( v104 )
              {
                v142 = (PERESOURCE)v35;
                Resource = (PERESOURCE)hsem;
                v129 = v34;
                v136 = v33;
                v134 = v103;
                v132 = v102;
                v138 = (struct _ERESOURCE *)v145;
                if ( !(unsigned int)bDynamicProcessAllDriverRealizations(v33, 0LL, 1LL) )
                {
                  v136 = (HDEV)v146;
                  v134 = v135;
                  v132 = v147;
                  v142 = (PERESOURCE)v151;
                  Resource = (PERESOURCE)hsem;
                  v138 = (struct _ERESOURCE *)v145;
                  v129 = 0;
LABEL_30:
                  v36 = (HDEV)*((unsigned int *)MDEV + 5);
                  v37 = *((_DWORD *)a7 + 5);
                  if ( (_DWORD)v36 != 1 )
                  {
                    if ( v37 != 1 && (_DWORD)v36 )
                    {
                      v106 = 0;
                      do
                      {
                        v33 = (HDEV)*((unsigned int *)a7 + 5);
                        v34 = 0LL;
                        v146 = 56LL * v106;
                        v35 = *(HDEV *)((char *)MDEV + v146 + 40);
                        if ( (_DWORD)v33 )
                        {
                          v107 = *((_QWORD *)v35 + 319);
                          while ( 1 )
                          {
                            v151 = (HDEV)(56LL * (unsigned int)v34);
                            v36 = *(HDEV *)((char *)a7 + (_QWORD)v151 + 40);
                            if ( v107 == *((_QWORD *)v36 + 319) )
                              break;
                            v34 = (unsigned int)(v34 + 1);
                            if ( (unsigned int)v34 >= (unsigned int)v33 )
                              goto LABEL_222;
                          }
                          v34 = 1LL;
                          if ( _bittest((const signed __int32 *)v35 + 524, 0x10u) )
                            v34 = !_bittest((const signed __int32 *)v36 + 524, 0x10u);
                          if ( v35 != v36 )
                          {
                            if ( (unsigned int)bDynamicModeChange(v36, v35) == 1 )
                            {
                              v34 = v146;
                              v35 = v151;
                              v36 = *(HDEV *)((char *)a7 + (_QWORD)v151 + 40);
                              *(_QWORD *)((char *)a7 + (_QWORD)v151 + 40) = *(_QWORD *)((char *)MDEV + v146 + 40);
                              *(_QWORD *)((char *)MDEV + v34 + 40) = v36;
                            }
                            else
                            {
                              DrvLogDrvChangeDisplaySettingsFailures(11LL, 3221225473LL);
                              v129 = 1;
                            }
                          }
                        }
LABEL_222:
                        ++v106;
                      }
                      while ( v106 < *((_DWORD *)MDEV + 5) );
                      v19 = v152;
                    }
                    goto LABEL_34;
                  }
                  v38 = (HDEV)*((_QWORD *)MDEV + 5);
                  if ( v37 == 1 )
                  {
                    if ( (unsigned int)bDynamicModeChange(*((HDEV *)a7 + 5), v38) == 1 )
                    {
                      v36 = (HDEV)*((_QWORD *)a7 + 5);
                      *((_QWORD *)a7 + 5) = *((_QWORD *)MDEV + 5);
                      *((_QWORD *)MDEV + 5) = v36;
LABEL_34:
                      GreReleaseHmgrSemaphore(v36, v35, v34, v33);
                      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v19 + 8));
                      v39 = *(struct _ERESOURCE **)(v19 + 8);
                      if ( v39 )
                      {
                        ExReleaseResourceAndLeaveCriticalRegion(v39);
                        PsLeavePriorityRegion();
                      }
                      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemRFONTList", *(_QWORD *)(v19 + 24));
                      v40 = *(struct _ERESOURCE **)(v19 + 24);
                      if ( v40 )
                      {
                        ExReleaseResourceAndLeaveCriticalRegion(v40);
                        PsLeavePriorityRegion();
                      }
                      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemPublicPFT", *(_QWORD *)(v19 + 48));
                      v41 = *(struct _ERESOURCE **)(v19 + 48);
                      if ( v41 )
                      {
                        ExReleaseResourceAndLeaveCriticalRegion(v41);
                        PsLeavePriorityRegion();
                      }
                      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemPalette", *(_QWORD *)(v19 + 40));
                      v42 = *(struct _ERESOURCE **)(v19 + 40);
                      if ( v42 )
                      {
                        ExReleaseResourceAndLeaveCriticalRegion(v42);
                        PsLeavePriorityRegion();
                      }
                      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState", *(_QWORD *)(v19 + 72));
                      v27 = *(struct _ERESOURCE **)(v19 + 72);
                      if ( v27 )
                      {
                        ExReleaseResourceAndLeaveCriticalRegion(v27);
                        PsLeavePriorityRegion();
                      }
                      v43 = v129;
                      if ( v129 )
                        goto LABEL_52;
                      if ( *((_DWORD *)a7 + 5) == 1 )
                      {
                        *(_QWORD *)a7 = *((_QWORD *)a7 + 5);
                        *((_QWORD *)a7 + 1) = *((_QWORD *)a7 + 6);
                      }
LABEL_47:
                      if ( *((_DWORD *)MDEV + 5) == 1 )
                      {
                        *(_QWORD *)MDEV = *((_QWORD *)MDEV + 5);
                        *((_QWORD *)MDEV + 1) = *((_QWORD *)MDEV + 6);
                        goto LABEL_49;
                      }
                      v108 = (void *)*((_QWORD *)MDEV + 3);
                      v156[2] = MulEnableDriver;
                      v156[0] = 1LL;
                      v151 = 0LL;
                      v156[1] = 0LL;
                      v109 = hCreateHDEV(
                               (struct tagGRAPHICS_DEVICE *)0xFFFFFFFFFFFFFFFCLL,
                               (struct _DRV_NAMES *)v156,
                               (struct _devicemodeW *)MDEV,
                               v108,
                               0,
                               0,
                               1,
                               0,
                               2u,
                               &v151);
                      *(_QWORD *)MDEV = v109;
                      if ( !v109 )
                      {
                        DrvLogDrvChangeDisplaySettingsFailures(7LL, 3221225473LL);
                        v43 = 1;
                        v129 = 1;
LABEL_49:
                        if ( !a7 )
                          goto LABEL_63;
                        goto LABEL_50;
                      }
                      if ( !a7 )
                        goto LABEL_64;
                      v139 = (PERESOURCE)*((_QWORD *)v109 + 6);
                      EngAcquireSemaphore((HSEMAPHORE)v139);
                      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemParentDevLock", v139, 11LL);
                      EngAcquireSemaphore(*(HSEMAPHORE *)(v19 + 72));
                      EtwTraceGreLockAcquireSemaphoreExclusive(
                        L"GreBaseGlobals.hsemDwmState",
                        *(_QWORD *)(v19 + 72),
                        7LL);
                      EngAcquireSemaphore(*(HSEMAPHORE *)(v19 + 40));
                      EtwTraceGreLockAcquireSemaphoreExclusive(
                        L"GreBaseGlobals.hsemPalette",
                        *(_QWORD *)(v19 + 40),
                        13LL);
                      EngAcquireSemaphore(*(HSEMAPHORE *)(v19 + 48));
                      EtwTraceGreLockAcquireSemaphoreExclusive(
                        L"GreBaseGlobals.hsemPublicPFT",
                        *(_QWORD *)(v19 + 48),
                        14LL);
                      EngAcquireSemaphore(*(HSEMAPHORE *)(v19 + 24));
                      EtwTraceGreLockAcquireSemaphoreExclusive(
                        L"GreBaseGlobals.hsemRFONTList",
                        *(_QWORD *)(v19 + 24),
                        15LL);
                      EngAcquireSemaphore(*(HSEMAPHORE *)(v19 + 8));
                      EtwTraceGreLockAcquireSemaphoreExclusive(
                        L"GreBaseGlobals.hsemDriverMgmt",
                        *(_QWORD *)(v19 + 8),
                        16LL);
                      GreAcquireHmgrSemaphore();
                      v110 = *(HDEV *)MDEV;
                      if ( v134 )
                      {
                        if ( (unsigned int)bDynamicModeChange(*((HDEV *)a7 + 5), v110) == 1 )
                        {
                          v114 = *(_QWORD *)MDEV;
                          *(_QWORD *)MDEV = *((_QWORD *)a7 + 5);
                          *(_QWORD *)a7 = v114;
                          *((_QWORD *)a7 + 5) = v114;
                          if ( CloneHDEV )
                            v136 = (HDEV)v114;
                          goto LABEL_237;
                        }
                        v115 = 12LL;
                      }
                      else
                      {
                        if ( (unsigned int)bDynamicModeChange(*(HDEV *)a7, v110) == 1 )
                        {
                          v114 = *(_QWORD *)a7;
                          *(_QWORD *)a7 = *(_QWORD *)MDEV;
                          *(_QWORD *)MDEV = v114;
LABEL_237:
                          GreReleaseHmgrSemaphore(v114, v111, v112, v113);
                          EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v19 + 8));
                          v116 = *(struct _ERESOURCE **)(v19 + 8);
                          if ( v116 )
                          {
                            ExReleaseResourceAndLeaveCriticalRegion(v116);
                            PsLeavePriorityRegion();
                          }
                          EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemRFONTList", *(_QWORD *)(v19 + 24));
                          v117 = *(struct _ERESOURCE **)(v19 + 24);
                          if ( v117 )
                          {
                            ExReleaseResourceAndLeaveCriticalRegion(v117);
                            PsLeavePriorityRegion();
                          }
                          EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemPublicPFT", *(_QWORD *)(v19 + 48));
                          v118 = *(struct _ERESOURCE **)(v19 + 48);
                          if ( v118 )
                          {
                            ExReleaseResourceAndLeaveCriticalRegion(v118);
                            PsLeavePriorityRegion();
                          }
                          EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemPalette", *(_QWORD *)(v19 + 40));
                          v119 = *(struct _ERESOURCE **)(v19 + 40);
                          if ( v119 )
                          {
                            ExReleaseResourceAndLeaveCriticalRegion(v119);
                            PsLeavePriorityRegion();
                          }
                          EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState", *(_QWORD *)(v19 + 72));
                          v120 = *(struct _ERESOURCE **)(v19 + 72);
                          if ( v120 )
                          {
                            ExReleaseResourceAndLeaveCriticalRegion(v120);
                            PsLeavePriorityRegion();
                          }
                          EtwTraceGreLockReleaseSemaphore(L"hsemParentDevLock", v139);
                          if ( v139 )
                          {
                            ExReleaseResourceAndLeaveCriticalRegion(v139);
                            PsLeavePriorityRegion();
                          }
                          v43 = v129;
LABEL_50:
                          if ( !v43 && CloneHDEV && v136 )
                          {
                            v139 = (PERESOURCE)CloneHDEV;
                            v146 = (__int64)v136;
                            if ( v132 )
                            {
                              v121 = (SURFACE *)*((_QWORD *)v136 + 316);
                              *((_QWORD *)CloneHDEV + 316) = v121;
                              if ( v121 )
                                SURFACE::hdev(v121, CloneHDEV);
                              *((_QWORD *)CloneHDEV + 221) = *((_QWORD *)v136 + 221);
                              DrvTransferGdiObjects(CloneHDEV, v136, v43);
                              *((_QWORD *)v136 + 316) = 0LL;
                              *((_QWORD *)v136 + 221) = 0LL;
                              _m_prefetchw(v136 + 10);
                              do
                                v122 = *((_DWORD *)v136 + 10);
                              while ( v122 != _InterlockedCompareExchange(
                                                (volatile signed __int32 *)v136 + 10,
                                                v122 | 0x80000,
                                                v122) );
                              _m_prefetchw(CloneHDEV + 10);
                              do
                                v123 = *((_DWORD *)CloneHDEV + 10);
                              while ( v123 != _InterlockedCompareExchange(
                                                (volatile signed __int32 *)CloneHDEV + 10,
                                                v123 & 0xFFF7FFFF,
                                                v123) );
                              PDEVOBJ::bDisabled((PDEVOBJ *)&v146, 1);
                              (*((void (__fastcall **)(_QWORD, HDEV))CloneHDEV + 334))(
                                *((_QWORD *)CloneHDEV + 221),
                                CloneHDEV);
                            }
                            else
                            {
                              *((_QWORD *)CloneHDEV + 316) = 0LL;
                              PDEVOBJ::bDisabled((PDEVOBJ *)&v139, 1);
                            }
                          }
                          goto LABEL_52;
                        }
                        v115 = 13LL;
                      }
                      DrvLogDrvChangeDisplaySettingsFailures(v115, 3221225473LL);
                      v129 = 1;
                      goto LABEL_237;
                    }
                    v105 = 9LL;
                  }
                  else
                  {
                    if ( (unsigned int)bDynamicModeChange(*(HDEV *)a7, v38) == 1 )
                    {
                      v36 = *(HDEV *)a7;
                      *(_QWORD *)a7 = *((_QWORD *)MDEV + 5);
                      *((_QWORD *)MDEV + 5) = v36;
                      if ( CloneHDEV )
                        v136 = v36;
                      goto LABEL_34;
                    }
                    v105 = 10LL;
                  }
                  DrvLogDrvChangeDisplaySettingsFailures(v105, 3221225473LL);
                  v129 = 1;
                  goto LABEL_34;
                }
                v34 = v129;
              }
            }
          }
          if ( !(_DWORD)v34 )
            goto LABEL_30;
LABEL_52:
          v44 = v129;
LABEL_53:
          v146 = *(_QWORD *)a7;
          if ( (*(_DWORD *)(v146 + 40) & 0x20000) != 0 )
            PDEVOBJ::bDisabled((PDEVOBJ *)&v146, 1);
          if ( (int)IsGreHideSpritesSupported() >= 0 )
          {
            v45 = a7;
            if ( !v44 )
              v45 = MDEV;
            if ( qword_1C0294818 )
              qword_1C0294818(*(_QWORD *)v45, 0LL);
          }
          v46 = v142;
          if ( v142 )
          {
            EtwTraceGreLockReleaseSemaphore(L"hsemCloneHdevDevLock", v142);
            ExReleaseResourceAndLeaveCriticalRegion(v46);
            PsLeavePriorityRegion();
          }
          MULTIDEVLOCKOBJ::vUnlock(v143);
          MULTIDEVLOCKOBJ::vUnlock(v148);
          v43 = v129;
LABEL_63:
          if ( v43 )
          {
LABEL_68:
            v48 = Resource;
            if ( Resource )
            {
              EtwTraceGreLockReleaseSemaphore(L"hsemOrgMdevDevLock", Resource);
              ExReleaseResourceAndLeaveCriticalRegion(v48);
              PsLeavePriorityRegion();
              EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemHT", *(_QWORD *)(v19 + 136));
              v49 = *(struct _ERESOURCE **)(v19 + 136);
              if ( v49 )
              {
                ExReleaseResourceAndLeaveCriticalRegion(v49);
                PsLeavePriorityRegion();
              }
              EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemSprite", *(_QWORD *)(v19 + 112));
              v50 = *(struct _ERESOURCE **)(v19 + 112);
              if ( v50 )
              {
                ExReleaseResourceAndLeaveCriticalRegion(v50);
                PsLeavePriorityRegion();
              }
              EtwTraceGreLockReleaseSemaphore(L"hsemOrgMdevPointer", v138);
              if ( v138 )
              {
                ExReleaseResourceAndLeaveCriticalRegion(v138);
                PsLeavePriorityRegion();
              }
            }
            v51 = (HDEV *)v153;
            if ( v153 )
            {
              SGDGetSessionState(v27);
              GreIncrementDisplaySettingsUniqueness();
              if ( v51 != v157 )
                NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v51);
            }
            if ( v129 )
            {
              WdLogSingleEntry0(2LL);
              DrvBackoutMDEV(MDEV, v126);
              NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, MDEV);
              *v144 = 0LL;
              if ( a7 )
                DrvEnableMDEV((__int64 *)a7, 0, 0);
              ++*(_DWORD *)(v19 + 1324);
              v17 = -1;
            }
            else
            {
              if ( a7 )
              {
                for ( k = 0; k < *((_DWORD *)a7 + 5); *(_DWORD *)(v54 + 160) &= ~1u )
                {
                  v53 = k++;
                  v54 = *(_QWORD *)(*((_QWORD *)a7 + 7 * v53 + 5) + 2552LL);
                }
              }
              for ( m = *(_QWORD *)(v19 + 1264); m; m = *(_QWORD *)(m + 128) )
                *(_DWORD *)(m + 160) &= ~4u;
              for ( n = 0; n < *((_DWORD *)MDEV + 5); ++n )
              {
                v57 = 56LL * n;
                v58 = *(_QWORD *)((char *)MDEV + v57 + 40);
                v59 = *(_QWORD *)(v58 + 2568);
                *(_DWORD *)(*(_QWORD *)(v58 + 2552) + 160LL) |= 1u;
                v60 = *(_DWORD *)((char *)MDEV + v57 + 56);
                *(_DWORD *)(v59 + 76) = v60;
                v61 = *(_DWORD *)((char *)MDEV + v57 + 60);
                *(_DWORD *)(v59 + 80) = v61;
                if ( !v60 && !v61 )
                  *(_DWORD *)(*(_QWORD *)(v58 + 2552) + 160LL) |= 4u;
              }
              GreUpdateSharedDevCaps(*(_QWORD *)MDEV);
            }
            goto LABEL_91;
          }
LABEL_64:
          v47 = *(_QWORD *)MDEV;
          if ( *((_DWORD *)MDEV + 5) == 1 )
          {
            v146 = *(_QWORD *)(v47 + 1776);
            if ( *(_QWORD *)(v47 + 24) != v47 )
              *(_QWORD *)(v47 + 24) = v47;
            *(_QWORD *)(v47 + 1736) = *(_QWORD *)(v47 + 2840);
            XEPALOBJ::apalResetColorTable((XEPALOBJ *)&v146);
          }
          else
          {
            DrvSetSharedDevLock(MDEV);
            v124 = DrvSetSharedPalette(MDEV);
            v125 = v124;
            if ( (*(_DWORD *)(v47 + 2140) & 0x100) == 0
              && v124
              && (int)IsDrvRealizeHalftonePaletteSupported() >= 0
              && qword_1C0294798 )
            {
              qword_1C0294798(v125, 1LL);
            }
          }
          goto LABEL_68;
        }
LABEL_27:
        EngAcquireSemaphore(*(HSEMAPHORE *)(v19 + 72));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *(_QWORD *)(v19 + 72), 7LL);
        EngAcquireSemaphore(*(HSEMAPHORE *)(v19 + 40));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemPalette", *(_QWORD *)(v19 + 40), 16LL);
        EngAcquireSemaphore(*(HSEMAPHORE *)(v19 + 48));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemPublicPFT", *(_QWORD *)(v19 + 48), 14LL);
        EngAcquireSemaphore(*(HSEMAPHORE *)(v19 + 24));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemRFONTList", *(_QWORD *)(v19 + 24), 15LL);
        EngAcquireSemaphore(*(HSEMAPHORE *)(v19 + 8));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v19 + 8), 16LL);
        GreAcquireHmgrSemaphore();
        v32 = v129;
        goto LABEL_28;
      }
      v97 = v139;
      *(_QWORD *)((char *)a7 + (_QWORD)v139 + 40) = CloneHDEV;
      *(_QWORD *)((char *)a7 + (_QWORD)v97 + 48) = *((_QWORD *)MDEV + 5);
      v136 = (HDEV)*((_QWORD *)MDEV + 5);
    }
    else
    {
      if ( v31 != 1 )
        goto LABEL_27;
      v98 = 0;
      if ( v30 )
      {
        v99 = (HDEV)*((_QWORD *)a7 + 5);
        while ( 1 )
        {
          v139 = (PERESOURCE)(56LL * v98);
          if ( *(HDEV *)((char *)MDEV + (_QWORD)v139 + 40) == v99 )
            break;
          if ( ++v98 >= v30 )
            goto LABEL_133;
        }
        v100 = DrvCreateCloneHDEV(v99, v30);
        CloneHDEV = v100;
        if ( !v100 )
        {
          DrvLogDrvChangeDisplaySettingsFailures(6LL, 3221225473LL);
          v32 = 1;
          goto LABEL_28;
        }
        v101 = v139;
        v132 = 1;
        *(_QWORD *)((char *)MDEV + (_QWORD)v139 + 40) = v100;
        *(_QWORD *)((char *)MDEV + (_QWORD)v101 + 48) = *((_QWORD *)a7 + 5);
        v136 = (HDEV)*((_QWORD *)a7 + 5);
      }
LABEL_133:
      v134 = 1;
      if ( !CloneHDEV )
        goto LABEL_134;
    }
    v142 = (PERESOURCE)*((_QWORD *)CloneHDEV + 6);
    EngAcquireSemaphore((HSEMAPHORE)v142);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemCloneHdevDevLock", v142, 11LL);
LABEL_134:
    v32 = 0;
    goto LABEL_135;
  }
LABEL_106:
  v67 = v144;
LABEL_107:
  if ( v149 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v149);
  if ( !a6 || v17 )
  {
    if ( v17 == 2 && *v67 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *v67);
      *v67 = 0LL;
    }
  }
  else if ( a7 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, a7);
  }
  WdLogSingleEntry1(5LL, v17);
  *(_DWORD *)(v19 + 1236) = 0;
  *(_QWORD *)(v19 + 1240) = 0LL;
LABEL_114:
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    McTemplateK0_EtwWriteTransfer(v68, &DrvChangeDisplaySettingsEnd, 0LL);
  return (unsigned int)v17;
}
