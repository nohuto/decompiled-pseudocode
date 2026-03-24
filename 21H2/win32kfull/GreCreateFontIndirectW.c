/*
 * XREFs of GreCreateFontIndirectW @ 0x1C00BA190
 * Callers:
 *     DrawFrameControl @ 0x1C0045C38 (DrawFrameControl.c)
 *     CreateFontFromUserProfile @ 0x1C00E2B38 (CreateFontFromUserProfile.c)
 *     xxxSetNCFonts @ 0x1C00E2C88 (xxxSetNCFonts.c)
 *     ValidateExternalLogFont @ 0x1C00E3320 (ValidateExternalLogFont.c)
 *     UserSetAltScaleFont @ 0x1C00E4424 (UserSetAltScaleFont.c)
 *     FinishStockFontInit @ 0x1C00E4810 (FinishStockFontInit.c)
 *     CreateScaledFont @ 0x1C01EA410 (CreateScaledFont.c)
 * Callees:
 *     vConvertLogFontW @ 0x1C00BA130 (vConvertLogFontW.c)
 *     hfontCreate @ 0x1C00BBF00 (hfontCreate.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

__int64 __fastcall GreCreateFontIndirectW(__int64 a1, unsigned int a2)
{
  _BYTE Src[432]; // [rsp+30h] [rbp-1C8h] BYREF

  memset(Src, 0, 0x1A4uLL);
  vConvertLogFontW((__int64)Src, a1);
  return hfontCreate(Src, a2);
}
