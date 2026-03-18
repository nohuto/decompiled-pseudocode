/*
 * XREFs of VfMiscKeInitializeSemaphore_Entry @ 0x140AA4100
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscValidateSynchronizationObject @ 0x140AA59E0 (ViMiscValidateSynchronizationObject.c)
 */

__int64 __fastcall VfMiscKeInitializeSemaphore_Entry(__int64 a1)
{
  return ViMiscValidateSynchronizationObject(*(_QWORD *)(a1 + 16));
}
