/*
 * XREFs of PsQueryThreadTerminationPort @ 0x14067C368
 * Callers:
 *     sub_14066A530 @ 0x14066A530 (sub_14066A530.c)
 * Callees:
 *     <none>
 */

void **PsQueryThreadTerminationPort()
{
  return &KeGetCurrentPrcb()->CurrentThread[1].InitialStack;
}
