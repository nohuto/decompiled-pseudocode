/*
 * XREFs of PsQueryThreadTerminationPort @ 0x140657370
 * Callers:
 *     sub_140647CF0 @ 0x140647CF0 (sub_140647CF0.c)
 * Callees:
 *     <none>
 */

void **PsQueryThreadTerminationPort()
{
  return &KeGetCurrentPrcb()->CurrentThread[1].InitialStack;
}
