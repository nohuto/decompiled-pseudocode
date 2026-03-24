/*
 * XREFs of PsChargeProcessPagedPoolQuota @ 0x14062B3D0
 * Callers:
 *     ExpAllocateHandleTable @ 0x14062AF9C (ExpAllocateHandleTable.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x14062B368 (ExpAllocateTablePagedPoolNoZero.c)
 *     AlpcpChargePagedPoolQuota @ 0x140660A4C (AlpcpChargePagedPoolQuota.c)
 * Callees:
 *     PspChargeQuota @ 0x14021ADE0 (PspChargeQuota.c)
 */

__int64 __fastcall PsChargeProcessPagedPoolQuota(struct _KPROCESS *a1, unsigned __int64 a2)
{
  if ( a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return PspChargeQuota(a1[1].AffinityPadding[7], (__int64)a1, 1, a2);
}
