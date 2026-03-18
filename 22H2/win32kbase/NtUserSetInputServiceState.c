/*
 * XREFs of NtUserSetInputServiceState @ 0x1C00AD930
 * Callers:
 *     <none>
 * Callees:
 *     HandleDeferredInput @ 0x1C00074D0 (HandleDeferredInput.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00462A0 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserSetInputServiceState(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebp
  struct tagTHREADINFO *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v10; // rdi
  struct tagTHREADINFO *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v17; // rax

  v5 = a2;
  v6 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, a2, a3, a4);
  v8 = 0LL;
  gptiCurrent = v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
        && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
        && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
      {
        while ( 1 )
        {
          v10 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v17 = *v10;
          v10[2] = 0LL;
          if ( !*(_DWORD *)(v17 + 8) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
          HMUnlockObject(*v10);
        }
      }
    }
  }
  v11 = PtiCurrentShared();
  v15 = a1;
  if ( !a1 )
  {
    *((_DWORD *)v11 + 318) &= ~0x10000000u;
    goto LABEL_13;
  }
  v15 = a1 - 1;
  if ( a1 == 1 )
  {
    *((_DWORD *)v11 + 318) |= 0x10000000u;
LABEL_13:
    v8 = 1LL;
    goto LABEL_14;
  }
  v15 = a1 - 2;
  if ( a1 == 2 || (v15 = a1 - 3, a1 == 3) || (v15 = a1 - 4, a1 == 4) || (v15 = a1 - 5, (unsigned int)v15 <= 1) )
  {
    if ( (*((_DWORD *)v11 + 318) & 0x10000000) != 0 )
      HandleDeferredInput((__int64)v11, a1, v5, v14);
    goto LABEL_13;
  }
LABEL_14:
  UserSessionSwitchLeaveCrit(v12, v15, v13, v14);
  return v8;
}
