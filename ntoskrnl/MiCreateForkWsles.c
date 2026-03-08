/*
 * XREFs of MiCreateForkWsles @ 0x140661690
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x140A45CF4 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x140289BA0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140330CD4 (MiGetSharedVm.c)
 *     MiCreateForkWsle @ 0x140661588 (MiCreateForkWsle.c)
 */

void MiCreateForkWsles()
{
  unsigned __int64 *v0; // rbp
  unsigned __int64 v1; // r14
  __int64 v2; // rcx
  unsigned __int64 v3; // rsi
  volatile LONG *SharedVm; // rbx
  KIRQL v5; // al
  unsigned __int8 v6; // di

  v0 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  v1 = 0xFFFFF68000000000uLL;
  v2 = 3LL;
  v3 = 0xFFFFF6BFFFFFFFF8uLL;
  do
  {
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v2;
  }
  while ( v2 );
  SharedVm = (volatile LONG *)MiGetSharedVm((__int64)v0);
  v5 = ExAcquireSpinLockExclusive(SharedVm);
  *((_DWORD *)SharedVm + 1) = 0;
  v6 = v5;
  MiCreateForkWsle((__int64)v0, v5, v1, v3, 3);
  MiUnlockWorkingSetExclusive((__int64)v0, v6);
}
