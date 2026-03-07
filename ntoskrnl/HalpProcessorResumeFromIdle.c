struct _KPRCB *HalpProcessorResumeFromIdle()
{
  struct _KPRCB *result; // rax

  result = KeGetCurrentPrcb();
  if ( SLODWORD(result->HalReserved[2]) > 0 )
  {
    result = KeGetCurrentPrcb();
    if ( (result->HalReserved[2] & 1) == 0 )
    {
      result = (struct _KPRCB *)HalpProfileInterface[10];
      if ( result )
        return (struct _KPRCB *)((__int64 (*)(void))result)();
    }
  }
  return result;
}
