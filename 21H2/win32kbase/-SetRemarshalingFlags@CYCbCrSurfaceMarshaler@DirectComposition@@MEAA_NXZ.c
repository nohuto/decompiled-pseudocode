/*
 * XREFs of ?SetRemarshalingFlags@CYCbCrSurfaceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0229A20
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
  if ( *((_QWORD *)this + 8) )
    return *((_QWORD *)this + 9) != 0LL;
  return result;
}
