/*
 * XREFs of ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0050CF0
 * Callers:
 *     GreRealizePalette @ 0x1C02D3600 (GreRealizePalette.c)
 *     NtGdiResizePalette @ 0x1C02D4500 (NtGdiResizePalette.c)
 * Callees:
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C0050D28 (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
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
