/*
 * XREFs of ?SetRemarshalingFlags@CGaussianBlurEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C024D350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CGaussianBlurEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CGaussianBlurEffectMarshaler *this)
{
  char result; // al

  result = 0;
  *((_DWORD *)this + 26) = 0;
  if ( *((_DWORD *)this + 18) || *((float *)this + 28) != 3.0 || *((_DWORD *)this + 29) != 2 || *((_DWORD *)this + 30) )
    return 1;
  return result;
}
