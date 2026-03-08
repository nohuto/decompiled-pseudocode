/*
 * XREFs of MiLockWorkingSetForLargeMapping @ 0x14064DB98
 * Callers:
 *     MiCommitExistingVad @ 0x140320D70 (MiCommitExistingVad.c)
 *     MiMapUserLargePages @ 0x1406667E0 (MiMapUserLargePages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x140289BA0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140330CD4 (MiGetSharedVm.c)
 *     ExAllocatePoolMm @ 0x14034C1AC (ExAllocatePoolMm.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

KIRQL __fastcall MiLockWorkingSetForLargeMapping(__int64 a1, __int64 a2, int a3)
{
  void *v4; // rsi
  unsigned __int64 v5; // r14
  PVOID PoolMm; // rax
  volatile LONG *v7; // rbx
  KIRQL v8; // al
  KIRQL v9; // r15
  volatile LONG *SharedVm; // rbx

  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
  {
    SharedVm = (volatile LONG *)MiGetSharedVm(a1);
    v9 = ExAcquireSpinLockExclusive(SharedVm);
    goto LABEL_10;
  }
  v4 = 0LL;
  v5 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28];
  if ( !*(_QWORD *)(v5 + 624) )
  {
    PoolMm = ExAllocatePoolMm(64, 0x800uLL, 0x6C53694Du, a3 | 0x80000000);
    v4 = PoolMm;
    if ( PoolMm )
      memset(PoolMm, 0, 0x800uLL);
  }
  v7 = (volatile LONG *)MiGetSharedVm(a1);
  v8 = ExAcquireSpinLockExclusive(v7);
  *((_DWORD *)v7 + 1) = 0;
  v9 = v8;
  if ( v4 )
  {
    if ( !*(_QWORD *)(v5 + 624) )
    {
      *(_QWORD *)(v5 + 624) = v4;
      return v9;
    }
    MiUnlockWorkingSetExclusive(a1, v8);
    ExFreePoolWithTag(v4, 0);
    SharedVm = (volatile LONG *)MiGetSharedVm(a1);
    ExAcquireSpinLockExclusive(SharedVm);
LABEL_10:
    *((_DWORD *)SharedVm + 1) = 0;
  }
  return v9;
}
