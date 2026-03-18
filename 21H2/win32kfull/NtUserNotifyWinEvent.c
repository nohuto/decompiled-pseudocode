/*
 * XREFs of NtUserNotifyWinEvent @ 0x1C00739F0
 * Callers:
 *     <none>
 * Callees:
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 *     ?ExtendedBehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x1C010DB58 (-ExtendedBehaviorEnabled@ShellWindowManagement@@YA_NK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dq @ 0x1C0203F20 (WPP_RECORDER_AND_TRACE_SF_dq.c)
 */

__int64 __fastcall NtUserNotifyWinEvent(unsigned int a1, __int64 a2, int a3, int a4)
{
  __int64 v8; // rax
  unsigned int v9; // edx
  PDEVICE_OBJECT v10; // rcx
  __int64 v11; // rbx
  int v13; // edx
  int v14; // r8d
  int v15; // r9d

  EnterSharedCrit();
  v8 = ValidateHwnd(a2);
  v11 = 0LL;
  if ( v8 )
  {
    if ( a1 - 32770 > 1
      || a3
      || a4
      || !ShellWindowManagement::ExtendedBehaviorEnabled((ShellWindowManagement *)0x80000000LL, v9) )
    {
      xxxWindowEvent(a1, 1);
    }
    else
    {
      v10 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
        || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v13) = 0;
      }
      if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_dq(WPP_GLOBAL_Control->AttachedDevice, v13, v14, v15);
      }
    }
    v11 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v10);
  return v11;
}
