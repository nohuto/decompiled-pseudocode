/*
 * XREFs of ?SetRemarshalingFlags@CHolographicDisplayMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00D6440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CHolographicDisplayMarshaler::SetRemarshalingFlags(
        DirectComposition::CHolographicDisplayMarshaler *this)
{
  bool result; // al

  *((_DWORD *)this + 16) &= ~0x80000000;
  result = 1;
  *((_DWORD *)this + 4) |= 0xC0u;
  return result;
}
