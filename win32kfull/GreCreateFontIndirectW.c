/*
 * XREFs of GreCreateFontIndirectW @ 0x1C0025AF8
 * Callers:
 *     FinishStockFontInit @ 0x1C00B9D70 (FinishStockFontInit.c)
 *     UserSetAltScaleFont @ 0x1C010E47C (UserSetAltScaleFont.c)
 *     CreateFontFromUserProfile @ 0x1C010E764 (CreateFontFromUserProfile.c)
 *     xxxSetNCFonts @ 0x1C010E91C (xxxSetNCFonts.c)
 *     ValidateExternalLogFont @ 0x1C010EFFC (ValidateExternalLogFont.c)
 *     CreateScaledFont @ 0x1C01C05F8 (CreateScaledFont.c)
 * Callees:
 *     hfontCreate @ 0x1C0027050 (hfontCreate.c)
 *     vConvertLogFontW @ 0x1C0118170 (vConvertLogFontW.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall GreCreateFontIndirectW(__int64 a1, unsigned int a2)
{
  _BYTE Src[432]; // [rsp+30h] [rbp-1C8h] BYREF

  memset_0(Src, 0, 0x1A4uLL);
  vConvertLogFontW(Src, a1);
  return hfontCreate(Src, a2);
}
