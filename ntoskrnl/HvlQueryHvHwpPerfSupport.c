/*
 * XREFs of HvlQueryHvHwpPerfSupport @ 0x140544940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool HvlQueryHvHwpPerfSupport()
{
  return HvlpRootSchedulerEnabled == 0;
}
