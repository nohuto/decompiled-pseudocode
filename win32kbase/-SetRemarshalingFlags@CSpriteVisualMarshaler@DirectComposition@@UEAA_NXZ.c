/*
 * XREFs of ?SetRemarshalingFlags@CSpriteVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C02532B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0252DA0 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CSpriteVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CSpriteVisualMarshaler *this)
{
  char v1; // di
  _DWORD *v2; // rbx
  char v3; // cl

  v1 = 0;
  v2 = (_DWORD *)((char *)this + 392);
  if ( *((_QWORD *)this + 47) )
    *v2 |= 1u;
  if ( *((_QWORD *)this + 48) )
    *v2 |= 2u;
  v3 = DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this);
  if ( (*v2 & 1) != 0 || (*v2 & 2) != 0 || v3 )
    return 1;
  return v1;
}
