/*
 * XREFs of ViDeadlockKeReleaseMutant_Entry @ 0x140ADA400
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockReleaseResource @ 0x140AD8ECC (VfDeadlockReleaseResource.c)
 */

PVOID __fastcall ViDeadlockKeReleaseMutant_Entry(__int64 a1)
{
  return VfDeadlockReleaseResource(
           *(LONG **)(a1 + 16),
           (unsigned int)(*(_BYTE *)(a1 + 9) != 0) + 1,
           (__int64)KeGetCurrentThread(),
           *(void **)a1);
}
