/*
 * XREFs of PnpFreeDeviceInstancePath @ 0x14078EC18
 * Callers:
 *     IopDestroyDeviceNode @ 0x14078E9E0 (IopDestroyDeviceNode.c)
 *     PiBuildDeviceNodeInstancePath @ 0x14078EAF8 (PiBuildDeviceNodeInstancePath.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
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
