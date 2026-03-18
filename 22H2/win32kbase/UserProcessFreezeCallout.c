/*
 * XREFs of UserProcessFreezeCallout @ 0x1C0068894
 * Callers:
 *     W32CalloutDispatch @ 0x1C00DE840 (W32CalloutDispatch.c)
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     IsFreezeThawTimersSupported @ 0x1C0068A04 (IsFreezeThawTimersSupported.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UserProcessFreezeCallout(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rcx
  _QWORD *ProcessWin32Process; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rbx
  __int64 i; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v16; // rbx
  __int64 v17; // rax

  v5 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, a2, a3, a4);
  gptiCurrent = v5;
  if ( v5 )
  {
    *((_DWORD *)v5 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
        && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
        && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
      {
        while ( 1 )
        {
          v16 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v17 = *v16;
          v16[2] = 0LL;
          if ( !*(_DWORD *)(v17 + 8) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
          HMUnlockObject(*v16);
        }
      }
    }
  }
  ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(a1);
  v12 = ProcessWin32Process;
  if ( ProcessWin32Process && *ProcessWin32Process )
  {
    for ( i = ProcessWin32Process[40]; i; i = *(_QWORD *)(i + 664) )
    {
      if ( qword_1C02957D0 && (int)qword_1C02957D0() >= 0 )
      {
        if ( qword_1C02957D8 )
          qword_1C02957D8(i);
      }
    }
    *((_DWORD *)v12 + 204) |= 0x400u;
    if ( (int)IsFreezeThawTimersSupported() >= 0 )
    {
      if ( qword_1C0295500 )
        qword_1C0295500();
    }
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return 0LL;
}
