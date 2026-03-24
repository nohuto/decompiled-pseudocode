/*
 * XREFs of MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x1402FA08C
 * Callers:
 *     MiRelocateImageAgain @ 0x14066A858 (MiRelocateImageAgain.c)
 *     MiRelocateImage @ 0x140702D80 (MiRelocateImage.c)
 *     MiCaptureSecureImageBaseAddress @ 0x1408D7BB0 (MiCaptureSecureImageBaseAddress.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MI_LOCK_RELOCATIONS_EXCLUSIVE(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx(a2 + 24, 0LL);
  *(_QWORD *)(a2 + 8) = a1;
}
