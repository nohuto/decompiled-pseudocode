/*
 * XREFs of MiDeleteRotateAndStopFaults @ 0x140632628
 * Callers:
 *     MiRotateToFrameBuffer @ 0x140A31710 (MiRotateToFrameBuffer.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140A31A14 (MiRotateToFrameBufferNoCopy.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140286D54 (MiGetSharedVm.c)
 *     MiDeleteVirtualAddresses @ 0x1402896EC (MiDeleteVirtualAddresses.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A1D0 (MiUnlockWorkingSetExclusive.c)
 */

signed __int64 __fastcall MiDeleteRotateAndStopFaults(unsigned __int64 a1, __int64 a2, _QWORD *a3)
{
  _KPROCESS *Process; // rdi
  volatile LONG *SharedVm; // rbx
  KIRQL v8; // al
  __int64 v9; // r8
  __int64 v10; // r9
  _OWORD v12[3]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v13; // [rsp+60h] [rbp-28h]

  memset(v12, 0, sizeof(v12));
  v13 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = (volatile LONG *)MiGetSharedVm((__int64)&Process[1].ActiveProcessors.StaticBitmap[26]);
  v8 = ExAcquireSpinLockExclusive(SharedVm);
  *((_DWORD *)SharedVm + 1) = 0;
  *a3 = Process[1].Affinity.StaticBitmap[9];
  Process[1].Affinity.StaticBitmap[9] = (unsigned __int64)a3;
  MiUnlockWorkingSetExclusive((__int64)&Process[1].ActiveProcessors.StaticBitmap[26], v8, v9, v10);
  return MiDeleteVirtualAddresses(0LL, a1, a2, 0, v12);
}
