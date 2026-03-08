/*
 * XREFs of ViDeadlockKeReleaseSpinLockFromDpcLevel_Entry @ 0x140AD6460
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockReleaseResource @ 0x140AD4ECC (VfDeadlockReleaseResource.c)
 */

PVOID __fastcall ViDeadlockKeReleaseSpinLockFromDpcLevel_Entry(__int64 a1)
{
  return VfDeadlockReleaseResource(*(LONG **)(a1 + 8), 5, (__int64)KeGetCurrentThread(), *(void **)a1);
}
