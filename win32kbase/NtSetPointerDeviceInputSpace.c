__int64 __fastcall NtSetPointerDeviceInputSpace(char *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  char *v5; // r12
  int v6; // edi
  struct tagTHREADINFO *v7; // rax
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rax
  char v11; // al
  __int64 *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  PVOID v17; // rsi
  __int64 *v18; // rcx
  __int128 *v19; // rdx
  NTSTATUS v20; // eax
  ULONG v21; // eax
  PVOID Object; // [rsp+20h] [rbp-88h] BYREF
  __int64 v24; // [rsp+30h] [rbp-78h] BYREF
  __int128 v25; // [rsp+50h] [rbp-58h]
  __int128 v26; // [rsp+60h] [rbp-48h] BYREF

  v5 = a1;
  v6 = 1;
  LOBYTE(a1) = 1;
  v7 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1);
  gptiCurrent = v7;
  if ( v7 )
  {
    *((_DWORD *)v7 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
    if ( CurrentProcessWin32Process )
    {
      v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      if ( v10 )
      {
        if ( (*(_DWORD *)(v10 + 12) & 0x8000) != 0 )
        {
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
            || (v11 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
          {
            v11 = 0;
          }
          if ( v11 )
          {
            while ( 1 )
            {
              v12 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v12[2] = 0LL;
              if ( !*(_DWORD *)(*v12 + 8) )
              {
                LODWORD(Object) = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
              }
              HMUnlockObject(*v12);
            }
          }
        }
      }
    }
  }
  Object = 0LL;
  v24 = 0LL;
  v26 = 0LL;
  if ( (int)RawInputManagerDeviceObjectResolveHandle(v5, 3u, 1, &Object) >= 0 )
  {
    if ( a2 )
    {
      v18 = (__int64 *)a2;
      if ( a2 + 8 < a2 || a2 + 8 > MmUserProbeAddress )
        v18 = (__int64 *)MmUserProbeAddress;
      v24 = *v18;
    }
    if ( a3 )
    {
      v19 = (__int128 *)a3;
      if ( a3 + 16 < a3 || a3 + 16 > MmUserProbeAddress )
        v19 = (__int128 *)MmUserProbeAddress;
      v25 = *v19;
      v26 = v25;
    }
    v17 = Object;
    v20 = RIMSetPointerDeviceInputSpace(
            Object,
            (unsigned __int64)&v24 & -(__int64)(a2 != 0),
            (unsigned __int64)&v26 & -(__int64)(a3 != 0));
    if ( v20 < 0 )
    {
      v6 = 0;
      v21 = RtlNtStatusToDosError(v20);
      UserSetLastError(v21);
    }
  }
  else
  {
    v6 = 0;
    UserSetLastError(87);
    v17 = Object;
  }
  if ( v17 )
    ObfDereferenceObject(v17);
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  return v6;
}
