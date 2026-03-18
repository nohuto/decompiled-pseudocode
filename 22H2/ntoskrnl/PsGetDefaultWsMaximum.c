/*
 * XREFs of PsGetDefaultWsMaximum @ 0x1402918F0
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x140705F00 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 PsGetDefaultWsMaximum()
{
  return PspMaximumWorkingSet;
}
