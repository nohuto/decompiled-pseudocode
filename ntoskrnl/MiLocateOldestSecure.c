/*
 * XREFs of MiLocateOldestSecure @ 0x1402FE90C
 * Callers:
 *     MiUnmapLockedPagesInUserSpace @ 0x140797184 (MiUnmapLockedPagesInUserSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x140289BA0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140330CD4 (MiGetSharedVm.c)
 */

_QWORD *__fastcall MiLocateOldestSecure(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rsi
  _KPROCESS *Process; // rbp
  __int64 SharedVm; // rbx
  KIRQL v8; // al
  _QWORD *i; // rdx

  v5 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm(&Process[1].ActiveProcessors.StaticBitmap[26], a2, a3, a4);
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  for ( i = (_QWORD *)(*(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL); i; i = (_QWORD *)*i )
    v5 = i;
  MiUnlockWorkingSetExclusive((__int64)&Process[1].ActiveProcessors.StaticBitmap[26], v8);
  return v5;
}
