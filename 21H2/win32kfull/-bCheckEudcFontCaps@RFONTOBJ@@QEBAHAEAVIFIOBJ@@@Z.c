/*
 * XREFs of ?bCheckEudcFontCaps@RFONTOBJ@@QEBAHAEAVIFIOBJ@@@Z @ 0x1C02A57A4
 * Callers:
 *     ?AddUFIToBuffer@RFONTOBJ@@AEAAXPEAVPFE@@AEAPEAU_UNIVERSAL_FONT_ID@@AEAHH@Z @ 0x1C0124BF8 (-AddUFIToBuffer@RFONTOBJ@@AEAAXPEAVPFE@@AEAPEAU_UNIVERSAL_FONT_ID@@AEAHH@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C015154C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RFONTOBJ::bCheckEudcFontCaps(RFONTOBJ *this, struct IFIOBJ *a2)
{
  __int64 v2; // r9
  int v3; // r8d
  unsigned int v4; // ecx

  if ( (ulFontLinkControl & 0xF0) != 0 )
  {
    v2 = *(_QWORD *)this;
    if ( *(_DWORD *)(*(_QWORD *)this + 92LL) )
    {
      if ( (ulFontLinkControl & 0x80u) != 0 )
        return 0LL;
    }
    else if ( (ulFontLinkControl & 0x40) != 0 && (*(_DWORD *)(v2 + 716) & 1) != 0
           || (ulFontLinkControl & 0x20) != 0 && (*(_DWORD *)(v2 + 716) & 4) != 0
           || (ulFontLinkControl & 0x10) != 0 && (*(_DWORD *)(v2 + 716) & 2) != 0 )
    {
      return 0LL;
    }
  }
  v3 = *(_DWORD *)(*(_QWORD *)a2 + 48LL);
  if ( (v3 & 0x10) == 0 )
  {
    v4 = *(_DWORD *)(*(_QWORD *)this + 392LL) % 0x384u;
    if ( (v3 & 0x200000) == 0 || v4 )
      return 0LL;
  }
  return 1LL;
}
