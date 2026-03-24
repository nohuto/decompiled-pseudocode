/*
 * XREFs of ?SetRemarshalingFlags@CTextVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01DFA90
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01E5590 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CTextVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CTextVisualMarshaler *this)
{
  char v1; // di

  v1 = 0;
  if ( *((_QWORD *)this + 47) )
  {
    *((_DWORD *)this + 115) |= 2u;
    *((_DWORD *)this + 98) = 0;
  }
  if ( *((_QWORD *)this + 51) )
  {
    *((_DWORD *)this + 115) |= 4u;
    *((_DWORD *)this + 106) = 0;
  }
  if ( *((_QWORD *)this + 55) )
  {
    *((_DWORD *)this + 115) |= 8u;
    *((_DWORD *)this + 114) = 0;
  }
  if ( DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this) || (*((_DWORD *)this + 115) & 0xE) != 0 )
    return 1;
  return v1;
}
