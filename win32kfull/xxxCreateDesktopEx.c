/*
 * XREFs of xxxCreateDesktopEx @ 0x1C00C03D4
 * Callers:
 *     EditionCreateDesktopEntryPoint @ 0x1C00BF140 (EditionCreateDesktopEntryPoint.c)
 *     xxxResolveDesktop @ 0x1C00BF660 (xxxResolveDesktop.c)
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C00C1594 (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 *     xxxConnectService @ 0x1C012B764 (xxxConnectService.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0028F4C (xxxSetWindowPos.c)
 *     zzzEndDeferWinEventNotify @ 0x1C002EF28 (zzzEndDeferWinEventNotify.c)
 *     zzzSetDesktop @ 0x1C0036340 (zzzSetDesktop.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MapDesktop @ 0x1C003E450 (MapDesktop.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     LinkWindow @ 0x1C00639C0 (LinkWindow.c)
 *     DwmAsyncDesktopFree @ 0x1C007CB6C (DwmAsyncDesktopFree.c)
 *     zzzDecomposeDesktop @ 0x1C007CC0C (zzzDecomposeDesktop.c)
 *     DwmAsyncDesktopCreate @ 0x1C007D0B8 (DwmAsyncDesktopCreate.c)
 *     zzzComposeDesktop @ 0x1C007D394 (zzzComposeDesktop.c)
 *     _CloseDesktop @ 0x1C00938E8 (_CloseDesktop.c)
 *     CloseProtectedHandle @ 0x1C0094854 (CloseProtectedHandle.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     xxxInheritWindowMonitor @ 0x1C00ADDA0 (xxxInheritWindowMonitor.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 *     OpenDesktopCompletion @ 0x1C00C119C (OpenDesktopCompletion.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00C131C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@.c)
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C00C1594 (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C012C5E4 (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C012C60C (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x1C012D7EC (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C012D81C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CleanupDirtyDesktops@@YAXXZ @ 0x1C01BF744 (-CleanupDirtyDesktops@@YAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxCreateDesktopEx(union _LARGE_INTEGER *a1, unsigned int a2, int a3, int a4, HANDLE *a5, int a6)
{
  __int64 *v10; // r13
  int v11; // r12d
  __int64 v12; // r8
  NTSTATUS v13; // eax
  int v14; // ebx
  int v15; // eax
  char *v16; // rdi
  __int64 v18; // rbx
  __int64 v19; // r12
  __int64 v20; // rcx
  __int64 v21; // r15
  int v22; // ecx
  int v23; // r8d
  __int64 v24; // rdx
  unsigned int v25; // ecx
  int v26; // r15d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  int v32; // r15d
  struct tagWND *Window; // r15
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // eax
  __int64 *v38; // rbx
  int v39; // ecx
  _QWORD *v40; // rdx
  __int64 v41; // rcx
  struct tagWINDOWSTATION *v42; // r15
  unsigned int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // r8
  bool v46; // zf
  struct tagWND *v47; // r12
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rax
  int v51; // edx
  _UNKNOWN **v52; // r8
  void *v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rax
  int v56; // r13d
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  struct tagWINDOWSTATION *v60; // rdx
  ULONG v61; // eax
  ULONG v62; // eax
  ULONG v63; // eax
  ULONG v64; // eax
  __int64 **v65; // rax
  __int64 v66; // rbx
  void *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 ThreadWin32Thread; // rax
  _QWORD *v72; // rcx
  __int64 v73; // rcx
  unsigned int v74; // eax
  __int64 v75; // rcx
  __int64 **v76; // rcx
  __int64 v77; // rbx
  void *v78; // rax
  _BYTE v79[4]; // [rsp+90h] [rbp-208h] BYREF
  int v80; // [rsp+94h] [rbp-204h]
  char v81; // [rsp+98h] [rbp-200h] BYREF
  char v82; // [rsp+99h] [rbp-1FFh] BYREF
  _BYTE v83[6]; // [rsp+9Ah] [rbp-1FEh] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp-1F8h] BYREF
  _BYTE v85[4]; // [rsp+A8h] [rbp-1F0h] BYREF
  unsigned int v86; // [rsp+ACh] [rbp-1ECh]
  int v87; // [rsp+B0h] [rbp-1E8h]
  union _LARGE_INTEGER Timeout; // [rsp+B8h] [rbp-1E0h] BYREF
  int v89; // [rsp+C0h] [rbp-1D8h]
  __int64 *v90; // [rsp+C8h] [rbp-1D0h]
  struct tagWND *v91[2]; // [rsp+D0h] [rbp-1C8h]
  struct tagWINDOWSTATION *v92; // [rsp+E8h] [rbp-1B0h]
  _QWORD *v93; // [rsp+F0h] [rbp-1A8h]
  __int64 v94; // [rsp+F8h] [rbp-1A0h]
  _DWORD v95[2]; // [rsp+100h] [rbp-198h] BYREF
  PVOID Object; // [rsp+108h] [rbp-190h] BYREF
  __int64 v97; // [rsp+110h] [rbp-188h]
  void *v98; // [rsp+118h] [rbp-180h]
  __int64 v99; // [rsp+120h] [rbp-178h]
  union _LARGE_INTEGER v100; // [rsp+130h] [rbp-168h]
  _QWORD v101[3]; // [rsp+138h] [rbp-160h] BYREF
  int v102; // [rsp+150h] [rbp-148h]
  int v103; // [rsp+154h] [rbp-144h]
  __int128 v104; // [rsp+158h] [rbp-140h] BYREF
  __int64 v105; // [rsp+168h] [rbp-130h]
  _QWORD v106[2]; // [rsp+170h] [rbp-128h] BYREF
  _QWORD v107[2]; // [rsp+180h] [rbp-118h] BYREF
  _QWORD v108[4]; // [rsp+190h] [rbp-108h] BYREF
  __int128 v109; // [rsp+1B0h] [rbp-E8h] BYREF
  __int128 v110; // [rsp+1C0h] [rbp-D8h] BYREF
  _BYTE v111[24]; // [rsp+1D0h] [rbp-C8h] BYREF
  __int128 v112; // [rsp+1E8h] [rbp-B0h] BYREF
  __int64 v113; // [rsp+1F8h] [rbp-A0h]
  _BYTE v114[24]; // [rsp+200h] [rbp-98h] BYREF
  __int128 v115; // [rsp+218h] [rbp-80h] BYREF
  __int64 v116; // [rsp+228h] [rbp-70h]
  _BYTE v117[24]; // [rsp+230h] [rbp-68h] BYREF
  __int128 v118; // [rsp+248h] [rbp-50h] BYREF
  __int64 v119; // [rsp+258h] [rbp-40h]
  _BYTE v120[16]; // [rsp+260h] [rbp-38h] BYREF
  _BYTE v121[16]; // [rsp+270h] [rbp-28h] BYREF

  Handle = 0LL;
  v91[0] = 0LL;
  v90 = 0LL;
  v10 = 0LL;
  v112 = 0LL;
  v113 = 0LL;
  v115 = 0LL;
  v116 = 0LL;
  v118 = 0LL;
  v119 = 0LL;
  v11 = 0;
  v104 = 0LL;
  v105 = 0LL;
  v89 = 0;
  v86 = 0;
  Timeout = a1[1];
  v100 = Timeout;
  v95[0] = *(_DWORD *)SGDGetUserSessionState(0LL);
  v95[1] = a4;
  LOBYTE(v12) = a6 == 0;
  v13 = ObOpenObjectByName(a1, ExDesktopObjectType, v12, 0LL, a3, v95, &Handle);
  v14 = v13;
  if ( v13 < 0 )
  {
    v61 = RtlNtStatusToDosError(v13);
    UserSetLastError(v61);
    CleanupDirtyDesktops();
    goto LABEL_112;
  }
  if ( v13 == 0x40000000 )
  {
    if ( !(unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
    {
      v62 = RtlNtStatusToDosError(-1073741801);
      UserSetLastError(v62);
      CloseProtectedHandle(Handle, 0);
LABEL_96:
      v14 = -1073741801;
      goto LABEL_112;
    }
    *a5 = Handle;
    v11 = 1;
  }
  Object = 0LL;
  v15 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &Object, 0LL);
  v14 = v15;
  v16 = (char *)Object;
  if ( v15 < 0 )
  {
    v63 = RtlNtStatusToDosError(v15);
    UserSetLastError(v63);
    CloseProtectedHandle(Handle, 0);
    goto LABEL_112;
  }
  if ( v11 )
  {
    v14 = OpenDesktopCompletion(Object, Handle, a2);
    if ( v14 < 0 )
    {
      CloseProtectedHandle(Handle, 0);
      *a5 = 0LL;
    }
    ObfDereferenceObject(v16);
    return (unsigned int)v14;
  }
  v18 = *((_QWORD *)Object + 5);
  v92 = (struct tagWINDOWSTATION *)v18;
  v19 = *(_QWORD *)(v18 + 56);
  v93 = (_QWORD *)*((_QWORD *)Object + 1);
  v93[22] = 0LL;
  if ( !(unsigned int)SetHandleFlag(Handle, 0LL, a2 & 1) )
  {
    CloseProtectedHandle(Handle, 0);
    ObfDereferenceObject(v16);
    goto LABEL_96;
  }
  v20 = gpepCSRSS;
  if ( gpepCSRSS )
  {
    v101[0] = 1LL;
    v101[1] = gpepCSRSS;
    v101[2] = v16;
    v102 = 0;
    v103 = 1;
    v80 = MapDesktop((__int64)v101);
    if ( v80 < 0 )
    {
      CloseProtectedHandle(Handle, 0);
      ObfDereferenceObject(v16);
      v64 = RtlNtStatusToDosError(-1073741790);
      UserSetLastError(v64);
      v14 = v80;
      goto LABEL_112;
    }
  }
  v21 = ReferenceDwmApiPort(v20);
  if ( v21 )
  {
    if ( (*(_DWORD *)(v18 + 64) & 0x200) != 0 )
    {
      v65 = (__int64 **)*((_QWORD *)v16 + 1);
      v66 = **v65;
      v67 = (void *)ReferenceDwmApiPort(*v65);
      DwmAsyncDesktopCreate(v67, v66);
      zzzComposeDesktop((struct tagDESKTOP *)v16);
      v89 = 1;
    }
    DereferenceDwmApiPort(v21);
  }
  v97 = *(_QWORD *)(gptiCurrent + 424LL);
  v22 = *(_DWORD *)(gptiCurrent + 488LL);
  v23 = v22 & 0x20000000;
  v87 = v22 & 0x20000000;
  v24 = *(_QWORD *)(*(_QWORD *)(v19 + 16) + 424LL);
  *(_QWORD *)(gptiCurrent + 424LL) = v24;
  if ( (*(_DWORD *)(v24 + 12) & 0x2000000) != 0 )
  {
    v25 = v22 | 0x20000000;
    *(_DWORD *)(gptiCurrent + 488LL) = v25;
    if ( !*(_QWORD *)(v24 + 760) )
    {
      v80 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2199LL);
      v25 = *(_DWORD *)(gptiCurrent + 488LL);
      v24 = *(_QWORD *)(gptiCurrent + 424LL);
      v23 = v87;
    }
  }
  else
  {
    v25 = v22 & 0xDFFFFFFF;
  }
  v87 = v25 & 0x10000000 | v23;
  *(_DWORD *)(gptiCurrent + 488LL) = v25 | 0x10000000;
  v94 = *(_QWORD *)(v24 + 336);
  v99 = *(_QWORD *)(gptiCurrent + 456LL);
  v98 = *(void **)(gptiCurrent + 592LL);
  PushW32ThreadLock((__int64)v16, &v104, UserDereferenceObject);
  ++gdwDeferWinEvent;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v79);
  v26 = zzzSetDesktop(gptiCurrent, (__int64)v16, Handle);
  if ( v26 < 0 )
  {
LABEL_102:
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v79);
    goto LABEL_116;
  }
  v86 = W32SetCurrentThreadDpiAwarenessContext(18LL);
  *(_OWORD *)v91 = *(_OWORD *)(*gpDispInfo + 24LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(gpDispInfo);
  v29 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v28 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v29 = v28 & CurrentProcessWin32Process;
  }
  if ( !v29 )
    goto LABEL_24;
  v30 = PsGetCurrentProcessWin32Process(v28);
  v31 = v30;
  if ( v30 )
    v31 = -(__int64)(*(_QWORD *)v30 != 0LL) & v30;
  v32 = 1;
  if ( !(unsigned int)IsImmersiveAppRestricted(v31) )
LABEL_24:
    v32 = 0;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v111, 0LL);
  Window = (struct tagWND *)xxxCreateWindowEx(
                              0,
                              32769LL,
                              32769LL,
                              0LL,
                              0x82000000,
                              (int)v91[0],
                              SHIDWORD(v91[0]),
                              LODWORD(v91[1]) - LODWORD(v91[0]),
                              HIDWORD(v91[1]) - HIDWORD(v91[0]),
                              0LL,
                              (__int64)v111,
                              hModuleWin,
                              0LL,
                              1,
                              0x30Au,
                              v32,
                              0LL);
  v91[0] = Window;
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v111);
  if ( !Window )
    goto LABEL_103;
  ThreadLock(Window, &v112);
  v35 = PsGetCurrentProcessWin32Process(v34);
  if ( !v35 || (-(__int64)(*(_QWORD *)v35 != 0LL) & v35) == 0 )
    goto LABEL_31;
  v36 = PsGetCurrentProcessWin32Process(-*(_QWORD *)v35);
  if ( v36 )
    v36 &= -(__int64)(*(_QWORD *)v36 != 0LL);
  v37 = IsImmersiveAppRestricted(v36);
  v80 = 1;
  if ( !v37 )
LABEL_31:
    v80 = 0;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v114, 0LL);
  v38 = (__int64 *)xxxCreateWindowEx(
                     0,
                     (unsigned __int16)gatomMessage,
                     (unsigned __int16)gatomMessage,
                     0LL,
                     0x82000000,
                     0,
                     0,
                     100,
                     100,
                     0LL,
                     (__int64)v114,
                     hModuleWin,
                     0LL,
                     1,
                     0x30Au,
                     v80,
                     0LL);
  v90 = v38;
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v114);
  if ( !v38 )
  {
LABEL_103:
    v26 = -1073741801;
    goto LABEL_102;
  }
  v39 = *(unsigned __int16 *)(v38[5] + 42);
  if ( (v39 & 0xFFFF3FFF) != 0 )
  {
    if ( (v39 & 0x1000) != 0 )
    {
      v80 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 2304LL);
    }
    v26 = -1073741790;
    goto LABEL_102;
  }
  ThreadLock(v38, &v115);
  *(_WORD *)(v38[5] + 42) = *(_WORD *)(v38[5] + 42) & 0xC000 | 0x29F;
  v40 = v93 + 3;
  *(_QWORD *)(*v93 + 8LL) = *((_QWORD *)Window + 6);
  v106[0] = v40;
  v106[1] = Window;
  HMAssignmentLock(v106, 0LL);
  v109 = *(_OWORD *)LockPointer(v120, v38 + 13);
  HMAssignmentLock(&v109, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v85);
  xxxInheritWindowMonitor((struct tagWND *)v38, 0LL, 0);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v85);
  LinkWindow((struct tagWND *)v38, 0LL, *(_QWORD **)(v19 + 8));
  v107[0] = v16 + 104;
  v107[1] = v38;
  HMAssignmentLock(v107, 0LL);
  *(_QWORD *)(v38[5] + 64) = 0LL;
  HMAssignmentUnlock(v38 + 15);
  v110 = *(_OWORD *)LockPointer(v121, (char *)Window + 104);
  HMAssignmentLock(&v110, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v81);
  xxxInheritWindowMonitor(Window, 0LL, 0);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v81);
  LinkWindow(Window, 0LL, *(_QWORD **)(v19 + 8));
  *(_QWORD *)(*((_QWORD *)Window + 5) + 64LL) = 0LL;
  HMAssignmentUnlock((char *)Window + 120);
  if ( (*(_DWORD *)(gpDispInfo + 132LL) & 1) == 0 )
  {
    v41 = *((_QWORD *)Window + 5);
    *(_QWORD *)(v41 + 168) = *(_QWORD *)(gpDispInfo + 120LL);
  }
  v42 = v92;
  if ( (*((_DWORD *)v92 + 16) & 4) == 0 )
  {
    v54 = PsGetCurrentProcessWin32Process(v41);
    if ( !v54 || (-(__int64)(*(_QWORD *)v54 != 0LL) & v54) == 0 )
      goto LABEL_81;
    v55 = PsGetCurrentProcessWin32Process(-*(_QWORD *)v54);
    if ( v55 )
      v55 &= -(__int64)(*(_QWORD *)v55 != 0LL);
    v56 = 1;
    if ( !(unsigned int)IsImmersiveAppRestricted(v55) )
LABEL_81:
      v56 = 0;
    SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v117, 0LL);
    v10 = (__int64 *)xxxCreateWindowEx(
                       136,
                       32774LL,
                       32774LL,
                       0LL,
                       0x80800000,
                       0,
                       0,
                       100,
                       100,
                       *((struct tagWND **)v16 + 13),
                       (__int64)v117,
                       hModuleWin,
                       0LL,
                       1,
                       0x30Au,
                       v56,
                       0LL);
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v117);
    if ( v10 )
    {
      v108[0] = v16 + 112;
      v108[1] = v10;
      HMAssignmentLock(v108, 0LL);
      ThreadLock(v10, &v118);
      v38 = v90;
      goto LABEL_37;
    }
    goto LABEL_103;
  }
LABEL_37:
  HMChangeOwnerThread(v93[3], *(_QWORD *)(v19 + 16));
  HMChangeOwnerThread(v38, *(_QWORD *)(v19 + 16));
  if ( (*((_DWORD *)v42 + 16) & 4) == 0 )
    HMChangeOwnerThread(v10, *(_QWORD *)(v19 + 16));
  W32SetCurrentThreadDpiAwarenessContext(v86);
  v86 = 0;
  *(_QWORD *)(gptiCurrent + 424LL) = v97;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x10000000) == 0 )
  {
    v80 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2406LL);
  }
  v43 = v87 | *(_DWORD *)(gptiCurrent + 488LL) & 0xCFFFFFFF;
  *(_DWORD *)(gptiCurrent + 488LL) = v43;
  if ( (v43 & 0x20000000) != 0 && !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 760LL) )
  {
    v80 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2408LL);
  }
  v26 = zzzSetDesktop(gptiCurrent, v99, v98);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v79);
  if ( v26 < 0 )
    goto LABEL_116;
  zzzEndDeferWinEventNotify();
  if ( *(_QWORD *)(v19 + 56) )
  {
    if ( (*(_DWORD *)v19 & 2) != 0 )
    {
      ++gdwDeferWinEvent;
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v83);
      v26 = zzzSetDesktop(*(struct tagTHREADINFO **)(v19 + 16), (__int64)v16, 0LL);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v83);
      if ( v26 < 0 )
        goto LABEL_116;
      zzzEndDeferWinEventNotify();
    }
    else
    {
      v60 = v92;
      *(_QWORD *)(gptiRit + 616LL) = v92;
      *(_QWORD *)(*(_QWORD *)(v19 + 16) + 616LL) = v60;
    }
    KeSetEvent(*(PRKEVENT *)(v19 + 56), 1, 0);
    if ( (*(_DWORD *)v19 & 2) == 0 )
    {
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v82);
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
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v82);
    }
    v53 = *(void **)(v19 + 56);
    if ( v53 )
    {
      ObfDereferenceObject(v53);
      *(_QWORD *)(v19 + 56) = 0LL;
    }
    _InterlockedOr(gpsi, 0x800u);
    Timeout = v100;
  }
  v46 = v19 == gTermIO[0];
  v47 = v91[0];
  if ( v46 )
    xxxSetWindowPos(v91[0], 1LL, 0LL, 0LL, 0, 0, 1115);
  if ( !v94 )
    UnlockObjectAssignment(*(_QWORD *)(gptiCurrent + 424LL) + 336LL);
  v48 = 0LL;
  if ( !gspdeskDisconnect && v16 == grpdeskLogon )
  {
    if ( xxxCreateDisconnectDesktop((HWINSTA)Timeout.QuadPart, v92) )
    {
      KeSetEvent(gpEventDiconnectDesktop, 1, 0);
      gdwHydraHint |= 0x40000u;
      goto LABEL_49;
    }
    if ( v10 )
      ThreadUnlock1(v58, v57, v59);
    ThreadUnlock1(v58, v57, v59);
    ThreadUnlock1(v69, v68, v70);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)(ThreadWin32Thread + 16) = v104;
    ObfDereferenceObject(v16);
    CloseDesktop((unsigned __int64)Handle, 0);
    v14 = -1073741823;
LABEL_112:
    *a5 = 0LL;
    return (unsigned int)v14;
  }
  while ( 1 )
  {
LABEL_49:
    if ( v10 )
      v10 = (__int64 *)ThreadUnlock1(v48, v44, v45);
    v49 = 0LL;
    if ( v90 )
      v90 = (__int64 *)ThreadUnlock1(0LL, v44, v45);
    if ( v47 )
      v91[0] = (struct tagWND *)ThreadUnlock1(v49, v44, v45);
    v50 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)(v50 + 16) = v104;
    LOBYTE(v51) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    v52 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v51 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v52) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v51,
        (_DWORD)v52,
        22,
        4,
        3,
        22,
        (__int64)&WPP_a5ab45ac81c5376cb65aab9e372e2957_Traceguids);
    }
    if ( !Handle || (unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
      break;
    v26 = -1073741801;
LABEL_116:
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v82);
    if ( v86 )
      W32SetCurrentThreadDpiAwarenessContext(v86);
    if ( v10 )
    {
      xxxDestroyWindow(v10);
      HMAssignmentUnlock(v16 + 112);
    }
    if ( v90 )
    {
      xxxDestroyWindow(v90);
      HMAssignmentUnlock(v16 + 104);
    }
    v47 = v91[0];
    if ( v91[0] )
    {
      xxxDestroyWindow((__int64 *)v91[0]);
      v72 = v93 + 3;
      *(_QWORD *)(*v93 + 8LL) = 0LL;
      HMAssignmentUnlock(v72);
    }
    v73 = v97;
    *(_QWORD *)(gptiCurrent + 424LL) = v97;
    v74 = v87 | *(_DWORD *)(gptiCurrent + 488LL) & 0xCFFFFFFF;
    *(_DWORD *)(gptiCurrent + 488LL) = v74;
    if ( (v74 & 0x20000000) != 0 && !*(_QWORD *)(v73 + 760) )
    {
      v80 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2620LL);
    }
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v82);
    zzzEndDeferWinEventNotify();
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v81);
    zzzSetDesktop(gptiCurrent, v99, v98);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v81);
    if ( v89 )
    {
      Timeout.QuadPart = ReferenceDwmApiPort(v75);
      if ( Timeout.QuadPart )
      {
        zzzDecomposeDesktop((struct tagDESKTOP *)v16, 0);
        v76 = (__int64 **)*((_QWORD *)v16 + 1);
        v77 = **v76;
        v78 = (void *)ReferenceDwmApiPort(v76);
        DwmAsyncDesktopFree(v78, v77);
        ((void (__fastcall *)(_QWORD))DereferenceDwmApiPort)((union _LARGE_INTEGER)Timeout.QuadPart);
      }
    }
    CloseProtectedHandle(Handle, 0);
    Handle = 0LL;
    if ( !v94 )
      UnlockObjectAssignment(*(_QWORD *)(gptiCurrent + 424LL) + 336LL);
  }
  if ( v26 >= 0 )
    *((_DWORD *)v16 + 12) |= 0x10u;
  ObfDereferenceObject(v16);
  *a5 = Handle;
  return (unsigned int)v26;
}
