/*
 * XREFs of bInitStockFontsInternal @ 0x1C0390308
 * Callers:
 *     bInitStockFonts @ 0x1C03920E0 (bInitStockFonts.c)
 * Callees:
 *     hfontCreate @ 0x1C0013DE0 (hfontCreate.c)
 *     ?bSetStockFont@@YAHPEAXHH@Z @ 0x1C00C86C0 (-bSetStockFont@@YAHPEAXHH@Z.c)
 *     ?bOpenKey@@YAHPEBGPEAPEAX@Z @ 0x1C00C87D4 (-bOpenKey@@YAHPEBGPEAPEAX@Z.c)
 *     ?bQueryValueKey@@YAHPEBGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z @ 0x1C00C8968 (-bQueryValueKey@@YAHPEBGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     bInitOneStockFont @ 0x1C0390820 (bInitOneStockFont.c)
 *     hfontInitDefaultGuiFont @ 0x1C03909E0 (hfontInitDefaultGuiFont.c)
 *     bInitSystemFont @ 0x1C039242C (bInitSystemFont.c)
 */

unsigned __int16 *bInitStockFontsInternal()
{
  unsigned __int16 *result; // rax
  unsigned __int16 *v1; // rsi
  BOOL v2; // ebx
  struct HOBJ__ *v3; // rax
  int v4; // r8d
  struct HOBJ__ *v5; // rax
  int v6; // r8d
  struct HOBJ__ *v7; // rax
  int v8; // r8d
  struct HOBJ__ *v9; // rax
  int v10; // r8d
  struct HOBJ__ *v11; // rax
  int v12; // r8d
  void *inited; // rax
  HANDLE Handle[2]; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD Src[108]; // [rsp+58h] [rbp-B0h] BYREF

  Handle[0] = 0LL;
  result = (unsigned __int16 *)Win32AllocPoolZInit(596LL, 1718838855LL);
  v1 = result;
  if ( result )
  {
    memmove(result, L"\\SystemRoot\\Fonts\\", 0x26uLL);
    if ( bOpenKey(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows", Handle) )
    {
      if ( bQueryValueKey(
             L"SystemFontSize",
             Handle[0],
             (PVOID)((unsigned __int64)(v1 + 23) & 0xFFFFFFFFFFFFFFF8uLL),
             0x200u)
        && bQueryValueKey(
             L"SystemFont",
             Handle[0],
             (PVOID)((unsigned __int64)(v1 + 23) & 0xFFFFFFFFFFFFFFF8uLL),
             0x200u) )
      {
        memmove(
          v1 + 18,
          (const void *)(((unsigned __int64)(v1 + 23) & 0xFFFFFFFFFFFFFFF8uLL) + 12),
          *(unsigned int *)(((unsigned __int64)(v1 + 23) & 0xFFFFFFFFFFFFFFF8uLL) + 8));
        bInitSystemFont(v1);
      }
      ZwClose(Handle[0]);
    }
    v2 = 1;
    if ( bOpenKey(
           L"\\Registry\\Machine\\System\\CurrentControlSet\\Hardware Profiles\\Current\\Software\\Fonts",
           Handle)
      || bOpenKey(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize", Handle) )
    {
      if ( !gahStockObjects[13] )
        bInitOneStockFont(L"FONTS.FON", 1LL, 13LL, Handle[0], (unsigned __int64)(v1 + 23) & 0xFFFFFFFFFFFFFFF8uLL);
      bInitOneStockFont(L"OEMFONT.FON", 3LL, 10LL, Handle[0], (unsigned __int64)(v1 + 23) & 0xFFFFFFFFFFFFFFF8uLL);
      bInitOneStockFont(L"FIXEDFON.FON", 2LL, 16LL, Handle[0], (unsigned __int64)(v1 + 23) & 0xFFFFFFFFFFFFFFF8uLL);
      ZwClose(Handle[0]);
    }
    memset(Src, 0, 0x1A4uLL);
    Src[0] = 16;
    Src[1] = 7;
    Src[4] = 700;
    Src[6] = 570556929;
    wcscpy_s((wchar_t *)&Src[7], 0x20uLL, L"System");
    v3 = hfontCreate(Src, 1, 2, 0LL, 0x48u);
    if ( !(unsigned int)bSetStockFont(v3, 13, 0) && G_fServiceSession == v4 )
      goto LABEL_23;
    memset(Src, 0, 0x1A4uLL);
    Src[0] = 12;
    Src[1] = 8;
    Src[4] = 400;
    *(_DWORD *)((char *)&Src[5] + 3) = 33686015;
    HIBYTE(Src[6]) = 49;
    wcscpy_s((wchar_t *)&Src[7], 0x20uLL, L"Terminal");
    v5 = hfontCreate(Src, 3, 2, 0LL, 0x48u);
    if ( !(unsigned int)bSetStockFont(v5, 10, 0) && G_fServiceSession == v6 )
      goto LABEL_23;
    DcAttrDefault[37] = gahStockObjects[13];
    memset(Src, 0, 0x1A4uLL);
    HIBYTE(Src[6]) = 1;
    v7 = hfontCreate(Src, 4, 3, 0LL, 0x48u);
    if ( !(unsigned int)bSetStockFont(v7, 14, 0) && G_fServiceSession == v8 )
      goto LABEL_23;
    if ( (memset(Src, 0, 0x1A4uLL),
          HIBYTE(Src[6]) = 2,
          v9 = hfontCreate(Src, 5, 3, 0LL, 0x48u),
          !(unsigned int)bSetStockFont(v9, 12, 0))
      && G_fServiceSession == v10
      || (memset(Src, 0, 0x1A4uLL),
          HIBYTE(Src[6]) = 1,
          v11 = hfontCreate(Src, 6, 3, 0LL, 0x48u),
          !(unsigned int)bSetStockFont(v11, 11, 0))
      && G_fServiceSession == v12 )
    {
LABEL_23:
      v2 = 0;
    }
    else
    {
      inited = (void *)hfontInitDefaultGuiFont(0xFFFFFFFFLL);
      if ( !(unsigned int)bSetStockFont(inited, 17, 0) )
        v2 = G_fServiceSession != 0;
    }
    Win32FreePool(v1);
    return (unsigned __int16 *)v2;
  }
  return result;
}
