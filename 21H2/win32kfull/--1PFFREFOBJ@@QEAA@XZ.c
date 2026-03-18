/*
 * XREFs of ??1PFFREFOBJ@@QEAA@XZ @ 0x1C015F378
 * Callers:
 *     NtGdiGetFontFileInfo @ 0x1C0112960 (NtGdiGetFontFileInfo.c)
 *     NtGdiGetFontFileData @ 0x1C02BA5F0 (NtGdiGetFontFileData.c)
 * Callees:
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C000B1C8 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 */

void __fastcall PFFREFOBJ::~PFFREFOBJ(PFFREFOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    if ( !*((_DWORD *)this + 4) )
      PFFOBJ::vDeleteRFONTRef(this);
  }
}
