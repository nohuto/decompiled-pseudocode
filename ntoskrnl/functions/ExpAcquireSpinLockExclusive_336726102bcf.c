__int64 __fastcall ExpAcquireSpinLockExclusive(volatile signed __int32 *a1)
{
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  if ( _interlockedbittestandset(a1, 0x1Fu) )
    v3 = ExpWaitForSpinLockExclusiveAndAcquire();
  while ( (*a1 & 0xBFFFFFFF) != 0x80000000 )
  {
    if ( (*a1 & 0x40000000) == 0 )
      _InterlockedOr(a1, 0x40000000u);
    KeYieldProcessorEx(&v3);
  }
  return v3;
}
