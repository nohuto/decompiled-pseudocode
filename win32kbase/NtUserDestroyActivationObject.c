__int64 __fastcall NtUserDestroyActivationObject(struct _LUID *a1)
{
  struct _LUID *v1; // rsi
  int v2; // edi
  struct tagTHREADINFO *v3; // rax
  __int64 v4; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rax
  char v7; // al
  struct tagKERNELHANDLETABLEENTRY *v8; // rbx
  CActivationObjectManager *v9; // rcx
  NTSTATUS v10; // eax
  ULONG v12; // eax
  struct _LUID v13; // [rsp+58h] [rbp+10h] BYREF

  v1 = a1;
  v2 = 1;
  LOBYTE(a1) = 1;
  v3 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1);
  gptiCurrent = v3;
  if ( v3 )
  {
    *((_DWORD *)v3 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
    if ( CurrentProcessWin32Process )
    {
      v6 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      if ( v6 )
      {
        if ( (*(_DWORD *)(v6 + 12) & 0x8000) != 0 )
        {
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
            || (v7 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
          {
            v7 = 0;
          }
          if ( v7 )
          {
            while ( 1 )
            {
              v8 = gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              *((_QWORD *)v8 + 2) = 0LL;
              if ( !*(_DWORD *)(*(_QWORD *)v8 + 8LL) )
              {
                v13.LowPart = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
              }
              HMUnlockObject(*(_QWORD *)v8);
            }
          }
        }
      }
    }
  }
  v13 = 0LL;
  v9 = (CActivationObjectManager *)&v1[1];
  if ( &v1[1] < v1 || (unsigned __int64)v9 > MmUserProbeAddress )
    v1 = (struct _LUID *)MmUserProbeAddress;
  v13 = *v1;
  v10 = CActivationObjectManager::DestroyActivationObject(v9, &v13);
  if ( v10 < 0 )
  {
    v2 = 0;
    v12 = RtlNtStatusToDosError(v10);
    UserSetLastError(v12);
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
