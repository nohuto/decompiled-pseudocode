/*
 * XREFs of NtUserSetActiveProcessForMonitor @ 0x1C010F280
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0023254 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     LockProcessByClientId @ 0x1C007AC20 (LockProcessByClientId.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ?IsMonitorConnectedToInternalPanel@@YAHPEAUtagMONITOR@@@Z @ 0x1C01CD5FC (-IsMonitorConnectedToInternalPanel@@YAHPEAUtagMONITOR@@@Z.c)
 */

__int64 __fastcall NtUserSetActiveProcessForMonitor(int a1, __int64 a2)
{
  __int64 v2; // rbx
  void *v3; // rbp
  struct tagMONITOR *v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 ProcessWin32Process; // rsi
  PVOID v10; // rcx
  __int64 v12; // rcx
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0LL;
  v3 = (void *)a1;
  Object = 0LL;
  v4 = 0LL;
  UserSessionSwitchEnterCrit();
  if ( !IAMThreadAccessGranted(gptiCurrent) && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 456) + 8LL) + 168LL) )
  {
    v12 = 5LL;
LABEL_13:
    UserSetLastError(v12, v6);
    goto LABEL_9;
  }
  if ( a2 && (v4 = (struct tagMONITOR *)ValidateHmonitor(a2, v6)) == 0LL
    || (int)LockProcessByClientId(v3, (PEPROCESS *)&Object) < 0 )
  {
    v12 = 87LL;
    goto LABEL_13;
  }
  ProcessWin32Process = PsGetProcessWin32Process(Object);
  if ( ProcessWin32Process )
  {
    if ( !v4 || (unsigned int)IsMonitorConnectedToInternalPanel(v4) )
    {
      v10 = qword_1C0335C70;
      *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 248LL) = ProcessWin32Process;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v10 + 8LL))(v10);
    }
    v2 = 1LL;
  }
  else
  {
    UserSetLastError(87LL, v8);
  }
  ObfDereferenceObject(Object);
LABEL_9:
  LeaveCrit();
  return v2;
}
