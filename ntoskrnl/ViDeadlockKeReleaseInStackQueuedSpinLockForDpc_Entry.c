/*
 * XREFs of ViDeadlockKeReleaseInStackQueuedSpinLockForDpc_Entry @ 0x140AD63C0
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockReleaseResource @ 0x140AD4ECC (VfDeadlockReleaseResource.c)
 */

PVOID __fastcall ViDeadlockKeReleaseInStackQueuedSpinLockForDpc_Entry(__int64 a1)
{
  return VfDeadlockReleaseResource(
           (LONG *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) & 0xFFFFFFFFFFFFFFF8uLL),
           6,
           (__int64)KeGetCurrentThread(),
           *(void **)a1);
}
