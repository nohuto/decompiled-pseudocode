/*
 * XREFs of ?SetRemarshalingFlags@CAnimationTriggerMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0228220
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0216428 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CAnimationTriggerMarshaler::SetRemarshalingFlags(
        DirectComposition::CAnimationTriggerMarshaler *this)
{
  char v1; // di

  v1 = 0;
  if ( *((_QWORD *)this + 10) )
    *((_DWORD *)this + 4) |= 0x80u;
  *((_QWORD *)this + 11) = 0LL;
  if ( *((_QWORD *)this + 13) )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this)
    || (*((_DWORD *)this + 4) & 0x180) != 0 )
  {
    return 1;
  }
  return v1;
}
