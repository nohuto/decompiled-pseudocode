/*
 * XREFs of ?SetRemarshalingFlags@CScaleTransformMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C025E8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C024D91C (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CScaleTransformMarshaler::SetRemarshalingFlags(
        DirectComposition::CScaleTransformMarshaler *this)
{
  _DWORD *v1; // rbx
  char v2; // al
  char v3; // cl

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((float *)this + 18) != 1.0 )
    *v1 |= 0x80u;
  if ( *((float *)this + 19) != 1.0 )
    *v1 |= 0x100u;
  if ( *((float *)this + 20) != 0.0 )
    *v1 |= 0x200u;
  if ( *((float *)this + 21) != 0.0 )
    *v1 |= 0x400u;
  v2 = DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  v3 = 0;
  if ( v2 || (*v1 & 0x780) != 0 )
    return 1;
  return v3;
}
