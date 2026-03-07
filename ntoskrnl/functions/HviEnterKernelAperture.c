char HviEnterKernelAperture()
{
  char result; // al

  result = byte_140D1BBE6;
  if ( !byte_140D1BBE6 )
    result = HvipApertureDetectParameters();
  _disable();
  if ( !byte_140C0DB50 )
  {
    if ( byte_140D1BBE5 )
      return HvipApertureVmfuncSwitchEptp();
    else
      return HvipApertureDirectHypercall(6LL, 1LL);
  }
  return result;
}
