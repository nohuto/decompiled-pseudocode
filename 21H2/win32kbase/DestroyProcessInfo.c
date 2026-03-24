/*
 * XREFs of DestroyProcessInfo @ 0x1C0045950
 * Callers:
 *     xxxUserProcessCallout @ 0x1C003BE30 (xxxUserProcessCallout.c)
 * Callees:
 *     DelayedDestroyCacheDC @ 0x1C000737C (DelayedDestroyCacheDC.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C00300B0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0042954 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00429A0 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UnlockObjectAssignment @ 0x1C0045F10 (UnlockObjectAssignment.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0045F3C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0045F70 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     CitProcessCallout @ 0x1C0045FB0 (CitProcessCallout.c)
 *     RIMOnProcessDestroy @ 0x1C00468A0 (RIMOnProcessDestroy.c)
 *     ?OnProcessTermination@InputObjectMap@@SAXXZ @ 0x1C0046CCC (-OnProcessTermination@InputObjectMap@@SAXXZ.c)
 *     IsShellProcess @ 0x1C0046DCC (IsShellProcess.c)
 *     CloseProtectedHandle @ 0x1C0046DF8 (CloseProtectedHandle.c)
 *     ClearAppStarting @ 0x1C0046FF0 (ClearAppStarting.c)
 *     GiveForegroundActivateRight @ 0x1C0047280 (GiveForegroundActivateRight.c)
 *     IszzzCalcStartCursorHideSupported @ 0x1C0047334 (IszzzCalcStartCursorHideSupported.c)
 *     PostWinlogonMessage @ 0x1C0074CD0 (PostWinlogonMessage.c)
 *     PostPlaySoundMessage @ 0x1C00A9398 (PostPlaySoundMessage.c)
 *     CleanupLogonProcess @ 0x1C00B6D80 (CleanupLogonProcess.c)
 *     IsCleanupIAMAccessSupported @ 0x1C00B8084 (IsCleanupIAMAccessSupported.c)
 *     GreCleanDCAndSetOwnerEx @ 0x1C00CBFF0 (GreCleanDCAndSetOwnerEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1C012398C (EtwTraceScreenSaverProcessEvent.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C0124580 (McTemplateK0_EtwWriteTransfer.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C015827C (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 */

