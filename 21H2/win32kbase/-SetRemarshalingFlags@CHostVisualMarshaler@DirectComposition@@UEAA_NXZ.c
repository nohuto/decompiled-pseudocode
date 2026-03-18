/*
 * XREFs of ?SetRemarshalingFlags@CHostVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C0238AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C021BA90 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CHostVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CHostVisualMarshaler *this)
{
  DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this);
  *((_DWORD *)this + 98) |= 1u;
  return 1;
}
