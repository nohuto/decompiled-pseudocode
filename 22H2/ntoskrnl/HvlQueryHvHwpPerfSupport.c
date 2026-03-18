/*
 * XREFs of HvlQueryHvHwpPerfSupport @ 0x140546DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool HvlQueryHvHwpPerfSupport()
{
  return HvlpRootSchedulerEnabled == 0;
}
