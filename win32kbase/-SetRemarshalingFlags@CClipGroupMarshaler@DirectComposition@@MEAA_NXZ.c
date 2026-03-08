/*
 * XREFs of ?SetRemarshalingFlags@CClipGroupMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0254B80
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CGeometryMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0254640 (-SetRemarshalingFlags@CGeometryMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CClipGroupMarshaler::SetRemarshalingFlags(
        DirectComposition::CClipGroupMarshaler *this)
{
  char result; // al

  result = DirectComposition::CGeometryMarshaler::SetRemarshalingFlags(this);
  if ( *((_DWORD *)this + 26) )
  {
    *((_DWORD *)this + 27) = 0;
    return 1;
  }
  return result;
}
