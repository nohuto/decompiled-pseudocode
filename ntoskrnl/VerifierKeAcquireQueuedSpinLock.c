__int64 __fastcall VerifierKeAcquireQueuedSpinLock(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v1 = 0LL;
  if ( (MmVerifierData & 1) != 0 )
  {
    ++dword_140C13828;
    v3 = retaddr;
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(retaddr, 164LL);
    LOBYTE(v3) = 2;
    v1 = ViKeIrqlLogAndTrimMemory(v3);
  }
  result = ((__int64 (__fastcall *)(__int64))pXdvKeAcquireQueuedSpinLock)(a1);
  if ( (MmVerifierData & 1) != 0 )
  {
    if ( v1 )
      *(_WORD *)(v1 + 10) = KeGetPcr()->Prcb.Number;
  }
  return result;
}
