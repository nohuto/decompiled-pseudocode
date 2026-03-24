/*
 * XREFs of ObReferenceObjectExWithTag @ 0x1402F6460
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140213D50 (MiCompleteProtoPteFault.c)
 *     MiEmptyPageAccessLog @ 0x14025B4D0 (MiEmptyPageAccessLog.c)
 *     ObFastReplaceObject @ 0x140277500 (ObFastReplaceObject.c)
 *     MiReferenceControlAreaFile @ 0x14029D540 (MiReferenceControlAreaFile.c)
 *     ObFastReferenceObject @ 0x1403456F0 (ObFastReferenceObject.c)
 *     ObpCreateHandle @ 0x140643C70 (ObpCreateHandle.c)
 *     MiCreateImageOrDataSection @ 0x1406545A0 (MiCreateImageOrDataSection.c)
 *     PspInsertThread @ 0x1406C1DE8 (PspInsertThread.c)
 *     ObInitializeFastReference @ 0x140703ECC (ObInitializeFastReference.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140564C68 (ObpPushStackInfo.c)
 */

unsigned __int64 __fastcall ObReferenceObjectExWithTag(ULONG_PTR BugCheckParameter2, int a2)
{
  unsigned __int64 v3; // rsi
  __int64 v4; // rax

  v3 = a2;
  if ( ObpTraceFlags )
    ObpPushStackInfo(BugCheckParameter2 - 48);
  v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 48), v3);
  if ( v4 <= 0 )
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x10uLL, v3 + v4);
  return v3 + v4;
}
