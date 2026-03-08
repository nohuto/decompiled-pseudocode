/*
 * XREFs of PsChargeProcessPagedPoolQuota @ 0x1407D6CF0
 * Callers:
 *     AlpcpChargePagedPoolQuota @ 0x1406D477C (AlpcpChargePagedPoolQuota.c)
 *     ExpAllocateHandleTable @ 0x140706348 (ExpAllocateHandleTable.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x140706670 (ExpAllocateTablePagedPoolNoZero.c)
 *     MiInsertVadCharges @ 0x1407D6A70 (MiInsertVadCharges.c)
 * Callees:
 *     PspChargeQuota @ 0x140312850 (PspChargeQuota.c)
 */

__int64 __fastcall PsChargeProcessPagedPoolQuota(struct _KPROCESS *a1, unsigned __int64 a2)
{
  if ( a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return PspChargeQuota(a1[1].Affinity.StaticBitmap[27], (__int64)a1, 1, a2);
}
