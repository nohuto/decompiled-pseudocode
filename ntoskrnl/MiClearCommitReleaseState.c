/*
 * XREFs of MiClearCommitReleaseState @ 0x140615BBC
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x1407D4924 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x140289BA0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140330CD4 (MiGetSharedVm.c)
 */

void __fastcall MiClearCommitReleaseState(__int64 a1)
{
  volatile LONG *SharedVm; // rbx
  KIRQL v3; // al

  SharedVm = (volatile LONG *)MiGetSharedVm(a1);
  v3 = ExAcquireSpinLockExclusive(SharedVm);
  *((_DWORD *)SharedVm + 1) = 0;
  *(_BYTE *)(a1 + 187) &= 0x9Fu;
  MiUnlockWorkingSetExclusive(a1, v3);
}
