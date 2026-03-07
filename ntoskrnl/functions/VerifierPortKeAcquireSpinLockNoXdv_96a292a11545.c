KIRQL __fastcall VerifierPortKeAcquireSpinLockNoXdv(ULONG_PTR SpinLock, KIRQL *a2, __int64 a3)
{
  __int64 v3; // rbx
  KSPIN_LOCK *v6; // rdi
  KIRQL result; // al

  v3 = 0LL;
  v6 = (KSPIN_LOCK *)SpinLock;
  if ( (VfRuleClasses & 0x800) != 0 )
    VfMiscCheckKernelAddress(SpinLock, 8uLL);
  if ( (VfRuleClasses & 2) != 0 )
  {
    ++dword_140C13828;
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(a3, 164LL);
    LOBYTE(SpinLock) = 2;
    v3 = ViKeIrqlLogAndTrimMemory(SpinLock);
  }
  result = KeAcquireSpinLockRaiseToDpc(v6);
  *a2 = result;
  if ( (VfRuleClasses & 2) != 0 )
  {
    if ( v3 )
      *(_WORD *)(v3 + 10) = KeGetPcr()->Prcb.Number;
  }
  return result;
}
