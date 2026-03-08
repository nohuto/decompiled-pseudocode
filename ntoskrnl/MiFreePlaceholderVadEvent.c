/*
 * XREFs of MiFreePlaceholderVadEvent @ 0x140A45180
 * Callers:
 *     MiFreePlaceholderStorage @ 0x1406800F8 (MiFreePlaceholderStorage.c)
 *     MiReleaseVadEventBlocks @ 0x1406ECE8C (MiReleaseVadEventBlocks.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x1402955D0 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFreePlaceholderVadEvent(__int64 a1)
{
  void *v1; // rcx
  __int64 v2; // rbx

  v1 = *(void **)(a1 + 8);
  v2 = 72LL;
  if ( v1 )
  {
    v2 = 136LL;
    ExFreePoolWithTag(v1, 0);
  }
  return PsReturnProcessNonPagedPoolQuota(KeGetCurrentThread()->ApcState.Process, v2);
}
