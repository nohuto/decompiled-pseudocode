__int64 __fastcall NtUserGetPrecisionTouchPadConfiguration(_QWORD *Address)
{
  _QWORD *v1; // rdi
  struct tagTHREADINFO *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rax
  char v9; // al
  __int64 *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  int PrecisionTouchPadConfiguration; // ebx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 CurrentProcessWow64Process; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int128 v26; // [rsp+40h] [rbp-28h] BYREF
  __int64 v27; // [rsp+50h] [rbp-18h]
  int v28; // [rsp+78h] [rbp+10h] BYREF

  v1 = Address;
  v26 = 0LL;
  v27 = 0LL;
  LOBYTE(Address) = 1;
  v2 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(Address);
  gptiCurrent = v2;
  if ( v2 )
  {
    *((_DWORD *)v2 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
    if ( CurrentProcessWin32Process )
    {
      v3 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v8 = v3 & CurrentProcessWin32Process;
      if ( v8 )
      {
        if ( (*(_DWORD *)(v8 + 12) & 0x8000) != 0 )
        {
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
            || (v9 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
          {
            v9 = 0;
          }
          if ( v9 )
          {
            while ( 1 )
            {
              v10 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v10[2] = 0LL;
              if ( !*(_DWORD *)(*v10 + 8) )
              {
                v28 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
              }
              HMUnlockObject(*v10);
            }
          }
        }
      }
    }
  }
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v28, v3, v5, v6);
  if ( ((PsGetCurrentProcessWow64Process(v12, v11, v13, v14) == 0 ? 3 : 0) & (unsigned __int8)v1) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)v1 + 4 > MmUserProbeAddress || (_QWORD *)((char *)v1 + 4) < v1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  LODWORD(v26) = *(_DWORD *)v1;
  if ( (_DWORD)v26 )
  {
    PrecisionTouchPadConfiguration = 0;
    UserSetLastStatus(-1073741822);
  }
  else
  {
    PrecisionTouchPadConfiguration = GetPrecisionTouchPadConfiguration((__int64)&v26);
    if ( PrecisionTouchPadConfiguration )
    {
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v16, v15, v18, v19);
      ProbeForWrite(v1, 0x18uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
      *(_OWORD *)v1 = v26;
      v1[2] = v27;
    }
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v28, v15, v18, v19);
  UserSessionSwitchLeaveCrit(v22, v21, v23, v24);
  return PrecisionTouchPadConfiguration;
}
