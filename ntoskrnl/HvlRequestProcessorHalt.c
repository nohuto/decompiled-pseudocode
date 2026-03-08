/*
 * XREFs of HvlRequestProcessorHalt @ 0x140544A50
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403C81E0 (HvcallInitiateHypercall.c)
 *     HvlpHvToNtStatus @ 0x140456F16 (HvlpHvToNtStatus.c)
 */

__int64 HvlRequestProcessorHalt()
{
  unsigned __int16 v0; // ax

  v0 = HvcallInitiateHypercall(65758);
  return HvlpHvToNtStatus(v0);
}
