/*
 * XREFs of ?SetRemarshalingFlags@CTranslateTransform3DMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C025E7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C024D91C (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CTranslateTransform3DMarshaler::SetRemarshalingFlags(
        DirectComposition::CTranslateTransform3DMarshaler *this)
{
  _DWORD *v1; // rbx
  char v2; // al
  char v3; // cl

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((float *)this + 18) != 0.0 )
    *v1 |= 0x80u;
  if ( *((float *)this + 19) != 0.0 )
    *v1 |= 0x100u;
  if ( *((float *)this + 20) != 0.0 )
    *v1 |= 0x200u;
  v2 = DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  v3 = 0;
  if ( v2 || (*v1 & 0x380) != 0 )
    return 1;
  return v3;
}
