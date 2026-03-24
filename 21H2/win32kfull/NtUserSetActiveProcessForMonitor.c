/*
 * XREFs of NtUserSetActiveProcessForMonitor @ 0x1C0125810
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0037FF4 (IAMThreadAccessGranted.c)
 *     LockProcessByClientId @ 0x1C003C118 (LockProcessByClientId.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     ?IsMonitorConnectedToInternalPanel@@YAHPEAUtagMONITOR@@@Z @ 0x1C01D1238 (-IsMonitorConnectedToInternalPanel@@YAHPEAUtagMONITOR@@@Z.c)
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
  __int64 v10; // r8
  PVOID v11; // rcx
  __int64 v13; // rcx
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0LL;
  v3 = (void *)a1;
  Object = 0LL;
  v4 = 0LL;
  UserSessionSwitchEnterCrit();
  if ( !IAMThreadAccessGranted(gptiCurrent) && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 456) + 8LL) + 168LL) )
  {
    v13 = 5LL;
LABEL_13:
    UserSetLastError(v13, v6, v7);
    goto LABEL_9;
  }
  if ( a2 && (v4 = (struct tagMONITOR *)ValidateHmonitor(a2)) == 0LL
    || (int)LockProcessByClientId(v3, (PEPROCESS *)&Object) < 0 )
  {
    v13 = 87LL;
    goto LABEL_13;
  }
  ProcessWin32Process = PsGetProcessWin32Process(Object);
  if ( ProcessWin32Process )
  {
    if ( !v4 || (unsigned int)IsMonitorConnectedToInternalPanel(v4) )
    {
      v11 = P;
      *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 256LL) = ProcessWin32Process;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v11 + 8LL))(v11);
    }
    v2 = 1LL;
  }
  else
  {
    UserSetLastError(87LL, v8, v10);
  }
  ObfDereferenceObject(Object);
LABEL_9:
  LeaveCrit();
  return v2;
}
