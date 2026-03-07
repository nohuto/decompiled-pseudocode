int __cdecl rand()
{
  dword_140C09740 = 214013 * dword_140C09740 + 2531011;
  return (dword_140C09740 >> 16) & 0x7FFF;
}
