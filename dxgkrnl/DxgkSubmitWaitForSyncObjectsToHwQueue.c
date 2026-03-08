/*
 * XREFs of DxgkSubmitWaitForSyncObjectsToHwQueue @ 0x1C031B9E0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkSubmitWaitForSyncObjectsToHwQueueInternal @ 0x1C02231E8 (DxgkSubmitWaitForSyncObjectsToHwQueueInternal.c)
 */

__int64 __fastcall DxgkSubmitWaitForSyncObjectsToHwQueue(__int64 a1, __int64 a2, __int64 a3)
{
  return DxgkSubmitWaitForSyncObjectsToHwQueueInternal(a1, 1, a3);
}
