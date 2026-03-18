/*
 * XREFs of WheaRecoveryBugCheck @ 0x1406435C0
 * Callers:
 *     KiMcheckAlternateReturn @ 0x14057C3C0 (KiMcheckAlternateReturn.c)
 *     WheaReportHwError @ 0x140643630 (WheaReportHwError.c)
 * Callees:
 *     WheapAddToDumpFile @ 0x140643AFC (WheapAddToDumpFile.c)
 *     WheapCompressErrorRecord @ 0x140643DCC (WheapCompressErrorRecord.c)
 *     WheapPersistPageForMemoryError @ 0x140643FCC (WheapPersistPageForMemoryError.c)
 */

__int64 __fastcall WheaRecoveryBugCheck(__int64 a1, __int64 a2)
{
  WheapCompressErrorRecord(3LL, a1);
  WheapPersistPageForMemoryError(a1);
  PshedWriteErrorRecord(0LL, *(unsigned int *)(a1 + 20), a1);
  WheapAddToDumpFile(a1, *(unsigned int *)(a1 + 20));
  return PshedBugCheckSystem(a2, a1);
}
