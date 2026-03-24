/*
 * XREFs of PsQueryThreadTerminationPort @ 0x1405CC384
 * Callers:
 *     sub_1405BF110 @ 0x1405BF110 (sub_1405BF110.c)
 * Callees:
 *     <none>
 */

void **PsQueryThreadTerminationPort()
{
  return &KeGetCurrentPrcb()->CurrentThread[1].InitialStack;
}
