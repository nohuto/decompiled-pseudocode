/*
 * XREFs of ?SetRemarshalingFlags@CBrightnessEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C024DC20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CBrightnessEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CBrightnessEffectMarshaler *this)
{
  char result; // al

  result = 0;
  *((_DWORD *)this + 26) = 0;
  if ( *((_DWORD *)this + 18)
    || *((float *)this + 28) != 1.0
    || *((float *)this + 29) != 1.0
    || *((float *)this + 30) != 0.0
    || *((float *)this + 31) != 0.0 )
  {
    return 1;
  }
  return result;
}
