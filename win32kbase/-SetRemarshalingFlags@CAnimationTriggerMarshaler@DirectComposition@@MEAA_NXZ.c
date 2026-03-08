/*
 * XREFs of ?SetRemarshalingFlags@CAnimationTriggerMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C025DE50
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C024D91C (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CAnimationTriggerMarshaler::SetRemarshalingFlags(
        DirectComposition::CAnimationTriggerMarshaler *this)
{
  char v1; // di
  _DWORD *v2; // rbx

  v1 = 0;
  v2 = (_DWORD *)((char *)this + 16);
  if ( *((_QWORD *)this + 9) )
    *v2 |= 0x80u;
  *((_QWORD *)this + 10) = 0LL;
  if ( *((_QWORD *)this + 12) )
    *v2 |= 0x100u;
  *v2 |= 0x200u;
  *v2 |= 0x400u;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this) || (*v2 & 0x780) != 0 )
    return 1;
  return v1;
}
