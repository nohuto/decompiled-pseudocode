/*
 * XREFs of PsReturnProcessQuota @ 0x140274018
 * Callers:
 *     MmAdjustWorkingSetSizeEx @ 0x14023C7DC (MmAdjustWorkingSetSizeEx.c)
 *     MmDeleteProcessAddressSpace @ 0x14067C848 (MmDeleteProcessAddressSpace.c)
 *     MmCreateProcessAddressSpace @ 0x1406A77C4 (MmCreateProcessAddressSpace.c)
 *     MmCleanProcessAddressSpace @ 0x14070262C (MmCleanProcessAddressSpace.c)
 * Callees:
 *     PspReturnQuota @ 0x14034C6D0 (PspReturnQuota.c)
 */

__int64 __fastcall PsReturnProcessQuota(struct _KPROCESS *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( a1 != PsInitialSystemProcess )
    return PspReturnQuota(a1[1].AffinityPadding[7], a1, 3LL, a3);
  return result;
}
