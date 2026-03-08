/*
 * XREFs of MiAllocateModWriterEntry @ 0x1402E4458
 * Callers:
 *     MiMappedPageWriter @ 0x14038D570 (MiMappedPageWriter.c)
 *     MiAllocateMappedWriterMdls @ 0x1403AA5DC (MiAllocateMappedWriterMdls.c)
 *     MiCreatePagefile @ 0x140835934 (MiCreatePagefile.c)
 * Callees:
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     MiChargeForWriteInProgressPage @ 0x1402E44C4 (MiChargeForWriteInProgressPage.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

PVOID __fastcall MiAllocateModWriterEntry(__int64 a1, __int64 a2, int a3)
{
  PVOID Pool; // rbx

  Pool = MiAllocatePool(64, 8 * a2 + 264, 0x65576D4Du);
  if ( Pool )
  {
    if ( (unsigned int)MiChargeForWriteInProgressPage(a1, a3 != 0) )
      return Pool;
    ExFreePoolWithTag(Pool, 0);
  }
  return 0LL;
}
