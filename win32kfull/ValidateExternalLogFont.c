/*
 * XREFs of ValidateExternalLogFont @ 0x1C010EFFC
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x1C00F0DE8 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 *     ?GetLogFontFromUserProfile@@YA?AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z @ 0x1C010EEA8 (-GetLogFontFromUserProfile@@YA-AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z.c)
 * Callees:
 *     GreCreateFontIndirectW @ 0x1C0025AF8 (GreCreateFontIndirectW.c)
 *     GetCharDimensions @ 0x1C010F9F4 (GetCharDimensions.c)
 *     GreSelectFontInternal @ 0x1C0116F84 (GreSelectFontInternal.c)
 */

_BOOL8 __fastcall ValidateExternalLogFont(__int64 a1)
{
  BOOL v1; // ebx
  __int64 v2; // rsi
  __int64 FontIndirectW; // rax
  __int64 v4; // rdi
  __int64 v5; // rbp
  int CharDimensions; // eax
  int v8; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v8 = 0;
  v2 = *(_QWORD *)(gpDispInfo + 64LL);
  FontIndirectW = GreCreateFontIndirectW(a1, 0);
  v4 = FontIndirectW;
  if ( FontIndirectW )
  {
    v5 = GreSelectFontInternal(v2, FontIndirectW, 1LL);
    CharDimensions = GetCharDimensions(v2, 0LL, &v8);
    if ( v8 > 0 && CharDimensions > 0 && v8 < 0x7FFF )
      v1 = CharDimensions < 0x7FFF;
    GreSelectFontInternal(v2, v5, 1LL);
    GreDeleteObject(v4);
  }
  return v1;
}
