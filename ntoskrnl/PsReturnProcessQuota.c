/*
 * XREFs of PsReturnProcessQuota @ 0x14020D064
 * Callers:
 *     MmAdjustWorkingSetSizeEx @ 0x14020C61C (MmAdjustWorkingSetSizeEx.c)
 *     MmDeleteProcessAddressSpace @ 0x140726E8C (MmDeleteProcessAddressSpace.c)
 *     MmCreateProcessAddressSpace @ 0x1407289B8 (MmCreateProcessAddressSpace.c)
 *     MmCleanProcessAddressSpace @ 0x1407D4924 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     PspReturnQuota @ 0x1403148A0 (PspReturnQuota.c)
 */

__int64 __fastcall PsReturnProcessQuota(struct _KPROCESS *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( a1 != PsInitialSystemProcess )
    return PspReturnQuota(a1[1].Affinity.StaticBitmap[27], a1, 3LL, a3);
  return result;
}
