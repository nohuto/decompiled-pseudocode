/*
 * XREFs of xxxCreateDesktopEx @ 0x1C00683E4
 * Callers:
 *     xxxResolveDesktop @ 0x1C0067670 (xxxResolveDesktop.c)
 *     EditionCreateDesktopEntryPoint @ 0x1C006B320 (EditionCreateDesktopEntryPoint.c)
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C00B684C (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 *     xxxConnectService @ 0x1C0137D20 (xxxConnectService.c)
 * Callees:
 *     zzzEndDeferWinEventNotify @ 0x1C0025058 (zzzEndDeferWinEventNotify.c)
 *     xxxSetWindowPos @ 0x1C0028898 (xxxSetWindowPos.c)
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     DwmAsyncDesktopFree @ 0x1C005857C (DwmAsyncDesktopFree.c)
 *     zzzDecomposeDesktop @ 0x1C005861C (zzzDecomposeDesktop.c)
 *     DwmAsyncDesktopCreate @ 0x1C0058AC8 (DwmAsyncDesktopCreate.c)
 *     zzzComposeDesktop @ 0x1C0058DA4 (zzzComposeDesktop.c)
 *     PushW32ThreadLock @ 0x1C00621E0 (PushW32ThreadLock.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     OpenDesktopCompletion @ 0x1C0069634 (OpenDesktopCompletion.c)
 *     CloseProtectedHandle @ 0x1C006A694 (CloseProtectedHandle.c)
 *     zzzSetDesktop @ 0x1C006A860 (zzzSetDesktop.c)
 *     _CloseDesktop @ 0x1C006AE68 (_CloseDesktop.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAX@Z @ 0x1C006AFC4 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@.c)
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C00B684C (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C00D0C30 (xxxInheritWindowMonitor.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MapDesktop @ 0x1C00E4A20 (MapDesktop.c)
 *     xxxDestroyWindow @ 0x1C00E8400 (xxxDestroyWindow.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     LinkWindow @ 0x1C00F2760 (LinkWindow.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C0138B94 (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0138BBC (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage @ 0x1C0139CA0 (Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x1C013A2A8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C013A2D8 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CleanupDirtyDesktops@@YAXXZ @ 0x1C01BE5A4 (-CleanupDirtyDesktops@@YAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxCreateDesktopEx(union _LARGE_INTEGER *a1, unsigned int a2, int a3, int a4, HANDLE *a5, int a6)
{
  __int64 v10; // r13
  int v11; // r12d
  __int64 v12; // r8
  NTSTATUS v13; // eax
  int v14; // ebx
  ULONG v15; // eax
  ULONG v16; // eax
  int v17; // eax
  char *v18; // rdi
  ULONG v19; // eax
  __int64 v20; // rbx
  __int64 v21; // r12
  __int64 v22; // rcx
  ULONG v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r15
  __int64 v27; // r9
  __int64 **v28; // rax
  __int64 v29; // rbx
  void *v30; // rax
  int v31; // ecx
  int v32; // r8d
  __int64 v33; // rdx
  unsigned int v34; // ecx
  __int64 v35; // rdx
  __int64 v36; // r8
  int v37; // r15d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  int v43; // r15d
  struct tagWND *Window; // r15
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  int v48; // eax
  struct tagWND *v49; // rbx
  int v50; // ecx
  _QWORD *v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // rcx
  int IsEnabledDeviceUsage; // eax
  int v58; // r15d
  struct tagWINDOWSTATION *v59; // rbx
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  unsigned int v64; // eax
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // r8
  void *v70; // rcx
  bool v71; // zf
  struct tagWND *v72; // r12
  __int64 v73; // rdx
  __int64 v74; // rdx
  __int64 v75; // rcx
  int v76; // eax
  __int64 v77; // rdx
  __int64 v78; // r8
  _BOOL8 v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 ThreadWin32Thread; // rax
  int v85; // eax
  __int64 v86; // rdx
  __int64 v87; // r8
  _BOOL8 v88; // rcx
  __int64 v89; // rax
  int v90; // edx
  _UNKNOWN **v91; // r8
  __int64 v92; // rdx
  __int64 v93; // rcx
  int v94; // eax
  __int64 v95; // r8
  __int64 v96; // rdx
  _QWORD *v97; // rcx
  __int64 v98; // rcx
  unsigned int v99; // eax
  __int64 v100; // rdx
  __int64 v101; // r8
  __int64 v102; // rcx
  __int64 **v103; // rcx
  __int64 v104; // rbx
  void *v105; // rax
  __int64 v106; // rdx
  __int64 v107; // r8
  __int64 v108; // r9
  _BYTE v109[4]; // [rsp+90h] [rbp-208h] BYREF
  int v110; // [rsp+94h] [rbp-204h]
  char v111; // [rsp+98h] [rbp-200h] BYREF
  char v112; // [rsp+99h] [rbp-1FFh] BYREF
  _BYTE v113[6]; // [rsp+9Ah] [rbp-1FEh] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp-1F8h] BYREF
  _BYTE v115[4]; // [rsp+A8h] [rbp-1F0h] BYREF
  unsigned int v116; // [rsp+ACh] [rbp-1ECh]
  int v117; // [rsp+B0h] [rbp-1E8h]
  union _LARGE_INTEGER Timeout; // [rsp+B8h] [rbp-1E0h] BYREF
  int v119; // [rsp+C0h] [rbp-1D8h]
  __int64 v120; // [rsp+C8h] [rbp-1D0h]
  struct tagWND *v121[2]; // [rsp+D0h] [rbp-1C8h]
  struct tagWINDOWSTATION *v122; // [rsp+E8h] [rbp-1B0h]
  _QWORD *v123; // [rsp+F0h] [rbp-1A8h]
  __int64 v124; // [rsp+F8h] [rbp-1A0h]
  _DWORD v125[2]; // [rsp+100h] [rbp-198h] BYREF
  PVOID Object; // [rsp+108h] [rbp-190h] BYREF
  __int64 v127; // [rsp+110h] [rbp-188h]
  __int64 v128; // [rsp+118h] [rbp-180h]
  __int64 v129; // [rsp+120h] [rbp-178h]
  union _LARGE_INTEGER v130; // [rsp+130h] [rbp-168h]
  _QWORD v131[3]; // [rsp+138h] [rbp-160h] BYREF
  int v132; // [rsp+150h] [rbp-148h]
  int v133; // [rsp+154h] [rbp-144h]
  __int128 v134; // [rsp+158h] [rbp-140h] BYREF
  __int64 v135; // [rsp+168h] [rbp-130h]
  _QWORD v136[2]; // [rsp+170h] [rbp-128h] BYREF
  _QWORD v137[2]; // [rsp+180h] [rbp-118h] BYREF
  _QWORD v138[4]; // [rsp+190h] [rbp-108h] BYREF
  __int128 v139; // [rsp+1B0h] [rbp-E8h] BYREF
  __int128 v140; // [rsp+1C0h] [rbp-D8h] BYREF
  _BYTE v141[24]; // [rsp+1D0h] [rbp-C8h] BYREF
  __int128 v142; // [rsp+1E8h] [rbp-B0h] BYREF
  __int64 v143; // [rsp+1F8h] [rbp-A0h]
  _BYTE v144[24]; // [rsp+200h] [rbp-98h] BYREF
  __int128 v145; // [rsp+218h] [rbp-80h] BYREF
  __int64 v146; // [rsp+228h] [rbp-70h]
  _BYTE v147[24]; // [rsp+230h] [rbp-68h] BYREF
  __int128 v148; // [rsp+248h] [rbp-50h] BYREF
  __int64 v149; // [rsp+258h] [rbp-40h]
  _BYTE v150[16]; // [rsp+260h] [rbp-38h] BYREF
  _BYTE v151[16]; // [rsp+270h] [rbp-28h] BYREF

  Handle = 0LL;
  v121[0] = 0LL;
  v120 = 0LL;
  v10 = 0LL;
  v142 = 0LL;
  v143 = 0LL;
  v145 = 0LL;
  v146 = 0LL;
  v148 = 0LL;
  v149 = 0LL;
  v11 = 0;
  v134 = 0LL;
  v135 = 0LL;
  v119 = 0;
  v116 = 0;
  Timeout = a1[1];
  v130 = Timeout;
  v125[0] = *(_DWORD *)SGDGetUserSessionState(0LL);
  v125[1] = a4;
  LOBYTE(v12) = a6 == 0;
  v13 = ObOpenObjectByName(a1, ExDesktopObjectType, v12, 0LL, a3, v125, &Handle);
  v14 = v13;
  if ( v13 < 0 )
  {
    v15 = RtlNtStatusToDosError(v13);
    UserSetLastError(v15);
    CleanupDirtyDesktops();
LABEL_96:
    *a5 = 0LL;
    return (unsigned int)v14;
  }
  if ( v13 == 0x40000000 )
  {
    if ( !(unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
    {
      v16 = RtlNtStatusToDosError(-1073741801);
      UserSetLastError(v16);
      CloseProtectedHandle(Handle);
LABEL_6:
      v14 = -1073741801;
      goto LABEL_96;
    }
    *a5 = Handle;
    v11 = 1;
  }
  Object = 0LL;
  v17 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &Object, 0LL);
  v14 = v17;
  v18 = (char *)Object;
  if ( v17 < 0 )
  {
    v19 = RtlNtStatusToDosError(v17);
    UserSetLastError(v19);
    CloseProtectedHandle(Handle);
    goto LABEL_96;
  }
  if ( v11 )
  {
    v14 = OpenDesktopCompletion(Object, Handle, a2);
    if ( v14 < 0 )
    {
      CloseProtectedHandle(Handle);
      *a5 = 0LL;
    }
    ObfDereferenceObject(v18);
    return (unsigned int)v14;
  }
  v20 = *((_QWORD *)Object + 5);
  v122 = (struct tagWINDOWSTATION *)v20;
  v21 = *(_QWORD *)(v20 + 56);
  v123 = (_QWORD *)*((_QWORD *)Object + 1);
  v123[22] = 0LL;
  if ( !(unsigned int)SetHandleFlag(Handle, 0LL, a2 & 1) )
  {
    CloseProtectedHandle(Handle);
    ObfDereferenceObject(v18);
    goto LABEL_6;
  }
  v22 = gpepCSRSS;
  if ( gpepCSRSS )
  {
    v131[0] = 1LL;
    v131[1] = gpepCSRSS;
    v131[2] = v18;
    v132 = 0;
    v133 = 1;
    v110 = MapDesktop(v131);
    if ( v110 < 0 )
    {
      CloseProtectedHandle(Handle);
      ObfDereferenceObject(v18);
      v23 = RtlNtStatusToDosError(-1073741790);
      UserSetLastError(v23);
      v14 = v110;
      goto LABEL_96;
    }
  }
  v26 = ReferenceDwmApiPort(v22);
  v27 = 0LL;
  if ( v26 )
  {
    if ( (*(_DWORD *)(v20 + 64) & 0x200) != 0 )
    {
      v28 = (__int64 **)*((_QWORD *)v18 + 1);
      v29 = **v28;
      v30 = (void *)ReferenceDwmApiPort(*v28);
      DwmAsyncDesktopCreate(v30, v29);
      zzzComposeDesktop((struct tagDESKTOP *)v18);
      v119 = 1;
    }
    DereferenceDwmApiPort(v26, v24, v25, v27);
  }
  v127 = *(_QWORD *)(gptiCurrent + 424LL);
  v31 = *(_DWORD *)(gptiCurrent + 488LL);
  v32 = v31 & 0x20000000;
  v117 = v31 & 0x20000000;
  v33 = *(_QWORD *)(*(_QWORD *)(v21 + 16) + 424LL);
  *(_QWORD *)(gptiCurrent + 424LL) = v33;
  if ( (*(_DWORD *)(v33 + 12) & 0x2000000) != 0 )
  {
    v34 = v31 | 0x20000000;
    *(_DWORD *)(gptiCurrent + 488LL) = v34;
    if ( !*(_QWORD *)(v33 + 760) )
    {
      v110 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2200LL);
      v34 = *(_DWORD *)(gptiCurrent + 488LL);
      v33 = *(_QWORD *)(gptiCurrent + 424LL);
      v32 = v117;
    }
  }
  else
  {
    v34 = v31 & 0xDFFFFFFF;
  }
  v117 = v34 & 0x10000000 | v32;
  *(_DWORD *)(gptiCurrent + 488LL) = v34 | 0x10000000;
  v124 = *(_QWORD *)(v33 + 336);
  v129 = *(_QWORD *)(gptiCurrent + 456LL);
  v128 = *(_QWORD *)(gptiCurrent + 592LL);
  PushW32ThreadLock((__int64)v18, &v134, UserDereferenceObject);
  ++gdwDeferWinEvent;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v109);
  v37 = zzzSetDesktop(gptiCurrent);
  if ( v37 < 0 )
    goto LABEL_28;
  v116 = W32SetCurrentThreadDpiAwarenessContext(18LL);
  *(_OWORD *)v121 = *(_OWORD *)(*gpDispInfo + 24LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(gpDispInfo);
  v40 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v39 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v40 = v39 & CurrentProcessWin32Process;
  }
  if ( !v40 )
    goto LABEL_35;
  v41 = PsGetCurrentProcessWin32Process(v39);
  v42 = v41;
  if ( v41 )
    v42 = -(__int64)(*(_QWORD *)v41 != 0LL) & v41;
  v43 = 1;
  if ( !(unsigned int)IsImmersiveAppRestricted(v42) )
LABEL_35:
    v43 = 0;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v141, 0LL);
  Window = (struct tagWND *)xxxCreateWindowEx(
                              0,
                              32769LL,
                              32769LL,
                              0LL,
                              0x82000000,
                              (__int32)v121[0],
                              SHIDWORD(v121[0]),
                              LODWORD(v121[1]) - LODWORD(v121[0]),
                              HIDWORD(v121[1]) - HIDWORD(v121[0]),
                              0LL,
                              (__int64)v141,
                              hModuleWin,
                              0LL,
                              1u,
                              0x30Au,
                              v43,
                              0LL);
  v121[0] = Window;
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v141);
  if ( !Window )
    goto LABEL_37;
  ThreadLock(Window, &v142);
  v46 = PsGetCurrentProcessWin32Process(v45);
  if ( !v46 || (-(__int64)(*(_QWORD *)v46 != 0LL) & v46) == 0 )
    goto LABEL_43;
  v47 = PsGetCurrentProcessWin32Process(-*(_QWORD *)v46);
  if ( v47 )
    v47 &= -(__int64)(*(_QWORD *)v47 != 0LL);
  v48 = IsImmersiveAppRestricted(v47);
  v110 = 1;
  if ( !v48 )
LABEL_43:
    v110 = 0;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v144, 0LL);
  v49 = (struct tagWND *)xxxCreateWindowEx(
                           0,
                           (unsigned __int16)gatomMessage,
                           (unsigned __int16)gatomMessage,
                           0LL,
                           0x82000000,
                           0,
                           0,
                           0x64u,
                           0x64u,
                           0LL,
                           (__int64)v144,
                           hModuleWin,
                           0LL,
                           1u,
                           0x30Au,
                           v110,
                           0LL);
  v120 = (__int64)v49;
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v144);
  if ( !v49 )
    goto LABEL_37;
  v50 = *(unsigned __int16 *)(*((_QWORD *)v49 + 5) + 42LL);
  if ( (v50 & 0xFFFF3FFF) != 0 )
  {
    if ( (v50 & 0x1000) != 0 )
    {
      v110 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 2305LL);
    }
    v37 = -1073741790;
    goto LABEL_28;
  }
  ThreadLock(v49, &v145);
  *(_WORD *)(*((_QWORD *)v49 + 5) + 42LL) = *(_WORD *)(*((_QWORD *)v49 + 5) + 42LL) & 0xC000 | 0x29F;
  v51 = v123 + 3;
  *(_QWORD *)(*v123 + 8LL) = *((_QWORD *)Window + 6);
  v136[0] = v51;
  v136[1] = Window;
  HMAssignmentLock(v136, 0LL);
  v139 = *(_OWORD *)LockPointer(v150, (char *)v49 + 104, *(_QWORD *)(v21 + 8));
  HMAssignmentLock(&v139, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v115);
  xxxInheritWindowMonitor(v49);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v115, v52, v53);
  LinkWindow(v49);
  v137[0] = v18 + 104;
  v137[1] = v49;
  HMAssignmentLock(v137, 0LL);
  *(_QWORD *)(*((_QWORD *)v49 + 5) + 64LL) = 0LL;
  HMAssignmentUnlock((char *)v49 + 120);
  v140 = *(_OWORD *)LockPointer(v151, (char *)Window + 104, *(_QWORD *)(v21 + 8));
  HMAssignmentLock(&v140, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v111);
  xxxInheritWindowMonitor(Window);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v111, v54, v55);
  LinkWindow(Window);
  *(_QWORD *)(*((_QWORD *)Window + 5) + 64LL) = 0LL;
  HMAssignmentUnlock((char *)Window + 120);
  if ( (*(_DWORD *)(gpDispInfo + 132LL) & 1) == 0 )
  {
    v56 = *((_QWORD *)Window + 5);
    *(_QWORD *)(v56 + 168) = *(_QWORD *)(gpDispInfo + 120LL);
  }
  IsEnabledDeviceUsage = Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage(v56, gpDispInfo);
  v58 = 0;
  v59 = v122;
  if ( !IsEnabledDeviceUsage && (*((_DWORD *)v122 + 16) & 4) == 0 )
  {
    v60 = PsGetCurrentProcessWin32Process(IsEnabledDeviceUsage != 0);
    if ( v60 && (-(__int64)(*(_QWORD *)v60 != 0LL) & v60) != 0 )
    {
      v61 = PsGetCurrentProcessWin32Process(-*(_QWORD *)v60);
      if ( v61 )
        v61 &= -(__int64)(*(_QWORD *)v61 != 0LL);
      if ( (unsigned int)IsImmersiveAppRestricted(v61) )
        v58 = 1;
    }
    SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v147, 0LL);
    v10 = xxxCreateWindowEx(
            136,
            32774LL,
            32774LL,
            0LL,
            0x80800000,
            0,
            0,
            0x64u,
            0x64u,
            *((struct tagWND **)v18 + 13),
            (__int64)v147,
            hModuleWin,
            0LL,
            1u,
            0x30Au,
            v58,
            0LL);
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v147);
    if ( v10 )
    {
      v138[0] = v18 + 112;
      v138[1] = v10;
      HMAssignmentLock(v138, 0LL);
      ThreadLock(v10, &v148);
      v59 = v122;
      goto LABEL_61;
    }
LABEL_37:
    v37 = -1073741801;
LABEL_28:
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v109, v35, v36);
    goto LABEL_116;
  }
LABEL_61:
  HMChangeOwnerThread(v123[3], *(_QWORD *)(v21 + 16));
  HMChangeOwnerThread(v120, *(_QWORD *)(v21 + 16));
  if ( !(unsigned int)Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage(v63, v62)
    && (*((_DWORD *)v59 + 16) & 4) == 0 )
  {
    HMChangeOwnerThread(v10, *(_QWORD *)(v21 + 16));
  }
  W32SetCurrentThreadDpiAwarenessContext(v116);
  v116 = 0;
  *(_QWORD *)(gptiCurrent + 424LL) = v127;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x10000000) == 0 )
  {
    v110 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2411LL);
  }
  v64 = v117 | *(_DWORD *)(gptiCurrent + 488LL) & 0xCFFFFFFF;
  *(_DWORD *)(gptiCurrent + 488LL) = v64;
  if ( (v64 & 0x20000000) != 0 && !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 760LL) )
  {
    v110 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2413LL);
  }
  v37 = zzzSetDesktop(gptiCurrent);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v109, v65, v66);
  if ( v37 >= 0 )
  {
    zzzEndDeferWinEventNotify();
    v67 = 0LL;
    if ( !*(_QWORD *)(v21 + 56) )
    {
LABEL_85:
      v71 = v21 == gTermIO[0];
      v72 = v121[0];
      if ( v71 )
        xxxSetWindowPos(v121[0], 1LL, 0LL, 0LL, 0, 0, 1115);
      if ( !v124 )
        UnlockObjectAssignment(*(_QWORD *)(gptiCurrent + 424LL) + 336LL);
      v73 = 0LL;
      if ( gspdeskDisconnect || v18 != grpdeskLogon )
        goto LABEL_99;
      if ( xxxCreateDisconnectDesktop((HWINSTA)Timeout.QuadPart, v59) )
      {
        KeSetEvent(gpEventDiconnectDesktop, 1, 0);
        gdwHydraHint |= 0x40000u;
        goto LABEL_99;
      }
      v76 = Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage(v75, v74);
      v79 = v76 != 0;
      if ( !v76 && v10 )
        ThreadUnlock1(v79, v77, v78);
      ThreadUnlock1(v79, v77, v78);
      ThreadUnlock1(v81, v80, v82);
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)(ThreadWin32Thread + 16) = v134;
      ObfDereferenceObject(v18);
      CloseDesktop(Handle);
      v14 = -1073741823;
      goto LABEL_96;
    }
    if ( (*(_DWORD *)v21 & 2) == 0 )
    {
      *(_QWORD *)(gptiRit + 616LL) = v59;
      *(_QWORD *)(*(_QWORD *)(v21 + 16) + 616LL) = v59;
LABEL_75:
      KeSetEvent(*(PRKEVENT *)(v21 + 56), 1, 0);
      if ( (*(_DWORD *)v21 & 2) == 0 )
      {
        LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v112);
        while ( !grpdeskRitInput )
        {
          if ( gpEventSwitchDesktop )
          {
            Timeout.QuadPart = -200000LL;
            KeWaitForSingleObject(gpEventSwitchDesktop, Executive, 0, 0, &Timeout);
          }
          else
          {
            UserSleep(20LL);
          }
        }
        LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v112);
      }
      v70 = *(void **)(v21 + 56);
      if ( v70 )
      {
        ObfDereferenceObject(v70);
        *(_QWORD *)(v21 + 56) = 0LL;
      }
      _InterlockedOr(gpsi, 0x800u);
      Timeout = v130;
      v67 = 0LL;
      goto LABEL_85;
    }
    ++gdwDeferWinEvent;
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v113);
    v37 = zzzSetDesktop(*(struct tagTHREADINFO **)(v21 + 16));
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v113, v68, v69);
    if ( v37 >= 0 )
    {
      zzzEndDeferWinEventNotify();
      goto LABEL_75;
    }
  }
  while ( 1 )
  {
LABEL_116:
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v112);
    if ( v116 )
      W32SetCurrentThreadDpiAwarenessContext(v116);
    v94 = Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage(v93, v92);
    v96 = 0LL;
    if ( !v94 && v10 )
    {
      xxxDestroyWindow(v10);
      HMAssignmentUnlock(v18 + 112);
      v96 = 0LL;
    }
    if ( v120 )
    {
      xxxDestroyWindow(v120);
      HMAssignmentUnlock(v18 + 104);
      v96 = 0LL;
    }
    v72 = v121[0];
    if ( v121[0] )
    {
      xxxDestroyWindow(v121[0]);
      v97 = v123 + 3;
      *(_QWORD *)(*v123 + 8LL) = 0LL;
      HMAssignmentUnlock(v97);
      v96 = 0LL;
    }
    v98 = v127;
    *(_QWORD *)(gptiCurrent + 424LL) = v127;
    v99 = v117 | *(_DWORD *)(gptiCurrent + 488LL) & 0xCFFFFFFF;
    *(_DWORD *)(gptiCurrent + 488LL) = v99;
    if ( (v99 & 0x20000000) != 0 && !*(_QWORD *)(v98 + 760) )
    {
      v110 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2631LL);
    }
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v112, v96, v95);
    zzzEndDeferWinEventNotify();
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v111);
    zzzSetDesktop(gptiCurrent);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v111, v100, v101);
    if ( v119 )
    {
      Timeout.QuadPart = ReferenceDwmApiPort(v102);
      if ( Timeout.QuadPart )
      {
        zzzDecomposeDesktop((struct tagDESKTOP *)v18);
        v103 = (__int64 **)*((_QWORD *)v18 + 1);
        v104 = **v103;
        v105 = (void *)ReferenceDwmApiPort(v103);
        DwmAsyncDesktopFree(v105, v104);
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))DereferenceDwmApiPort)(
          (union _LARGE_INTEGER)Timeout.QuadPart,
          v106,
          v107,
          v108);
      }
    }
    CloseProtectedHandle(Handle);
    Handle = 0LL;
    if ( !v124 )
      UnlockObjectAssignment(*(_QWORD *)(gptiCurrent + 424LL) + 336LL);
LABEL_99:
    v85 = Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage(v67, v73);
    v88 = v85 != 0;
    if ( !v85 && v10 )
      v10 = ThreadUnlock1(v88, v86, v87);
    if ( v120 )
      v120 = ThreadUnlock1(v88, v86, v87);
    if ( v72 )
      v121[0] = (struct tagWND *)ThreadUnlock1(v88, v86, v87);
    v89 = W32GetThreadWin32Thread(KeGetCurrentThread());
    *(_QWORD *)(v89 + 16) = v134;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
      || (LOBYTE(v90) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v90) = 0;
    }
    v91 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v90 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v91) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v90,
        (_DWORD)v91,
        22,
        4,
        3,
        22,
        (__int64)&WPP_580b03b5f0a135a81a235548571d0f77_Traceguids);
    }
    if ( !Handle || (unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
      break;
    v37 = -1073741801;
  }
  if ( v37 >= 0 )
    *((_DWORD *)v18 + 12) |= 0x10u;
  ObfDereferenceObject(v18);
  *a5 = Handle;
  return (unsigned int)v37;
}
