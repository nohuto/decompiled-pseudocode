/*
 * XREFs of MiRotateComplete @ 0x1406309AC
 * Callers:
 *     MiRotateToFrameBuffer @ 0x140A2E9E0 (MiRotateToFrameBuffer.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140A2ECE4 (MiRotateToFrameBufferNoCopy.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x140289BA0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140330CD4 (MiGetSharedVm.c)
 */

void __fastcall MiRotateComplete(unsigned __int64 *a1)
{
  _KPROCESS *Process; // rdx
  __int64 v3; // rbp
  unsigned __int64 *v4; // rdi
  volatile LONG *SharedVm; // rbx
  KIRQL v6; // al
  unsigned __int8 v7; // dl
  unsigned __int64 *i; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  v3 = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
  v4 = &Process[1].Affinity.StaticBitmap[9];
  SharedVm = (volatile LONG *)MiGetSharedVm((__int64)&Process[1].ActiveProcessors.StaticBitmap[26]);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  *((_DWORD *)SharedVm + 1) = 0;
  v7 = v6;
  for ( i = (unsigned __int64 *)*v4; i != a1; i = (unsigned __int64 *)*i )
    v4 = i;
  *v4 = *i;
  MiUnlockWorkingSetExclusive(v3, v7);
}
