/*
 * XREFs of KiAcquireReleaseObjectRundownLockExclusive @ 0x14029319C
 * Callers:
 *     KeRundownQueueEx @ 0x140292C14 (KeRundownQueueEx.c)
 *     KeDeleteMutant @ 0x140292FB8 (KeDeleteMutant.c)
 *     KeReleaseMutantEx @ 0x14040A86C (KeReleaseMutantEx.c)
 *     KeRundownPriQueue @ 0x14057C5D0 (KeRundownPriQueue.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall KiAcquireReleaseObjectRundownLockExclusive(unsigned __int64 a1)
{
  volatile LONG *v1; // rbx

  v1 = (volatile LONG *)((char *)&KiObjectRundownLocks + 64 * ((a1 >> 4) & 0x3F));
  ExAcquireSpinLockExclusiveAtDpcLevel(v1);
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
}
