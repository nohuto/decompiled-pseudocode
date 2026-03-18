/*
 * XREFs of ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C011C0AC
 * Callers:
 *     GreRealizeDefaultPalette @ 0x1C001F258 (GreRealizeDefaultPalette.c)
 *     ?GreGetCharABCWidthsW@@YAHPEAUHDC__@@IKPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z @ 0x1C007D848 (-GreGetCharABCWidthsW@@YAHPEAUHDC__@@IKPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z.c)
 *     GreRealizePalette @ 0x1C02D181C (GreRealizePalette.c)
 *     GreSetSystemPaletteUse @ 0x1C02D2184 (GreSetSystemPaletteUse.c)
 *     NtGdiResizePalette @ 0x1C02D2760 (NtGdiResizePalette.c)
 * Callees:
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C011C0E4 (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
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
