/*
 * XREFs of NtMITPostThreadEventMessage @ 0x1C0155780
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C00293AC (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0037CB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     PtiFromThreadId @ 0x1C0091E00 (PtiFromThreadId.c)
 *     PostThreadEvent @ 0x1C01E825C (PostThreadEvent.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtMITPostThreadEventMessage(int a1, __int64 *a2, int a3, int a4, unsigned int a5)
{
  struct tagTHREADINFO *v9; // rax
  __int64 v10; // rcx
  int v11; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  char v15; // al
  __int64 v16; // rcx
  struct tagKERNELHANDLETABLEENTRY *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdi
  __int64 v27; // rax

  v9 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(1);
  gptiCurrent = v9;
  v11 = 0;
  if ( v9 )
  {
    *((_DWORD *)v9 + 377) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
    if ( CurrentProcessWin32Process )
    {
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
          || (v15 = 1, (*((_DWORD *)gptiCurrent + 314) & 0x80u) != 0) )
        {
          v15 = 0;
        }
        if ( v15 )
        {
          while ( 1 )
          {
            v17 = gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                         + 2);
            *((_QWORD *)v17 + 2) = 0LL;
            v16 = *(_QWORD *)v17;
            if ( !*(_DWORD *)(*(_QWORD *)v17 + 8LL) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v13, v14);
              v16 = *(_QWORD *)v17;
            }
            HMUnlockObject(v16);
          }
        }
      }
    }
  }
  if ( CInputThreadBase::IsInputThread(gpInputThread) )
  {
    LODWORD(v26) = 0;
    if ( a2 )
    {
      if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
        a2 = (__int64 *)MmUserProbeAddress;
      v26 = *a2;
    }
    v27 = PtiFromThreadId(a1);
    if ( v27 )
    {
      LOBYTE(v11) = (unsigned __int8)PostThreadEvent(v27, v26, a3, a4, a5) != 0;
      goto LABEL_24;
    }
    v21 = 87LL;
  }
  else
  {
    v21 = 5LL;
  }
  UserSetLastError(v21, v18, v19, v20);
LABEL_24:
  UserSessionSwitchLeaveCrit(v23, v22, v24, v25);
  return v11;
}
