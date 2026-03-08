/*
 * XREFs of ?SetRemarshalingFlags@CSaturationEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C024E6F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CSaturationEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CSaturationEffectMarshaler *this)
{
  char result; // al

  result = 0;
  *((_DWORD *)this + 26) = 0;
  if ( *((_DWORD *)this + 18) || *((float *)this + 28) != 0.5 )
    return 1;
  return result;
}
