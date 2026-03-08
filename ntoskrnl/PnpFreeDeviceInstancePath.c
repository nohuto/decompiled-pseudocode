/*
 * XREFs of PnpFreeDeviceInstancePath @ 0x140783208
 * Callers:
 *     IopDestroyDeviceNode @ 0x140782FD0 (IopDestroyDeviceNode.c)
 *     PiBuildDeviceNodeInstancePath @ 0x1407830E8 (PiBuildDeviceNodeInstancePath.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PnpFreeDeviceInstancePath(__int64 a1)
{
  void *v2; // rcx

  ExAcquireFastMutex(&PnpDeviceReferenceTableLock);
  v2 = *(void **)(a1 + 48);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x49706E50u);
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  ExReleaseFastMutex(&PnpDeviceReferenceTableLock);
}
