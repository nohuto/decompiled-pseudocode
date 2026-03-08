/*
 * XREFs of ?SetRemarshalingFlags@CRegionGeometryMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C025E6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CGeometryMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0254640 (-SetRemarshalingFlags@CGeometryMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CRegionGeometryMarshaler::SetRemarshalingFlags(
        DirectComposition::CRegionGeometryMarshaler *this)
{
  char v1; // bl
  _DWORD *v2; // rdi

  v1 = 0;
  v2 = (_DWORD *)((char *)this + 16);
  *((_QWORD *)this + 12) = 0LL;
  if ( *((_QWORD *)this + 14) )
    *v2 |= 0x800u;
  if ( DirectComposition::CGeometryMarshaler::SetRemarshalingFlags(this) || (*v2 & 0x800) != 0 )
    return 1;
  return v1;
}
