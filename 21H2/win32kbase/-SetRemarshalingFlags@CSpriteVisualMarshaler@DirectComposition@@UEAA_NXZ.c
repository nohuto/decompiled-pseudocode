/*
 * XREFs of ?SetRemarshalingFlags@CSpriteVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C021BFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C021BA90 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CSpriteVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CSpriteVisualMarshaler *this)
{
  char v1; // di
  char v3; // cl
  int v4; // eax

  v1 = 0;
  if ( *((_QWORD *)this + 48) )
    *((_DWORD *)this + 100) |= 1u;
  if ( *((_QWORD *)this + 49) )
    *((_DWORD *)this + 100) |= 2u;
  v3 = DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this);
  v4 = *((_DWORD *)this + 100);
  if ( (v4 & 1) != 0 || (v4 & 2) != 0 || v3 )
    return 1;
  return v1;
}
