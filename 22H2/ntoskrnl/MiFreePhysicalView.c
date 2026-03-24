/*
 * XREFs of MiFreePhysicalView @ 0x140298638
 * Callers:
 *     MiReleaseVadEventBlocks @ 0x14063AAB0 (MiReleaseVadEventBlocks.c)
 * Callees:
 *     MiGetSharedVm @ 0x14021AF10 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14021CAA0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D020 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall MiFreePhysicalView(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  LONG *SharedVm; // rbx
  KIRQL v5; // al

  if ( (*(_DWORD *)(a2 + 48) & 0x70) == 0x10 )
  {
    v2 = *(_QWORD *)(a1 + 1680);
    v3 = a1 + 1664;
    SharedVm = MiGetSharedVm(a1 + 1664);
    v5 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    --*(_QWORD *)(v2 + 304);
    MiUnlockWorkingSetExclusive(v3, v5);
  }
}
