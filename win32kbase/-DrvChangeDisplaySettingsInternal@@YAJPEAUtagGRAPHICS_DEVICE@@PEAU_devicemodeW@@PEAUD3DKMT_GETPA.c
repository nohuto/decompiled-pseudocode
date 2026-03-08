/*
 * XREFs of ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C001E2BC
 * Callers:
 *     ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x1C00289DC (-DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z.c)
 *     ApplyPathsModality @ 0x1C00C89C8 (ApplyPathsModality.c)
 *     DrvChangeDisplaySettings @ 0x1C019249C (DrvChangeDisplaySettings.c)
 * Callees:
 *     GreUpdateSharedDevCaps @ 0x1C0010C8C (GreUpdateSharedDevCaps.c)
 *     ?DrvAcquireChangeDisplaySettingLocks@@YAXXZ @ 0x1C00174C8 (-DrvAcquireChangeDisplaySettingLocks@@YAXXZ.c)
 *     ?DrvReleaseChangeDisplaySettingLocks@@YAXXZ @ 0x1C0017570 (-DrvReleaseChangeDisplaySettingLocks@@YAXXZ.c)
 *     DrvDisableMDEV @ 0x1C001D710 (DrvDisableMDEV.c)
 *     DrvEnableMDEV @ 0x1C001D978 (DrvEnableMDEV.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C001DC20 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z @ 0x1C001E050 (-DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z.c)
 *     ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x1C001E10C (-DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z.c)
 *     ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x1C001EDF8 (--_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C001EE54 (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C001EF7C (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C001F108 (DrvUpdateDisplayDriverParameters.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C001F7C4 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C0022BB4 (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0022E20 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0024834 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00273B4 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C002B828 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0047CDC (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0049700 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0049780 (GreAcquireHmgrSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0049800 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0049E20 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C004B690 (EngAcquireSemaphore.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0062994 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     bDynamicModeChange @ 0x1C006DF9C (bDynamicModeChange.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00723C0 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     bDynamicProcessAllDriverRealizations @ 0x1C009D990 (bDynamicProcessAllDriverRealizations.c)
 *     ?hdev@SURFACE@@QEAAXPEAUHDEV__@@@Z @ 0x1C00A40A0 (-hdev@SURFACE@@QEAAXPEAUHDEV__@@@Z.c)
 *     DrvDestroyMDEV @ 0x1C00B6450 (DrvDestroyMDEV.c)
 *     ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x1C00C9094 (-vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00CCE70 (GreIncrementDisplaySettingsUniqueness.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C00D0240 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     IsGreHideSpritesSupported @ 0x1C00D3800 (IsGreHideSpritesSupported.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00EDED8 (McTemplateK0_EtwWriteTransfer.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C018D6F8 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C018DA5C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z @ 0x1C018EA88 (-DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z.c)
 *     ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1C018EB0C (-DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C018EBEC (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C018ED00 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     DrvLogDrvChangeDisplaySettingsFailures @ 0x1C0194484 (DrvLogDrvChangeDisplaySettingsFailures.c)
 *     IsDrvRealizeHalftonePaletteSupported @ 0x1C0271554 (IsDrvRealizeHalftonePaletteSupported.c)
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
  __int64 v32; // rcx
  int v33; // eax
  int v34; // r8d
  int v35; // ecx
  int v36; // eax
  HDEV v37; // rdx
  __int64 v38; // rcx
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
  __int64 v83; // r9
  DWORD dmFields; // r15d
  __int64 dmDisplayOrientation; // rbx
  __int64 dmBitsPerPel; // rdi
  DWORD dmPelsHeight; // esi
  DWORD dmPelsWidth; // r14d
  __int64 CurrentProcess; // rax
  int v90; // eax
  int updated; // eax
  __int64 v92; // rcx
  __int64 v93; // r9
  __int64 v94; // rdx
  __int64 v95; // rcx
  unsigned int v96; // edx
  HDEV v97; // r8
  PERESOURCE v98; // rax
  unsigned int v99; // ecx
  HDEV v100; // r8
  HDEV v101; // rax
  PERESOURCE v102; // rcx
  struct _ERESOURCE *v103; // rdx
  HDEV v104; // r9
  int v105; // r10d
  int v106; // r11d
  bool v107; // zf
  __int64 v108; // rcx
  HDEV v109; // rcx
  unsigned int v110; // esi
  unsigned int v111; // r9d
  unsigned int v112; // r8d
  HDEV v113; // rdx
  __int64 v114; // r10
  HDEV v115; // rcx
  __int64 v116; // r8
  __int64 v117; // rcx
  void *v118; // r9
  HDEV v119; // rax
  __int64 v120; // rcx
  HDEV v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // rcx
  __int64 v124; // rcx
  struct _ERESOURCE *v125; // rcx
  struct _ERESOURCE *v126; // rcx
  struct _ERESOURCE *v127; // rcx
  struct _ERESOURCE *v128; // rcx
  struct _ERESOURCE *v129; // rcx
  SURFACE *v130; // rcx
  signed __int32 v131; // ett
  signed __int32 v132; // ett
  HDEV v133; // rax
  HDEV v134; // r15
  unsigned int v135; // edx
  bool v136; // cc
  HDEV v137; // rdx
  int v138; // [rsp+50h] [rbp-B0h]
  __int16 v139; // [rsp+50h] [rbp-B0h]
  int PruneFlag; // [rsp+54h] [rbp-ACh]
  int v141; // [rsp+54h] [rbp-ACh]
  int v142; // [rsp+58h] [rbp-A8h]
  int v143; // [rsp+58h] [rbp-A8h]
  unsigned int v144; // [rsp+60h] [rbp-A0h]
  HDEV v145; // [rsp+68h] [rbp-98h]
  struct _ERESOURCE *v147; // [rsp+70h] [rbp-90h]
  PERESOURCE v148; // [rsp+78h] [rbp-88h] BYREF
  HSEMAPHORE hsem; // [rsp+80h] [rbp-80h]
  PERESOURCE Resource; // [rsp+88h] [rbp-78h]
  PERESOURCE v151; // [rsp+90h] [rbp-70h]
  MULTIDEVLOCKOBJ *v152; // [rsp+98h] [rbp-68h]
  void **v153; // [rsp+A0h] [rbp-60h]
  struct _devicemodeW *v154; // [rsp+A8h] [rbp-58h]
  __int64 v155; // [rsp+B0h] [rbp-50h] BYREF
  int v156; // [rsp+B8h] [rbp-48h]
  MULTIDEVLOCKOBJ *v157; // [rsp+C0h] [rbp-40h]
  struct _devicemodeW *v158; // [rsp+C8h] [rbp-38h] BYREF
  int v159; // [rsp+D0h] [rbp-30h] BYREF
  HDEV v160; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v161; // [rsp+E0h] [rbp-20h]
  void *v162; // [rsp+E8h] [rbp-18h]
  HDEV v163; // [rsp+F0h] [rbp-10h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v165[3]; // [rsp+108h] [rbp+8h] BYREF
  HDEV v166[2]; // [rsp+120h] [rbp+20h] BYREF
  __int128 v167; // [rsp+130h] [rbp+30h]
  __int128 v168; // [rsp+140h] [rbp+40h]
  __int64 v169; // [rsp+150h] [rbp+50h]

  v13 = 0;
  v14 = a10;
  v15 = a1;
  v162 = a1;
  Src = a2;
  v17 = 0;
  v153 = a8;
  hsem = a4;
  PruneFlag = a9 != 0;
  v154 = a2;
  v142 = a10;
  DestinationString = 0LL;
  Resource = 0LL;
  v158 = 0LL;
  v159 = 0;
  v152 = 0LL;
  v157 = 0LL;
  v19 = *(_QWORD *)(SGDGetSessionState(a9 != 0) + 24);
  v161 = v19;
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
  *v153 = 0LL;
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
              &v158,
              &v159,
              0LL,
              Src,
              0,
              PruneFlag,
              a10,
              a12,
              0LL);
      if ( v81 < 0 )
      {
        if ( v158 )
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v158);
        WdLogSingleEntry0(5LL);
        v17 = -2;
        goto LABEL_165;
      }
      dmFields = Src->dmFields;
      dmDisplayOrientation = Src->dmDisplayOrientation;
      dmBitsPerPel = Src->dmBitsPerPel;
      dmPelsHeight = v154->dmPelsHeight;
      dmPelsWidth = v154->dmPelsWidth;
      CurrentProcess = PsGetCurrentProcess(v80, v79, v82, v83);
      WdLogSingleEntry5(4LL, CurrentProcess, dmPelsWidth, dmPelsHeight, dmBitsPerPel, dmDisplayOrientation);
      v19 = v161;
      Src = v154;
      v90 = 1;
      if ( dmFields )
        v90 = a10;
      v17 = 0;
      v15 = (WCHAR *)v162;
      v14 = v90;
    }
    else
    {
      v14 = 1;
    }
    v142 = v14;
  }
  if ( a5 && v15 && Src && gProtocolType != -1 )
  {
    updated = DrvUpdateDisplayDriverParameters((struct tagGRAPHICS_DEVICE *)v15, v158, v159);
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
    MDEV = DrvCreateMDEV((struct _UNICODE_STRING *)Resource, v158, hsem, a11 != 0 ? 4 : 0, 0LL, a9, v14, a12, a3);
    if ( MDEV )
    {
      v17 = 0;
      goto LABEL_11;
    }
    v95 = 3LL;
    goto LABEL_177;
  }
  v70 = (struct _UNICODE_STRING *)Resource;
  v71 = CheckAndNotifyDualView(Resource, a7);
  if ( !v71 )
  {
    v74 = v142;
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
    if ( v158 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v158);
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
    v67 = v153;
    *v153 = a7;
    DrvReleaseChangeDisplaySettingLocks(v92);
    v17 = 3;
    WdLogSingleEntry0(4LL);
    goto LABEL_107;
  }
  if ( !(unsigned int)DrvDisableMDEV(a7, 0, 0) )
  {
    v95 = 4LL;
LABEL_177:
    DrvLogDrvChangeDisplaySettingsFailures(v95, 3221225473LL);
    goto LABEL_11;
  }
  v139 = *(_WORD *)(v19 + 1248);
  v75 = DrvCreateMDEV(v70, v158, hsem, a11 != 0 ? 4 : 0, a7, a9, v74, a12, a3);
  MDEV = v75;
  if ( v75 )
  {
    v76 = *((_DWORD *)v75 + 5);
    v17 = 2;
    if ( v76 == *((_DWORD *)a7 + 5) && v139 == *(_WORD *)(v19 + 1248) )
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
          v93 = 56LL * v77;
          v94 = *(_QWORD *)((char *)v75 + v93 + 56) - *(_QWORD *)((char *)a7 + v93 + 56);
          if ( !v94 )
            v94 = *(_QWORD *)((char *)v75 + v93 + 64) - *(_QWORD *)((char *)a7 + v93 + 64);
          if ( v94 )
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
  v138 = 0;
  v145 = 0LL;
  v143 = 0;
  *v153 = MDEV;
  v141 = 0;
  if ( v17 )
  {
    if ( v17 == 2 )
    {
      v136 = *((_DWORD *)MDEV + 5) <= 1u;
      *(_QWORD *)MDEV = *(_QWORD *)a7;
      *((_QWORD *)MDEV + 1) = *((_QWORD *)a7 + 1);
      if ( !v136 )
      {
        EngAcquireSemaphore(*(HSEMAPHORE *)(v19 + 8));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v19 + 8), 16LL);
        v137 = *(HDEV *)MDEV;
        ++*((_DWORD *)v137 + 3);
        ++*((_DWORD *)v137 + 2);
        TrackObjectReferenceIncrement(1LL, *((_QWORD *)v137 + 440));
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
    if ( v157 )
      MULTIDEVLOCKOBJ::`scalar deleting destructor'(v157, v26);
    v66 = v152;
    if ( !v152 )
      goto LABEL_106;
    goto LABEL_105;
  }
  v162 = 0LL;
  v151 = 0LL;
  v169 = 0LL;
  Resource = 0LL;
  *(_OWORD *)v166 = 0LL;
  v147 = 0LL;
  v167 = 0LL;
  v168 = 0LL;
  v23 = (MULTIDEVLOCKOBJ *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                             gpLeakTrackingAllocator,
                             0x104uLL,
                             0x68uLL,
                             0x6C6D6847u);
  v152 = v23;
  if ( v23 )
  {
    v24 = gpLeakTrackingAllocator;
    *(_QWORD *)v23 = 1LL;
    *((_QWORD *)v23 + 1) = 0LL;
    *((_QWORD *)v23 + 2) = 0LL;
    v25 = (MULTIDEVLOCKOBJ *)NSInstrumentation::CLeakTrackingAllocator::Allocate(v24, 0x104uLL, 0x68uLL, 0x6C6D6847u);
    v157 = v25;
    if ( !v25 )
    {
      v66 = v152;
LABEL_105:
      MULTIDEVLOCKOBJ::`scalar deleting destructor'(v66, v26);
      goto LABEL_106;
    }
    *(_QWORD *)v25 = 1LL;
    *((_QWORD *)v25 + 1) = 0LL;
    *((_QWORD *)v25 + 2) = 0LL;
    if ( *((_DWORD *)MDEV + 5) )
    {
      v157 = v25;
      v28 = 0;
      do
        DrvUpdatePDevForWDDMDevice(*((_QWORD *)MDEV + 7 * v28++ + 5));
      while ( v28 < *((_DWORD *)MDEV + 5) );
      v19 = v161;
    }
    if ( !a7 )
    {
      v43 = 0;
      goto LABEL_47;
    }
    v162 = DrvDisableDirectDrawForModeChange(a7, MDEV, v166);
    if ( !v162 )
    {
      DrvLogDrvChangeDisplaySettingsFailures(5LL, 3221225473LL);
      v138 = 1;
      goto LABEL_52;
    }
    MULTIDEVLOCKOBJ::vInit(v157, a7);
    MULTIDEVLOCKOBJ::vInit(v152, MDEV);
    if ( (*(_DWORD *)v152 & 1) == 0 || (*(_DWORD *)v157 & 1) == 0 )
    {
      DrvLogDrvChangeDisplaySettingsFailures(8LL, 3221225473LL);
      v44 = 1;
      v138 = 1;
      goto LABEL_53;
    }
    v29 = *(HSEMAPHORE *)(*(_QWORD *)a7 + 56LL);
    hsem = *(HSEMAPHORE *)(*(_QWORD *)a7 + 48LL);
    v154 = (struct _devicemodeW *)v29;
    EngAcquireSemaphore(v29);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemOrgMdevPointer", v154, 4LL);
    EngAcquireSemaphore(*(HSEMAPHORE *)(v19 + 112));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemSprite", *(_QWORD *)(v19 + 112), 5LL);
    EngAcquireSemaphore(*(HSEMAPHORE *)(v19 + 136));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemHT", *(_QWORD *)(v19 + 136), 6LL);
    EngAcquireSemaphore(hsem);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemOrgMdevDevLock", hsem, 11LL);
    MULTIDEVLOCKOBJ::vLock(v157);
    MULTIDEVLOCKOBJ::vLock(v152);
    if ( (int)IsGreHideSpritesSupported() >= 0 && qword_1C02D5988 )
      qword_1C02D5988(*(_QWORD *)a7, 1LL);
    v30 = *((_DWORD *)MDEV + 5);
    v31 = *((_DWORD *)a7 + 5);
    if ( v30 == 1 )
    {
      if ( v31 == 1 )
        goto LABEL_27;
      v96 = 0;
      if ( !v31 )
        goto LABEL_27;
      v97 = (HDEV)*((_QWORD *)MDEV + 5);
      while ( 1 )
      {
        v148 = (PERESOURCE)(56LL * v96);
        if ( *(HDEV *)((char *)a7 + (_QWORD)v148 + 40) == v97 )
          break;
        if ( ++v96 >= v31 )
          goto LABEL_27;
      }
      CloneHDEV = DrvCreateCloneHDEV(v97, v96);
      if ( !CloneHDEV )
      {
        DrvLogDrvChangeDisplaySettingsFailures(6LL, 3221225473LL);
        v33 = 1;
        v138 = 1;
LABEL_135:
        if ( v33 )
        {
LABEL_28:
          v34 = v33;
          Resource = (PERESOURCE)hsem;
          v147 = (struct _ERESOURCE *)v154;
          v19 = v161;
          v160 = (HDEV)v151;
          v156 = v141;
          v144 = v143;
          v155 = (__int64)v145;
          v138 = v33;
          if ( v145 )
          {
            v138 = v33;
            Resource = (PERESOURCE)hsem;
            v147 = (struct _ERESOURCE *)v154;
            v163 = v145;
            if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v163) )
            {
              v107 = ((_DWORD)v104[524] & 0x10000) == 0;
              Resource = (PERESOURCE)hsem;
              v147 = (struct _ERESOURCE *)v154;
              v138 = v34;
              v145 = v104;
              v143 = v106;
              v141 = v105;
              v151 = v103;
              if ( v107 )
              {
                v151 = v103;
                Resource = (PERESOURCE)hsem;
                v138 = v34;
                v145 = v104;
                v143 = v106;
                v141 = v105;
                v147 = (struct _ERESOURCE *)v154;
                if ( !(unsigned int)bDynamicProcessAllDriverRealizations(v104, 0LL, 1LL) )
                {
                  v145 = (HDEV)v155;
                  v143 = v144;
                  v141 = v156;
                  v151 = (PERESOURCE)v160;
                  Resource = (PERESOURCE)hsem;
                  v147 = (struct _ERESOURCE *)v154;
                  v138 = 0;
LABEL_30:
                  v35 = *((_DWORD *)MDEV + 5);
                  v36 = *((_DWORD *)a7 + 5);
                  if ( v35 != 1 )
                  {
                    if ( v36 != 1 && v35 )
                    {
                      v110 = 0;
                      do
                      {
                        v111 = *((_DWORD *)a7 + 5);
                        v112 = 0;
                        v155 = 56LL * v110;
                        v113 = *(HDEV *)((char *)MDEV + v155 + 40);
                        if ( v111 )
                        {
                          v114 = *((_QWORD *)v113 + 319);
                          while ( 1 )
                          {
                            v160 = (HDEV)(56LL * v112);
                            v115 = *(HDEV *)((char *)a7 + (_QWORD)v160 + 40);
                            if ( v114 == *((_QWORD *)v115 + 319) )
                              break;
                            if ( ++v112 >= v111 )
                              goto LABEL_222;
                          }
                          if ( _bittest((const signed __int32 *)v113 + 524, 0x10u) )
                            v115[524] = v115[524];
                          if ( v113 != v115 )
                          {
                            if ( (unsigned int)bDynamicModeChange(v115, v113) == 1 )
                            {
                              v116 = v155;
                              v117 = *(_QWORD *)((char *)a7 + (_QWORD)v160 + 40);
                              *(_QWORD *)((char *)a7 + (_QWORD)v160 + 40) = *(_QWORD *)((char *)MDEV + v155 + 40);
                              *(_QWORD *)((char *)MDEV + v116 + 40) = v117;
                            }
                            else
                            {
                              DrvLogDrvChangeDisplaySettingsFailures(11LL, 3221225473LL);
                              v138 = 1;
                            }
                          }
                        }
LABEL_222:
                        ++v110;
                      }
                      while ( v110 < *((_DWORD *)MDEV + 5) );
                      v19 = v161;
                    }
                    goto LABEL_34;
                  }
                  v37 = (HDEV)*((_QWORD *)MDEV + 5);
                  if ( v36 == 1 )
                  {
                    if ( (unsigned int)bDynamicModeChange(*((HDEV *)a7 + 5), v37) == 1 )
                    {
                      v38 = *((_QWORD *)a7 + 5);
                      *((_QWORD *)a7 + 5) = *((_QWORD *)MDEV + 5);
                      *((_QWORD *)MDEV + 5) = v38;
LABEL_34:
                      GreReleaseHmgrSemaphore();
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
                      v43 = v138;
                      if ( v138 )
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
                      v118 = (void *)*((_QWORD *)MDEV + 3);
                      v165[2] = MulEnableDriver;
                      v165[0] = 1LL;
                      v160 = 0LL;
                      v165[1] = 0LL;
                      v119 = hCreateHDEV(
                               (struct tagGRAPHICS_DEVICE *)0xFFFFFFFFFFFFFFFCLL,
                               (struct _DRV_NAMES *)v165,
                               (struct _devicemodeW *)MDEV,
                               v118,
                               0,
                               0,
                               1,
                               0,
                               2u,
                               &v160);
                      *(_QWORD *)MDEV = v119;
                      if ( !v119 )
                      {
                        DrvLogDrvChangeDisplaySettingsFailures(7LL, 3221225473LL);
                        v43 = 1;
                        v138 = 1;
LABEL_49:
                        if ( !a7 )
                          goto LABEL_63;
                        goto LABEL_50;
                      }
                      if ( !a7 )
                        goto LABEL_64;
                      v148 = (PERESOURCE)*((_QWORD *)v119 + 6);
                      EngAcquireSemaphore((HSEMAPHORE)v148);
                      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemParentDevLock", v148, 11LL);
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
                      GreAcquireHmgrSemaphore(v120);
                      v121 = *(HDEV *)MDEV;
                      if ( v143 )
                      {
                        if ( (unsigned int)bDynamicModeChange(*((HDEV *)a7 + 5), v121) == 1 )
                        {
                          v122 = *(_QWORD *)MDEV;
                          *(_QWORD *)MDEV = *((_QWORD *)a7 + 5);
                          *(_QWORD *)a7 = v122;
                          *((_QWORD *)a7 + 5) = v122;
                          if ( CloneHDEV )
                            v145 = (HDEV)v122;
                          goto LABEL_237;
                        }
                        v123 = 12LL;
                      }
                      else
                      {
                        if ( (unsigned int)bDynamicModeChange(*(HDEV *)a7, v121) == 1 )
                        {
                          v124 = *(_QWORD *)a7;
                          *(_QWORD *)a7 = *(_QWORD *)MDEV;
                          *(_QWORD *)MDEV = v124;
LABEL_237:
                          GreReleaseHmgrSemaphore();
                          EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v19 + 8));
                          v125 = *(struct _ERESOURCE **)(v19 + 8);
                          if ( v125 )
                          {
                            ExReleaseResourceAndLeaveCriticalRegion(v125);
                            PsLeavePriorityRegion();
                          }
                          EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemRFONTList", *(_QWORD *)(v19 + 24));
                          v126 = *(struct _ERESOURCE **)(v19 + 24);
                          if ( v126 )
                          {
                            ExReleaseResourceAndLeaveCriticalRegion(v126);
                            PsLeavePriorityRegion();
                          }
                          EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemPublicPFT", *(_QWORD *)(v19 + 48));
                          v127 = *(struct _ERESOURCE **)(v19 + 48);
                          if ( v127 )
                          {
                            ExReleaseResourceAndLeaveCriticalRegion(v127);
                            PsLeavePriorityRegion();
                          }
                          EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemPalette", *(_QWORD *)(v19 + 40));
                          v128 = *(struct _ERESOURCE **)(v19 + 40);
                          if ( v128 )
                          {
                            ExReleaseResourceAndLeaveCriticalRegion(v128);
                            PsLeavePriorityRegion();
                          }
                          EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState", *(_QWORD *)(v19 + 72));
                          v129 = *(struct _ERESOURCE **)(v19 + 72);
                          if ( v129 )
                          {
                            ExReleaseResourceAndLeaveCriticalRegion(v129);
                            PsLeavePriorityRegion();
                          }
                          EtwTraceGreLockReleaseSemaphore(L"hsemParentDevLock", v148);
                          if ( v148 )
                          {
                            ExReleaseResourceAndLeaveCriticalRegion(v148);
                            PsLeavePriorityRegion();
                          }
                          v43 = v138;
LABEL_50:
                          if ( !v43 && CloneHDEV && v145 )
                          {
                            v148 = (PERESOURCE)CloneHDEV;
                            v155 = (__int64)v145;
                            if ( v141 )
                            {
                              v130 = (SURFACE *)*((_QWORD *)v145 + 316);
                              *((_QWORD *)CloneHDEV + 316) = v130;
                              if ( v130 )
                                SURFACE::hdev(v130, CloneHDEV);
                              *((_QWORD *)CloneHDEV + 221) = *((_QWORD *)v145 + 221);
                              DrvTransferGdiObjects(CloneHDEV, v145, v43);
                              *((_QWORD *)v145 + 316) = 0LL;
                              *((_QWORD *)v145 + 221) = 0LL;
                              _m_prefetchw(v145 + 10);
                              do
                                v131 = *((_DWORD *)v145 + 10);
                              while ( v131 != _InterlockedCompareExchange(
                                                (volatile signed __int32 *)v145 + 10,
                                                v131 | 0x80000,
                                                v131) );
                              _m_prefetchw(CloneHDEV + 10);
                              do
                                v132 = *((_DWORD *)CloneHDEV + 10);
                              while ( v132 != _InterlockedCompareExchange(
                                                (volatile signed __int32 *)CloneHDEV + 10,
                                                v132 & 0xFFF7FFFF,
                                                v132) );
                              PDEVOBJ::bDisabled((PDEVOBJ *)&v155, 1);
                              (*((void (__fastcall **)(_QWORD, HDEV))CloneHDEV + 334))(
                                *((_QWORD *)CloneHDEV + 221),
                                CloneHDEV);
                            }
                            else
                            {
                              *((_QWORD *)CloneHDEV + 316) = 0LL;
                              PDEVOBJ::bDisabled((PDEVOBJ *)&v148, 1);
                            }
                          }
                          goto LABEL_52;
                        }
                        v123 = 13LL;
                      }
                      DrvLogDrvChangeDisplaySettingsFailures(v123, 3221225473LL);
                      v138 = 1;
                      goto LABEL_237;
                    }
                    v108 = 9LL;
                  }
                  else
                  {
                    if ( (unsigned int)bDynamicModeChange(*(HDEV *)a7, v37) == 1 )
                    {
                      v109 = *(HDEV *)a7;
                      *(_QWORD *)a7 = *((_QWORD *)MDEV + 5);
                      *((_QWORD *)MDEV + 5) = v109;
                      if ( CloneHDEV )
                        v145 = v109;
                      goto LABEL_34;
                    }
                    v108 = 10LL;
                  }
                  DrvLogDrvChangeDisplaySettingsFailures(v108, 3221225473LL);
                  v138 = 1;
                  goto LABEL_34;
                }
                v34 = v138;
              }
            }
          }
          if ( !v34 )
            goto LABEL_30;
LABEL_52:
          v44 = v138;
LABEL_53:
          v155 = *(_QWORD *)a7;
          if ( (*(_DWORD *)(v155 + 40) & 0x20000) != 0 )
            PDEVOBJ::bDisabled((PDEVOBJ *)&v155, 1);
          if ( (int)IsGreHideSpritesSupported() >= 0 )
          {
            v45 = a7;
            if ( !v44 )
              v45 = MDEV;
            if ( qword_1C02D5988 )
              qword_1C02D5988(*(_QWORD *)v45, 0LL);
          }
          v46 = v151;
          if ( v151 )
          {
            EtwTraceGreLockReleaseSemaphore(L"hsemCloneHdevDevLock", v151);
            ExReleaseResourceAndLeaveCriticalRegion(v46);
            PsLeavePriorityRegion();
          }
          MULTIDEVLOCKOBJ::vUnlock(v152);
          MULTIDEVLOCKOBJ::vUnlock(v157);
          v43 = v138;
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
              EtwTraceGreLockReleaseSemaphore(L"hsemOrgMdevPointer", v147);
              if ( v147 )
              {
                ExReleaseResourceAndLeaveCriticalRegion(v147);
                PsLeavePriorityRegion();
              }
            }
            v51 = (HDEV *)v162;
            if ( v162 )
            {
              SGDGetSessionState(v27);
              GreIncrementDisplaySettingsUniqueness();
              if ( v51 != v166 )
                NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v51);
            }
            if ( v138 )
            {
              WdLogSingleEntry0(2LL);
              DrvBackoutMDEV(MDEV, v135);
              NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, MDEV);
              *v153 = 0LL;
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
            v155 = *(_QWORD *)(v47 + 1776);
            if ( *(_QWORD *)(v47 + 24) != v47 )
              *(_QWORD *)(v47 + 24) = v47;
            *(_QWORD *)(v47 + 1736) = *(_QWORD *)(v47 + 2840);
            XEPALOBJ::apalResetColorTable((XEPALOBJ *)&v155);
          }
          else
          {
            DrvSetSharedDevLock(MDEV);
            v133 = DrvSetSharedPalette(MDEV);
            v134 = v133;
            if ( (*(_DWORD *)(v47 + 2140) & 0x100) == 0
              && v133
              && (int)IsDrvRealizeHalftonePaletteSupported() >= 0
              && qword_1C02D5908 )
            {
              qword_1C02D5908(v134, 1LL);
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
        GreAcquireHmgrSemaphore(v32);
        v33 = v138;
        goto LABEL_28;
      }
      v98 = v148;
      *(_QWORD *)((char *)a7 + (_QWORD)v148 + 40) = CloneHDEV;
      *(_QWORD *)((char *)a7 + (_QWORD)v98 + 48) = *((_QWORD *)MDEV + 5);
      v145 = (HDEV)*((_QWORD *)MDEV + 5);
    }
    else
    {
      if ( v31 != 1 )
        goto LABEL_27;
      v99 = 0;
      if ( v30 )
      {
        v100 = (HDEV)*((_QWORD *)a7 + 5);
        while ( 1 )
        {
          v148 = (PERESOURCE)(56LL * v99);
          if ( *(HDEV *)((char *)MDEV + (_QWORD)v148 + 40) == v100 )
            break;
          if ( ++v99 >= v30 )
            goto LABEL_133;
        }
        v101 = DrvCreateCloneHDEV(v100, v30);
        CloneHDEV = v101;
        if ( !v101 )
        {
          DrvLogDrvChangeDisplaySettingsFailures(6LL, 3221225473LL);
          v33 = 1;
          goto LABEL_28;
        }
        v102 = v148;
        v141 = 1;
        *(_QWORD *)((char *)MDEV + (_QWORD)v148 + 40) = v101;
        *(_QWORD *)((char *)MDEV + (_QWORD)v102 + 48) = *((_QWORD *)a7 + 5);
        v145 = (HDEV)*((_QWORD *)a7 + 5);
      }
LABEL_133:
      v143 = 1;
      if ( !CloneHDEV )
        goto LABEL_134;
    }
    v151 = (PERESOURCE)*((_QWORD *)CloneHDEV + 6);
    EngAcquireSemaphore((HSEMAPHORE)v151);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemCloneHdevDevLock", v151, 11LL);
LABEL_134:
    v33 = 0;
    goto LABEL_135;
  }
LABEL_106:
  v67 = v153;
LABEL_107:
  if ( v158 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v158);
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
