__int64 __fastcall NtUserSetPrecisionTouchPadConfiguration(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx
  struct tagTHREADINFO *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rax
  char v9; // al
  __int64 *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _BYTE v30[4]; // [rsp+20h] [rbp-58h] BYREF
  int v31; // [rsp+24h] [rbp-54h]
  int v32; // [rsp+28h] [rbp-50h]
  unsigned int v33[6]; // [rsp+38h] [rbp-40h] BYREF
  __int128 v34; // [rsp+50h] [rbp-28h] BYREF
  __int64 v35; // [rsp+60h] [rbp-18h]

  v1 = a1;
  v34 = 0LL;
  v35 = 0LL;
  v33[0] = 0x2000;
  v33[1] = -1;
  LOBYTE(a1) = 1;
  v2 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1);
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
                v31 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
              }
              HMUnlockObject(*v10);
            }
          }
        }
      }
    }
  }
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v30, v3, v5, v6);
  if ( CheckAccessEx((int *)(*((_QWORD *)gptiCurrent + 53) + 864LL), v33, 0LL) )
  {
    if ( ((PsGetCurrentProcessWow64Process(v12, v11, v13, v14) == 0 ? 3 : 0) & (unsigned __int8)v1) != 0 )
      ExRaiseDatatypeMisalignment();
    v21 = v1 + 4;
    if ( v1 + 4 > MmUserProbeAddress || v21 < v1 )
      *(_BYTE *)MmUserProbeAddress = 0;
    if ( *(_DWORD *)v1 )
    {
      v15 = 0;
      v32 = 0;
      UserSetLastStatus(-1073741822);
    }
    else
    {
      if ( ((PsGetCurrentProcessWow64Process(MmUserProbeAddress, v21, v19, v20) == 0 ? 3 : 0) & (unsigned __int8)v1) != 0 )
        ExRaiseDatatypeMisalignment();
      v24 = v1 + 24;
      if ( v1 + 24 > MmUserProbeAddress || v24 < v1 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v34 = *(_OWORD *)v1;
      v35 = *(_QWORD *)(v1 + 16);
      LODWORD(v34) = 0;
      v15 = SetPrecisionTouchPadConfiguration((__int64)&v34, v24, v22, v23);
      v32 = v15;
      if ( v15 )
        PTPTelemetry::PTPConfigUpdateEx(0LL);
    }
  }
  else
  {
    EtwTraceUIPISystemError(*((struct tagPROCESSINFO **)gptiCurrent + 53), 0LL);
    v15 = 0;
    UserSetLastError(5);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v30, v16, v17, v18);
  UserSessionSwitchLeaveCrit(v26, v25, v27, v28);
  return v15;
}
