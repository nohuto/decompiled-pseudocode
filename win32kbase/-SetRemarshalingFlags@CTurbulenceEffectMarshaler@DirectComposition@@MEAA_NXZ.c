/*
 * XREFs of ?SetRemarshalingFlags@CTurbulenceEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C024E980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CTurbulenceEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CTurbulenceEffectMarshaler *this)
{
  char result; // al

  result = 0;
  *((_DWORD *)this + 26) = 0;
  if ( *((_DWORD *)this + 18)
    || *((float *)this + 28) != 0.0
    || *((float *)this + 29) != 0.0
    || *((float *)this + 30) != 0.0099999998
    || *((float *)this + 31) != 0.0099999998
    || *((float *)this + 32) != 0.0
    || *((float *)this + 33) != 0.0
    || *((_DWORD *)this + 34) != 1
    || *((_DWORD *)this + 35)
    || *((_DWORD *)this + 36)
    || *((_DWORD *)this + 37) )
  {
    return 1;
  }
  return result;
}
