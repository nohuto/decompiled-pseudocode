/*
 * XREFs of ?SetRemarshalingFlags@CLayerVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C021C110
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C021BA90 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CLayerVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CLayerVisualMarshaler *this)
{
  char v1; // di
  char v3; // cl

  v1 = 0;
  if ( *((_QWORD *)this + 48) )
    *((_DWORD *)this + 101) |= 1u;
  if ( *((_QWORD *)this + 49) )
    *((_DWORD *)this + 101) |= 2u;
  if ( *((_BYTE *)this + 400) )
    *((_DWORD *)this + 101) |= 4u;
  if ( *((_BYTE *)this + 401) )
    *((_DWORD *)this + 101) |= 8u;
  v3 = DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this);
  if ( (*((_DWORD *)this + 101) & 0xF) != 0 || v3 )
    return 1;
  return v1;
}
