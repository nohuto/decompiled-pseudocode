/*
 * XREFs of ?SetRemarshalingFlags@CSaturationEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0217210
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
  *((_DWORD *)this + 28) = 0;
  if ( *((_DWORD *)this + 20) || *((float *)this + 30) != 0.5 )
    return 1;
  return result;
}
