/*
 * XREFs of NtUserSendInteractiveControlHapticsReport @ 0x1C01DB390
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C007A05C (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1C02440D8 (-SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@.c)
 */

_BOOL8 __fastcall NtUserSendInteractiveControlHapticsReport(__int64 a1, __int64 a2, __int128 *a3)
{
  int v4; // ebx
  unsigned __int16 v5; // si
  BOOL v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rcx
  InteractiveControlManager *v9; // rax
  __int128 v11; // [rsp+38h] [rbp-30h] BYREF

  v4 = a2;
  v5 = a1;
  EnterSharedCrit(a1, a2, a3);
  if ( v4 == 16 )
  {
    ProbeForRead(a3, 0x10uLL, 1u);
    v11 = *a3;
    v9 = InteractiveControlManager::Instance(v8);
    v6 = InteractiveControlManager::SendDeviceHapticsOutput(
           v9,
           v5,
           (const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *)&v11) >= 0;
  }
  else
  {
    v6 = 0;
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v7);
  return v6;
}
