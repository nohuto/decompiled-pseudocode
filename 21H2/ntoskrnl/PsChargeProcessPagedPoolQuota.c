/*
 * XREFs of PsChargeProcessPagedPoolQuota @ 0x1406A6F60
 * Callers:
 *     ExpAllocateHandleTable @ 0x1406A6AF8 (ExpAllocateHandleTable.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x1406A6F00 (ExpAllocateTablePagedPoolNoZero.c)
 *     AlpcpChargePagedPoolQuota @ 0x1407A7464 (AlpcpChargePagedPoolQuota.c)
 * Callees:
 *     PspChargeQuota @ 0x1402AC010 (PspChargeQuota.c)
 */

__int64 __fastcall PsChargeProcessPagedPoolQuota(struct _KPROCESS *a1, unsigned __int64 a2)
{
  if ( a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return PspChargeQuota(a1[1].Affinity.StaticBitmap[27], (__int64)a1, 1, a2);
}
