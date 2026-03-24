/*
 * XREFs of ?SetRemarshalingFlags@CLayerVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01E59F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01E54C0 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CLayerVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CLayerVisualMarshaler *this)
{
  char v1; // di
  char v3; // cl

  v1 = 0;
  if ( *((_QWORD *)this + 46) )
    *((_DWORD *)this + 97) |= 1u;
  if ( *((_QWORD *)this + 47) )
    *((_DWORD *)this + 97) |= 2u;
  if ( *((_BYTE *)this + 384) )
    *((_DWORD *)this + 97) |= 4u;
  if ( *((_BYTE *)this + 385) )
    *((_DWORD *)this + 97) |= 8u;
  v3 = DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this);
  if ( (*((_DWORD *)this + 97) & 0xF) != 0 || v3 )
    return 1;
  return v1;
}
