/*
 * XREFs of NtUserGetWindowProcessHandle @ 0x1C011DDA0
 * Callers:
 *     <none>
 * Callees:
 *     IsShellProcess @ 0x1C003C598 (IsShellProcess.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void *__fastcall NtUserGetWindowProcessHandle(__int64 a1, ACCESS_MASK a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rdi
  KPROCESSOR_MODE AccessMode; // bp
  __int64 v12; // rcx
  __int64 v13; // rcx
  void *v14; // rbx
  char v16; // al
  __int64 v17; // rcx
  HANDLE ThreadProcessId; // rax
  void *Handle; // [rsp+40h] [rbp-28h] BYREF
  PEPROCESS Process; // [rsp+88h] [rbp+20h] BYREF

  Handle = 0LL;
  EnterSharedCrit(0LL, 1LL);
  v5 = ValidateHwnd(a1);
  if ( v5 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v9 = *(_QWORD *)(v5 + 16);
    v10 = ThreadWin32Thread;
    AccessMode = 0;
    v12 = *(_QWORD *)(ThreadWin32Thread + 456);
    if ( *(_QWORD *)(v9 + 456) == v12 )
    {
      if ( a2 == 120 || (unsigned int)IsShellProcess(*(_QWORD *)(ThreadWin32Thread + 424)) && a2 == 4096 )
      {
        v16 = Enforced(v12);
        v7 = *(_QWORD *)(v9 + 424);
        v17 = *(_QWORD *)(v10 + 424);
        if ( v16 )
        {
          if ( !(unsigned __int8)CheckAccess(v17 + 880, v7 + 880) )
          {
            if ( *(int *)(*(_QWORD *)(v10 + 424) + 12LL) >= 0 )
              goto LABEL_7;
            AccessMode = 1;
          }
        }
        else if ( *(_DWORD *)(v7 + 780) != *(_DWORD *)(v17 + 780) || *(_DWORD *)(v7 + 784) != *(_DWORD *)(v17 + 784) )
        {
          goto LABEL_7;
        }
        if ( (*(_DWORD *)(v9 + 488) & 0xC) == 0 && (*(_DWORD *)(v9 + 1232) & 4) == 0 )
        {
          Process = 0LL;
          ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v9);
          if ( PsLookupProcessByProcessId(ThreadProcessId, &Process) >= 0 )
          {
            ObOpenObjectByPointer(Process, 0, 0LL, a2, (POBJECT_TYPE)PsProcessType, AccessMode, &Handle);
            ObfDereferenceObject(Process);
            goto LABEL_9;
          }
          v13 = 87LL;
          goto LABEL_8;
        }
      }
      else
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 26849LL);
      }
    }
LABEL_7:
    v13 = 5LL;
LABEL_8:
    UserSetLastError(v13, v7, v8);
  }
LABEL_9:
  v14 = Handle;
  UserSessionSwitchLeaveCrit(v4);
  return v14;
}
