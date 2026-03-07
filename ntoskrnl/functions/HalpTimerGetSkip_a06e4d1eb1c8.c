char HalpTimerGetSkip()
{
  return BYTE2(KeGetPcr()->HalReserved[5]);
}
