/*
 * XREFs of ?SetRemarshalingFlags@CAnimationControllerMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C025DDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C024D91C (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CAnimationControllerMarshaler::SetRemarshalingFlags(
        DirectComposition::CAnimationControllerMarshaler *this)
{
  char v1; // di
  _DWORD *v2; // rbx

  v1 = 0;
  v2 = (_DWORD *)((char *)this + 16);
  *((_QWORD *)this + 9) = 0LL;
  if ( *((_QWORD *)this + 11) )
    *v2 |= 0x80u;
  if ( *((float *)this + 24) != 0.0 )
    *v2 |= 0x100u;
  if ( *((float *)this + 25) != 0.0 )
    *v2 |= 0x200u;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this) || (*v2 & 0x380) != 0 )
    return 1;
  return v1;
}
