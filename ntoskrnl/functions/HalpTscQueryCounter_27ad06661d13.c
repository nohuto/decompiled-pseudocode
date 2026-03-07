unsigned __int64 HalpTscQueryCounter()
{
  if ( HalpTscFenceRequired == 1 )
  {
    _mm_lfence();
  }
  else if ( HalpTscFenceRequired == 2 )
  {
    _mm_mfence();
  }
  return __rdtsc();
}
