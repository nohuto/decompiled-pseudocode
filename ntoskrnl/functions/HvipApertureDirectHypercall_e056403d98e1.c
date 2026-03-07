void HvipApertureDirectHypercall()
{
  if ( byte_140D1BBE4 )
    HvipApertureIntelVmcall();
  else
    HvipApertureAmdVmcall();
}
