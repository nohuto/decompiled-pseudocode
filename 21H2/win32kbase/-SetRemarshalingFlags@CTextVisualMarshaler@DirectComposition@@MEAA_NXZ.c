/*
 * XREFs of ?SetRemarshalingFlags@CTextVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0228EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C021BA90 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CTextVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CTextVisualMarshaler *this)
{
  char v1; // di

  v1 = 0;
  *((_QWORD *)this + 48) = 0LL;
  if ( *((_QWORD *)this + 50) )
    *((_DWORD *)this + 114) |= 2u;
  *((_QWORD *)this + 51) = 0LL;
  if ( *((_QWORD *)this + 53) )
    *((_DWORD *)this + 114) |= 4u;
  *((_QWORD *)this + 54) = 0LL;
  if ( *((_QWORD *)this + 56) )
    *((_DWORD *)this + 114) |= 8u;
  if ( DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this) || (*((_DWORD *)this + 114) & 0xE) != 0 )
    return 1;
  return v1;
}
