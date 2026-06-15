/*
 * XREFs of sub_18005A458 @ 0x18005A458
 * Callers:
 *     sub_180054760 @ 0x180054760 (sub_180054760.c)
 *     ?getZName@UnDecorator@@CA?AVDName@@_N0@Z_0 @ 0x180059000 (-getZName@UnDecorator@@CA-AVDName@@_N0@Z_0.c)
 *     sub_180059A8C @ 0x180059A8C (sub_180059A8C.c)
 *     sub_18005A220 @ 0x18005A220 (sub_18005A220.c)
 *     sub_18011AC34 @ 0x18011AC34 (sub_18011AC34.c)
 * Callees:
 *     sub_1800273F8 @ 0x1800273F8 (sub_1800273F8.c)
 */

__int64 __fastcall sub_18005A458(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !a2 )
    return 0LL;
  while ( (unsigned int)sub_1800273F8(a1, (_OWORD *)(a3 + 16LL * v3)) )
  {
    if ( ++v3 >= a2 )
      return 0LL;
  }
  return 2147942414LL;
}
