/*
 * XREFs of PsQueryThreadTerminationPort @ 0x1405CC384
 * Callers:
 *     sub_1405BF1D0 @ 0x1405BF1D0 (sub_1405BF1D0.c)
 * Callees:
 *     <none>
 */

void **PsQueryThreadTerminationPort()
{
  return &KeGetCurrentPrcb()->CurrentThread[1].InitialStack;
}
