/*
 * XREFs of ?SetRemarshalingFlags@CSuperWetInkVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0228D60
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C021BA90 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CSuperWetInkVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CSuperWetInkVisualMarshaler *this)
{
  char v1; // di

  v1 = 0;
  if ( *((_QWORD *)this + 48) )
    *((_DWORD *)this + 98) |= 2u;
  if ( DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this) || (*((_DWORD *)this + 98) & 2) != 0 )
    return 1;
  return v1;
}
