/*
 * XREFs of ExpApplyRewaitBoost @ 0x140300250
 * Callers:
 *     <none>
 * Callees:
 *     ExpApplyPriorityBoost @ 0x140282C50 (ExpApplyPriorityBoost.c)
 */

__int64 __fastcall ExpApplyRewaitBoost(__int64 a1)
{
  return ExpApplyPriorityBoost(a1, 65280, (__int64)KeGetCurrentThread());
}
