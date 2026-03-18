/*
 * XREFs of xxxCreateDesktopEx @ 0x1C00CFDF4
 * Callers:
 *     EditionCreateDesktopEntryPoint @ 0x1C00CE610 (EditionCreateDesktopEntryPoint.c)
 *     xxxResolveDesktop @ 0x1C00CF130 (xxxResolveDesktop.c)
 *     xxxConnectService @ 0x1C00D159C (xxxConnectService.c)
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C00D31F8 (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0048944 (zzzEndDeferWinEventNotify.c)
 *     xxxSetWindowPos @ 0x1C0048A4C (xxxSetWindowPos.c)
 *     zzzSetDesktop @ 0x1C005DB40 (zzzSetDesktop.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAX@Z @ 0x1C0060FF4 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@.c)
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     LinkWindow @ 0x1C006F9A0 (LinkWindow.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     xxxInheritWindowMonitor @ 0x1C0075834 (xxxInheritWindowMonitor.c)
 *     MapDesktop @ 0x1C0077E30 (MapDesktop.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     zzzDecomposeDesktop @ 0x1C0097998 (zzzDecomposeDesktop.c)
 *     DwmAsyncDesktopFree @ 0x1C0098654 (DwmAsyncDesktopFree.c)
 *     DwmAsyncDesktopCreate @ 0x1C0099104 (DwmAsyncDesktopCreate.c)
 *     _CloseDesktop @ 0x1C00A2C38 (_CloseDesktop.c)
 *     CloseProtectedHandle @ 0x1C00A6598 (CloseProtectedHandle.c)
 *     zzzComposeDesktop @ 0x1C00B2FD8 (zzzComposeDesktop.c)
 *     OpenDesktopCompletion @ 0x1C00D0E3C (OpenDesktopCompletion.c)
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C00D31F8 (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C0159AD4 (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0159AFC (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0159CDC (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x1C0159FF4 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     ??1AtomicExecutionCheck@@QEAA@XZ @ 0x1C01CC410 (--1AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?CleanupDirtyDesktops@@YAXXZ @ 0x1C01E3CBC (-CleanupDirtyDesktops@@YAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxCreateDesktopEx(
        union _LARGE_INTEGER *a1,
        unsigned int a2,
        __int64 a3,
        ACCESS_MASK a4,
        HANDLE *a5,
        int a6)
{
  int v6; // r11d
  _QWORD *v8; // r12
  int v9; // r15d
  NTSTATUS v10; // eax
  int v11; // ebx
  ULONG v12; // eax
  __int64 v13; // rdx
  ULONG v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  char *v17; // rdi
  ULONG v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rbx
  __int64 v21; // r15
  __int64 v22; // rcx
  ULONG v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r14
  __int64 **v26; // rax
  __int64 v27; // rbx
  void *v28; // rax
  int v29; // r14d
  AtomicExecutionCheck *v30; // rcx
  ShellWindowManagement *v31; // rbx
  int v32; // eax
  __int64 v33; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v35; // r14d
  struct tagWND *Window; // r14
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  _QWORD *v41; // rdx
  __int64 v42; // rcx
  struct tagWINDOWSTATION *v43; // rbx
  __int64 v44; // rcx
  __int64 v45; // rax
  int v46; // r14d
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  void *v50; // rcx
  bool v51; // zf
  struct tagWND *v52; // r15
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v61; // rax
  int v62; // edx
  _UNKNOWN **v63; // r8
  _QWORD *v64; // rcx
  __int64 v65; // rcx
  __int64 **v66; // rcx
  __int64 v67; // rbx
  void *v68; // rax
  char v69; // [rsp+90h] [rbp-208h] BYREF
  char v70; // [rsp+91h] [rbp-207h] BYREF
  char v71; // [rsp+92h] [rbp-206h] BYREF
  _BYTE v72[5]; // [rsp+93h] [rbp-205h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-200h] BYREF
  _BYTE v74[4]; // [rsp+A0h] [rbp-1F8h] BYREF
  unsigned int v75; // [rsp+A4h] [rbp-1F4h]
  int v76; // [rsp+A8h] [rbp-1F0h]
  ShellWindowManagement *v77; // [rsp+B0h] [rbp-1E8h]
  int v78; // [rsp+B8h] [rbp-1E0h]
  union _LARGE_INTEGER Timeout; // [rsp+C0h] [rbp-1D8h] BYREF
  int v80; // [rsp+C8h] [rbp-1D0h]
  struct tagWND *v81[2]; // [rsp+D0h] [rbp-1C8h]
  _QWORD *v82; // [rsp+E8h] [rbp-1B0h]
  __int64 v83; // [rsp+F0h] [rbp-1A8h]
  struct _OBJECT_HANDLE_INFORMATION v84; // [rsp+F8h] [rbp-1A0h] BYREF
  PVOID Object; // [rsp+100h] [rbp-198h] BYREF
  struct tagWINDOWSTATION *v86; // [rsp+108h] [rbp-190h]
  __int64 v87; // [rsp+110h] [rbp-188h]
  void *v88; // [rsp+118h] [rbp-180h]
  __int64 v89; // [rsp+120h] [rbp-178h]
  union _LARGE_INTEGER v90; // [rsp+130h] [rbp-168h]
  _DWORD v91[2]; // [rsp+138h] [rbp-160h] BYREF
  __int64 v92; // [rsp+140h] [rbp-158h]
  char *v93; // [rsp+148h] [rbp-150h]
  int v94; // [rsp+150h] [rbp-148h]
  int v95; // [rsp+154h] [rbp-144h]
  __int128 v96; // [rsp+158h] [rbp-140h] BYREF
  __int64 v97; // [rsp+168h] [rbp-130h]
  _QWORD v98[2]; // [rsp+170h] [rbp-128h] BYREF
  _QWORD v99[2]; // [rsp+180h] [rbp-118h] BYREF
  _QWORD v100[4]; // [rsp+190h] [rbp-108h] BYREF
  __int128 v101; // [rsp+1B0h] [rbp-E8h] BYREF
  __int128 v102; // [rsp+1C0h] [rbp-D8h] BYREF
  __int64 v103[3]; // [rsp+1D0h] [rbp-C8h] BYREF
  __int128 v104; // [rsp+1E8h] [rbp-B0h] BYREF
  __int64 v105; // [rsp+1F8h] [rbp-A0h]
  __int64 v106[3]; // [rsp+200h] [rbp-98h] BYREF
  __int128 v107; // [rsp+218h] [rbp-80h] BYREF
  __int64 v108; // [rsp+228h] [rbp-70h]
  __int64 v109[3]; // [rsp+230h] [rbp-68h] BYREF
  __int128 v110; // [rsp+248h] [rbp-50h] BYREF
  __int64 v111; // [rsp+258h] [rbp-40h]
  __int64 v112; // [rsp+260h] [rbp-38h] BYREF
  __int64 v113; // [rsp+270h] [rbp-28h] BYREF

  v6 = a3;
  Handle = 0LL;
  v81[0] = 0LL;
  v77 = 0LL;
  v8 = 0LL;
  v104 = 0LL;
  v105 = 0LL;
  v107 = 0LL;
  v108 = 0LL;
  v110 = 0LL;
  v111 = 0LL;
  v9 = 0;
  v78 = -1;
  v96 = 0LL;
  v97 = 0LL;
  v80 = 0;
  v75 = 0;
  Timeout = a1[1];
  v90 = Timeout;
  v84.HandleAttributes = gSessionId;
  v84.GrantedAccess = a4;
  LOBYTE(a3) = a6 == 0;
  v10 = ObOpenObjectByName(a1, ExDesktopObjectType, a3, 0LL, v6, &v84, &Handle);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = RtlNtStatusToDosError(v10);
    UserSetLastError(v12, v13);
    CleanupDirtyDesktops();
LABEL_79:
    *a5 = 0LL;
    return (unsigned int)v11;
  }
  if ( v10 == 0x40000000 )
  {
    if ( !(unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
    {
      v14 = RtlNtStatusToDosError(-1073741801);
      UserSetLastError(v14, v15);
      CloseProtectedHandle(Handle, 0);
LABEL_6:
      v11 = -1073741801;
      goto LABEL_79;
    }
    *a5 = Handle;
    v9 = 1;
  }
  Object = 0LL;
  v16 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &Object, 0LL);
  v11 = v16;
  v17 = (char *)Object;
  if ( v16 < 0 )
  {
    v18 = RtlNtStatusToDosError(v16);
    UserSetLastError(v18, v19);
    CloseProtectedHandle(Handle, 0);
    goto LABEL_79;
  }
  if ( v9 )
  {
    v11 = OpenDesktopCompletion(Object, Handle, a2);
    if ( v11 < 0 )
    {
      CloseProtectedHandle(Handle, 0);
      *a5 = 0LL;
    }
    ObfDereferenceObject(v17);
    return (unsigned int)v11;
  }
  v20 = *((_QWORD *)Object + 5);
  v86 = (struct tagWINDOWSTATION *)v20;
  v21 = *(_QWORD *)(v20 + 56);
  v82 = (_QWORD *)*((_QWORD *)Object + 1);
  v82[22] = 0LL;
  if ( !(unsigned int)SetHandleFlag(Handle, 0LL, a2 & 1) )
  {
    CloseProtectedHandle(Handle, 0);
    ObfDereferenceObject(v17);
    goto LABEL_6;
  }
  v22 = gpepCSRSS;
  if ( gpepCSRSS )
  {
    v91[1] = 0;
    v91[0] = 1;
    v92 = gpepCSRSS;
    v93 = v17;
    v94 = 0;
    v95 = 1;
    v76 = MapDesktop((__int64)v91);
    if ( v76 < 0 )
    {
      CloseProtectedHandle(Handle, 0);
      ObfDereferenceObject(v17);
      v23 = RtlNtStatusToDosError(-1073741790);
      UserSetLastError(v23, v24);
      v11 = v76;
      goto LABEL_79;
    }
  }
  v25 = ReferenceDwmApiPort(v22);
  if ( v25 )
  {
    if ( (*(_DWORD *)(v20 + 64) & 0x200) != 0 )
    {
      v26 = (__int64 **)*((_QWORD *)v17 + 1);
      v27 = **v26;
      v28 = (void *)ReferenceDwmApiPort(*v26);
      DwmAsyncDesktopCreate(v28, v27);
      zzzComposeDesktop((struct tagDESKTOP *)v17);
      v80 = 1;
    }
    DereferenceDwmApiPort(v25);
  }
  v87 = *(_QWORD *)(gptiCurrent + 424LL);
  v83 = *(_QWORD *)(v87 + 336);
  v89 = *(_QWORD *)(gptiCurrent + 456LL);
  v88 = *(void **)(gptiCurrent + 592LL);
  *(_QWORD *)(gptiCurrent + 424LL) = *(_QWORD *)(*(_QWORD *)(v21 + 16) + 424LL);
  PushW32ThreadLock((__int64)v17, &v96, UserDereferenceObject);
  ++gdwDeferWinEvent;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v69);
  v29 = zzzSetDesktop(gptiCurrent, (__int64)v17, Handle);
  if ( v29 < 0 )
    goto LABEL_24;
  v75 = W32SetCurrentThreadDpiAwarenessContext(18LL);
  v32 = *(_DWORD *)(gptiCurrent + 488LL);
  v78 = v32 & 0x10000000;
  *(_DWORD *)(gptiCurrent + 488LL) = v32 | 0x10000000;
  *(_OWORD *)v81 = *(_OWORD *)(*gpDispInfo + 24LL);
  v35 = 0;
  if ( PsGetCurrentProcessWin32Process(gpDispInfo) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v33);
    if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
      v35 = 1;
  }
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v103, 0LL);
  Window = (struct tagWND *)xxxCreateWindowEx(
                              0,
                              (wchar_t *)0x8001,
                              32769LL,
                              0LL,
                              0x82000000,
                              (int)v81[0],
                              SHIDWORD(v81[0]),
                              LODWORD(v81[1]) - LODWORD(v81[0]),
                              HIDWORD(v81[1]) - HIDWORD(v81[0]),
                              0LL,
                              (__int64)v103,
                              hModuleWin,
                              0LL,
                              1u,
                              0x30Au,
                              v35,
                              0LL);
  v81[0] = Window;
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v103);
  if ( !Window )
  {
LABEL_31:
    v29 = -1073741801;
LABEL_24:
    v30 = (AtomicExecutionCheck *)&v69;
LABEL_25:
    AtomicExecutionCheck::~AtomicExecutionCheck(v30);
    v31 = v77;
    goto LABEL_99;
  }
  ThreadLock((__int64)Window, (__int64 *)&v104);
  v76 = PsGetCurrentProcessWin32Process(v37)
     && (v39 = PsGetCurrentProcessWin32Process(v38), (unsigned int)IsImmersiveAppRestricted(v39));
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v106, 0LL);
  v31 = (ShellWindowManagement *)xxxCreateWindowEx(
                                   0,
                                   (wchar_t *)(unsigned __int16)gatomMessage,
                                   (unsigned __int16)gatomMessage,
                                   0LL,
                                   0x82000000,
                                   0,
                                   0,
                                   100,
                                   100,
                                   0LL,
                                   (__int64)v106,
                                   hModuleWin,
                                   0LL,
                                   1u,
                                   0x30Au,
                                   v76,
                                   0LL);
  v77 = v31;
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v106);
  if ( v31 )
  {
    v40 = *(unsigned __int16 *)(*((_QWORD *)v31 + 5) + 42LL);
    if ( (v40 & 0xFFFF3FFF) == 0 )
    {
      ThreadLock((__int64)v31, (__int64 *)&v107);
      *(_WORD *)(*((_QWORD *)v31 + 5) + 42LL) = *(_WORD *)(*((_QWORD *)v31 + 5) + 42LL) & 0xC000 | 0x29F;
      v41 = v82 + 3;
      *(_QWORD *)(*v82 + 8LL) = *((_QWORD *)Window + 6);
      v98[0] = v41;
      v98[1] = Window;
      HMAssignmentLock(v98, 0LL);
      v101 = *(_OWORD *)LockPointer(&v112, (__int64)v31 + 104, *(_QWORD *)(v21 + 8));
      HMAssignmentLock(&v101, 0LL);
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v74);
      xxxInheritWindowMonitor(v31, 0LL, 0);
      AtomicExecutionCheck::~AtomicExecutionCheck((AtomicExecutionCheck *)v74);
      LinkWindow(v31, 0LL, *(_QWORD *)(v21 + 8));
      v99[0] = v17 + 104;
      v99[1] = v31;
      HMAssignmentLock(v99, 0LL);
      *(_QWORD *)(*((_QWORD *)v31 + 5) + 64LL) = 0LL;
      HMAssignmentUnlock((char *)v31 + 120);
      v102 = *(_OWORD *)LockPointer(&v113, (__int64)Window + 104, *(_QWORD *)(v21 + 8));
      HMAssignmentLock(&v102, 0LL);
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v70);
      xxxInheritWindowMonitor(Window, 0LL, 0);
      AtomicExecutionCheck::~AtomicExecutionCheck((AtomicExecutionCheck *)&v70);
      LinkWindow(Window, 0LL, *(_QWORD *)(v21 + 8));
      *(_QWORD *)(*((_QWORD *)Window + 5) + 64LL) = 0LL;
      HMAssignmentUnlock((char *)Window + 120);
      if ( (*(_DWORD *)(gpDispInfo + 132LL) & 1) == 0 )
      {
        v42 = *((_QWORD *)Window + 5);
        *(_QWORD *)(v42 + 168) = *(_QWORD *)(gpDispInfo + 120LL);
      }
      v43 = v86;
      if ( (*((_DWORD *)v86 + 16) & 4) == 0 )
      {
        if ( !PsGetCurrentProcessWin32Process(v42)
          || (v45 = PsGetCurrentProcessWin32Process(v44), v46 = 1, !(unsigned int)IsImmersiveAppRestricted(v45)) )
        {
          v46 = 0;
        }
        SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v109, 0LL);
        v8 = (_QWORD *)xxxCreateWindowEx(
                         136,
                         (wchar_t *)0x8006,
                         32774LL,
                         0LL,
                         0x80800000,
                         0,
                         0,
                         100,
                         100,
                         *((struct tagWND **)v17 + 13),
                         (__int64)v109,
                         hModuleWin,
                         0LL,
                         1u,
                         0x30Au,
                         v46,
                         0LL);
        SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v109);
        if ( !v8 )
          goto LABEL_31;
        v100[0] = v17 + 112;
        v100[1] = v8;
        HMAssignmentLock(v100, 0LL);
        ThreadLock((__int64)v8, (__int64 *)&v110);
        v43 = v86;
      }
      HMChangeOwnerThread(v82[3], *(_QWORD *)(v21 + 16));
      HMChangeOwnerThread(v77, *(_QWORD *)(v21 + 16));
      if ( (*((_DWORD *)v43 + 16) & 4) == 0 )
        HMChangeOwnerThread(v8, *(_QWORD *)(v21 + 16));
      W32SetCurrentThreadDpiAwarenessContext(v75);
      v75 = 0;
      *(_QWORD *)(gptiCurrent + 424LL) = v87;
      *(_DWORD *)(gptiCurrent + 488LL) = v78 | *(_DWORD *)(gptiCurrent + 488LL) & 0xEFFFFFFF;
      v29 = zzzSetDesktop(gptiCurrent, v89, v88);
      v30 = (AtomicExecutionCheck *)&v69;
      if ( v29 < 0 )
        goto LABEL_25;
      AtomicExecutionCheck::~AtomicExecutionCheck((AtomicExecutionCheck *)&v69);
      zzzEndDeferWinEventNotify();
      if ( *(_QWORD *)(v21 + 56) )
      {
        if ( (*(_DWORD *)v21 & 2) != 0 )
        {
          ++gdwDeferWinEvent;
          AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v72);
          v29 = zzzSetDesktop(*(struct tagTHREADINFO **)(v21 + 16), (__int64)v17, 0LL);
          v30 = (AtomicExecutionCheck *)v72;
          if ( v29 < 0 )
            goto LABEL_25;
          AtomicExecutionCheck::~AtomicExecutionCheck((AtomicExecutionCheck *)v72);
          zzzEndDeferWinEventNotify();
        }
        else
        {
          *(_QWORD *)(gptiRit + 616LL) = v43;
          *(_QWORD *)(*(_QWORD *)(v21 + 16) + 616LL) = v43;
        }
        KeSetEvent(*(PRKEVENT *)(v21 + 56), 1, 0);
        if ( (*(_DWORD *)v21 & 2) == 0 )
        {
          LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v71);
          while ( !grpdeskRitInput )
          {
            if ( WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc )
            {
              Timeout.QuadPart = -200000LL;
              KeWaitForSingleObject(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc, Executive, 0, 0, &Timeout);
            }
            else
            {
              UserSleep(20LL);
            }
          }
          LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v71);
        }
        v50 = *(void **)(v21 + 56);
        if ( v50 )
        {
          ObfDereferenceObject(v50);
          *(_QWORD *)(v21 + 56) = 0LL;
        }
        v48 = gpsi;
        _InterlockedOr(gpsi, 0x800u);
        Timeout = v90;
      }
      v51 = v21 == gTermIO[0];
      v52 = v81[0];
      if ( v51 )
        xxxSetWindowPos(v81[0], 1LL, 0LL, 0LL, 0, 0, 1115);
      if ( !v83 )
        UnlockObjectAssignment(*(_QWORD *)(gptiCurrent + 424LL) + 336LL);
      if ( gspdeskDisconnect || v17 != grpdeskLogon )
        goto LABEL_82;
      if ( xxxCreateDisconnectDesktop((HWINSTA)Timeout.QuadPart, v43) )
      {
        KeSetEvent(gpEventDiconnectDesktop, 1, 0);
        gdwHydraHint |= 0x40000u;
        goto LABEL_82;
      }
      if ( v8 )
        ThreadUnlock1(v54, v53, v55);
      ThreadUnlock1(v54, v53, v55);
      ThreadUnlock1(v57, v56, v58);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(ThreadWin32Thread + 16) = v96;
      ObfDereferenceObject(v17);
      CloseDesktop((unsigned __int64)Handle, 0);
      v11 = -1073741823;
      goto LABEL_79;
    }
    if ( (v40 & 0x1000) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v40);
    v29 = -1073741790;
  }
  else
  {
    v29 = -1073741801;
  }
  AtomicExecutionCheck::~AtomicExecutionCheck((AtomicExecutionCheck *)&v69);
  while ( 1 )
  {
LABEL_99:
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v71);
    if ( v75 )
      W32SetCurrentThreadDpiAwarenessContext(v75);
    if ( v8 )
    {
      xxxDestroyWindow(v8);
      HMAssignmentUnlock(v17 + 112);
    }
    if ( v31 )
    {
      xxxDestroyWindow(v31);
      HMAssignmentUnlock(v17 + 104);
    }
    v52 = v81[0];
    if ( v81[0] )
    {
      xxxDestroyWindow((_QWORD *)v81[0]);
      v64 = v82 + 3;
      *(_QWORD *)(*v82 + 8LL) = 0LL;
      HMAssignmentUnlock(v64);
    }
    *(_QWORD *)(gptiCurrent + 424LL) = v87;
    if ( v78 != -1 )
      *(_DWORD *)(gptiCurrent + 488LL) = v78 | *(_DWORD *)(gptiCurrent + 488LL) & 0xEFFFFFFF;
    AtomicExecutionCheck::~AtomicExecutionCheck((AtomicExecutionCheck *)&v71);
    zzzEndDeferWinEventNotify();
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v70);
    zzzSetDesktop(gptiCurrent, v89, v88);
    AtomicExecutionCheck::~AtomicExecutionCheck((AtomicExecutionCheck *)&v70);
    if ( v80 )
    {
      Timeout.QuadPart = ReferenceDwmApiPort(v65);
      if ( Timeout.QuadPart )
      {
        zzzDecomposeDesktop((struct tagDESKTOP *)v17);
        v66 = (__int64 **)*((_QWORD *)v17 + 1);
        v67 = **v66;
        v68 = (void *)ReferenceDwmApiPort(v66);
        DwmAsyncDesktopFree(v68, v67);
        ((void (__fastcall *)(_QWORD))DereferenceDwmApiPort)((union _LARGE_INTEGER)Timeout.QuadPart);
      }
    }
    CloseProtectedHandle(Handle, 0);
    Handle = 0LL;
    if ( !v83 )
      UnlockObjectAssignment(*(_QWORD *)(gptiCurrent + 424LL) + 336LL);
LABEL_82:
    if ( v8 )
      v8 = (_QWORD *)ThreadUnlock1(v48, v47, v49);
    v31 = v77;
    if ( v77 )
    {
      v31 = (ShellWindowManagement *)ThreadUnlock1(v48, v47, v49);
      v77 = v31;
    }
    if ( v52 )
      v81[0] = (struct tagWND *)ThreadUnlock1(v48, v47, v49);
    v61 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)(v61 + 16) = v96;
    LOBYTE(v62) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    v63 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v62 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v63) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v62,
        (_DWORD)v63,
        22,
        4,
        3,
        22,
        (__int64)&WPP_d78c2f93cefb39adad771009d44421f9_Traceguids);
    }
    if ( !Handle || (unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
      break;
    v29 = -1073741801;
  }
  if ( v29 >= 0 )
    *((_DWORD *)v17 + 12) |= 0x10u;
  ObfDereferenceObject(v17);
  *a5 = Handle;
  return (unsigned int)v29;
}
