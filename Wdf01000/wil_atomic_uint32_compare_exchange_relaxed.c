__int64 __fastcall wil_atomic_uint32_compare_exchange_relaxed(
        volatile unsigned int *object,
        unsigned int *expected,
        signed __int32 desired)
{
  unsigned int v3; // eax
  signed __int32 v4; // ett

  v4 = *expected;
  v3 = _InterlockedCompareExchange((volatile signed __int32 *)object, desired, *expected);
  if ( v4 == v3 )
    return 1LL;
  *expected = v3;
  return 0LL;
}
