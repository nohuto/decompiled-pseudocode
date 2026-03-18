/*
 * XREFs of KiAcquireReleaseObjectRundownLockExclusive @ 0x14028CC6C
 * Callers:
 *     KeRundownQueueEx @ 0x14028C6E4 (KeRundownQueueEx.c)
 *     KeDeleteMutant @ 0x14028CA88 (KeDeleteMutant.c)
 *     KeReleaseMutantEx @ 0x14040FD6C (KeReleaseMutantEx.c)
 *     KeRundownPriQueue @ 0x14057EAE0 (KeRundownPriQueue.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall KiAcquireReleaseObjectRundownLockExclusive(unsigned __int64 a1)
{
  volatile LONG *v1; // rbx

  v1 = (volatile LONG *)((char *)&KiObjectRundownLocks + 64 * ((a1 >> 4) & 0x3F));
  ExAcquireSpinLockExclusiveAtDpcLevel(v1);
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
}
