/*
 * XREFs of ?bCheckEudcFontCaps@RFONTOBJ@@QEBAHAEAVIFIOBJ@@@Z @ 0x1C00E8A70
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00E7AAC (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?AddUFIToBuffer@RFONTOBJ@@AEAAXPEAVPFE@@AEAPEAU_UNIVERSAL_FONT_ID@@AEAHH@Z @ 0x1C0114F70 (-AddUFIToBuffer@RFONTOBJ@@AEAAXPEAVPFE@@AEAPEAU_UNIVERSAL_FONT_ID@@AEAHH@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RFONTOBJ::bCheckEudcFontCaps(RFONTOBJ *this, struct IFIOBJ *a2)
{
  int v2; // r8d
  __int64 v4; // r9
  unsigned int v5; // ecx

  if ( (ulFontLinkControl & 0xF0) != 0 )
  {
    v4 = *(_QWORD *)this;
    if ( *(_DWORD *)(*(_QWORD *)this + 92LL) )
    {
      if ( (ulFontLinkControl & 0x80u) != 0 )
        return 0LL;
    }
    else if ( (ulFontLinkControl & 0x40) != 0 && (*(_DWORD *)(v4 + 716) & 1) != 0
           || (ulFontLinkControl & 0x20) != 0 && (*(_DWORD *)(v4 + 716) & 4) != 0
           || (ulFontLinkControl & 0x10) != 0 && (*(_DWORD *)(v4 + 716) & 2) != 0 )
    {
      return 0LL;
    }
  }
  v2 = *(_DWORD *)(*(_QWORD *)a2 + 48LL);
  if ( (v2 & 0x10) != 0 )
    return 1LL;
  v5 = *(_DWORD *)(*(_QWORD *)this + 392LL) % 0x384u;
  return (v2 & 0x200000) != 0 && !v5;
}
