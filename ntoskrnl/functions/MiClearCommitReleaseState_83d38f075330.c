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
