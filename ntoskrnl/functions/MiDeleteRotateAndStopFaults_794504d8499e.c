signed __int64 __fastcall MiDeleteRotateAndStopFaults(unsigned __int64 a1, __int64 a2, _QWORD *a3)
{
  _KPROCESS *Process; // rdi
  volatile LONG *SharedVm; // rbx
  KIRQL v8; // al
  _OWORD v10[3]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v11; // [rsp+60h] [rbp-28h]

  memset(v10, 0, sizeof(v10));
  v11 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = (volatile LONG *)MiGetSharedVm((__int64)&Process[1].ActiveProcessors.StaticBitmap[26]);
  v8 = ExAcquireSpinLockExclusive(SharedVm);
  *((_DWORD *)SharedVm + 1) = 0;
  *a3 = Process[1].Affinity.StaticBitmap[9];
  Process[1].Affinity.StaticBitmap[9] = (unsigned __int64)a3;
  MiUnlockWorkingSetExclusive((__int64)&Process[1].ActiveProcessors.StaticBitmap[26], v8);
  return MiDeleteVirtualAddresses(0LL, a1, a2, 0, v10);
}
