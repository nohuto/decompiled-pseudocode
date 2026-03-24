/*
 * XREFs of ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C00D6670
 * Callers:
 *     GreRealizePalette @ 0x1C011BC6C (GreRealizePalette.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C016AA20 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     NtGdiResizePalette @ 0x1C02B86F0 (NtGdiResizePalette.c)
 * Callees:
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C013A940 (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 */

void __fastcall XDCOBJ::RestoreAttributes(XDCOBJ *this)
{
  if ( *((_DWORD *)this + 2) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) != 0 )
    {
      XDCOBJ::RestoreAttributesHelper(this);
      *(_DWORD *)(*(_QWORD *)this + 44LL) &= ~2u;
      *((_DWORD *)this + 2) = 0;
    }
  }
}
