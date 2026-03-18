/*
 * XREFs of NtUserRegisterUserHungAppHandlers @ 0x1C01FBCD0
 * Callers:
 *     <none>
 * Callees:
 *     xxxRegisterUserHungAppHandlers @ 0x1C023EC98 (xxxRegisterUserHungAppHandlers.c)
 */

__int64 __fastcall NtUserRegisterUserHungAppHandlers(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx

  EnterCrit(0LL, 0LL);
  v4 = (int)xxxRegisterUserHungAppHandlers(a1, a2);
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
