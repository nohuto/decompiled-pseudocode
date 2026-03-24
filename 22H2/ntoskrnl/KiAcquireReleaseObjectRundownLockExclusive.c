/*
 * XREFs of KiAcquireReleaseObjectRundownLockExclusive @ 0x140302B34
 * Callers:
 *     KeReleaseMutant @ 0x1402C2B40 (KeReleaseMutant.c)
 *     KeRundownQueueEx @ 0x140302618 (KeRundownQueueEx.c)
 *     KeDeleteMutant @ 0x140302978 (KeDeleteMutant.c)
 *     KeRundownPriQueue @ 0x1405243AC (KeRundownPriQueue.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140295410 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall KiAcquireReleaseObjectRundownLockExclusive(unsigned __int64 a1)
{
  volatile LONG *v1; // rbx

  v1 = (volatile LONG *)((char *)&KiObjectRundownLocks + 64 * ((a1 >> 4) & 0x3F));
  ExAcquireSpinLockExclusiveAtDpcLevel(v1);
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
}
