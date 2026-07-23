/*
 * XREFs of PsQueryThreadTerminationPort @ 0x1405CC384
 * Callers:
 *     sub_1405BF400 @ 0x1405BF400 (sub_1405BF400.c)
 * Callees:
 *     <none>
 */

void **PsQueryThreadTerminationPort()
{
  return &KeGetCurrentPrcb()->CurrentThread[1].InitialStack;
}
