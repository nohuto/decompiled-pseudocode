/*
 * XREFs of ??1RESETFCOBJ@@QEAA@XZ @ 0x1C001C0B0
 * Callers:
 *     GreGetGlyphOutlineInternal @ 0x1C00196F4 (GreGetGlyphOutlineInternal.c)
 * Callees:
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C000A82C (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C0019F14 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 */

void __fastcall RESETFCOBJ::~RESETFCOBJ(RFONTOBJ **this)
{
  if ( *(_DWORD *)this )
  {
    if ( !*((_DWORD *)this + 1) )
    {
      RFONTOBJ::vReleaseCache(this[1]);
      RFONTOBJ::vMakeInactive(this[1]);
    }
  }
}
