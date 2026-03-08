/*
 * XREFs of DxgkWslSignalSynchronizationObject @ 0x1C034FCE0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkSignalSynchronizationObjectInternal @ 0x1C0165B10 (DxgkSignalSynchronizationObjectInternal.c)
 */

__int64 __fastcall DxgkWslSignalSynchronizationObject(__int64 a1, __int64 a2)
{
  return DxgkSignalSynchronizationObjectInternal(a1, 1, a2, 0);
}
