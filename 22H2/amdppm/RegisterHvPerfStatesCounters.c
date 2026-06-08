/*
 * XREFs of RegisterHvPerfStatesCounters @ 0x1C0023BF0
 * Callers:
 *     <none>
 * Callees:
 *     InitPerfStatesInternal @ 0x1C002EAC0 (InitPerfStatesInternal.c)
 */

__int64 __fastcall RegisterHvPerfStatesCounters(__int64 a1)
{
  return InitPerfStatesInternal(a1, RegisterHvFeedbackCountersCallback);
}