__int64 __fastcall DestroyProcessInfo(_QWORD *a1)
{
  struct _KEVENT *v2; // rcx
  int v3; // eax
  __int64 i; // rcx
  __int64 v5; // rcx
  int v6; // ebp
  int v7; // eax
  __int64 v8; // rax
  int v9; // eax
  __int64 k; // rax
  __int64 j; // rax
  HANDLE ProcessId; // rax
  __int64 *v13; // rcx
  __int64 n; // rax
  __int64 m; // rcx
  __int64 v16; // rdx
  int v17; // eax
  unsigned int v18; // r14d
  int v19; // eax
  __int64 *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  void *v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // r8
  _QWORD *v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  _QWORD *v32; // rbx
  int v33; // eax
  int v34; // eax
  int v35; // eax
  NTSTATUS ProcessExitStatus; // eax
  NTSTATUS v37; // eax
  int v38; // eax
  __int64 *v39; // rcx
  __int64 *v40; // rdx
  __int64 *v41; // [rsp+60h] [rbp+8h] BYREF

  CitProcessCallout(a1, 0LL);
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
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v41);
  ++gdwDeferWinEvent;
  v3 = *((_DWORD *)a1 + 3);
  if ( (v3 & 4) != 0 )
  {
    *((_DWORD *)a1 + 3) = v3 & 0xFFFFFFFB;
    if ( (int)IszzzCalcStartCursorHideSupported() >= 0 )
    {
      if ( qword_1C0256FA0 )
        qword_1C0256FA0(0LL, 0LL);
    }
  }
  --gdwDeferWinEvent;
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v41);
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v41, (struct _EX_PUSH_LOCK *)&gRotationProcessLock);
  for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
  {
    for ( j = *(_QWORD *)(i + 16); j; j = *(_QWORD *)(j + 32) )
    {
      if ( *(_QWORD **)(j + 256) == a1 )
        *(_QWORD *)(j + 256) = 0LL;
    }
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v41);
  if ( (*((_DWORD *)a1 + 3) & 0x8000) == 0 )
    return 0LL;
  PsUpdateComponentPower(*a1, 6LL);
  v5 = a1[34];
  if ( v5 )
  {
    PsReleaseProcessWakeCounter(v5, 1LL);
    a1[34] = 0LL;
  }
  GetDomainLockRef(15);
  v6 = -1073741637;
  if ( a1[104] )
  {
    v33 = qword_1C02573D0 ? qword_1C02573D0() : -1073741637;
    if ( v33 >= 0 && qword_1C02573D8 )
      qword_1C02573D8(a1);
  }
  if ( a1[112] )
  {
    v35 = qword_1C02573E0 ? qword_1C02573E0() : -1073741637;
    if ( v35 >= 0 && qword_1C02573E8 )
      qword_1C02573E8(a1);
  }
  if ( a1[113] != -1LL )
    RIMRemoveMouseOrKeyboardInjectionDevice();
  if ( a1[114] != -1LL )
    RIMRemoveMouseOrKeyboardInjectionDevice();
  if ( qword_1C02573F0 )
    v7 = qword_1C02573F0();
  else
    v7 = -1073741637;
  if ( v7 >= 0 && qword_1C02573F8 )
    qword_1C02573F8(a1);
  if ( (*((_DWORD *)a1 + 3) & 0x40001) == 0x40000 )
  {
    v8 = a1[83];
    if ( !v8 || (*(_DWORD *)(v8 + 64) & 2) == 0 )
    {
      v9 = qword_1C0257400 ? qword_1C0257400() : -1073741637;
      if ( v9 >= 0 )
        PostPlaySoundMessage(8LL);
    }
  }
  if ( (unsigned int)IsShellProcess(a1) && a1[42] == grpdeskIODefault )
  {
    if ( (int)IsCleanupIAMAccessSupported() >= 0 && qword_1C0257178 )
      qword_1C0257178(a1[42]);
    if ( (*(_DWORD *)(a1[83] + 64LL) & 2) == 0 )
    {
      ProcessExitStatus = PsGetProcessExitStatus((PEPROCESS)*a1);
      if ( ProcessExitStatus != 1 && ProcessExitStatus != 255 )
      {
        v37 = PsGetProcessExitStatus((PEPROCESS)*a1);
        PostWinlogonMessage(1025LL, v37);
      }
    }
  }
  for ( k = grpWinStaList; k; k = *(_QWORD *)(k + 8) )
  {
    for ( m = *(_QWORD *)(k + 16); m; m = *(_QWORD *)(m + 32) )
    {
      v16 = *(_QWORD *)(m + 8);
      if ( *(_QWORD **)(v16 + 176) == a1 )
        *(_QWORD *)(v16 + 176) = 0LL;
    }
  }
  if ( (*((_DWORD *)a1 + 3) & 0x40) != 0 )
  {
    ProcessId = PsGetProcessId((PEPROCESS)*a1);
    GiveForegroundActivateRight(ProcessId);
    ClearAppStarting(a1);
  }
  v13 = &gppiList;
  for ( n = gppiList; n; n = *(_QWORD *)(n + 376) )
  {
    if ( (_QWORD *)n == a1 )
    {
      *v13 = a1[47];
      break;
    }
    v13 = (__int64 *)(n + 376);
  }
  v17 = *((_DWORD *)a1 + 3);
  v18 = v17 & 0x4000;
  if ( (v17 & 0x4000) != 0 && (v17 & 0x200) != 0 )
    DelayedDestroyCacheDC(1);
  if ( qword_1C0257410 )
    v19 = qword_1C0257410(v13);
  else
    v19 = -1073741637;
  if ( v19 >= 0 )
  {
    v20 = 0LL;
    v41 = 0LL;
    if ( qword_1C0257418 )
    {
      qword_1C0257418(&v41);
      v20 = v41;
    }
    while ( v20 )
    {
      if ( *((_DWORD *)v20 + 5) == *((_DWORD *)a1 + 14) )
        *((_DWORD *)v20 + 5) = 0;
      v20 = (__int64 *)*v20;
    }
  }
  if ( (_QWORD *)gppiScreenSaver == a1 )
  {
    gppiScreenSaver = 0LL;
    EtwTraceScreenSaverProcessEvent(2LL);
  }
  InputObjectMap::OnProcessTermination();
  if ( (_QWORD *)gppiUserApiHook == a1 )
  {
    v34 = qword_1C0257420 ? qword_1C0257420(v22, v21, v23) : -1073741637;
    if ( v34 >= 0 && qword_1C0257428 )
      qword_1C0257428(v22, v21, v23);
  }
  if ( (_QWORD *)gppiDManipHook == a1 )
  {
    v38 = qword_1C0257430 ? qword_1C0257430(v22, v21, v23) : -1073741637;
    if ( v38 >= 0 && qword_1C0257438 )
      qword_1C0257438(v22, v21, v23);
  }
  UnlockObjectAssignment(a1 + 83);
  UnlockObjectAssignment(a1 + 42);
  v24 = (void *)a1[49];
  if ( v24 )
  {
    CloseProtectedHandle(v24);
    a1[49] = 0LL;
  }
  *((_DWORD *)a1 + 3) |= 0x1000u;
  v25 = a1[45];
  if ( v25 )
  {
    ObfDereferenceObject(*(PVOID *)(v25 + 32));
    v39 = (__int64 *)gpwpiFirstWow;
    v40 = &gpwpiFirstWow;
    if ( gpwpiFirstWow )
    {
      while ( v39 != (__int64 *)v25 )
      {
        v40 = v39;
        v39 = (__int64 *)*v39;
        if ( !v39 )
          goto LABEL_143;
      }
      *v40 = *(_QWORD *)v25;
    }
LABEL_143:
    Win32FreePool(v25);
    a1[45] = 0LL;
  }
  GetDomainLockRef(2);
  v28 = (_QWORD *)a1[88];
  if ( v28 )
  {
    do
    {
      v32 = (_QWORD *)*v28;
      Win32FreePool((__int64)v28);
      v28 = v32;
    }
    while ( v32 );
  }
  a1[88] = 0LL;
  if ( qword_1C0257440 )
    v29 = qword_1C0257440(v28, v26, v27);
  else
    v29 = -1073741637;
  if ( v29 >= 0 && qword_1C0257448 )
    qword_1C0257448(a1);
  if ( a1 == (_QWORD *)gppiInputProvider )
    gppiInputProvider = 0LL;
  if ( a1 == (_QWORD *)gppiLockSFW )
    gppiLockSFW = 0LL;
  if ( *((_DWORD *)a1 + 14) == gpidLogonUI )
  {
    gpidLogonUI = 0LL;
    gbLockScreenActive = 0;
    if ( (*((_DWORD *)a1 + 205) & 0x80000) != 0 )
    {
      if ( qword_1C0257470 )
        v6 = qword_1C0257470(v28, v26, v27);
      if ( v6 >= 0 )
      {
        if ( qword_1C0257478 )
          qword_1C0257478(2LL);
        *((_DWORD *)a1 + 205) &= ~0x80000u;
      }
    }
  }
  if ( *((_DWORD *)a1 + 14) == gpidLogon )
    CleanupLogonProcess(v28, v26, v27);
  GreCleanDCAndSetOwnerEx(qword_1C0253CA8);
  if ( qword_1C0257F00 )
    qword_1C0257F00(a1);
  RIMOnProcessDestroy(*a1);
  LOBYTE(v30) = BYTE1(Microsoft_Windows_Win32kEnableBits);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    McTemplateK0_EtwWriteTransfer(v30, &CompleteGuiProcessExecution, &W32kControlGuid);
  return v18;
}
