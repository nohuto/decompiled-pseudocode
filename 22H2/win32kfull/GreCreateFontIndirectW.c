/*
 * XREFs of GreCreateFontIndirectW @ 0x1C007B6E8
 * Callers:
 *     CreateFontFromUserProfile @ 0x1C0078200 (CreateFontFromUserProfile.c)
 *     UserSetAltScaleFont @ 0x1C0078308 (UserSetAltScaleFont.c)
 *     xxxSetNCFonts @ 0x1C0078690 (xxxSetNCFonts.c)
 *     ValidateExternalLogFont @ 0x1C0078DC8 (ValidateExternalLogFont.c)
 *     FinishStockFontInit @ 0x1C00863A0 (FinishStockFontInit.c)
 *     CreateScaledFont @ 0x1C01BF458 (CreateScaledFont.c)
 * Callees:
 *     hfontCreate @ 0x1C007B9C0 (hfontCreate.c)
 *     vConvertLogFontW @ 0x1C0115940 (vConvertLogFontW.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 */

__int64 __fastcall GreCreateFontIndirectW(__int64 a1, unsigned int a2)
{
  _BYTE Src[432]; // [rsp+30h] [rbp-1C8h] BYREF

  memset_0(Src, 0, 0x1A4uLL);
  vConvertLogFontW(Src, a1);
  return hfontCreate(Src, a2);
}
