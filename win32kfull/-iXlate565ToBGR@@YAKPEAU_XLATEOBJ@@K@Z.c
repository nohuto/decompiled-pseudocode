__int64 __fastcall iXlate565ToBGR(struct _XLATEOBJ *a1, unsigned int a2)
{
  return ((a2 & 0x600 | (a2 >> 1) & 0xE) >> 1) | (8 * ((4 * (a2 & 0x7E0 | (8 * (a2 & 0xF800)))) | a2 & 0xE01F));
}
