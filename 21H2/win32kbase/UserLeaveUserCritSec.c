/*
 * XREFs of UserLeaveUserCritSec @ 0x1C0039820
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 */

void UserLeaveUserCritSec()
{
  UserSessionSwitchLeaveCrit();
}
