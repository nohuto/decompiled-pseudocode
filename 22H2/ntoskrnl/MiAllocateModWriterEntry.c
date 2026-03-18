/*
 * XREFs of MiAllocateModWriterEntry @ 0x1403498A8
 * Callers:
 *     MiMappedPageWriter @ 0x14038FA30 (MiMappedPageWriter.c)
 *     MiAllocateMappedWriterMdls @ 0x1403AF32C (MiAllocateMappedWriterMdls.c)
 *     MiCreatePagefile @ 0x1408355E4 (MiCreatePagefile.c)
 * Callees:
 *     MiAllocatePool @ 0x1402DF1A0 (MiAllocatePool.c)
 *     MiChargeForWriteInProgressPage @ 0x140349914 (MiChargeForWriteInProgressPage.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
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
