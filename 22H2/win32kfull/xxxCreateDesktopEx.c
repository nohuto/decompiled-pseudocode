/*
 * XREFs of xxxCreateDesktopEx @ 0x1C00101D4
 * Callers:
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C000DB68 (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 *     EditionCreateDesktopEntryPoint @ 0x1C000E880 (EditionCreateDesktopEntryPoint.c)
 *     xxxResolveDesktop @ 0x1C000F4F0 (xxxResolveDesktop.c)
 *     xxxConnectService @ 0x1C012F194 (xxxConnectService.c)
 * Callees:
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C000DB68 (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 *     OpenDesktopCompletion @ 0x1C0011364 (OpenDesktopCompletion.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAX@Z @ 0x1C0013DA4 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@.c)
 *     WPP_RECORDER_SF_ @ 0x1C004D9D8 (WPP_RECORDER_SF_.c)
 *     SetOrClrWF @ 0x1C004DF08 (SetOrClrWF.c)
 *     MapDesktop @ 0x1C004EDB0 (MapDesktop.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C005CF00 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     zzzSetDesktop @ 0x1C0065E20 (zzzSetDesktop.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069A50 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069AAC (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     xxxSetWindowPos @ 0x1C006BBB4 (xxxSetWindowPos.c)
 *     xxxInheritWindowMonitor @ 0x1C006C7D8 (xxxInheritWindowMonitor.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006DEA4 (zzzEndDeferWinEventNotify.c)
 *     LinkWindow @ 0x1C006FC60 (LinkWindow.c)
 *     xxxCreateWindowEx @ 0x1C0075140 (xxxCreateWindowEx.c)
 *     xxxDestroyWindow @ 0x1C007DC00 (xxxDestroyWindow.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C008A934 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00BFA20 (PushW32ThreadLock.c)
 *     _CloseDesktop @ 0x1C00D8F78 (_CloseDesktop.c)
 *     CloseProtectedHandle @ 0x1C00D9098 (CloseProtectedHandle.c)
 *     DwmAsyncDesktopCreate @ 0x1C00E9384 (DwmAsyncDesktopCreate.c)
 *     DwmAsyncDesktopFree @ 0x1C00E9864 (DwmAsyncDesktopFree.c)
 *     zzzDecomposeDesktop @ 0x1C00EAA3C (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x1C00EC528 (zzzComposeDesktop.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C01363D8 (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0136400 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x1C0167260 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CleanupDirtyDesktops@@YAXXZ @ 0x1C01E9060 (-CleanupDirtyDesktops@@YAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxCreateDesktopEx(__int64 a1, unsigned int a2, __int64 a3, int a4, HANDLE *a5, int a6)
{
  int v6; // r11d
  __int64 Window; // r13
  int v9; // r14d
  NTSTATUS v10; // eax
  int v11; // ebx
  ULONG v12; // eax
  ULONG v13; // eax
  int v14; // eax
  _QWORD **v15; // rsi
  ULONG v16; // eax
  struct tagWINDOWSTATION *v17; // rbx
  __int64 v18; // r14
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // r12d
  ULONG v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r12
  void *v26; // rax
  int v27; // esi
  int v28; // eax
  __int64 CurrentProcessWin32Process; // rax
  int v30; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v32; // rax
  int v33; // esi
  __int64 v34; // rsi
  int v35; // ecx
  __int64 v36; // rax
  _QWORD *v37; // rdx
  BOOL v38; // ebx
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rax
  struct tagWINDOWSTATION *v42; // r12
  struct tagWINDOWSTATION *v43; // rdx
  LeaveEnterCrit *v44; // rcx
  void *v45; // rcx
  __int64 v46; // rax
  __int64 v48; // r14
  __int64 v49; // rax
  int v50; // edx
  _QWORD *v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r12
  _QWORD *v55; // rbx
  void *v56; // rax
  HANDLE Handle; // [rsp+90h] [rbp-258h] BYREF
  PVOID Object; // [rsp+98h] [rbp-250h] BYREF
  unsigned int v59; // [rsp+A0h] [rbp-248h]
  _BYTE v60[4]; // [rsp+A4h] [rbp-244h] BYREF
  int v61; // [rsp+A8h] [rbp-240h]
  _BYTE v62[8]; // [rsp+B0h] [rbp-238h] BYREF
  int v63; // [rsp+B8h] [rbp-230h]
  __int64 v64; // [rsp+C0h] [rbp-228h]
  __int64 v65; // [rsp+C8h] [rbp-220h]
  PVOID v66; // [rsp+D0h] [rbp-218h]
  struct tagWINDOWSTATION *v67; // [rsp+D8h] [rbp-210h]
  _QWORD *v68; // [rsp+E8h] [rbp-200h]
  __int128 v69; // [rsp+F0h] [rbp-1F8h] BYREF
  __int64 v70; // [rsp+100h] [rbp-1E8h]
  _DWORD v71[2]; // [rsp+108h] [rbp-1E0h] BYREF
  _BYTE v72[8]; // [rsp+110h] [rbp-1D8h] BYREF
  __int64 v73; // [rsp+118h] [rbp-1D0h]
  __int64 v74; // [rsp+120h] [rbp-1C8h]
  __int64 v75; // [rsp+128h] [rbp-1C0h]
  _BYTE v76[8]; // [rsp+130h] [rbp-1B8h] BYREF
  _BYTE v77[8]; // [rsp+138h] [rbp-1B0h] BYREF
  __int64 *v78; // [rsp+140h] [rbp-1A8h]
  union _LARGE_INTEGER Timeout; // [rsp+148h] [rbp-1A0h] BYREF
  HWINSTA v80; // [rsp+150h] [rbp-198h]
  _BYTE v81[16]; // [rsp+158h] [rbp-190h] BYREF
  _QWORD v82[3]; // [rsp+168h] [rbp-180h] BYREF
  int v83; // [rsp+180h] [rbp-168h]
  int v84; // [rsp+184h] [rbp-164h]
  __int128 v85; // [rsp+188h] [rbp-160h] BYREF
  __int64 v86; // [rsp+198h] [rbp-150h]
  __int128 v87; // [rsp+1A0h] [rbp-148h] BYREF
  __int64 v88; // [rsp+1B0h] [rbp-138h]
  __int128 v89; // [rsp+1B8h] [rbp-130h] BYREF
  __int64 v90; // [rsp+1C8h] [rbp-120h]
  __int128 v91; // [rsp+1D0h] [rbp-118h] BYREF
  __int64 v92; // [rsp+1E0h] [rbp-108h]
  _QWORD v93[2]; // [rsp+1F0h] [rbp-F8h] BYREF
  _QWORD v94[2]; // [rsp+200h] [rbp-E8h] BYREF
  _QWORD v95[2]; // [rsp+210h] [rbp-D8h] BYREF
  _QWORD v96[4]; // [rsp+220h] [rbp-C8h] BYREF
  __int128 v97; // [rsp+240h] [rbp-A8h] BYREF
  _BYTE v98[24]; // [rsp+250h] [rbp-98h] BYREF
  _BYTE v99[24]; // [rsp+268h] [rbp-80h] BYREF
  _BYTE v100[32]; // [rsp+280h] [rbp-68h] BYREF
  __int128 v101; // [rsp+2A0h] [rbp-48h] BYREF
  _BYTE v102[16]; // [rsp+2B0h] [rbp-38h] BYREF
  _BYTE v103[16]; // [rsp+2C0h] [rbp-28h] BYREF

  v6 = a3;
  Handle = 0LL;
  Window = 0LL;
  v65 = 0LL;
  v64 = 0LL;
  v85 = 0LL;
  v86 = 0LL;
  v87 = 0LL;
  v88 = 0LL;
  v89 = 0LL;
  v90 = 0LL;
  v9 = 0;
  v61 = -1;
  v91 = 0LL;
  v92 = 0LL;
  v63 = 0;
  v59 = 0;
  v80 = *(HWINSTA *)(a1 + 8);
  v71[0] = gSessionId;
  v71[1] = a4;
  LOBYTE(a3) = a6 == 0;
  v10 = ObOpenObjectByName(a1, ExDesktopObjectType, a3, 0LL, v6, v71, &Handle);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = RtlNtStatusToDosError(v10);
    UserSetLastError(v12);
    CleanupDirtyDesktops();
LABEL_80:
    *a5 = 0LL;
    return (unsigned int)v11;
  }
  if ( v10 == 0x40000000 )
  {
    if ( !(unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
    {
      v13 = RtlNtStatusToDosError(-1073741801);
      UserSetLastError(v13);
      CloseProtectedHandle(Handle);
      v11 = -1073741801;
      goto LABEL_80;
    }
    *a5 = Handle;
    v9 = 1;
  }
  Object = 0LL;
  v14 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &Object, 0LL);
  v11 = v14;
  v15 = (_QWORD **)Object;
  v66 = Object;
  if ( v14 < 0 )
  {
    v16 = RtlNtStatusToDosError(v14);
    UserSetLastError(v16);
    CloseProtectedHandle(Handle);
    goto LABEL_80;
  }
  if ( v9 )
  {
    v11 = OpenDesktopCompletion(Object, Handle, a2);
    if ( v11 < 0 )
    {
      CloseProtectedHandle(Handle);
      *a5 = 0LL;
    }
    ObfDereferenceObject(v15);
    return (unsigned int)v11;
  }
  v17 = (struct tagWINDOWSTATION *)*((_QWORD *)Object + 5);
  v67 = v17;
  v18 = *((_QWORD *)v17 + 7);
  v68 = (_QWORD *)*((_QWORD *)Object + 1);
  v68[22] = 0LL;
  v19 = SetHandleFlag(Handle, 0LL, a2 & 1);
  v20 = 0LL;
  if ( !v19 )
  {
    CloseProtectedHandle(Handle);
    ObfDereferenceObject(v15);
    v11 = -1073741801;
    goto LABEL_80;
  }
  v21 = gpepCSRSS;
  if ( gpepCSRSS )
  {
    v82[0] = 1LL;
    v82[1] = gpepCSRSS;
    v82[2] = v15;
    v83 = 0;
    v84 = 1;
    v22 = MapDesktop(v82);
    if ( v22 < 0 )
    {
      CloseProtectedHandle(Handle);
      ObfDereferenceObject(v15);
      v23 = RtlNtStatusToDosError(-1073741790);
      UserSetLastError(v23);
      v11 = v22;
      goto LABEL_80;
    }
  }
  v25 = ReferenceDwmApiPort(v21, v20);
  if ( v25 )
  {
    if ( (*((_DWORD *)v17 + 16) & 0x200) != 0 )
    {
      v26 = (void *)ReferenceDwmApiPort(*v15[1], v24);
      DwmAsyncDesktopCreate(v26);
      zzzComposeDesktop((struct tagDESKTOP *)v15);
      v63 = 1;
      v17 = v67;
    }
    DereferenceDwmApiPort(v25);
  }
  v73 = *(_QWORD *)(gptiCurrent + 424LL);
  v70 = *(_QWORD *)(v73 + 336);
  v75 = *(_QWORD *)(gptiCurrent + 456LL);
  v74 = *(_QWORD *)(gptiCurrent + 592LL);
  *(_QWORD *)(gptiCurrent + 424LL) = *(_QWORD *)(*(_QWORD *)(v18 + 16) + 424LL);
  PushW32ThreadLock(v15, &v91, UserDereferenceObject);
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v62);
  v27 = zzzSetDesktop(gptiCurrent);
  if ( v27 < 0 )
    goto LABEL_23;
  v59 = W32SetCurrentThreadDpiAwarenessContext(18LL);
  v28 = *(_DWORD *)(gptiCurrent + 488LL);
  v61 = v28 & 0x10000000;
  *(_DWORD *)(gptiCurrent + 488LL) = v28 | 0x10000000;
  v69 = *(_OWORD *)(*gpDispInfo + 24LL);
  if ( !PsGetCurrentProcessWin32Process()
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(),
        v30 = 1,
        !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
  {
    v30 = 0;
  }
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v98, 0LL);
  Window = xxxCreateWindowEx(
             0,
             32769,
             32769,
             0,
             -2113929216,
             v69,
             DWORD1(v69),
             DWORD2(v69) - (int)v69,
             HIDWORD(v69) - DWORD1(v69),
             0LL,
             (__int64)v98,
             hModuleWin,
             0LL,
             1,
             778,
             v30,
             0LL);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v98);
  if ( !Window )
    goto LABEL_28;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  *(_QWORD *)&v85 = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = &v85;
  *((_QWORD *)&v85 + 1) = Window;
  HMLockObject(Window);
  if ( !PsGetCurrentProcessWin32Process()
    || (v32 = PsGetCurrentProcessWin32Process(), v33 = 1, !(unsigned int)IsImmersiveAppRestricted(v32)) )
  {
    v33 = 0;
  }
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v99, 0LL);
  v34 = xxxCreateWindowEx(
          0,
          (unsigned __int16)gatomMessage,
          (unsigned __int16)gatomMessage,
          0,
          -2113929216,
          0,
          0,
          100,
          100,
          0LL,
          (__int64)v99,
          hModuleWin,
          0LL,
          1,
          778,
          v33,
          0LL);
  v65 = v34;
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v99);
  if ( !v34 )
  {
LABEL_28:
    v27 = -1073741801;
LABEL_23:
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v62);
    goto LABEL_95;
  }
  v35 = *(unsigned __int16 *)(*(_QWORD *)(v34 + 40) + 42LL);
  if ( (v35 & 0xFFFF3FFF) != 0 )
  {
    if ( (v35 & 0x1000) != 0 )
    {
      LODWORD(Object) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 2320LL);
    }
    v27 = -1073741790;
    goto LABEL_23;
  }
  v36 = W32GetThreadWin32Thread(KeGetCurrentThread());
  *(_QWORD *)&v87 = *(_QWORD *)(v36 + 416);
  *(_QWORD *)(v36 + 416) = &v87;
  *((_QWORD *)&v87 + 1) = v34;
  HMLockObject(v34);
  *(_WORD *)(*(_QWORD *)(v34 + 40) + 42LL) = *(_WORD *)(*(_QWORD *)(v34 + 40) + 42LL) & 0xC000 | 0x29F;
  v37 = v68 + 3;
  *(_QWORD *)(*v68 + 8LL) = *(_QWORD *)(Window + 48);
  v93[0] = v37;
  v93[1] = Window;
  HMAssignmentLock(v93);
  SetOrClrWF(0LL, Window, 1799LL, 1LL);
  SetOrClrWF(1LL, Window, 1794LL, 1LL);
  if ( (*((_DWORD *)v17 + 16) & 4) == 0 && !gspwndFullScreen )
  {
    v94[0] = &gspwndFullScreen;
    v94[1] = Window;
    HMAssignmentLock(v94);
  }
  v97 = *(_OWORD *)LockPointer(v102, v34 + 104, *(_QWORD *)(v18 + 8));
  HMAssignmentLock(&v97);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v76);
  xxxInheritWindowMonitor((struct tagWND *)v34);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v76);
  LinkWindow((struct tagWND *)v34);
  v78 = (__int64 *)((char *)Object + 104);
  v95[0] = (char *)Object + 104;
  v95[1] = v34;
  HMAssignmentLock(v95);
  *(_QWORD *)(*(_QWORD *)(v34 + 40) + 64LL) = 0LL;
  HMAssignmentUnlock(v34 + 120);
  v101 = *(_OWORD *)LockPointer(v103, Window + 104, *(_QWORD *)(v18 + 8));
  HMAssignmentLock(&v101);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v77);
  xxxInheritWindowMonitor((struct tagWND *)Window);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v77);
  LinkWindow((struct tagWND *)Window);
  *(_QWORD *)(*(_QWORD *)(Window + 40) + 64LL) = 0LL;
  HMAssignmentUnlock(Window + 120);
  if ( (*(_DWORD *)(gpDispInfo + 132LL) & 1) == 0 )
    *(_QWORD *)(*(_QWORD *)(Window + 40) + 168LL) = *(_QWORD *)(gpDispInfo + 120LL);
  if ( (*((_DWORD *)v17 + 16) & 4) != 0 )
  {
    v40 = v64;
  }
  else
  {
    v38 = 0;
    if ( PsGetCurrentProcessWin32Process() )
    {
      v39 = PsGetCurrentProcessWin32Process();
      v38 = IsImmersiveAppRestricted(v39) != 0;
    }
    SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v100, 0LL);
    v40 = xxxCreateWindowEx(
            136,
            32774,
            32774,
            0,
            -2139095040,
            0,
            0,
            100,
            100,
            *v78,
            (__int64)v100,
            hModuleWin,
            0LL,
            1,
            778,
            v38,
            0LL);
    v64 = v40;
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v100);
    if ( !v40 )
    {
      v27 = -1073741801;
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v62);
      goto LABEL_95;
    }
    v96[0] = (char *)Object + 112;
    v96[1] = v40;
    HMAssignmentLock(v96);
    v41 = W32GetThreadWin32Thread(KeGetCurrentThread());
    *(_QWORD *)&v89 = *(_QWORD *)(v41 + 416);
    *(_QWORD *)(v41 + 416) = &v89;
    *((_QWORD *)&v89 + 1) = v40;
    HMLockObject(v40);
  }
  HMChangeOwnerThread(v68[3], *(_QWORD *)(v18 + 16));
  HMChangeOwnerThread(v34, *(_QWORD *)(v18 + 16));
  v42 = v67;
  if ( (*((_DWORD *)v67 + 16) & 4) == 0 )
    HMChangeOwnerThread(v40, *(_QWORD *)(v18 + 16));
  W32SetCurrentThreadDpiAwarenessContext(v59);
  v59 = 0;
  *(_QWORD *)(gptiCurrent + 424LL) = v73;
  *(_DWORD *)(gptiCurrent + 488LL) = v61 | *(_DWORD *)(gptiCurrent + 488LL) & 0xEFFFFFFF;
  v27 = zzzSetDesktop(gptiCurrent);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v62);
  if ( v27 >= 0 )
  {
    zzzEndDeferWinEventNotify();
    if ( !*(_QWORD *)(v18 + 56) )
      goto LABEL_70;
    if ( (*(_DWORD *)v18 & 2) == 0 )
    {
      v43 = v67;
      *(_QWORD *)(gptiRit + 616LL) = v67;
      *(_QWORD *)(*(_QWORD *)(v18 + 16) + 616LL) = v43;
LABEL_57:
      KeSetEvent(*(PRKEVENT *)(v18 + 56), 1, 0);
      if ( (*(_DWORD *)v18 & 2) == 0 )
      {
        if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v60);
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
        LeaveEnterCrit::~LeaveEnterCrit(v44);
      }
      v45 = *(void **)(v18 + 56);
      if ( v45 )
      {
        ObfDereferenceObject(v45);
        *(_QWORD *)(v18 + 56) = 0LL;
      }
      _InterlockedOr(gpsi, 0x800u);
      v42 = v67;
LABEL_70:
      if ( v18 == gTermIO )
        xxxSetWindowPos((struct tagWND *)Window, 0, 0, 1115);
      if ( !v70 )
        UnlockObjectAssignment(*(_QWORD *)(gptiCurrent + 424LL) + 336LL);
      if ( !gspdeskDisconnect && Object == grpdeskLogon )
      {
        if ( !(unsigned int)xxxCreateDisconnectDesktop(v80, v42) )
        {
          if ( v40 )
            ThreadUnlock1();
          ThreadUnlock1();
          ThreadUnlock1();
          v46 = W32GetThreadWin32Thread(KeGetCurrentThread());
          *(_QWORD *)(v46 + 16) = v91;
          ObfDereferenceObject(Object);
          CloseDesktop(Handle);
          v11 = -1073741823;
          goto LABEL_80;
        }
        KeSetEvent(gpEventDiconnectDesktop, 1, 0);
        gdwHydraHint |= 0x40000u;
      }
      v48 = v65;
      goto LABEL_84;
    }
    ++gdwDeferWinEvent;
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v72);
    v27 = zzzSetDesktop(*(struct tagTHREADINFO **)(v18 + 16));
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v72);
    if ( v27 >= 0 )
    {
      zzzEndDeferWinEventNotify();
      goto LABEL_57;
    }
  }
  while ( 1 )
  {
LABEL_95:
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v81);
    if ( v59 )
      W32SetCurrentThreadDpiAwarenessContext(v59);
    v40 = v64;
    if ( v64 )
    {
      xxxDestroyWindow(v64);
      HMAssignmentUnlock((char *)v66 + 112);
    }
    v48 = v65;
    if ( v65 )
    {
      xxxDestroyWindow(v65);
      HMAssignmentUnlock((char *)v66 + 104);
    }
    if ( Window )
    {
      xxxDestroyWindow(Window);
      v51 = v68 + 3;
      *(_QWORD *)(*v68 + 8LL) = 0LL;
      HMAssignmentUnlock(v51);
      HMAssignmentUnlock(&gspwndFullScreen);
    }
    *(_QWORD *)(gptiCurrent + 424LL) = v73;
    if ( v61 != -1 )
      *(_DWORD *)(gptiCurrent + 488LL) = v61 | *(_DWORD *)(gptiCurrent + 488LL) & 0xEFFFFFFF;
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v81);
    zzzEndDeferWinEventNotify();
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v69);
    zzzSetDesktop(gptiCurrent);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v69);
    if ( v63 )
    {
      v54 = ReferenceDwmApiPort(v53, v52);
      if ( v54 )
      {
        v55 = v66;
        zzzDecomposeDesktop((struct tagDESKTOP *)v66);
        v56 = (void *)ReferenceDwmApiPort(v55[1], *(_QWORD *)v55[1]);
        DwmAsyncDesktopFree(v56);
        DereferenceDwmApiPort(v54);
        v40 = v64;
      }
    }
    CloseProtectedHandle(Handle);
    Handle = 0LL;
    if ( !v70 )
      UnlockObjectAssignment(*(_QWORD *)(gptiCurrent + 424LL) + 336LL);
LABEL_84:
    if ( v40 )
      v64 = ThreadUnlock1();
    if ( v48 )
      v65 = ThreadUnlock1();
    if ( Window )
      Window = ThreadUnlock1();
    v49 = W32GetThreadWin32Thread(KeGetCurrentThread());
    *(_QWORD *)(v49 + 16) = v91;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v50) = 4;
      WPP_RECORDER_SF_(
        (unsigned int)&WPP_RECORDER_INITIALIZED,
        v50,
        3,
        22,
        (__int64)&WPP_4cc55f0eccd63a8558931143e45fab5e_Traceguids);
    }
    if ( !Handle || (unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
      break;
    v27 = -1073741801;
  }
  if ( v27 >= 0 )
    *((_DWORD *)v66 + 12) |= 0x10u;
  ObfDereferenceObject(v66);
  *a5 = Handle;
  return (unsigned int)v27;
}
