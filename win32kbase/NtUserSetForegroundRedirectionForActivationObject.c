__int64 __fastcall NtUserSetForegroundRedirectionForActivationObject(struct _LUID *a1, struct _LUID *a2)
{
  struct _LUID *v3; // rsi
  int v4; // edi
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rax
  char v9; // al
  __int64 *v10; // rbx
  CActivationObjectManager *v11; // rcx
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  ULONG v17; // eax
  struct _LUID v19; // [rsp+70h] [rbp+18h] BYREF
  struct _LUID v20; // [rsp+78h] [rbp+20h] BYREF

  v3 = a1;
  v4 = 1;
  LOBYTE(a1) = 1;
  v5 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1);
  gptiCurrent = v5;
  if ( v5 )
  {
    *((_DWORD *)v5 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    if ( CurrentProcessWin32Process )
    {
      v8 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
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
                v19.LowPart = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
              }
              HMUnlockObject(*v10);
            }
          }
        }
      }
    }
  }
  v20 = 0LL;
  v19 = 0LL;
  if ( &v3[1] < v3 || (unsigned __int64)&v3[1] > MmUserProbeAddress )
    v3 = (struct _LUID *)MmUserProbeAddress;
  v20 = *v3;
  v11 = (CActivationObjectManager *)&a2[1];
  if ( &a2[1] < a2 || (unsigned __int64)v11 > MmUserProbeAddress )
    a2 = (struct _LUID *)MmUserProbeAddress;
  v19 = *a2;
  v12 = CActivationObjectManager::SetForegroundRedirectionLuid(v11, &v20, &v19);
  if ( v12 < 0 )
  {
    v4 = 0;
    v17 = RtlNtStatusToDosError(v12);
    UserSetLastError(v17);
  }
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  return v4;
}
