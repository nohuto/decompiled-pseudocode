/*
 * XREFs of PsChargeProcessPagedPoolQuota @ 0x140606580
 * Callers:
 *     ExpAllocateHandleTable @ 0x140606154 (ExpAllocateHandleTable.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x140606520 (ExpAllocateTablePagedPoolNoZero.c)
 *     AlpcpChargePagedPoolQuota @ 0x1406D980C (AlpcpChargePagedPoolQuota.c)
 * Callees:
 *     PspChargeQuota @ 0x14021ADA0 (PspChargeQuota.c)
 */

__int64 __fastcall PsChargeProcessPagedPoolQuota(struct _KPROCESS *a1, unsigned __int64 a2)
{
  if ( a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return PspChargeQuota(a1[1].AffinityPadding[7], (__int64)a1, 1, a2);
}
