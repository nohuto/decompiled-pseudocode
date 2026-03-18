/*
 * XREFs of ?SetRemarshalingFlags@CShapeVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C021C6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C021BA90 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CShapeVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CShapeVisualMarshaler *this)
{
  char result; // al

  result = DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this);
  if ( *((_QWORD *)this + 48) )
  {
    *((_DWORD *)this + 102) |= 1u;
    result = 1;
  }
  if ( *((_DWORD *)this + 100) )
  {
    *((_DWORD *)this + 102) |= 2u;
    result = 1;
    *((_DWORD *)this + 101) = 0;
  }
  return result;
}
