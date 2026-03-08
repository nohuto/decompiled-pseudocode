/*
 * XREFs of ?SetRemarshalingFlags@CYCbCrSurfaceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0262510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CYCbCrSurfaceMarshaler::SetRemarshalingFlags(
        DirectComposition::CYCbCrSurfaceMarshaler *this)
{
  bool result; // al

  result = 0;
  if ( *((_QWORD *)this + 7) )
    return *((_QWORD *)this + 8) != 0LL;
  return result;
}
