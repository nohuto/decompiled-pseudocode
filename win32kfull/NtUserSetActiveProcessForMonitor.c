__int64 __fastcall NtUserSetActiveProcessForMonitor(int a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  struct tagMONITOR *v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *ProcessWin32Process; // rax
  _QWORD *v10; // rsi
  PVOID v11; // rcx
  int v13; // ecx
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0LL;
  v3 = a1;
  Object = 0LL;
  v4 = 0LL;
  UserSessionSwitchEnterCrit();
  if ( !(unsigned int)IAMThreadAccessGranted(gptiCurrent)
    && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 456) + 8LL) + 168LL) )
  {
    v13 = 5;
LABEL_14:
    UserSetLastError(v13);
    goto LABEL_10;
  }
  if ( a2 && (v4 = (struct tagMONITOR *)ValidateHmonitor(a2, v6, v7, v8)) == 0LL
    || (int)LockProcessByClientId(v3, &Object, v7, v8) < 0 )
  {
    v13 = 87;
    goto LABEL_14;
  }
  ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(Object);
  v10 = ProcessWin32Process;
  if ( ProcessWin32Process && *ProcessWin32Process )
  {
    if ( !v4 || (unsigned int)IsMonitorConnectedToInternalPanel(v4) )
    {
      v11 = P;
      *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 248LL) = v10;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v11 + 8LL))(v11);
    }
    v2 = 1LL;
  }
  else
  {
    UserSetLastError(87);
  }
  ObfDereferenceObject(Object);
LABEL_10:
  LeaveCrit();
  return v2;
}
