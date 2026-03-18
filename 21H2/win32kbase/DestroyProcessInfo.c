/*
 * XREFs of DestroyProcessInfo @ 0x1C00188FC
 * Callers:
 *     xxxUserProcessCallout @ 0x1C00369B0 (xxxUserProcessCallout.c)
 * Callees:
 *     CitProcessCallout @ 0x1C0016FF0 (CitProcessCallout.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0017700 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0017740 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     UnlockObjectAssignment @ 0x1C00199F0 (UnlockObjectAssignment.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C002CA0C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C002CA34 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     RIMOnProcessDestroy @ 0x1C0043910 (RIMOnProcessDestroy.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C004C7A4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     DelayedDestroyCacheDC @ 0x1C005197C (DelayedDestroyCacheDC.c)
 *     PostWinlogonMessage @ 0x1C0059750 (PostWinlogonMessage.c)
 *     ?OnProcessTermination@InputObjectMap@@SAXXZ @ 0x1C008072C (-OnProcessTermination@InputObjectMap@@SAXXZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     CloseProtectedHandle @ 0x1C008F4B0 (CloseProtectedHandle.c)
 *     IszzzCalcStartCursorHideSupported @ 0x1C0099B48 (IszzzCalcStartCursorHideSupported.c)
 *     ApiSetEditionPushProcessLaunchForegroundPolicy @ 0x1C009D8A4 (ApiSetEditionPushProcessLaunchForegroundPolicy.c)
 *     ClearAppStarting @ 0x1C00AE540 (ClearAppStarting.c)
 *     IsShellProcess @ 0x1C00AF700 (IsShellProcess.c)
 *     CleanupLogonProcess @ 0x1C00B8E60 (CleanupLogonProcess.c)
 *     PostPlaySoundMessage @ 0x1C00B9DE0 (PostPlaySoundMessage.c)
 *     SynchronizeContext @ 0x1C00BFCE0 (SynchronizeContext.c)
 *     IsCleanupIAMAccessSupported @ 0x1C00C5D2C (IsCleanupIAMAccessSupported.c)
 *     GreCleanDCAndSetOwnerEx @ 0x1C00DBCF0 (GreCleanDCAndSetOwnerEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1C014E59C (EtwTraceScreenSaverProcessEvent.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C014F270 (McTemplateK0_EtwWriteTransfer.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C018614C (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 */

