/*
 * XREFs of NtUserSetActiveProcessForMonitor @ 0x1C004FF60
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C002731C (IAMThreadAccessGranted.c)
 *     LockProcessByClientId @ 0x1C004FEE0 (LockProcessByClientId.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 *     ?IsMonitorConnectedToInternalPanel@@YAHPEAUtagMONITOR@@@Z @ 0x1C01A6F34 (-IsMonitorConnectedToInternalPanel@@YAHPEAUtagMONITOR@@@Z.c)
 */

__int64 __fastcall NtUserSetActiveProcessForMonitor(int a1, __int64 a2)
{
  __int64 v2; // rbx
  void *v3; // rbp
  struct tagMONITOR *v4; // rdi
  int v6; // eax
  __int64 v7; // r9
  _QWORD *ProcessWin32Process; // rax
  _QWORD *v9; // rsi
  PVOID v10; // rcx
  __int64 v12; // rcx
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0LL;
  v3 = (void *)a1;
  Object = 0LL;
  v4 = 0LL;
  UserSessionSwitchEnterCrit();
  LOBYTE(v6) = IAMThreadAccessGranted(gptiCurrent);
  if ( !v6 && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 456) + 8LL) + 168LL) )
  {
    v12 = 5LL;
LABEL_14:
    UserSetLastError(v12);
    goto LABEL_10;
  }
  if ( a2 && (v4 = (struct tagMONITOR *)ValidateHmonitor(a2)) == 0LL
    || (int)LockProcessByClientId(v3, (PEPROCESS *)&Object) < 0 )
  {
    v12 = 87LL;
    goto LABEL_14;
  }
  ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(Object);
  v9 = ProcessWin32Process;
  if ( ProcessWin32Process && *ProcessWin32Process )
  {
    if ( !v4 || (unsigned int)IsMonitorConnectedToInternalPanel(v4) )
    {
      v10 = P;
      *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 256LL) = v9;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v10 + 8LL))(v10);
    }
    v2 = 1LL;
  }
  else
  {
    UserSetLastError(87LL);
  }
  ObfDereferenceObject(Object);
LABEL_10:
  LeaveCrit();
  return v2;
}
