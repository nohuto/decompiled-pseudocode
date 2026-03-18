/*
 * XREFs of ?SetRemarshalingFlags@CClipGroupMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C021FA50
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CGeometryMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C021F1F0 (-SetRemarshalingFlags@CGeometryMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CClipGroupMarshaler::SetRemarshalingFlags(
        DirectComposition::CClipGroupMarshaler *this)
{
  char result; // al

  result = DirectComposition::CGeometryMarshaler::SetRemarshalingFlags(this);
  if ( *((_DWORD *)this + 28) )
  {
    *((_DWORD *)this + 29) = 0;
    return 1;
  }
  return result;
}