__int64 __fastcall DestroyProcessInfo(_QWORD *a1)
{
  struct _KEVENT *v2; // rcx
  int v3; // eax
  __int64 i; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 k; // r14
  __int64 j; // rax
  struct _KPROCESS *v9; // rcx
  HANDLE ProcessId; // rax
  __int64 v11; // rax
  __int64 *v12; // rcx
  __int64 m; // rbx
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // r14d
  __int64 v17; // rcx
  int v18; // r8d
  int v19; // r9d
  void *v20; // rcx
  PVOID *v21; // rbx
  _QWORD *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v26; // rdx
  _QWORD *v27; // rbx
  NTSTATUS ProcessExitStatus; // eax
  NTSTATUS v29; // eax
  __int64 *v30; // rcx
  __int64 *v31; // rdx
  __int64 v32; // [rsp+70h] [rbp+30h] BYREF
  __int64 v33; // [rsp+78h] [rbp+38h] BYREF
  __int64 v34; // [rsp+80h] [rbp+40h] BYREF

  CitProcessCallout((__int64)a1, 0);
  v2 = (struct _KEVENT *)a1[2];
  if ( v2 != (struct _KEVENT *)-1LL )
  {
    if ( !v2 )
      goto LABEL_3;
    KeSetEvent(v2, 1, 0);
    ObfDereferenceObject((PVOID)a1[2]);
  }
  a1[2] = 0LL;
LABEL_3:
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v32);
  ++gdwDeferWinEvent;
  v3 = *((_DWORD *)a1 + 3);
  if ( (v3 & 4) != 0 )
  {
    *((_DWORD *)a1 + 3) = v3 & 0xFFFFFFFB;
    if ( (int)IszzzCalcStartCursorHideSupported() >= 0 )
    {
      if ( qword_1C029BCF0 )
        qword_1C029BCF0(0LL, 0LL);
    }
  }
  --gdwDeferWinEvent;
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v32);
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v32, (struct _EX_PUSH_LOCK *)&gRotationProcessLock);
  for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
  {
    for ( j = *(_QWORD *)(i + 16); j; j = *(_QWORD *)(j + 32) )
    {
      if ( *(_QWORD **)(j + 248) == a1 )
        *(_QWORD *)(j + 248) = 0LL;
    }
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v32);
  if ( (*((_DWORD *)a1 + 3) & 0x8000) == 0 )
    return 0LL;
  PsUpdateComponentPower(*a1, 6LL);
  v5 = a1[34];
  if ( v5 )
  {
    PsReleaseProcessWakeCounter(v5, 1LL);
    a1[34] = 0LL;
  }
  if ( a1[104] && qword_1C029C110 && (int)qword_1C029C110() >= 0 && qword_1C029C118 )
    qword_1C029C118(a1);
  if ( a1[112] && qword_1C029C120 && (int)qword_1C029C120() >= 0 && qword_1C029C128 )
    qword_1C029C128(a1);
  if ( a1[113] != -1LL )
    RIMRemoveMouseOrKeyboardInjectionDevice();
  if ( a1[114] != -1LL )
    RIMRemoveMouseOrKeyboardInjectionDevice();
  if ( qword_1C029C130 && (int)qword_1C029C130() >= 0 && qword_1C029C138 )
    qword_1C029C138(a1);
  if ( (*((_DWORD *)a1 + 3) & 0x40001) == 0x40000 )
  {
    v6 = a1[83];
    if ( (!v6 || (*(_DWORD *)(v6 + 64) & 2) == 0) && qword_1C029C140 && (int)qword_1C029C140() >= 0 )
      PostPlaySoundMessage(8LL);
  }
  if ( (unsigned int)IsShellProcess(a1) && a1[42] == grpdeskIODefault )
  {
    if ( (int)IsCleanupIAMAccessSupported() >= 0 && qword_1C029BEB8 )
      qword_1C029BEB8(a1[42]);
    if ( (*(_DWORD *)(a1[83] + 64LL) & 2) == 0 )
    {
      ProcessExitStatus = PsGetProcessExitStatus((PEPROCESS)*a1);
      if ( ProcessExitStatus != 1 && ProcessExitStatus != 255 )
      {
        v29 = PsGetProcessExitStatus((PEPROCESS)*a1);
        PostWinlogonMessage(1025LL, v29);
      }
    }
  }
  for ( k = grpWinStaList; k; k = *(_QWORD *)(k + 8) )
  {
    for ( m = *(_QWORD *)(k + 16); m; m = *(_QWORD *)(m + 32) )
    {
      v14 = *(_QWORD *)(m + 8);
      if ( *(_QWORD **)(v14 + 176) == a1 )
      {
        *(_QWORD *)(v14 + 176) = 0LL;
        if ( (struct tagDESKTOP *)m == grpdeskRitInput )
          SynchronizeContext();
      }
    }
  }
  if ( (*((_DWORD *)a1 + 3) & 0x40) != 0 )
  {
    v9 = (struct _KPROCESS *)*a1;
    v32 = 4LL;
    ProcessId = PsGetProcessId(v9);
    ApiSetEditionPushProcessLaunchForegroundPolicy(ProcessId, v32);
    ClearAppStarting(a1);
  }
  v11 = gppiList;
  v12 = &gppiList;
  while ( v11 )
  {
    if ( (_QWORD *)v11 == a1 )
    {
      *v12 = a1[47];
      break;
    }
    v12 = (__int64 *)(v11 + 376);
    v11 = *(_QWORD *)(v11 + 376);
  }
  v15 = *((_DWORD *)a1 + 3);
  v16 = v15 & 0x4000;
  if ( (v15 & 0x4000) != 0 && (v15 & 0x200) != 0 )
    DelayedDestroyCacheDC(1LL);
  if ( qword_1C029C150 && (int)qword_1C029C150(v12) >= 0 )
  {
    v17 = 0LL;
    v32 = 0LL;
    if ( qword_1C029C158 )
    {
      qword_1C029C158(&v32);
      v17 = v32;
    }
    while ( v17 )
    {
      if ( *(_DWORD *)(v17 + 20) == *((_DWORD *)a1 + 14) )
        *(_DWORD *)(v17 + 20) = 0;
      v17 = *(_QWORD *)v17;
    }
  }
  if ( (_QWORD *)gppiScreenSaver == a1 )
  {
    gppiScreenSaver = 0LL;
    EtwTraceScreenSaverProcessEvent(2LL);
  }
  InputObjectMap::OnProcessTermination();
  if ( (_QWORD *)gppiUserApiHook == a1 && qword_1C029C160 && (int)qword_1C029C160() >= 0 && qword_1C029C168 )
    qword_1C029C168();
  if ( (_QWORD *)gppiDManipHook == a1 && qword_1C029C170 && (int)qword_1C029C170() >= 0 && qword_1C029C178 )
    qword_1C029C178();
  UnlockObjectAssignment(a1 + 83);
  UnlockObjectAssignment(a1 + 42);
  v20 = (void *)a1[49];
  if ( v20 )
  {
    CloseProtectedHandle(v20);
    a1[49] = 0LL;
  }
  *((_DWORD *)a1 + 3) |= 0x1000u;
  v21 = (PVOID *)a1[45];
  if ( v21 )
  {
    ObfDereferenceObject(v21[4]);
    v30 = (__int64 *)gpwpiFirstWow;
    v31 = &gpwpiFirstWow;
    if ( gpwpiFirstWow )
    {
      while ( v30 != (__int64 *)v21 )
      {
        v31 = v30;
        v30 = (__int64 *)*v30;
        if ( !v30 )
          goto LABEL_131;
      }
      *v31 = (__int64)*v21;
    }
LABEL_131:
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v21);
    a1[45] = 0LL;
  }
  v22 = (_QWORD *)a1[88];
  if ( v22 )
  {
    do
    {
      v27 = (_QWORD *)*v22;
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v22);
      v22 = v27;
    }
    while ( v27 );
  }
  a1[88] = 0LL;
  if ( qword_1C029C180 && (int)qword_1C029C180() >= 0 && qword_1C029C188 )
    qword_1C029C188(a1);
  if ( a1 == (_QWORD *)gppiInputProvider )
    gppiInputProvider = 0LL;
  if ( a1 == (_QWORD *)gppiLockSFW )
    gppiLockSFW = 0LL;
  if ( *((_DWORD *)a1 + 14) == gpidLogonUI )
  {
    gpidLogonUI = 0LL;
    gbLockScreenActive = 0;
    if ( (*((_DWORD *)a1 + 205) & 0x80000) != 0 && qword_1C029C1B0 && (int)qword_1C029C1B0(v20, v22) >= 0 )
    {
      if ( qword_1C029C1B8 )
        qword_1C029C1B8(2LL);
      *((_DWORD *)a1 + 205) &= ~0x80000u;
    }
  }
  if ( *((_DWORD *)a1 + 14) == gpidLogon )
    CleanupLogonProcess(v20, v22);
  v23 = *((unsigned int *)a1 + 275);
  if ( a1[137] )
  {
    v26 = *((unsigned int *)a1 + 274);
    if ( (unsigned int)dword_1C028D610 > 5 )
    {
      LODWORD(v32) = *((_DWORD *)a1 + 14);
      v33 = v26;
      v34 = v23;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1C028D610,
        (unsigned int)&unk_1C025BA68,
        v18,
        v19,
        (__int64)&v34,
        (__int64)&v33,
        (__int64)&v32);
    }
  }
  GreCleanDCAndSetOwnerEx(qword_1C0297298);
  if ( qword_1C029CB20 )
    qword_1C029CB20(a1);
  RIMOnProcessDestroy(*a1);
  LOBYTE(v24) = BYTE1(Microsoft_Windows_Win32kEnableBits);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    McTemplateK0_EtwWriteTransfer(v24, &CompleteGuiProcessExecution, &W32kControlGuid);
  return v16;
}
