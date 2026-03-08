/*
 * XREFs of ?SetRemarshalingFlags@CInkMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C00D63E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CInkMarshaler::SetRemarshalingFlags(DirectComposition::CInkMarshaler *this)
{
  bool result; // al

  *((_DWORD *)this + 4) &= 0xFFFFFF1F;
  result = 1;
  *((_DWORD *)this + 38) = 0;
  return result;
}
