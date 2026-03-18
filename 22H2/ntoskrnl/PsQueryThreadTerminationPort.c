/*
 * XREFs of PsQueryThreadTerminationPort @ 0x14067E368
 * Callers:
 *     sub_14066CB80 @ 0x14066CB80 (sub_14066CB80.c)
 * Callees:
 *     <none>
 */

void **PsQueryThreadTerminationPort()
{
  return &KeGetCurrentPrcb()->CurrentThread[1].InitialStack;
}
