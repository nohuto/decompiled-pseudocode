/*
 * XREFs of PsChargeProcessQuota @ 0x140357284
 * Callers:
 *     MmAdjustWorkingSetSizeEx @ 0x14031711C (MmAdjustWorkingSetSizeEx.c)
 *     MmCreateProcessAddressSpace @ 0x1406FDDB4 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     PspChargeQuota @ 0x14021ADA0 (PspChargeQuota.c)
 */

__int64 __fastcall PsChargeProcessQuota(struct _KPROCESS *a1, __int64 a2, unsigned __int64 a3)
{
  if ( a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return PspChargeQuota(a1[1].AffinityPadding[7], (__int64)a1, 3, a3);
}
