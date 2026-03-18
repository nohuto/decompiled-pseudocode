/*
 * XREFs of WindowMargins::_anonymous_namespace_::CalculateWindowMargins @ 0x1C00B2B24
 * Callers:
 *     WindowMargins::_anonymous_namespace_::GetWindowMargins @ 0x1C00B2AB0 (WindowMargins--_anonymous_namespace_--GetWindowMargins.c)
 * Callees:
 *     ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x1C004CE04 (-GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z.c)
 *     ?IsWindowNCRenderingEnabled@@YA_NPEBUtagWND@@@Z @ 0x1C00B2C10 (-IsWindowNCRenderingEnabled@@YA_NPEBUtagWND@@@Z.c)
 *     WindowMargins::_anonymous_namespace_::GetDpiForWindowMargin @ 0x1C00B2CBC (WindowMargins--_anonymous_namespace_--GetDpiForWindowMargin.c)
 *     WindowMargins::_anonymous_namespace_::HasNcArea @ 0x1C015C430 (WindowMargins--_anonymous_namespace_--HasNcArea.c)
 *     ?IsWDAGContainer@@YAHXZ @ 0x1C01D2234 (-IsWDAGContainer@@YAHXZ.c)
 */

__int64 __fastcall WindowMargins::_anonymous_namespace_::CalculateWindowMargins(
        struct tagWND *a1,
        unsigned int DpiForWindowMargin,
        char a3)
{
  __int64 v3; // rbx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int16 WindowBordersWithDpiAwareness; // di
  __int64 v11; // [rsp+58h] [rbp+20h]

  v3 = 0LL;
  if ( a3 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 && (unsigned int)IsWDAGContainer()
    || IsWindowNCRenderingEnabled(a1)
    && (gHighContrast[1] & 1) == 0
    && (LOBYTE(v8) = a3, (unsigned __int8)WindowMargins::_anonymous_namespace_::HasNcArea(a1, v8)) )
  {
    if ( !DpiForWindowMargin )
      DpiForWindowMargin = WindowMargins::_anonymous_namespace_::GetDpiForWindowMargin(a1, 0LL);
    WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1, v7, 1, DpiForWindowMargin);
    if ( WindowBordersWithDpiAwareness > 0 )
    {
      if ( a3 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 )
      {
        WORD2(v11) = WindowBordersWithDpiAwareness;
      }
      else
      {
        WindowBordersWithDpiAwareness -= EngMulDiv(1, DpiForWindowMargin, 96);
        WORD2(v11) = 0;
      }
      LOWORD(v11) = WindowBordersWithDpiAwareness;
      WORD1(v11) = WindowBordersWithDpiAwareness;
      HIWORD(v11) = WindowBordersWithDpiAwareness;
      return v11;
    }
  }
  return v3;
}
