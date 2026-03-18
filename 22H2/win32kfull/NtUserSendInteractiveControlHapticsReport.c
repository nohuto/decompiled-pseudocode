/*
 * XREFs of NtUserSendInteractiveControlHapticsReport @ 0x1C01DA360
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C003D78C (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ?SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1C0241408 (-SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@.c)
 */

_BOOL8 __fastcall NtUserSendInteractiveControlHapticsReport(__int64 a1, __int64 a2, __int128 *a3)
{
  int v4; // ebx
  unsigned __int16 v5; // si
  BOOL v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  InteractiveControlManager *v12; // rax
  __int128 v14; // [rsp+38h] [rbp-30h] BYREF

  v4 = a2;
  v5 = a1;
  EnterSharedCrit(a1, a2, a3);
  if ( v4 == 16 )
  {
    ProbeForRead(a3, 0x10uLL, 1u);
    v14 = *a3;
    v12 = InteractiveControlManager::Instance(v11);
    v6 = InteractiveControlManager::SendDeviceHapticsOutput(
           v12,
           v5,
           (const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *)&v14) >= 0;
  }
  else
  {
    v6 = 0;
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v6;
}
