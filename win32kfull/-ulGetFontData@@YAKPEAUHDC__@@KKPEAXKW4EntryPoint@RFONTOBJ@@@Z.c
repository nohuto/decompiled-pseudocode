/*
 * XREFs of ?ulGetFontData@@YAKPEAUHDC__@@KKPEAXKW4EntryPoint@RFONTOBJ@@@Z @ 0x1C0113360
 * Callers:
 *     NtGdiGetFontData @ 0x1C0113400 (NtGdiGetFontData.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x1C01206D4 (-ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXKAEBUTag@RFONTOBJ@@@Z.c)
 */

__int64 __fastcall ulGetFontData(HDC a1, unsigned int a2, unsigned int a3, unsigned __int8 *a4, unsigned int a5)
{
  unsigned int FontData2; // ebx
  _DWORD v10[2]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v11[4]; // [rsp+38h] [rbp-20h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  if ( v11[0] )
  {
    v10[1] = *(unsigned __int16 *)(v11[0] + 12LL);
    v10[0] = 21;
    FontData2 = ulGetFontData2((struct DCOBJ *)v11, a2, a3, a4, a5, (const struct RFONTOBJ::Tag *)v10);
    if ( v11[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v11);
    return FontData2;
  }
  else
  {
    EngSetLastError(6u);
    DCOBJ::~DCOBJ((DCOBJ *)v11);
    return 0xFFFFFFFFLL;
  }
}
