unsigned __int64 __fastcall VfMiscKeAcquireInStackQueuedSpinLockForDpc_Entry(__int64 a1)
{
  VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 16), 8uLL);
  return VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 8), 0x18uLL);
}
