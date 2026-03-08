/*
 * XREFs of hfontInitDefaultGuiFont @ 0x1C03B6C5C
 * Callers:
 *     FinishStockFontReinit @ 0x1C00B9210 (FinishStockFontReinit.c)
 *     GreEnsureDpiDepDefaultGuiFontForPlateau @ 0x1C029B210 (GreEnsureDpiDepDefaultGuiFontForPlateau.c)
 *     bInitStockFontsInternal @ 0x1C03B63A8 (bInitStockFontsInternal.c)
 * Callees:
 *     hfontCreate @ 0x1C0027050 (hfontCreate.c)
 *     ?bOpenKey@@YAHPEBGPEAPEAX@Z @ 0x1C00BA544 (-bOpenKey@@YAHPEBGPEAPEAX@Z.c)
 *     ?bQueryValueKey@@YAHPEBGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z @ 0x1C00BAA08 (-bQueryValueKey@@YAHPEBGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

struct HOBJ__ *__fastcall hfontInitDefaultGuiFont(int a1)
{
  Gre::Base *v2; // rcx
  struct Gre::Base::SESSION_GLOBALS *v3; // rbx
  __int64 v4; // rcx
  BOOL ValueKey; // eax
  int v6; // ecx
  BOOL v7; // eax
  int v8; // ecx
  BOOL v9; // eax
  char v10; // dl
  BOOL v11; // eax
  char v12; // dl
  HANDLE Handle; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD v15[4]; // [rsp+48h] [rbp-C0h] BYREF
  int v16; // [rsp+58h] [rbp-B0h]
  char v17; // [rsp+5Ch] [rbp-ACh]
  char v18; // [rsp+5Fh] [rbp-A9h]
  wchar_t Dst[202]; // [rsp+64h] [rbp-A4h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+1F8h] [rbp+F0h] BYREF
  wchar_t Src[34]; // [rsp+204h] [rbp+FCh] BYREF

  Handle = 0LL;
  memset_0(v15, 0, 0x1A4uLL);
  v3 = Gre::Base::Globals(v2);
  wcscpy_s(Dst, 0x20uLL, L"MS Shell Dlg");
  v15[0] = 8;
  v16 = 400;
  v17 = 0;
  v18 = *((_BYTE *)v3 + 168);
  if ( bOpenKey(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize", &Handle) )
  {
    if ( bQueryValueKey(L"GUIFont.Facename", Handle, KeyValueInformation, 0x48u) )
      wcsncpy_s(Dst, 0x20uLL, Src, 0x20uLL);
    ValueKey = bQueryValueKey(L"GUIFont.Height", Handle, KeyValueInformation, 0x48u);
    v6 = v15[0];
    if ( ValueKey )
      v6 = *(_DWORD *)Src;
    v15[0] = v6;
    v7 = bQueryValueKey(L"GUIFont.Weight", Handle, KeyValueInformation, 0x48u);
    v8 = v16;
    if ( v7 )
      v8 = *(_DWORD *)Src;
    v16 = v8;
    v9 = bQueryValueKey(L"GUIFont.Italic", Handle, KeyValueInformation, 0x48u);
    v10 = v17;
    if ( v9 )
      v10 = Src[0];
    v17 = v10;
    v11 = bQueryValueKey(L"GUIFont.CharSet", Handle, KeyValueInformation, 0x48u);
    v12 = v18;
    if ( v11 )
      v12 = Src[0];
    v18 = v12;
    ZwClose(Handle);
  }
  if ( a1 == -1 )
    *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(v4) + 32) + 23412LL) = 1;
  else
    v15[0] = (v15[0] * a1 + 36) / -72;
  return hfontCreate(v15, 7, 2, 0LL, 0x48u);
}
