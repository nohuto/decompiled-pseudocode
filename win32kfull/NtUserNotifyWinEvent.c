/*
 * XREFs of NtUserNotifyWinEvent @ 0x1C00D8CF0
 * Callers:
 *     <none>
 * Callees:
 *     xxxWindowEvent @ 0x1C0062470 (xxxWindowEvent.c)
 *     ?ExtendedBehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x1C00EFB10 (-ExtendedBehaviorEnabled@ShellWindowManagement@@YA_NK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dq @ 0x1C00FF0A0 (WPP_RECORDER_AND_TRACE_SF_dq.c)
 */

__int64 __fastcall NtUserNotifyWinEvent(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int v5; // esi
  unsigned int v7; // ebp
  __int64 v8; // rax
  unsigned int v9; // edx
  PDEVICE_OBJECT v10; // rcx
  __int64 v11; // rbx
  struct tagWND *v12; // r14
  int v14; // edx
  int v15; // r8d

  v5 = a3;
  v7 = a1;
  EnterSharedCrit(a1, a2, a3);
  v8 = ValidateHwnd(a2);
  v11 = 0LL;
  v12 = (struct tagWND *)v8;
  if ( v8 )
  {
    if ( v7 - 32770 > 1
      || v5
      || a4
      || !ShellWindowManagement::ExtendedBehaviorEnabled((ShellWindowManagement *)0x40000000, v9) )
    {
      xxxWindowEvent(v7, v12, v5, a4, 1);
    }
    else
    {
      v10 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
        || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v14) = 0;
      }
      if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_dq(
          WPP_GLOBAL_Control->AttachedDevice,
          v14,
          v15,
          (_DWORD)gFullLog,
          4,
          22,
          12,
          (__int64)&WPP_dad53d594ec237dec63fae8c26dffb95_Traceguids,
          v7,
          (char)v12);
      }
    }
    v11 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v10);
  return v11;
}
