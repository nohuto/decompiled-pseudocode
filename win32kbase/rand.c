int __cdecl rand()
{
  dword_1C02CA8D0 = 214013 * dword_1C02CA8D0 + 2531011;
  return (dword_1C02CA8D0 >> 16) & 0x7FFF;
}
