/*
 * XREFs of ?SetRemarshalingFlags@CHostVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01F8160
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01E54C0 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CHostVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CHostVisualMarshaler *this)
{
  DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this);
  *((_DWORD *)this + 94) |= 1u;
  return 1;
}
