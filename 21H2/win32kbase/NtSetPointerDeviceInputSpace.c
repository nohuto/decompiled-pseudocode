/*
 * XREFs of NtSetPointerDeviceInputSpace @ 0x1C0156860
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C00293AC (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0043E30 (RawInputManagerDeviceObjectResolveHandle.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     RIMSetPointerDeviceInputSpace @ 0x1C0198928 (RIMSetPointerDeviceInputSpace.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtSetPointerDeviceInputSpace(char *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  int v6; // ebx
  struct tagTHREADINFO *v7; // rax
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v13; // rcx
  struct tagKERNELHANDLETABLEENTRY *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  PVOID v22; // rdi
  __int64 *v23; // rcx
  __int128 *v24; // rdx
  NTSTATUS v25; // eax
  ULONG v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  PVOID Object; // [rsp+20h] [rbp-78h] BYREF
  __int64 v32; // [rsp+30h] [rbp-68h] BYREF
  __int128 v33; // [rsp+50h] [rbp-48h]
  __int128 v34; // [rsp+60h] [rbp-38h] BYREF

  v6 = 1;
  v7 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(1);
  gptiCurrent = v7;
  if ( v7 )
  {
    *((_DWORD *)v7 + 377) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
    if ( CurrentProcessWin32Process )
    {
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
        && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
        && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
      {
        while ( 1 )
        {
          v14 = gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          *((_QWORD *)v14 + 2) = 0LL;
          v13 = *(_QWORD *)v14;
          if ( !*(_DWORD *)(*(_QWORD *)v14 + 8LL) )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v10, v11);
            v13 = *(_QWORD *)v14;
          }
          HMUnlockObject(v13);
        }
      }
    }
  }
  Object = 0LL;
  v32 = 0LL;
  v34 = 0LL;
  if ( (int)RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object) >= 0 )
  {
    if ( a2 )
    {
      v23 = (__int64 *)a2;
      if ( a2 + 8 < a2 || a2 + 8 > MmUserProbeAddress )
        v23 = (__int64 *)MmUserProbeAddress;
      v32 = *v23;
    }
    if ( a3 )
    {
      v24 = (__int128 *)a3;
      if ( a3 + 16 < a3 || a3 + 16 > MmUserProbeAddress )
        v24 = (__int128 *)MmUserProbeAddress;
      v33 = *v24;
      v34 = v33;
    }
    v22 = Object;
    v25 = RIMSetPointerDeviceInputSpace(
            Object,
            (unsigned __int64)&v32 & -(__int64)(a2 != 0),
            (unsigned __int64)&v34 & -(__int64)(a3 != 0));
    if ( v25 < 0 )
    {
      v6 = 0;
      v26 = RtlNtStatusToDosError(v25);
      UserSetLastError(v26, v27, v28, v29);
    }
  }
  else
  {
    v6 = 0;
    UserSetLastError(87LL, v15, v16, v17);
    v22 = Object;
  }
  if ( v22 )
    ObfDereferenceObject(v22);
  UserSessionSwitchLeaveCrit(v19, v18, v20, v21);
  return v6;
}
