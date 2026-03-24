/*
 * XREFs of hfontInitDefaultGuiFont @ 0x1C03929F0
 * Callers:
 *     FinishStockFontReinit @ 0x1C00E4E10 (FinishStockFontReinit.c)
 *     GreEnsureDpiDepDefaultGuiFontForPlateau @ 0x1C0293200 (GreEnsureDpiDepDefaultGuiFontForPlateau.c)
 *     bInitStockFontsInternal @ 0x1C0392344 (bInitStockFontsInternal.c)
 * Callees:
 *     hfontCreate @ 0x1C00BBBA0 (hfontCreate.c)
 *     ?bOpenKey@@YAHPEBGPEAPEAX@Z @ 0x1C00E4BE0 (-bOpenKey@@YAHPEBGPEAPEAX@Z.c)
 *     ?bQueryValueKey@@YAHPEBGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z @ 0x1C00E4D78 (-bQueryValueKey@@YAHPEBGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

struct HOBJ__ *__fastcall hfontInitDefaultGuiFont(int a1)
{
  BOOL ValueKey; // eax
  int v3; // ecx
  BOOL v4; // eax
  int v5; // ecx
  BOOL v6; // eax
  char v7; // dl
  BOOL v8; // eax
  char v9; // dl
  HANDLE Handle; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD v12[108]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+1F8h] [rbp+F0h] BYREF
  wchar_t Src[34]; // [rsp+204h] [rbp+FCh] BYREF

  Handle = 0LL;
  memset(v12, 0, 0x1A4uLL);
  wcscpy_s((wchar_t *)&v12[7], 0x20uLL, L"MS Shell Dlg");
  v12[0] = 8;
  v12[4] = 400;
  LOBYTE(v12[5]) = 0;
  HIBYTE(v12[5]) = gjCurCharset;
  if ( bOpenKey(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize", &Handle) )
  {
    if ( bQueryValueKey(L"GUIFont.Facename", Handle, KeyValueInformation, 0x48u) )
      wcsncpy_s((wchar_t *)&v12[7], 0x20uLL, Src, 0x20uLL);
    ValueKey = bQueryValueKey(L"GUIFont.Height", Handle, KeyValueInformation, 0x48u);
    v3 = v12[0];
    if ( ValueKey )
      v3 = *(_DWORD *)Src;
    v12[0] = v3;
    v4 = bQueryValueKey(L"GUIFont.Weight", Handle, KeyValueInformation, 0x48u);
    v5 = v12[4];
    if ( v4 )
      v5 = *(_DWORD *)Src;
    v12[4] = v5;
    v6 = bQueryValueKey(L"GUIFont.Italic", Handle, KeyValueInformation, 0x48u);
    v7 = v12[5];
    if ( v6 )
      v7 = Src[0];
    LOBYTE(v12[5]) = v7;
    v8 = bQueryValueKey(L"GUIFont.CharSet", Handle, KeyValueInformation, 0x48u);
    v9 = HIBYTE(v12[5]);
    if ( v8 )
      v9 = Src[0];
    HIBYTE(v12[5]) = v9;
    ZwClose(Handle);
  }
  if ( a1 == -1 )
    gbFinishDefGUIFontInit = 1;
  else
    v12[0] = (v12[0] * a1 + 36) / -72;
  return hfontCreate((WCHAR *)v12, 7, 2, 0LL, 0x48u);
}
