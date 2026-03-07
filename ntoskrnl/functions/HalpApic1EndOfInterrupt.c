void HalpApic1EndOfInterrupt()
{
  *(_DWORD *)(HalpLocalApic + 176) = 0;
}
