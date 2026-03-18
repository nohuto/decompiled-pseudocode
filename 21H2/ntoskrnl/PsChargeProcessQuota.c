/*
 * XREFs of PsChargeProcessQuota @ 0x14036C8EC
 * Callers:
 *     MmAdjustWorkingSetSizeEx @ 0x14036D62C (MmAdjustWorkingSetSizeEx.c)
 *     MmCreateProcessAddressSpace @ 0x1407F17B4 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     PspChargeQuota @ 0x1402AC010 (PspChargeQuota.c)
 */

__int64 __fastcall PsChargeProcessQuota(struct _KPROCESS *a1, __int64 a2, unsigned __int64 a3)
{
  if ( a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return PspChargeQuota(a1[1].Affinity.StaticBitmap[27], (__int64)a1, 3, a3);
}
