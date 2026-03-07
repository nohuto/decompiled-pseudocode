__int64 __fastcall NtUserCreateActivationObject(HWND a1, unsigned __int64 *a2, struct _LUID *a3)
{
  HWND v5; // r15
  struct tagTHREADINFO *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _OBJECT_ATTRIBUTES *v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rax
  char v14; // al
  __int64 *v15; // rdi
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  ULONG64 v20; // rcx
  ULONG v22; // ecx
  char v23; // [rsp+20h] [rbp-68h]
  struct _LUID v24; // [rsp+90h] [rbp+8h] BYREF

  v5 = a1;
  LOBYTE(a1) = 1;
  v6 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1);
  gptiCurrent = v6;
  v11 = 0;
  if ( v6 )
  {
    *((_DWORD *)v6 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
    if ( CurrentProcessWin32Process )
    {
      v7 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v13 = v7 & CurrentProcessWin32Process;
      if ( v13 )
      {
        if ( (*(_DWORD *)(v13 + 12) & 0x8000) != 0 )
        {
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
            || (v14 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
          {
            v14 = 0;
          }
          if ( v14 )
          {
            while ( 1 )
            {
              v15 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v15[2] = 0LL;
              if ( !*(_DWORD *)(*v15 + 8) )
              {
                v24.LowPart = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
              }
              HMUnlockObject(*v15);
            }
          }
        }
      }
    }
  }
  v24 = 0LL;
  if ( !v5 )
  {
    v22 = 87;
LABEL_24:
    UserSetLastError(v22);
    goto LABEL_17;
  }
  if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
    a2 = (unsigned __int64 *)MmUserProbeAddress;
  v16 = CActivationObjectManager::CreateActivationObject(
          (CActivationObjectManager *)&v24,
          v7,
          v9,
          v10,
          v23,
          v5,
          *a2,
          &v24);
  if ( v16 < 0 )
  {
    v22 = RtlNtStatusToDosError(v16);
    goto LABEL_24;
  }
  v11 = 1;
  v20 = MmUserProbeAddress;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (struct _LUID *)MmUserProbeAddress;
  *a3 = v24;
LABEL_17:
  UserSessionSwitchLeaveCrit(v20, v17, v18, v19);
  return v11;
}
