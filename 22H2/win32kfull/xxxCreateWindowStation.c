/*
 * XREFs of xxxCreateWindowStation @ 0x1C006B42C
 * Callers:
 *     xxxConnectService @ 0x1C0137D20 (xxxConnectService.c)
 *     EditionCreateWindowStationEntryPointEx @ 0x1C013BF60 (EditionCreateWindowStationEntryPointEx.c)
 * Callees:
 *     zzzEndDeferWinEventNotify @ 0x1C0025058 (zzzEndDeferWinEventNotify.c)
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     xxxInitWindowStation @ 0x1C003DB88 (xxxInitWindowStation.c)
 *     PushW32ThreadLock @ 0x1C00621E0 (PushW32ThreadLock.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C0064FE4 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     zzzSetDesktop @ 0x1C006A860 (zzzSetDesktop.c)
 *     ?xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z @ 0x1C006CB20 (-xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C009E5C0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?CreateDesktopNotificationEvent@@YAJPEAX@Z @ 0x1C00B1B24 (-CreateDesktopNotificationEvent@@YAJPEAX@Z.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C00BE0EC (xxxCleanupMotherDesktopWindow.c)
 *     SetVisible @ 0x1C00EBC94 (SetVisible.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
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
  __int64 v26; // rdx
  __int64 v27; // r8
  int v28; // esi
  int v29; // esi
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  int v34; // edi
  __int64 Window; // rdi
  __int64 v36; // rdx
  __int64 v37; // r8
  void *v38; // r8
  __int64 v39; // rdx
  __int64 v40; // r8
  ULONG v41; // esi
  ULONG v42; // edi
  _WORD *v43; // rbx
  __int64 v44; // rbx
  __int64 ThreadWin32Thread; // rax
  ULONG v46; // eax
  NTSTATUS v47; // ecx
  ULONG v48; // eax
  __int64 v49; // rdx
  __int64 v50; // r8
  void *v51; // r8
  __int64 v52; // rdx
  __int64 v53; // r8
  ULONG v54; // eax
  int v55; // edi
  __int64 v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // r8
  int v59; // edi
  int v60; // [rsp+98h] [rbp-49h]
  PVOID Object; // [rsp+A0h] [rbp-41h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp-39h] BYREF
  __int64 v63; // [rsp+B0h] [rbp-31h]
  void *v64; // [rsp+B8h] [rbp-29h]
  __int64 v65; // [rsp+C0h] [rbp-21h]
  __int128 v66; // [rsp+C8h] [rbp-19h] BYREF
  __int64 v67; // [rsp+D8h] [rbp-9h]
  int v68; // [rsp+128h] [rbp+47h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+138h] [rbp+57h]
  __int64 v70; // [rsp+140h] [rbp+5Fh]

  v70 = a4;
  DesiredAccess = a3;
  v65 = *(_QWORD *)(a1 + 32);
  v10 = 0LL;
  v11 = 0LL;
  Object = 0LL;
  SecurityDescriptor = 0LL;
  Handle = 0LL;
  v13 = 0;
  v60 = 0;
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
    v46 = RtlNtStatusToDosError(v15);
    UserSetLastError(v46);
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
      v47 = GlobalAtomTable;
      goto LABEL_52;
    }
    if ( (*((_DWORD *)Object + 16) & 4) == 0 && !(unsigned int)xxxInitWindowStation() )
    {
      DesktopNotificationEvent = -1073741801;
      v47 = -1073741801;
LABEL_52:
      v48 = RtlNtStatusToDosError(v47);
      UserSetLastError(v48);
      goto LABEL_63;
    }
    if ( *((_QWORD *)v14 + 1) )
    {
LABEL_11:
      if ( (*((_DWORD *)Object + 16) & 4) != 0 )
        goto LABEL_12;
      v41 = RtlLengthSid(SeExports->SeWorldSid);
      v42 = v41 + 8;
      v43 = (_WORD *)Win32AllocPoolWithQuotaZInit(v41 + 8, 1702064981LL);
      if ( v43
        && (*v43 = 0,
            v43[1] = v42,
            *((_DWORD *)v43 + 1) = 0x100000,
            RtlCopySid(v41, v43 + 4, SeExports->SeWorldSid),
            SecurityDescriptor = (void *)CreateSecurityDescriptor(v43, v42, 0LL),
            Win32FreePool(v43),
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
            DesktopNotificationEvent = ApplySecurityAttributesToWinsta(Object, v65);
            if ( DesktopNotificationEvent >= 0 )
            {
              for ( i = (_QWORD *)grpWinStaList; *i; i = (_QWORD *)(*i + 8LL) )
                ;
              LockObjectAssignment(i, Object);
              if ( (*((_DWORD *)Object + 16) & 4) == 0 )
              {
                v44 = a8;
                if ( a8 )
                {
                  v66 = 0LL;
                  v67 = 0LL;
                  PushW32ThreadLock((__int64)Object, &v66, UserDereferenceObject);
                  if ( !xxxSafeLoadKeyboardLayoutEx(Object, v70, 0LL, a5, a6, a7, v44, a9, -2147483647) )
                    DesktopNotificationEvent = -1073741823;
                  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
                  *(_QWORD *)(ThreadWin32Thread + 16) = v66;
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
      v13 = v60;
      goto LABEL_63;
    }
    v10 = gptiCurrent;
    v24 = *(_QWORD *)(gptiCurrent + 424LL);
    v11 = *(void **)(gptiCurrent + 456LL);
    v25 = *(void **)(gptiCurrent + 592LL);
    *(_QWORD *)(gptiCurrent + 424LL) = *(_QWORD *)(*((_QWORD *)v14 + 2) + 424LL);
    v63 = v24;
    v64 = v25;
    if ( v11 )
    {
      ObfReferenceObject(v11);
    }
    else if ( *(_QWORD *)(gptiCurrent + 744LL) != gptiCurrent + 744LL )
    {
      v68 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 536LL);
    }
    ++gdwDeferWinEvent;
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v68);
    DesktopNotificationEvent = zzzSetDesktop(gptiCurrent, 0LL, 0LL);
    if ( DesktopNotificationEvent < 0 )
    {
      if ( !*(_QWORD *)(gptiCurrent + 456LL) && v11 )
        zzzSetDesktop(gptiCurrent, (__int64)v11, v25);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v68, v26, v27);
      zzzEndDeferWinEventNotify();
      *(_QWORD *)(gptiCurrent + 424LL) = v24;
    }
    else
    {
      v28 = *(_DWORD *)(gptiCurrent + 488LL);
      *(_DWORD *)(gptiCurrent + 488LL) = v28 | 0x10000000;
      v29 = v28 & 0x10000000;
      CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(0x10000000LL);
      if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
        goto LABEL_31;
      v32 = PsGetCurrentProcessWin32Process(v31);
      v33 = v32;
      if ( v32 )
        v33 = -(__int64)(*(_QWORD *)v32 != 0LL) & v32;
      v34 = 1;
      if ( !(unsigned int)IsImmersiveAppRestricted(v33) )
LABEL_31:
        v34 = 0;
      SmartObjStackRefBase<tagMENU>::Init(&v66, 0LL);
      v67 = 0LL;
      Window = xxxCreateWindowEx(
                 0,
                 32769LL,
                 32769LL,
                 0LL,
                 0x82000000,
                 -32768,
                 -32768,
                 0xFFFFu,
                 0xFFFFu,
                 0LL,
                 (__int64)&v66,
                 hModuleWin,
                 0LL,
                 1u,
                 0x30Au,
                 v34,
                 0LL);
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(&v66);
      if ( Window )
      {
        *((_QWORD *)&v66 + 1) = Window;
        *(_QWORD *)&v66 = v14 + 2;
        HMAssignmentLock(&v66, 0LL);
        *(_DWORD *)(gptiCurrent + 488LL) = v29 | *(_DWORD *)(gptiCurrent + 488LL) & 0xEFFFFFFF;
        SetVisible(*((struct tagWND **)v14 + 1));
        HMChangeOwnerThread(*((_QWORD *)v14 + 1), *((_QWORD *)v14 + 2));
        v13 = 1;
        v38 = v64;
        *(_QWORD *)(gptiCurrent + 424LL) = v63;
        v60 = 1;
        DesktopNotificationEvent = zzzSetDesktop(gptiCurrent, (__int64)v11, v38);
        if ( DesktopNotificationEvent < 0 )
        {
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v68, v39, v40);
          zzzEndDeferWinEventNotify();
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v68, v52, v53);
          goto LABEL_63;
        }
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v68, v39, v40);
        zzzEndDeferWinEventNotify();
        if ( v11 )
        {
          ObfDereferenceObject(v11);
          v11 = 0LL;
        }
        goto LABEL_11;
      }
      DesktopNotificationEvent = -1073741801;
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v68, v36, v37);
      zzzEndDeferWinEventNotify();
      v51 = v64;
      *(_QWORD *)(gptiCurrent + 424LL) = v63;
      zzzSetDesktop(gptiCurrent, (__int64)v11, v51);
    }
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v68, v49, v50);
    v13 = 0;
    goto LABEL_63;
  }
  DesktopNotificationEvent = -1073741790;
LABEL_63:
  v54 = RtlNtStatusToDosError(DesktopNotificationEvent);
  UserSetLastError(v54);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v13 )
  {
    ++gdwDeferWinEvent;
    v55 = *(_DWORD *)(v10 + 488);
    v56 = *(_QWORD *)(v10 + 424);
    *(_DWORD *)(v10 + 488) = v55 | 0x10000000;
    *(_QWORD *)(v10 + 424) = *(_QWORD *)(*((_QWORD *)v14 + 2) + 424LL);
    HMChangeOwnerThread(*((_QWORD *)v14 + 1), v10);
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v68);
    xxxCleanupMotherDesktopWindow(v14);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v68, v57, v58);
    v59 = (*(_DWORD *)(v10 + 488) ^ v55) & 0x10000000;
    *(_QWORD *)(v10 + 424) = v56;
    *(_DWORD *)(v10 + 488) ^= v59;
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
