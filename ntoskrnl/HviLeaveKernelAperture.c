__int64 HviLeaveKernelAperture()
{
  __int64 result; // rax

  if ( !byte_140C0DB50 )
  {
    if ( byte_140D1BBE5 )
      result = HvipApertureVmfuncSwitchEptp();
    else
      result = HvipApertureDirectHypercall(6LL, 0LL);
  }
  _mm_lfence();
  _enable();
  return result;
}
