/*
 * XREFs of ?SetRemarshalingFlags@CBlendEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C024F980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CBlendEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CBlendEffectMarshaler *this)
{
  char result; // al

  result = 0;
  *((_DWORD *)this + 26) = 0;
  if ( *((_DWORD *)this + 18) || *((_DWORD *)this + 28) )
    return 1;
  return result;
}
