/*
 * XREFs of NtMITPostMouseInputMessage @ 0x1C01555B0
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C00293AC (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0037CB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     PostMouseInputMessage @ 0x1C01E81D8 (PostMouseInputMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtMITPostMouseInputMessage(__int64 *a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  struct tagTHREADINFO *v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  char v14; // al
  __int64 v15; // rcx
  struct tagKERNELHANDLETABLEENTRY *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r10
  char v25; // al
  _QWORD v27[4]; // [rsp+30h] [rbp-38h] BYREF

  v8 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(1);
  gptiCurrent = v8;
  v10 = 0;
  if ( v8 )
  {
    *((_DWORD *)v8 + 377) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
    if ( CurrentProcessWin32Process )
    {
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
          || (v14 = 1, (*((_DWORD *)gptiCurrent + 314) & 0x80u) != 0) )
        {
          v14 = 0;
        }
        if ( v14 )
        {
          while ( 1 )
          {
            v16 = gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                         + 2);
            *((_QWORD *)v16 + 2) = 0LL;
            v15 = *(_QWORD *)v16;
            if ( !*(_DWORD *)(*(_QWORD *)v16 + 8LL) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v12, v13);
              v15 = *(_QWORD *)v16;
            }
            HMUnlockObject(v15);
          }
        }
      }
    }
  }
  if ( CInputThreadBase::IsInputThread(gpInputThread) )
  {
    v27[0] = 0LL;
    if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
      a1 = (__int64 *)MmUserProbeAddress;
    v24 = *a1;
    v27[1] = *a1;
    if ( a4 )
    {
      if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
        a4 = (_QWORD *)MmUserProbeAddress;
      v27[0] = *a4;
      a4 = v27;
    }
    v25 = -(char)PostMouseInputMessage(v24, a2, a3, a4);
    v21 = v25 == 0 ? 0xC0000001 : 0;
    v10 = v25 == 0 ? 0xC0000001 : 0;
  }
  else
  {
    UserSetLastError(5LL, v17, v18, v19);
  }
  UserSessionSwitchLeaveCrit(v21, v20, v22, v23);
  return v10;
}
