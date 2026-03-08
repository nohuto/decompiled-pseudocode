/*
 * XREFs of NtUserDWP_GetEnabledPopupOffset @ 0x1C01CF3A0
 * Callers:
 *     <none>
 * Callees:
 *     DWP_GetEnabledPopup @ 0x1C014A64C (DWP_GetEnabledPopup.c)
 */

__int64 __fastcall NtUserDWP_GetEnabledPopupOffset(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  const struct tagWND *v5; // rdi
  struct tagWND *EnabledPopup; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]

  v12 = 0LL;
  v11 = 0LL;
  EnterCrit(0LL, 0LL);
  v2 = ValidateHwnd(a1);
  v4 = 0LL;
  v5 = (const struct tagWND *)v2;
  if ( v2 )
  {
    *(_QWORD *)&v11 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v11;
    *((_QWORD *)&v11 + 1) = v2;
    HMLockObject(v2);
    EnabledPopup = DWP_GetEnabledPopup(v5);
    if ( EnabledPopup )
      v4 = *((_QWORD *)EnabledPopup + 6);
    ThreadUnlock1(v8, v7, v9);
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
