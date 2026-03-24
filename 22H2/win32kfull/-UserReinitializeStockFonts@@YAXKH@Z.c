/*
 * XREFs of ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1C00E4EE0
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C0026774 (xxxUpdatePerUserSystemParameters.c)
 *     UserOnGreTextReady @ 0x1C00E5F8C (UserOnGreTextReady.c)
 * Callees:
 *     GreSelectFont @ 0x1C0045E80 (GreSelectFont.c)
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x1C00E1E70 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 *     GetCharDimensions @ 0x1C00E3078 (GetCharDimensions.c)
 */

void __fastcall UserReinitializeStockFonts()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // rbx
  __int64 SessionDpiServerInfo; // rbx

  GreReinitializeStockFonts();
  v3 = Get96DpiServerInfo(v1, v0, v2);
  *(_QWORD *)(v3 + 24) = GreGetSystemFont(0LL);
  GreSelectFont(*(HDC *)(gpDispInfo + 64LL));
  *(_DWORD *)(v3 + 32) = GetCharDimensions(*(HDC *)(gpDispInfo + 64LL), v3 + 40, (_DWORD *)(v3 + 36));
  SessionDpiServerInfo = GetSessionDpiServerInfo();
  *(_QWORD *)(SessionDpiServerInfo + 24) = GreGetSystemFont(1LL);
  GreSelectFont(*(HDC *)(gpDispInfo + 64LL));
  GreSelectFont(*(HDC *)(gpDispInfo + 72LL));
  *(_DWORD *)(SessionDpiServerInfo + 32) = GetCharDimensions(
                                             *(HDC *)(gpDispInfo + 64LL),
                                             SessionDpiServerInfo + 40,
                                             (_DWORD *)(SessionDpiServerInfo + 36));
  UpdateDpiMetricsCacheDPISERVERINFO();
}
