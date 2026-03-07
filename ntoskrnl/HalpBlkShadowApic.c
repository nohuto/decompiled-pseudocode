__int64 HalpBlkShadowApic()
{
  __int64 result; // rax

  result = 0LL;
  if ( !HalpApicX2Mode && !HalpApicUsingMsrs )
  {
    if ( HalpLocalApic )
      return HalpBlkAddVirtualMapping(HalpBlkRootPageTablePa, HalpLocalApicPhysical.QuadPart, HalpLocalApic, 0, 4);
    else
      return 3221225486LL;
  }
  return result;
}
