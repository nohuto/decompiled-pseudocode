/*
 * XREFs of MiDeleteRotateAndStopFaults @ 0x1402EB774
 * Callers:
 *     MmRotatePhysicalView @ 0x14065FD60 (MmRotatePhysicalView.c)
 * Callees:
 *     MiGetSharedVm @ 0x14021AF10 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14021CAA0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D020 (ExAcquireSpinLockExclusive.c)
 *     MiDeleteVirtualAddresses @ 0x14027EC00 (MiDeleteVirtualAddresses.c)
 */

signed __int64 __fastcall MiDeleteRotateAndStopFaults(int a1, int a2, _QWORD *a3)
{
  _KPROCESS *Process; // rdi
  LONG *SharedVm; // rbx
  KIRQL v8; // al
  _BYTE v10[48]; // [rsp+20h] [rbp-48h] BYREF

  memset(v10, 0, sizeof(v10));
  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].ActiveProcessorsPadding[6]);
  v8 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  *a3 = Process[1].Affinity.Bitmap[9];
  Process[1].Affinity.Bitmap[9] = (unsigned __int64)a3;
  MiUnlockWorkingSetExclusive((__int64)&Process[1].ActiveProcessorsPadding[6], v8);
  return MiDeleteVirtualAddresses(a1, a2, 0, (__int64)v10);
}
