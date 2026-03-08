/*
 * XREFs of WheaRecoveryBugCheck @ 0x14060E210
 * Callers:
 *     KiMcheckAlternateReturn @ 0x14057DEF0 (KiMcheckAlternateReturn.c)
 *     WheaReportHwError @ 0x14060E280 (WheaReportHwError.c)
 * Callees:
 *     WheapAddToDumpFile @ 0x14060E748 (WheapAddToDumpFile.c)
 *     WheapCompressErrorRecord @ 0x14060E978 (WheapCompressErrorRecord.c)
 *     WheapPersistPageForMemoryError @ 0x14060EC18 (WheapPersistPageForMemoryError.c)
 */

__int64 __fastcall WheaRecoveryBugCheck(__int64 a1, __int64 a2)
{
  WheapCompressErrorRecord(3LL, a1);
  WheapPersistPageForMemoryError(a1);
  PshedWriteErrorRecord(0LL, *(unsigned int *)(a1 + 20), a1);
  WheapAddToDumpFile(a1, *(unsigned int *)(a1 + 20));
  return PshedBugCheckSystem(a2, a1);
}
