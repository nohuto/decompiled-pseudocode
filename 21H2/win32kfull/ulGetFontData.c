/*
 * XREFs of ulGetFontData @ 0x1C00185C4
 * Callers:
 *     NtGdiGetFontData @ 0x1C00184C0 (NtGdiGetFontData.c)
 * Callees:
 *     ?ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z @ 0x1C0018654 (-ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall ulGetFontData(HDC a1, unsigned int a2, unsigned int a3, void *a4, unsigned int a5)
{
  unsigned int FontData2; // ebx
  _QWORD v10[2]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v11[40]; // [rsp+40h] [rbp-28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  if ( v10[0] )
  {
    FontData2 = ulGetFontData2((struct DCOBJ *)v10, a2, a3, a4, a5);
  }
  else
  {
    EngSetLastError(6u);
    FontData2 = -1;
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v10);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v11);
  return FontData2;
}
