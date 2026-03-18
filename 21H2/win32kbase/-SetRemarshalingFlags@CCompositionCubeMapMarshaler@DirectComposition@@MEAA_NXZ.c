/*
 * XREFs of ?SetRemarshalingFlags@CCompositionCubeMapMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00CB450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CCompositionCubeMapMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompositionCubeMapMarshaler *this)
{
  bool result; // al

  *((_DWORD *)this + 19) = 0;
  result = 1;
  *((_DWORD *)this + 4) |= 0x60u;
  return result;
}
