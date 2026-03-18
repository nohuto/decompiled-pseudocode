/*
 * XREFs of ?SetRemarshalingFlags@CEffectGroupMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0228380
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0216428 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CEffectGroupMarshaler::SetRemarshalingFlags(
        DirectComposition::CEffectGroupMarshaler *this)
{
  char v2; // di

  if ( *((float *)this + 20) != 1.0 )
    *((_DWORD *)this + 4) |= 0x80u;
  v2 = 0;
  if ( *((_DWORD *)this + 21) )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( *((_QWORD *)this + 11) )
    *((_DWORD *)this + 4) |= 0x200u;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this)
    || (*((_DWORD *)this + 4) & 0x380) != 0 )
  {
    return 1;
  }
  return v2;
}
