/*
 * XREFs of ?SetRemarshalingFlags@CHueRotationEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C024E5D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CHueRotationEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CHueRotationEffectMarshaler *this)
{
  char result; // al

  result = 0;
  *((_DWORD *)this + 26) = 0;
  if ( *((_DWORD *)this + 18) || *((float *)this + 28) != 0.0 )
    return 1;
  return result;
}
