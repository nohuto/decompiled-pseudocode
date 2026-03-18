/*
 * XREFs of GreCreateFontIndirectW @ 0x1C00131E4
 * Callers:
 *     DrawFrameControl @ 0x1C00BF6FC (DrawFrameControl.c)
 *     ValidateExternalLogFont @ 0x1C00C3544 (ValidateExternalLogFont.c)
 *     xxxSetNCFonts @ 0x1C00C3874 (xxxSetNCFonts.c)
 *     CreateFontFromUserProfile @ 0x1C00C58D0 (CreateFontFromUserProfile.c)
 *     UserSetAltScaleFont @ 0x1C00C5A80 (UserSetAltScaleFont.c)
 *     FinishStockFontInit @ 0x1C00C81E0 (FinishStockFontInit.c)
 *     CreateScaledFont @ 0x1C01E4B98 (CreateScaledFont.c)
 * Callees:
 *     hfontCreate @ 0x1C0013DE0 (hfontCreate.c)
 *     vConvertLogFontW @ 0x1C0015270 (vConvertLogFontW.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall GreCreateFontIndirectW(__int64 a1, unsigned int a2)
{
  _BYTE Src[432]; // [rsp+30h] [rbp-1C8h] BYREF

  memset(Src, 0, 0x1A4uLL);
  vConvertLogFontW(Src, a1);
  return hfontCreate(Src, a2);
}
