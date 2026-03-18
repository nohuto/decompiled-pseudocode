/*
 * XREFs of ViDeadlockKeReleaseSpinLock_Entry @ 0x140ADA490
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockReleaseResource @ 0x140AD8ECC (VfDeadlockReleaseResource.c)
 */

PVOID __fastcall ViDeadlockKeReleaseSpinLock_Entry(__int64 a1)
{
  return VfDeadlockReleaseResource(*(LONG **)(a1 + 16), 5, (__int64)KeGetCurrentThread(), *(void **)a1);
}
