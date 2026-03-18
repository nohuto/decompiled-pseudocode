/*
 * XREFs of ?SetRemarshalingFlags@CBrightnessEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0216740
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
  *((_DWORD *)this + 28) = 0;
  if ( *((_DWORD *)this + 20)
    || *((float *)this + 30) != 1.0
    || *((float *)this + 31) != 1.0
    || *((float *)this + 32) != 0.0
    || *((float *)this + 33) != 0.0 )
  {
    return 1;
  }
  return result;
}
