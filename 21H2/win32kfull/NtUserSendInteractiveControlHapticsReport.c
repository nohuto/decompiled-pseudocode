/*
 * XREFs of NtUserSendInteractiveControlHapticsReport @ 0x1C0201410
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C00E5E60 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ?SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1C0252A28 (-SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@.c)
 */

_BOOL8 __fastcall NtUserSendInteractiveControlHapticsReport(unsigned __int16 a1, int a2, __int128 *a3)
{
  __int64 v6; // r8
  BOOL v7; // ebx
  __int64 v8; // rcx
  InteractiveControlManager *v9; // rax
  __int128 v11; // [rsp+38h] [rbp-30h] BYREF

  EnterSharedCrit(0LL, 1LL);
  if ( a2 == 16 )
  {
    ProbeForRead(a3, 0x10uLL, 1u);
    v11 = *a3;
    v9 = InteractiveControlManager::Instance();
    v7 = InteractiveControlManager::SendDeviceHapticsOutput(
           v9,
           a1,
           (const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *)&v11) >= 0;
  }
  else
  {
    v7 = 0;
    UserSetLastError(87LL, 16LL, v6);
  }
  UserSessionSwitchLeaveCrit(v8);
  return v7;
}
