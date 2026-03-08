/*
 * XREFs of MiBeginHoldingDirtyFaults @ 0x14063F804
 * Callers:
 *     MiPrepareToHotPatchVad @ 0x140A3827C (MiPrepareToHotPatchVad.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x140289BA0 (MiUnlockWorkingSetExclusive.c)
 *     MiMoveDirtyBitsToPfns @ 0x14032F870 (MiMoveDirtyBitsToPfns.c)
 *     MiGetSharedVm @ 0x140330CD4 (MiGetSharedVm.c)
 */

__int64 __fastcall MiBeginHoldingDirtyFaults(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rbp
  volatile LONG *SharedVm; // rbx
  KIRQL v7; // al
  __int64 v8; // rdi
  _QWORD *v9; // rcx

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  SharedVm = (volatile LONG *)MiGetSharedVm((__int64)&Process[1].ActiveProcessors.StaticBitmap[26]);
  v7 = ExAcquireSpinLockExclusive(SharedVm);
  *((_DWORD *)SharedVm + 1) = 0;
  v8 = a1 + 24;
  v9 = *(_QWORD **)(v8 + 8);
  if ( *v9 != v8 )
    __fastfail(3u);
  a2[1] = v9;
  *a2 = v8;
  *v9 = a2;
  *(_QWORD *)(v8 + 8) = a2;
  MiUnlockWorkingSetExclusive((__int64)&Process[1].ActiveProcessors.StaticBitmap[26], v7);
  return MiMoveDirtyBitsToPfns(a2[2], a2[3], 0LL, 0);
}
