/*
 * XREFs of ??1PFFREFOBJ@@QEAA@XZ @ 0x1C016CAD0
 * Callers:
 *     NtGdiGetFontFileInfo @ 0x1C0160A60 (NtGdiGetFontFileInfo.c)
 *     NtGdiGetFontFileData @ 0x1C02BB3E0 (NtGdiGetFontFileData.c)
 * Callees:
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C009F278 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 */

void __fastcall PFFREFOBJ::~PFFREFOBJ(PFFREFOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    if ( !*((_DWORD *)this + 4) )
      PFFOBJ::vDeleteRFONTRef(this);
  }
}
