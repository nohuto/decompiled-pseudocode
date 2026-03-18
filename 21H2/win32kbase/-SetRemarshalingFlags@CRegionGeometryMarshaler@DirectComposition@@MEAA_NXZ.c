/*
 * XREFs of ?SetRemarshalingFlags@CRegionGeometryMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0228870
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CGeometryMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C021F1F0 (-SetRemarshalingFlags@CGeometryMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CRegionGeometryMarshaler::SetRemarshalingFlags(
        DirectComposition::CRegionGeometryMarshaler *this)
{
  char v1; // di

  v1 = 0;
  *((_QWORD *)this + 13) = 0LL;
  if ( *((_QWORD *)this + 15) )
    *((_DWORD *)this + 4) |= 0x800u;
  if ( DirectComposition::CGeometryMarshaler::SetRemarshalingFlags(this) || (*((_DWORD *)this + 4) & 0x800) != 0 )
    return 1;
  return v1;
}
