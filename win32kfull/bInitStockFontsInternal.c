unsigned __int16 *__fastcall bInitStockFontsInternal(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v1; // rdi
  unsigned __int16 *result; // rax
  unsigned __int16 *v3; // r14
  BOOL v4; // ebx
  Gre::Base *v5; // rax
  Gre::Base *v6; // rax
  Gre::Base *v7; // rax
  Gre::Base *v8; // rax
  Gre::Base *v9; // rax
  Gre::Base *inited; // rax
  HANDLE Handle[2]; // [rsp+48h] [rbp-C0h] BYREF
  int Src; // [rsp+58h] [rbp-B0h] BYREF
  int v13; // [rsp+5Ch] [rbp-ACh]
  int v14; // [rsp+68h] [rbp-A0h]
  _BYTE v15[5]; // [rsp+6Fh] [rbp-99h]
  wchar_t Dst[202]; // [rsp+74h] [rbp-94h] BYREF

  Handle[0] = 0LL;
  v1 = Gre::Base::Globals(a1);
  result = (unsigned __int16 *)Win32AllocPoolZInit(596LL, 1718838855LL);
  v3 = result;
  if ( result )
  {
    memmove(result, L"\\SystemRoot\\Fonts\\", 0x26uLL);
    if ( bOpenKey(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows", Handle) )
    {
      if ( bQueryValueKey(
             L"SystemFontSize",
             Handle[0],
             (PVOID)((unsigned __int64)(v3 + 23) & 0xFFFFFFFFFFFFFFF8uLL),
             0x200u)
        && bQueryValueKey(
             L"SystemFont",
             Handle[0],
             (PVOID)((unsigned __int64)(v3 + 23) & 0xFFFFFFFFFFFFFFF8uLL),
             0x200u) )
      {
        memmove(
          v3 + 18,
          (const void *)(((unsigned __int64)(v3 + 23) & 0xFFFFFFFFFFFFFFF8uLL) + 12),
          *(unsigned int *)(((unsigned __int64)(v3 + 23) & 0xFFFFFFFFFFFFFFF8uLL) + 8));
        bInitSystemFont(v3);
      }
      ZwClose(Handle[0]);
    }
    v4 = 1;
    if ( bOpenKey(
           L"\\Registry\\Machine\\System\\CurrentControlSet\\Hardware Profiles\\Current\\Software\\Fonts",
           Handle)
      || bOpenKey(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize", Handle) )
    {
      if ( !*(_QWORD *)(*((_QWORD *)v1 + 396) + 104LL) )
        bInitOneStockFont(L"FONTS.FON", 1LL, 13LL, Handle[0], (unsigned __int64)(v3 + 23) & 0xFFFFFFFFFFFFFFF8uLL);
      bInitOneStockFont(L"OEMFONT.FON", 3LL, 10LL, Handle[0], (unsigned __int64)(v3 + 23) & 0xFFFFFFFFFFFFFFF8uLL);
      bInitOneStockFont(L"FIXEDFON.FON", 2LL, 16LL, Handle[0], (unsigned __int64)(v3 + 23) & 0xFFFFFFFFFFFFFFF8uLL);
      ZwClose(Handle[0]);
    }
    memset_0(&Src, 0, 0x1A4uLL);
    Src = 16;
    v13 = 7;
    v14 = 700;
    *(_DWORD *)&v15[1] = 570556929;
    wcscpy_s(Dst, 0x20uLL, L"System");
    v5 = hfontCreate(&Src, 1, 2, 0LL, 0x48u);
    if ( !(unsigned int)bSetStockFont(v5, 13, 0) && !*((_DWORD *)v1 + 752) )
      goto LABEL_23;
    memset_0(&Src, 0, 0x1A4uLL);
    Src = 12;
    v13 = 8;
    v14 = 400;
    *(_DWORD *)v15 = 33686015;
    v15[4] = 49;
    wcscpy_s(Dst, 0x20uLL, L"Terminal");
    v6 = hfontCreate(&Src, 3, 2, 0LL, 0x48u);
    if ( !(unsigned int)bSetStockFont(v6, 10, 0) && !*((_DWORD *)v1 + 752) )
      goto LABEL_23;
    *((_QWORD *)v1 + 76) = *(_QWORD *)(*((_QWORD *)v1 + 396) + 104LL);
    memset_0(&Src, 0, 0x1A4uLL);
    v15[4] = 1;
    v7 = hfontCreate(&Src, 4, 3, 0LL, 0x48u);
    if ( !(unsigned int)bSetStockFont(v7, 14, 0) && !*((_DWORD *)v1 + 752) )
      goto LABEL_23;
    if ( ((memset_0(&Src, 0, 0x1A4uLL),
           v15[4] = 2,
           v8 = hfontCreate(&Src, 5, 3, 0LL, 0x48u),
           (unsigned int)bSetStockFont(v8, 12, 0))
       || *((_DWORD *)v1 + 752))
      && ((memset_0(&Src, 0, 0x1A4uLL),
           v15[4] = 1,
           v9 = hfontCreate(&Src, 6, 3, 0LL, 0x48u),
           (unsigned int)bSetStockFont(v9, 11, 0))
       || *((_DWORD *)v1 + 752)) )
    {
      inited = (Gre::Base *)hfontInitDefaultGuiFont(0xFFFFFFFFLL);
      if ( !(unsigned int)bSetStockFont(inited, 17, 0) )
        v4 = *((_DWORD *)v1 + 752) != 0;
    }
    else
    {
LABEL_23:
      v4 = 0;
    }
    Win32FreePool(v3);
    return (unsigned __int16 *)v4;
  }
  return result;
}
