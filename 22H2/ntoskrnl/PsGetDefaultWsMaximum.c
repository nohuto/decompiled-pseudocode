/*
 * XREFs of PsGetDefaultWsMaximum @ 0x1403572BC
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1406FDDB4 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 PsGetDefaultWsMaximum()
{
  return PspMaximumWorkingSet;
}
