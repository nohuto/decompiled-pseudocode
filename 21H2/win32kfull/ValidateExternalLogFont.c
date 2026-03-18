/*
 * XREFs of ValidateExternalLogFont @ 0x1C00C3544
 * Callers:
 *     ?GetLogFontFromUserProfile@@YA?AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z @ 0x1C00C49DC (-GetLogFontFromUserProfile@@YA-AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z.c)
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x1C00C8BFC (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 * Callees:
 *     GreCreateFontIndirectW @ 0x1C00131E4 (GreCreateFontIndirectW.c)
 *     GreSelectFontInternal @ 0x1C00BFA08 (GreSelectFontInternal.c)
 *     GetCharDimensions @ 0x1C00C40F8 (GetCharDimensions.c)
 */

__int64 __fastcall ValidateExternalLogFont(__int64 a1)
{
  HDC v1; // rsi
  __int64 FontIndirectW; // rax
  __int64 v3; // rdi
  __int64 v4; // rbp

  v1 = *(HDC *)(gpDispInfo + 64LL);
  FontIndirectW = GreCreateFontIndirectW(a1, 0);
  v3 = FontIndirectW;
  if ( FontIndirectW )
  {
    v4 = GreSelectFontInternal(v1, FontIndirectW, 1);
    GetCharDimensions(v1);
    GreSelectFontInternal(v1, v4, 1);
    GreDeleteObject(v3);
  }
  return 0LL;
}
