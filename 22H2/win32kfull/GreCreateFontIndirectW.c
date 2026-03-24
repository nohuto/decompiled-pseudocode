/*
 * XREFs of GreCreateFontIndirectW @ 0x1C00B9E30
 * Callers:
 *     DrawFrameControl @ 0x1C0045B98 (DrawFrameControl.c)
 *     CreateFontFromUserProfile @ 0x1C00E27E8 (CreateFontFromUserProfile.c)
 *     xxxSetNCFonts @ 0x1C00E2938 (xxxSetNCFonts.c)
 *     ValidateExternalLogFont @ 0x1C00E2FD0 (ValidateExternalLogFont.c)
 *     UserSetAltScaleFont @ 0x1C00E40D4 (UserSetAltScaleFont.c)
 *     FinishStockFontInit @ 0x1C00E44C0 (FinishStockFontInit.c)
 *     CreateScaledFont @ 0x1C01E9E50 (CreateScaledFont.c)
 * Callees:
 *     vConvertLogFontW @ 0x1C00B9DD0 (vConvertLogFontW.c)
 *     hfontCreate @ 0x1C00BBBA0 (hfontCreate.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

__int64 __fastcall GreCreateFontIndirectW(__int64 a1, unsigned int a2)
{
  _BYTE Src[432]; // [rsp+30h] [rbp-1C8h] BYREF

  memset(Src, 0, 0x1A4uLL);
  vConvertLogFontW((__int64)Src, a1);
  return hfontCreate(Src, a2);
}
