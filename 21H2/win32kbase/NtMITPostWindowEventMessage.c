/*
 * XREFs of NtMITPostWindowEventMessage @ 0x1C0155930
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C00293AC (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     HMValidateHandleNoSecure @ 0x1C0033980 (HMValidateHandleNoSecure.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0037CB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     PostEvent @ 0x1C01E8148 (PostEvent.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtMITPostWindowEventMessage(int a1, __int64 *a2, int a3, int a4, unsigned int a5)
{
  int v9; // edi
  struct tagTHREADINFO *v10; // rax
  __int64 v11; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  char v15; // al
  __int64 v16; // rcx
  struct tagKERNELHANDLETABLEENTRY *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _DWORD *v25; // rax
  __int64 v26; // rbx
  __int64 v28; // [rsp+40h] [rbp-28h]

  v9 = 0;
  v10 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(1);
  gptiCurrent = v10;
  if ( v10 )
  {
    *((_DWORD *)v10 + 377) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
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
    LODWORD(v28) = 0;
    if ( a2 )
    {
      if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
        a2 = (__int64 *)MmUserProbeAddress;
      v28 = *a2;
    }
    v25 = (_DWORD *)HMValidateHandleNoSecure(a1, 255);
    if ( v25 )
    {
      v26 = *((_QWORD *)gpKernelHandleTable + 3 * (unsigned __int16)*v25 + 1);
      if ( v26 == W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
        v9 = (unsigned __int8)PostEvent(a1, v28, a3, a4, a5);
    }
  }
  else
  {
    UserSetLastError(5LL, v18, v19, v20);
  }
  UserSessionSwitchLeaveCrit(v22, v21, v23, v24);
  return v9;
}
