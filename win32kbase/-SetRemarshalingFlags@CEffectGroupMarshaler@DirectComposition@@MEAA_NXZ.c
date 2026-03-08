/*
 * XREFs of ?SetRemarshalingFlags@CEffectGroupMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C025E030
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C024D91C (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CEffectGroupMarshaler::SetRemarshalingFlags(
        DirectComposition::CEffectGroupMarshaler *this)
{
  _DWORD *v1; // rbx
  char v2; // di

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((float *)this + 18) != 1.0 )
    *v1 |= 0x80u;
  v2 = 0;
  if ( *((_DWORD *)this + 19) )
    *v1 |= 0x100u;
  if ( *((_QWORD *)this + 10) )
    *v1 |= 0x200u;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this) || (*v1 & 0x380) != 0 )
    return 1;
  return v2;
}
