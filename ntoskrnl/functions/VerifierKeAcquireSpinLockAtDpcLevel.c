__int64 __fastcall VerifierKeAcquireSpinLockAtDpcLevel(__int64 a1)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  ++dword_140C13828;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 164LL);
  return ((__int64 (__fastcall *)(__int64))pXdvKeAcquireSpinLockAtDpcLevel)(a1);
}
