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
  void *SecurityDescriptor; // r12
  int v13; // edi
  int *v14; // r13
  NTSTATUS v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rcx
  _DWORD *v18; // rax
  int GlobalAtomTable; // eax
  NTSTATUS DesktopNotificationEvent; // esi
  NTSTATUS inserted; // eax
  _QWORD *i; // rcx
  __int64 v24; // rbx
  void *v25; // rdi
  int v26; // esi
  int v27; // esi
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  int v32; // edi
  __int64 Window; // rdi
  void *v34; // r8
  ULONG v35; // esi
  ULONG v36; // edi
  _WORD *v37; // rbx
  __int64 v38; // rbx
  __int64 ThreadWin32Thread; // rax
  ULONG v40; // eax
  NTSTATUS v41; // ecx
  ULONG v42; // eax
  void *v43; // r8
  ULONG v44; // eax
  int v45; // edi
  __int64 v46; // rbx
  int v47; // edi
  int v48; // [rsp+98h] [rbp-49h]
  PVOID Object; // [rsp+A0h] [rbp-41h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp-39h] BYREF
  __int64 v51; // [rsp+B0h] [rbp-31h]
  void *v52; // [rsp+B8h] [rbp-29h]
  __int64 v53; // [rsp+C0h] [rbp-21h]
  __int128 v54; // [rsp+C8h] [rbp-19h] BYREF
  __int64 v55; // [rsp+D8h] [rbp-9h]
  int v56; // [rsp+128h] [rbp+47h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+138h] [rbp+57h]
  __int64 v58; // [rsp+140h] [rbp+5Fh]

  v58 = a4;
  DesiredAccess = a3;
  v53 = *(_QWORD *)(a1 + 32);
  v10 = 0LL;
  v11 = 0LL;
  Object = 0LL;
  SecurityDescriptor = 0LL;
  Handle = 0LL;
  v13 = 0;
  v48 = 0;
  if ( grpWinStaList )
  {
    gTermNOIO |= 2u;
    v14 = &gTermNOIO;
  }
  else
  {
    v14 = (int *)gTermIO[0];
  }
  LOBYTE(a4) = a2;
  v15 = ObCreateObject(0LL, ExWindowStationObjectType, a1, a4, 0LL, 216, 0, 0, &Object);
  v16 = v15;
  if ( v15 < 0 )
  {
    v40 = RtlNtStatusToDosError(v15);
    UserSetLastError(v40);
    return v16;
  }
  if ( ExAcquireRundownProtection(gWinstaRunRef) )
  {
    memset_0(Object, 0, 0xD8uLL);
    v18 = (_DWORD *)SGDGetUserSessionState(v17);
    *(_DWORD *)Object = *v18;
    *((_QWORD *)Object + 7) = v14;
    if ( (*v14 & 2) != 0 )
      *((_DWORD *)Object + 16) = 4;
    GlobalAtomTable = CreateGlobalAtomTable((char *)Object + 168);
    DesktopNotificationEvent = GlobalAtomTable;
    if ( GlobalAtomTable < 0
      || (*v14 & 1) == 0
      && (GlobalAtomTable = xxxInitTerminal((struct tagTERMINAL *)v14),
          DesktopNotificationEvent = GlobalAtomTable,
          GlobalAtomTable < 0) )
    {
      v41 = GlobalAtomTable;
      goto LABEL_52;
    }
    if ( (*((_DWORD *)Object + 16) & 4) == 0 && !(unsigned int)xxxInitWindowStation() )
    {
      DesktopNotificationEvent = -1073741801;
      v41 = -1073741801;
LABEL_52:
      v42 = RtlNtStatusToDosError(v41);
      UserSetLastError(v42);
      goto LABEL_63;
    }
    if ( *((_QWORD *)v14 + 1) )
    {
LABEL_11:
      if ( (*((_DWORD *)Object + 16) & 4) != 0 )
        goto LABEL_12;
      v35 = RtlLengthSid(SeExports->SeWorldSid);
      v36 = v35 + 8;
      v37 = (_WORD *)Win32AllocPoolWithQuotaZInit(v35 + 8, 1702064981LL);
      if ( v37
        && (*v37 = 0,
            v37[1] = v36,
            *((_DWORD *)v37 + 1) = 0x100000,
            RtlCopySid(v35, v37 + 4, SeExports->SeWorldSid),
            SecurityDescriptor = (void *)CreateSecurityDescriptor(v37, v36, 0LL),
            Win32FreePool(v37),
            SecurityDescriptor) )
      {
        DesktopNotificationEvent = CreateDesktopNotificationEvent(SecurityDescriptor);
        if ( DesktopNotificationEvent >= 0 )
        {
          Win32FreePool(SecurityDescriptor);
LABEL_12:
          inserted = ObInsertObject(Object, 0LL, DesiredAccess, 1u, &Object, &Handle);
          DesktopNotificationEvent = inserted;
          if ( inserted < 0 )
          {
            Object = 0LL;
            SecurityDescriptor = 0LL;
          }
          else
          {
            if ( inserted == 0x40000000 )
              goto LABEL_20;
            DesktopNotificationEvent = ApplySecurityAttributesToWinsta(Object, v53);
            if ( DesktopNotificationEvent >= 0 )
            {
              for ( i = (_QWORD *)grpWinStaList; *i; i = (_QWORD *)(*i + 8LL) )
                ;
              LockObjectAssignment(i, Object);
              if ( (*((_DWORD *)Object + 16) & 4) == 0 )
              {
                v38 = a8;
                if ( a8 )
                {
                  v54 = 0LL;
                  v55 = 0LL;
                  PushW32ThreadLock((__int64)Object, &v54, UserDereferenceObject);
                  if ( !xxxSafeLoadKeyboardLayoutEx(Object, v58, 0LL, a5, a6, a7, v38, a9, -2147483647) )
                    DesktopNotificationEvent = -1073741823;
                  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                  *(_QWORD *)(ThreadWin32Thread + 16) = v54;
                }
              }
            }
            SecurityDescriptor = 0LL;
            if ( DesktopNotificationEvent >= 0 )
            {
LABEL_20:
              ObfDereferenceObject(Object);
              *a10 = Handle;
              return 0LL;
            }
          }
        }
      }
      else
      {
        DesktopNotificationEvent = -1073741801;
      }
      v13 = v48;
      goto LABEL_63;
    }
    v10 = gptiCurrent;
    v24 = *(_QWORD *)(gptiCurrent + 424LL);
    v11 = *(void **)(gptiCurrent + 456LL);
    v25 = *(void **)(gptiCurrent + 592LL);
    *(_QWORD *)(gptiCurrent + 424LL) = *(_QWORD *)(*((_QWORD *)v14 + 2) + 424LL);
    v51 = v24;
    v52 = v25;
    if ( v11 )
    {
      ObfReferenceObject(v11);
    }
    else if ( *(_QWORD *)(gptiCurrent + 744LL) != gptiCurrent + 744LL )
    {
      v56 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 535LL);
    }
    ++gdwDeferWinEvent;
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v56);
    DesktopNotificationEvent = zzzSetDesktop(gptiCurrent, 0LL, 0LL);
    if ( DesktopNotificationEvent < 0 )
    {
      if ( !*(_QWORD *)(gptiCurrent + 456LL) && v11 )
        zzzSetDesktop(gptiCurrent, (__int64)v11, v25);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v56);
      zzzEndDeferWinEventNotify();
      *(_QWORD *)(gptiCurrent + 424LL) = v24;
    }
    else
    {
      v26 = *(_DWORD *)(gptiCurrent + 488LL);
      *(_DWORD *)(gptiCurrent + 488LL) = v26 | 0x10000000;
      v27 = v26 & 0x10000000;
      CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(0x10000000LL);
      if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
        goto LABEL_31;
      v30 = PsGetCurrentProcessWin32Process(v29);
      v31 = v30;
      if ( v30 )
        v31 = -(__int64)(*(_QWORD *)v30 != 0LL) & v30;
      v32 = 1;
      if ( !(unsigned int)IsImmersiveAppRestricted(v31) )
LABEL_31:
        v32 = 0;
      SmartObjStackRefBase<tagMENU>::Init(&v54, 0LL);
      v55 = 0LL;
      Window = xxxCreateWindowEx(
                 0,
                 32769LL,
                 32769LL,
                 0LL,
                 0x82000000,
                 -32768,
                 -32768,
                 0xFFFF,
                 0xFFFF,
                 0LL,
                 (__int64)&v54,
                 hModuleWin,
                 0LL,
                 1,
                 0x30Au,
                 v32,
                 0LL);
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(&v54);
      if ( Window )
      {
        *((_QWORD *)&v54 + 1) = Window;
        *(_QWORD *)&v54 = v14 + 2;
        HMAssignmentLock(&v54, 0LL);
        *(_DWORD *)(gptiCurrent + 488LL) = v27 | *(_DWORD *)(gptiCurrent + 488LL) & 0xEFFFFFFF;
        SetVisible(*((struct tagWND **)v14 + 1), 1u);
        HMChangeOwnerThread(*((_QWORD *)v14 + 1), *((_QWORD *)v14 + 2));
        v13 = 1;
        v34 = v52;
        *(_QWORD *)(gptiCurrent + 424LL) = v51;
        v48 = 1;
        DesktopNotificationEvent = zzzSetDesktop(gptiCurrent, (__int64)v11, v34);
        if ( DesktopNotificationEvent < 0 )
        {
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v56);
          zzzEndDeferWinEventNotify();
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v56);
          goto LABEL_63;
        }
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v56);
        zzzEndDeferWinEventNotify();
        if ( v11 )
        {
          ObfDereferenceObject(v11);
          v11 = 0LL;
        }
        goto LABEL_11;
      }
      DesktopNotificationEvent = -1073741801;
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v56);
      zzzEndDeferWinEventNotify();
      v43 = v52;
      *(_QWORD *)(gptiCurrent + 424LL) = v51;
      zzzSetDesktop(gptiCurrent, (__int64)v11, v43);
    }
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v56);
    v13 = 0;
    goto LABEL_63;
  }
  DesktopNotificationEvent = -1073741790;
LABEL_63:
  v44 = RtlNtStatusToDosError(DesktopNotificationEvent);
  UserSetLastError(v44);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v13 )
  {
    ++gdwDeferWinEvent;
    v45 = *(_DWORD *)(v10 + 488);
    v46 = *(_QWORD *)(v10 + 424);
    *(_DWORD *)(v10 + 488) = v45 | 0x10000000;
    *(_QWORD *)(v10 + 424) = *(_QWORD *)(*((_QWORD *)v14 + 2) + 424LL);
    HMChangeOwnerThread(*((_QWORD *)v14 + 1), v10);
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v56);
    xxxCleanupMotherDesktopWindow((__int64)v14);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v56);
    v47 = (*(_DWORD *)(v10 + 488) ^ v45) & 0x10000000;
    *(_QWORD *)(v10 + 424) = v46;
    *(_DWORD *)(v10 + 488) ^= v47;
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
