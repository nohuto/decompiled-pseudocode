__int64 __fastcall VfMiscKeAcquireSpinLockRaiseToDpc_Entry(__int64 a1)
{
  __int64 v1; // rcx

  VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 8), 8uLL);
  LOBYTE(v1) = 2;
  return ViMiscCheckKeRaiseIrql(v1);
}
