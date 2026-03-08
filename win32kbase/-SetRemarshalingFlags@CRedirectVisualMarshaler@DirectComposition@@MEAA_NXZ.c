/*
 * XREFs of ?SetRemarshalingFlags@CRedirectVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C026B040
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0252DA0 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CRedirectVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CRedirectVisualMarshaler *this)
{
  char v1; // bl
  char v2; // di

  v1 = 0;
  v2 = 0;
  if ( *((_QWORD *)this + 47) )
  {
    *((_DWORD *)this + 96) |= 1u;
    v2 = 1;
  }
  if ( DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this) || v2 )
    return 1;
  return v1;
}
