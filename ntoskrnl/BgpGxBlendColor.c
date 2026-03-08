/*
 * XREFs of BgpGxBlendColor @ 0x1403841F8
 * Callers:
 *     RaspAntiAlias @ 0x140384090 (RaspAntiAlias.c)
 *     BgpGxBlendRectangle @ 0x140AEF430 (BgpGxBlendRectangle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BgpGxBlendColor(int a1, int a2, unsigned __int8 a3)
{
  unsigned int v4; // [rsp+18h] [rbp+18h]

  HIWORD(v4) = (unsigned __int8)(a3 * (unsigned int)BYTE2(a2) / 0xFF - (-1 - a3) * BYTE2(a1));
  BYTE1(v4) = a3 * (unsigned int)BYTE1(a2) / 0xFF - (-1 - a3) * BYTE1(a1);
  LOBYTE(v4) = (255 - a3) * (unsigned __int8)a1 / 255 + a3 * (unsigned int)(unsigned __int8)a2 / 0xFF;
  return v4;
}
