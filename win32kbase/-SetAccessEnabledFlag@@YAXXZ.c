void SetAccessEnabledFlag(void)
{
  int v0; // eax

  if ( (dword_1C02D159C & 1) != 0
    || (dword_1C02D159C & 4) != 0
    || (dword_1C02D1594 & 1) != 0
    || (dword_1C02D1594 & 4) != 0
    || (dword_1C02D154C & 4) != 0
    || (dword_1C02D1574 & 1) != 0
    || (dword_1C02D1574 & 4) != 0
    || (dword_1C02D155C & 1) != 0
    || (dword_1C02D155C & 4) != 0
    || (dword_1C02D49D4 & 1) != 0
    || (gdwPUDFlags & 0x8000) != 0 )
  {
    v0 = gdwPUDFlags | 0x100;
  }
  else
  {
    v0 = gdwPUDFlags & 0xFFFFFEFF;
  }
  gdwPUDFlags = v0;
}
