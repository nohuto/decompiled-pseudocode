/*
 * XREFs of ValidateExternalLogFont @ 0x1C00E3320
 * Callers:
 *     ?GetLogFontFromUserProfile@@YA?AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z @ 0x1C00E3174 (-GetLogFontFromUserProfile@@YA-AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z.c)
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x1C0132090 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 * Callees:
 *     GreSelectFont @ 0x1C0045F20 (GreSelectFont.c)
 *     GreCreateFontIndirectW @ 0x1C00BA190 (GreCreateFontIndirectW.c)
 *     GetCharDimensions @ 0x1C00E33C8 (GetCharDimensions.c)
 */

__int64 __fastcall ValidateExternalLogFont(__int64 a1)
{
  HDC v1; // rsi
  __int64 FontIndirectW; // rdi

  v1 = *(HDC *)(gpDispInfo + 64LL);
  FontIndirectW = GreCreateFontIndirectW(a1, 0);
  if ( FontIndirectW )
  {
    GreSelectFont(v1);
    GetCharDimensions(v1);
    GreSelectFont(v1);
    GreDeleteObject(FontIndirectW);
  }
  return 0LL;
}
