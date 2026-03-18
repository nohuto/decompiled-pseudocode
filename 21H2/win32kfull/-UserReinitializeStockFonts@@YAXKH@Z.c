/*
 * XREFs of ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1C00EF7F8
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C00B8188 (xxxUpdatePerUserSystemParameters.c)
 *     UserOnGreTextReady @ 0x1C00EE588 (UserOnGreTextReady.c)
 * Callees:
 *     GreSelectFontInternal @ 0x1C00BFA08 (GreSelectFontInternal.c)
 *     GetCharDimensions @ 0x1C00C40F8 (GetCharDimensions.c)
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x1C00C7450 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 */

void __fastcall UserReinitializeStockFonts()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // rbx
  __int64 SystemFont; // rax
  __int64 SessionDpiServerInfo; // rbx
  __int64 v6; // rax

  GreReinitializeStockFonts();
  v3 = Get96DpiServerInfo(v1, v0, v2);
  SystemFont = GreGetSystemFont(0LL);
  *(_QWORD *)(v3 + 24) = SystemFont;
  GreSelectFontInternal(*(HDC *)(gpDispInfo + 64LL), SystemFont, 1);
  *(_DWORD *)(v3 + 32) = GetCharDimensions(*(HDC *)(gpDispInfo + 64LL), v3 + 40, (_DWORD *)(v3 + 36));
  SessionDpiServerInfo = GetSessionDpiServerInfo();
  v6 = GreGetSystemFont(1LL);
  *(_QWORD *)(SessionDpiServerInfo + 24) = v6;
  GreSelectFontInternal(*(HDC *)(gpDispInfo + 64LL), v6, 1);
  GreSelectFontInternal(*(HDC *)(gpDispInfo + 72LL), *(_QWORD *)(SessionDpiServerInfo + 24), 1);
  *(_DWORD *)(SessionDpiServerInfo + 32) = GetCharDimensions(
                                             *(HDC *)(gpDispInfo + 64LL),
                                             SessionDpiServerInfo + 40,
                                             (_DWORD *)(SessionDpiServerInfo + 36));
  UpdateDpiMetricsCacheDPISERVERINFO();
}
