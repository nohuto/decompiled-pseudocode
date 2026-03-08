/*
 * XREFs of UserLeaveUserCritSec @ 0x1C00BAE00
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 */

void __fastcall UserLeaveUserCritSec(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  UserSessionSwitchLeaveCrit(a1, a2, a3, a4);
}
