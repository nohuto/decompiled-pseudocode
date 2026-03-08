/*
 * XREFs of ?SetRemarshalingFlags@CTransform3DGroupMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C025EDF0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C024D91C (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CTransform3DGroupMarshaler::SetRemarshalingFlags(
        DirectComposition::CTransform3DGroupMarshaler *this)
{
  char v1; // bl
  _DWORD *v2; // rdi

  v1 = 0;
  v2 = (_DWORD *)((char *)this + 16);
  *((_QWORD *)this + 9) = 0LL;
  if ( *((_QWORD *)this + 11) )
    *v2 |= 0x80u;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this) || (*v2 & 0x80u) != 0 )
    return 1;
  return v1;
}
