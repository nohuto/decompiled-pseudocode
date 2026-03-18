/*
 * XREFs of ?ulGetFontData@@YAKPEAUHDC__@@KKPEAXKW4EntryPoint@RFONTOBJ@@@Z @ 0x1C007E98C
 * Callers:
 *     NtGdiGetFontData @ 0x1C007E840 (NtGdiGetFontData.c)
 * Callees:
 *     ?ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x1C007EA48 (-ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXKAEBUTag@RFONTOBJ@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall ulGetFontData(HDC a1, unsigned int a2, unsigned int a3, void *a4, unsigned int a5)
{
  unsigned int FontData2; // ebx
  _DWORD v10[2]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v11[2]; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v12[40]; // [rsp+48h] [rbp-30h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  if ( v11[0] )
  {
    v10[1] = *(unsigned __int16 *)(v11[0] + 12LL);
    v10[0] = 21;
    FontData2 = ulGetFontData2((struct DCOBJ *)v11, a2, a3, a4, a5, (const struct RFONTOBJ::Tag *)v10);
    if ( v11[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v11);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v12);
    return FontData2;
  }
  else
  {
    EngSetLastError(6u);
    DCOBJ::~DCOBJ((DCOBJ *)v11);
    return 0xFFFFFFFFLL;
  }
}
