/*
 * XREFs of ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1C008A010
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C0072BDC (xxxUpdatePerUserSystemParameters.c)
 *     UserOnGreTextReady @ 0x1C0088E50 (UserOnGreTextReady.c)
 * Callees:
 *     GetCharDimensions @ 0x1C007A270 (GetCharDimensions.c)
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x1C008A180 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 *     GreSelectFontInternal @ 0x1C0119F34 (GreSelectFontInternal.c)
 */

void __fastcall UserReinitializeStockFonts()
{
  __int64 v0; // rbx
  __int64 SystemFont; // rax
  __int64 v2; // rcx
  __int64 SessionDpiServerInfo; // rbx
  __int64 v4; // rax

  GreReinitializeStockFonts();
  v0 = Get96DpiServerInfo();
  SystemFont = GreGetSystemFont(0LL);
  *(_QWORD *)(v0 + 24) = SystemFont;
  GreSelectFontInternal(*(_QWORD *)(gpDispInfo + 64LL), SystemFont, 1LL);
  *(_DWORD *)(v0 + 32) = GetCharDimensions(*(_QWORD *)(gpDispInfo + 64LL), v0 + 40, (_DWORD *)(v0 + 36));
  SessionDpiServerInfo = GetSessionDpiServerInfo(v2);
  v4 = GreGetSystemFont(1LL);
  *(_QWORD *)(SessionDpiServerInfo + 24) = v4;
  GreSelectFontInternal(*(_QWORD *)(gpDispInfo + 64LL), v4, 1LL);
  GreSelectFontInternal(*(_QWORD *)(gpDispInfo + 72LL), *(_QWORD *)(SessionDpiServerInfo + 24), 1LL);
  *(_DWORD *)(SessionDpiServerInfo + 32) = GetCharDimensions(
                                             *(_QWORD *)(gpDispInfo + 64LL),
                                             SessionDpiServerInfo + 40,
                                             (_DWORD *)(SessionDpiServerInfo + 36));
  UpdateDpiMetricsCacheDPISERVERINFO();
}
