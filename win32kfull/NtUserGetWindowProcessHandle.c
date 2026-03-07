void *__fastcall NtUserGetWindowProcessHandle(__int64 a1, __int64 a2, __int64 a3)
{
  ACCESS_MASK v3; // esi
  __int64 v5; // rcx
  __int64 v6; // rbx
  struct tagTHREADINFO *v7; // rax
  __int64 v8; // rbx
  struct tagTHREADINFO *v9; // rdi
  KPROCESSOR_MODE AccessMode; // bp
  __int64 v11; // rcx
  int v12; // ecx
  void *v13; // rbx
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  HANDLE ThreadProcessId; // rax
  void *Handle; // [rsp+40h] [rbp-28h] BYREF
  PEPROCESS Process; // [rsp+88h] [rbp+20h] BYREF

  v3 = a2;
  Handle = 0LL;
  EnterSharedCrit(a1, a2, a3);
  v6 = ValidateHwnd(a1);
  if ( v6 )
  {
    v7 = PtiCurrentShared(v5);
    v8 = *(_QWORD *)(v6 + 16);
    v9 = v7;
    AccessMode = 0;
    v11 = *((_QWORD *)v7 + 57);
    if ( *(_QWORD *)(v8 + 456) == v11 )
    {
      if ( v3 == 120 || (unsigned int)IsShellProcess(*((_QWORD *)v7 + 53)) && v3 == 4096 )
      {
        v15 = Enforced(v11);
        v16 = *(_QWORD *)(v8 + 424);
        v17 = *((_QWORD *)v9 + 53);
        if ( v15 )
        {
          if ( !(unsigned __int8)CheckAccess(v17 + 864, v16 + 864) )
          {
            if ( *(int *)(*((_QWORD *)v9 + 53) + 12LL) >= 0 )
              goto LABEL_7;
            AccessMode = 1;
          }
        }
        else if ( *(_DWORD *)(v16 + 772) != *(_DWORD *)(v17 + 772) || *(_DWORD *)(v16 + 776) != *(_DWORD *)(v17 + 776) )
        {
          goto LABEL_7;
        }
        if ( (*(_DWORD *)(v8 + 488) & 0xC) == 0 && (*(_DWORD *)(v8 + 1272) & 4) == 0 )
        {
          Process = 0LL;
          ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v8);
          if ( PsLookupProcessByProcessId(ThreadProcessId, &Process) >= 0 )
          {
            ObOpenObjectByPointer(Process, 0, 0LL, v3, (POBJECT_TYPE)PsProcessType, AccessMode, &Handle);
            ObfDereferenceObject(Process);
            goto LABEL_9;
          }
          v12 = 87;
          goto LABEL_8;
        }
      }
      else
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 27200LL);
      }
    }
LABEL_7:
    v12 = 5;
LABEL_8:
    UserSetLastError(v12);
  }
LABEL_9:
  v13 = Handle;
  UserSessionSwitchLeaveCrit(v5);
  return v13;
}
