__int64 __fastcall HalpAllocateGsivForSecondaryInterrupt(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v4; // ebx
  __int64 result; // rax

  if ( SecondaryGsivAssignedCount >= (unsigned int)SecondaryGsivRangeSize )
    return 3221225626LL;
  v4 = _InterlockedIncrement(&SecondaryGsivAssignedCount);
  if ( v4 >= SecondaryGsivRangeSize )
    return 3221225626LL;
  if ( v4 != 1 || (result = KeInitializeSecondaryInterruptServices(0LL), (int)result >= 0) )
  {
    *a3 = v4 + SecondaryGsivRangeStart - 1;
    return 0LL;
  }
  return result;
}
