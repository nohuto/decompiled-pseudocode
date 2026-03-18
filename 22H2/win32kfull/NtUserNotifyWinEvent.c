/*
 * XREFs of NtUserNotifyWinEvent @ 0x1C00E5E80
 * Callers:
 *     <none>
 * Callees:
 *     ?ExtendedBehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x1C00B75F0 (-ExtendedBehaviorEnabled@ShellWindowManagement@@YA_NK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dq @ 0x1C00C35E0 (WPP_RECORDER_AND_TRACE_SF_dq.c)
 *     xxxWindowEvent @ 0x1C00E71B0 (xxxWindowEvent.c)
 */

__int64 __fastcall NtUserNotifyWinEvent(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // esi
  unsigned int v7; // ebp
  __int64 v8; // rax
  __int64 v9; // rdx
  PDEVICE_OBJECT v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // r14

  v5 = a3;
  v7 = a1;
  EnterSharedCrit(a1, a2, a3);
  v8 = ValidateHwnd(a2);
  v13 = 0LL;
  v14 = v8;
  if ( v8 )
  {
    if ( v7 - 32770 > 1
      || v5
      || a4
      || !ShellWindowManagement::ExtendedBehaviorEnabled((ShellWindowManagement *)0x40000000) )
    {
      xxxWindowEvent(v7, 1);
    }
    else
    {
      v10 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v9) = 0;
      }
      LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_dq(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v9,
          v11,
          (__int64)gFullLog,
          4u,
          0xCu,
          0xCu,
          (__int64)&WPP_154c990b78bb386e6b2cbfec85a60616_Traceguids,
          v7,
          v14);
    }
    v13 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v13;
}
