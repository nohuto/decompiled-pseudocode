/*
 * XREFs of PsChargeProcessPagedPoolQuota @ 0x1407B0FE0
 * Callers:
 *     MiInsertVadCharges @ 0x1406FA960 (MiInsertVadCharges.c)
 *     AlpcpChargePagedPoolQuota @ 0x14071CBBC (AlpcpChargePagedPoolQuota.c)
 *     ExpAllocateHandleTable @ 0x1407B0C4C (ExpAllocateHandleTable.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x1407B0F74 (ExpAllocateTablePagedPoolNoZero.c)
 * Callees:
 *     PspChargeQuota @ 0x14022EC10 (PspChargeQuota.c)
 */

__int64 __fastcall PsChargeProcessPagedPoolQuota(struct _KPROCESS *a1, unsigned __int64 a2)
{
  if ( a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return PspChargeQuota(a1[1].Affinity.StaticBitmap[27], (__int64)a1, 1, a2);
}
