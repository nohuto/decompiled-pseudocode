__int64 __fastcall iXlate555ToBGR(struct _XLATEOBJ *a1, unsigned int a2)
{
  return (a2 >> 2) & 7 | (2
                        * (a2 & 0x380 | (4 * (a2 & 0x1F | (2 * (a2 & 0x7000 | (4 * (a2 & 0x3E0 | (8 * (a2 & 0x7C00))))))))));
}
