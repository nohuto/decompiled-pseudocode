/*
 * XREFs of ?SetRemarshalingFlags@CFilterEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C024D630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CFilterEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CFilterEffectMarshaler *this)
{
  *((_DWORD *)this + 26) = 0;
  return *((_DWORD *)this + 18) != 0;
}
