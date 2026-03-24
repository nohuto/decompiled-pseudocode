/*
 * XREFs of xxxCreateWindowStation @ 0x1C000C6EC
 * Callers:
 *     EditionCreateWindowStationEntryPoint @ 0x1C000C1A0 (EditionCreateWindowStationEntryPoint.c)
 *     xxxConnectService @ 0x1C012F194 (xxxConnectService.c)
 * Callees:
 *     ?xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z @ 0x1C000BC4C (-xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z.c)
 *     xxxInitWindowStation @ 0x1C000C0B8 (xxxInitWindowStation.c)
 *     ?CreateDesktopNotificationEvent@@YAJPEAX@Z @ 0x1C000DEB8 (-CreateDesktopNotificationEvent@@YAJPEAX@Z.c)
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C003CA3C (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 *     SetVisible @ 0x1C004BCA0 (SetVisible.c)
 *     zzzSetDesktop @ 0x1C0065E20 (zzzSetDesktop.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069A50 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069AAC (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006DEA4 (zzzEndDeferWinEventNotify.c)
 *     xxxCreateWindowEx @ 0x1C0075140 (xxxCreateWindowEx.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A94C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00BFA20 (PushW32ThreadLock.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C00D6A54 (xxxCleanupMotherDesktopWindow.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE190 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxCreateWindowStation(
        __int64 a1,
        char a2,
        ACCESS_MASK a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        int a9,
        HANDLE *a10)
{
  __int64 v10; // r14
  void *v11; // r15
  void *SecurityDescriptor; // r13
  int v13; // edi
  char *v14; // r12
  NTSTATUS v15; // eax
  unsigned int v16; // ebx
  NTSTATUS GlobalAtomTable; // eax
  NTSTATUS DesktopNotificationEvent; // esi
  struct tagWND **v19; // rbx
  NTSTATUS inserted; // eax
  _QWORD *i; // rcx
  __int64 v23; // rdi
  __int64 v24; // rcx
  int v25; // esi
  int v26; // esi
  BOOL v27; // edi
  __int64 CurrentProcessWin32Process; // rax
  __int64 Window; // rdi
  ULONG v30; // esi
  ULONG v31; // edi
  _WORD *v32; // rbx
  __int64 ThreadWin32Thread; // rax
  ULONG v34; // eax
  NTSTATUS v35; // ecx
  ULONG v36; // eax
  ULONG v37; // eax
  int v38; // edi
  __int64 v39; // rbx
  int v40; // edi
  PVOID Object; // [rsp+98h] [rbp-69h] BYREF
  int v42; // [rsp+A0h] [rbp-61h] BYREF
  __int64 v43; // [rsp+A8h] [rbp-59h]
  HANDLE Handle; // [rsp+B0h] [rbp-51h] BYREF
  __int64 v45; // [rsp+B8h] [rbp-49h] BYREF
  __int64 v46; // [rsp+C0h] [rbp-41h]
  _QWORD v47[2]; // [rsp+C8h] [rbp-39h] BYREF
  _BYTE v48[16]; // [rsp+D8h] [rbp-29h] BYREF
  __int64 v49; // [rsp+E8h] [rbp-19h]
  __int128 v50; // [rsp+F0h] [rbp-11h] BYREF
  __int64 v51; // [rsp+100h] [rbp-1h]
  int v52; // [rsp+148h] [rbp+47h]
  __int64 v54; // [rsp+160h] [rbp+5Fh]

  v54 = a4;
  v45 = *(_QWORD *)(a1 + 32);
  v10 = 0LL;
  v11 = 0LL;
  Object = 0LL;
  SecurityDescriptor = 0LL;
  Handle = 0LL;
  v13 = 0;
  v52 = 0;
  if ( grpWinStaList )
  {
    gTermNOIO |= 2u;
    v14 = (char *)&gTermNOIO;
  }
  else
  {
    v14 = (char *)gTermIO;
  }
  LOBYTE(a4) = a2;
  v15 = ObCreateObject(0LL, ExWindowStationObjectType, a1, a4, 0LL, 216, 0, 0, &Object);
  v16 = v15;
  if ( v15 < 0 )
  {
    v34 = RtlNtStatusToDosError(v15);
    UserSetLastError(v34);
    return v16;
  }
  if ( ExAcquireRundownProtection(gWinstaRunRef) )
  {
    memset(Object, 0, 0xD8uLL);
    *(_DWORD *)Object = gSessionId;
    *((_QWORD *)Object + 7) = v14;
    if ( (*(_DWORD *)v14 & 2) != 0 )
      *((_DWORD *)Object + 16) = 4;
    GlobalAtomTable = CreateGlobalAtomTable((char *)Object + 168);
    DesktopNotificationEvent = GlobalAtomTable;
    if ( GlobalAtomTable < 0
      || (*(_DWORD *)v14 & 1) == 0
      && (GlobalAtomTable = xxxInitTerminal((struct tagTERMINAL *)v14),
          DesktopNotificationEvent = GlobalAtomTable,
          GlobalAtomTable < 0) )
    {
      v35 = GlobalAtomTable;
      goto LABEL_47;
    }
    if ( (*((_DWORD *)Object + 16) & 4) == 0 && !(unsigned int)xxxInitWindowStation() )
    {
      DesktopNotificationEvent = -1073741801;
      v35 = -1073741801;
LABEL_47:
      v36 = RtlNtStatusToDosError(v35);
      UserSetLastError(v36);
      goto LABEL_58;
    }
    v19 = (struct tagWND **)(v14 + 8);
    if ( *((_QWORD *)v14 + 1) )
    {
LABEL_11:
      if ( (*((_DWORD *)Object + 16) & 4) == 0 )
      {
        v30 = RtlLengthSid(SeExports->SeWorldSid);
        v31 = v30 + 8;
        v32 = (_WORD *)Win32AllocPoolWithQuota(v30 + 8, 1702064981LL);
        if ( !v32
          || (*v32 = 0,
              v32[1] = v31,
              *((_DWORD *)v32 + 1) = 0x100000,
              RtlCopySid(v30, v32 + 4, SeExports->SeWorldSid),
              SecurityDescriptor = (void *)CreateSecurityDescriptor(v32, v31, 0LL),
              Win32FreePool(v32),
              !SecurityDescriptor) )
        {
          DesktopNotificationEvent = -1073741801;
          goto LABEL_57;
        }
        DesktopNotificationEvent = CreateDesktopNotificationEvent(SecurityDescriptor);
        if ( DesktopNotificationEvent < 0 )
        {
LABEL_57:
          v13 = v52;
          goto LABEL_58;
        }
        Win32FreePool(SecurityDescriptor);
      }
      inserted = ObInsertObject(Object, 0LL, a3, 1u, &Object, &Handle);
      DesktopNotificationEvent = inserted;
      if ( inserted < 0 )
      {
        Object = 0LL;
      }
      else
      {
        if ( inserted == 0x40000000 )
        {
LABEL_20:
          ObfDereferenceObject(Object);
          *a10 = Handle;
          return 0LL;
        }
        DesktopNotificationEvent = ApplySecurityAttributesToWinsta(Object, v45);
        if ( DesktopNotificationEvent >= 0 )
        {
          for ( i = (_QWORD *)grpWinStaList; *i; i = (_QWORD *)(*i + 8LL) )
            ;
          LockObjectAssignment(i, Object);
          if ( (*((_DWORD *)Object + 16) & 4) == 0 )
          {
            if ( a8 )
            {
              v50 = 0LL;
              v51 = 0LL;
              PushW32ThreadLock(Object, &v50, UserDereferenceObject);
              if ( !xxxSafeLoadKeyboardLayoutEx(Object, v54, 0LL, a5, a6, a7, a8, a9, -2147483647) )
                DesktopNotificationEvent = -1073741823;
              ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
              *(_QWORD *)(ThreadWin32Thread + 16) = v50;
            }
          }
        }
      }
      SecurityDescriptor = 0LL;
      if ( DesktopNotificationEvent >= 0 )
        goto LABEL_20;
      goto LABEL_57;
    }
    v10 = gptiCurrent;
    v23 = *(_QWORD *)(gptiCurrent + 424LL);
    v24 = *(_QWORD *)(*((_QWORD *)v14 + 2) + 424LL);
    v11 = *(void **)(gptiCurrent + 456LL);
    v43 = *(_QWORD *)(gptiCurrent + 592LL);
    v46 = v23;
    *(_QWORD *)(gptiCurrent + 424LL) = v24;
    if ( v11 )
    {
      ObfReferenceObject(v11);
    }
    else if ( *(_QWORD *)(gptiCurrent + 744LL) != gptiCurrent + 744LL )
    {
      v42 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 536LL);
    }
    ++gdwDeferWinEvent;
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v42);
    DesktopNotificationEvent = zzzSetDesktop(gptiCurrent);
    if ( DesktopNotificationEvent < 0 )
    {
      if ( !*(_QWORD *)(gptiCurrent + 456LL) && v11 )
        zzzSetDesktop(gptiCurrent);
      UserAtomicCheck::Detach((UserAtomicCheck *)&v42);
      zzzEndDeferWinEventNotify();
      *(_QWORD *)(gptiCurrent + 424LL) = v23;
    }
    else
    {
      v25 = *(_DWORD *)(gptiCurrent + 488LL);
      *(_DWORD *)(gptiCurrent + 488LL) = v25 | 0x10000000;
      v26 = v25 & 0x10000000;
      v27 = 0;
      if ( PsGetCurrentProcessWin32Process() )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
        v27 = IsImmersiveAppRestricted(CurrentProcessWin32Process) != 0;
      }
      SmartObjStackRefBase<tagMENU>::Init(v48, 0LL);
      v49 = 0LL;
      Window = xxxCreateWindowEx(
                 0,
                 32769,
                 32769,
                 0,
                 -2113929216,
                 -32768,
                 -32768,
                 0xFFFF,
                 0xFFFF,
                 0LL,
                 (__int64)v48,
                 hModuleWin,
                 0LL,
                 1,
                 778,
                 v27,
                 0LL);
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v48);
      if ( Window )
      {
        v47[0] = v14 + 8;
        v47[1] = Window;
        HMAssignmentLock(v47);
        *(_DWORD *)(gptiCurrent + 488LL) = v26 | *(_DWORD *)(gptiCurrent + 488LL) & 0xEFFFFFFF;
        SetVisible(*v19);
        HMChangeOwnerThread(*v19, *((_QWORD *)v14 + 2));
        v13 = 1;
        *(_QWORD *)(gptiCurrent + 424LL) = v46;
        v52 = 1;
        DesktopNotificationEvent = zzzSetDesktop(gptiCurrent);
        if ( DesktopNotificationEvent < 0 )
        {
          UserAtomicCheck::Detach((UserAtomicCheck *)&v42);
          zzzEndDeferWinEventNotify();
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v42);
          goto LABEL_58;
        }
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v42);
        zzzEndDeferWinEventNotify();
        if ( v11 )
        {
          ObfDereferenceObject(v11);
          v11 = 0LL;
        }
        goto LABEL_11;
      }
      DesktopNotificationEvent = -1073741801;
      UserAtomicCheck::Detach((UserAtomicCheck *)&v42);
      zzzEndDeferWinEventNotify();
      *(_QWORD *)(gptiCurrent + 424LL) = v46;
      zzzSetDesktop(gptiCurrent);
    }
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v42);
    v13 = 0;
    goto LABEL_58;
  }
  DesktopNotificationEvent = -1073741790;
LABEL_58:
  v37 = RtlNtStatusToDosError(DesktopNotificationEvent);
  UserSetLastError(v37);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v13 )
  {
    ++gdwDeferWinEvent;
    v38 = *(_DWORD *)(v10 + 488);
    v39 = *(_QWORD *)(v10 + 424);
    *(_DWORD *)(v10 + 488) = v38 | 0x10000000;
    *(_QWORD *)(v10 + 424) = *(_QWORD *)(*((_QWORD *)v14 + 2) + 424LL);
    HMChangeOwnerThread(*((_QWORD *)v14 + 1), v10);
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v45);
    xxxCleanupMotherDesktopWindow(v14);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v45);
    v40 = (*(_DWORD *)(v10 + 488) ^ v38) & 0x10000000;
    *(_QWORD *)(v10 + 424) = v39;
    *(_DWORD *)(v10 + 488) ^= v40;
    zzzEndDeferWinEventNotify();
  }
  if ( Handle )
    ObCloseHandle(Handle, 1);
  if ( SecurityDescriptor )
    Win32FreePool(SecurityDescriptor);
  if ( v11 )
    ObfDereferenceObject(v11);
  return (unsigned int)DesktopNotificationEvent;
}
