/*
 * XREFs of PspSetJobPagePriorityLimitPreCallback @ 0x1409AFE20
 * Callers:
 *     <none>
 * Callees:
 *     PspUpdateJobEffectivePriorityLimits @ 0x140788AC4 (PspUpdateJobEffectivePriorityLimits.c)
 */

__int64 __fastcall PspSetJobPagePriorityLimitPreCallback(__int64 a1)
{
  PspUpdateJobEffectivePriorityLimits(a1, 2);
  return 0LL;
}
