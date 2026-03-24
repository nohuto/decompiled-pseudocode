/*
 * XREFs of UserLeaveUserCritSec @ 0x1C003AC90
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 */

void UserLeaveUserCritSec()
{
  UserSessionSwitchLeaveCrit();
}
