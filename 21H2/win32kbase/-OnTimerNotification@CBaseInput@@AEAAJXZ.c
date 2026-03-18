/*
 * XREFs of ?OnTimerNotification@CBaseInput@@AEAAJXZ @ 0x1C01DC610
 * Callers:
 *     <none>
 * Callees:
 *     RIMOnTimerNotification @ 0x1C01857B0 (RIMOnTimerNotification.c)
 */

__int64 __fastcall CBaseInput::OnTimerNotification(char **this)
{
  return RIMOnTimerNotification(this[1]);
}
