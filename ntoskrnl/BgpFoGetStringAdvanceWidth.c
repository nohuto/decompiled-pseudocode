/*
 * XREFs of BgpFoGetStringAdvanceWidth @ 0x14066F9B0
 * Callers:
 *     BcpDisplayCriticalString @ 0x14066FD2C (BcpDisplayCriticalString.c)
 * Callees:
 *     BgpRasGetGlyphAdvanceWidth @ 0x140670E7C (BgpRasGetGlyphAdvanceWidth.c)
 */

__int64 __fastcall BgpFoGetStringAdvanceWidth(int a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  __int16 v6; // ax
  int GlyphAdvanceWidth; // r9d
  unsigned __int16 v9; // bx
  int v11; // [rsp+68h] [rbp+20h] BYREF
  int v12; // [rsp+6Ch] [rbp+24h]

  v12 = HIDWORD(a4);
  v11 = 0;
  v6 = *(_WORD *)a2 & 0xFFFE;
  *a3 = 0;
  GlyphAdvanceWidth = 0;
  v9 = 0;
  if ( v6 )
  {
    do
    {
      GlyphAdvanceWidth = BgpRasGetGlyphAdvanceWidth(
                            a1,
                            *(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 2LL * v9),
                            (unsigned int)&v11,
                            GlyphAdvanceWidth,
                            (__int64)&BcpWorkspace);
      if ( GlyphAdvanceWidth < 0 )
        break;
      ++v9;
      *a3 += v11;
    }
    while ( v9 < (unsigned __int16)(*(_WORD *)a2 >> 1) );
  }
  return (unsigned int)GlyphAdvanceWidth;
}
