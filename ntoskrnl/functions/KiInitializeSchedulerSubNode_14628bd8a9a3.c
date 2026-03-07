void *__fastcall KiInitializeSchedulerSubNode(_WORD *a1, _WORD *a2)
{
  memset(a1, 0, 0x180uLL);
  a1[69] = a2[1];
  a1[70] = *a2;
  a1[68] = a2[3];
  return memset(a1 + 160, 255, 0x40uLL);
}
