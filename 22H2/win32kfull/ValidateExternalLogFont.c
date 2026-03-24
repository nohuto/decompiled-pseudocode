/*
 * XREFs of ValidateExternalLogFont @ 0x1C00E2FD0
 * Callers:
 *     ?GetLogFontFromUserProfile@@YA?AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z @ 0x1C00E2E24 (-GetLogFontFromUserProfile@@YA-AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z.c)
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x1C0131CE0 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 * Callees:
 *     GreSelectFont @ 0x1C0045E80 (GreSelectFont.c)
 *     GreCreateFontIndirectW @ 0x1C00B9E30 (GreCreateFontIndirectW.c)
 *     GetCharDimensions @ 0x1C00E3078 (GetCharDimensions.c)
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
