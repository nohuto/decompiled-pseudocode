/*
 * XREFs of NtUserSetProcessMousewheelRoutingMode @ 0x1C014BD00
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserSetProcessMousewheelRoutingMode(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  struct tagTHREADINFO *v5; // rax
  struct tagTHREADINFO *v6; // rcx
  __int64 v7; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rax
  __int64 *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // esi
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax

  v4 = a1;
  LOBYTE(a1) = 1;
  v5 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1, a2, a3, a4);
  v7 = 0LL;
  gptiCurrent = v5;
  if ( v5 )
  {
    *((_DWORD *)v5 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          v6 = gptiCurrent;
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v10 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v9 = *v10;
              v10[2] = 0LL;
              if ( !*(_DWORD *)(v9 + 8) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
              HMUnlockObject(*v10);
            }
          }
        }
      }
    }
  }
  v11 = PsGetCurrentProcessWin32Process(v6);
  v15 = v11;
  if ( !v11 || !*(_QWORD *)v11 )
    goto LABEL_22;
  if ( !v4 )
  {
    v17 = *(_DWORD *)(v11 + 816) & 0xFFFEFFFF;
    goto LABEL_20;
  }
  v16 = v4 - 1;
  if ( v16 )
  {
    if ( v16 == 1 )
    {
      v17 = *(_DWORD *)(v11 + 816) | 0x10000;
LABEL_20:
      *(_DWORD *)(v15 + 816) = v17;
      v19 = v17 & 0xFFFF7FFF;
      goto LABEL_21;
    }
LABEL_22:
    UserSetLastError(87);
    goto LABEL_23;
  }
  v18 = *(_DWORD *)(v11 + 816) & 0xFFFEFFFF;
  *(_DWORD *)(v15 + 816) = v18;
  v19 = v18 | 0x8000;
LABEL_21:
  *(_DWORD *)(v15 + 816) = v19;
  v7 = 1LL;
LABEL_23:
  UserSessionSwitchLeaveCrit(v12, v15, v13, v14);
  return v7;
}
