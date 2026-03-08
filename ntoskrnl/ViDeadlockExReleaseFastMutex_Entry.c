/*
 * XREFs of ViDeadlockExReleaseFastMutex_Entry @ 0x140AD6100
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockReleaseResource @ 0x140AD4ECC (VfDeadlockReleaseResource.c)
 */

PVOID __fastcall ViDeadlockExReleaseFastMutex_Entry(__int64 a1)
{
  return VfDeadlockReleaseResource(*(LONG **)(a1 + 8), 3, (__int64)KeGetCurrentThread(), *(void **)a1);
}
