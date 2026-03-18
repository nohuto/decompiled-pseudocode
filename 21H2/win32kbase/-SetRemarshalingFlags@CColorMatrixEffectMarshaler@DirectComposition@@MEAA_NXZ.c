/*
 * XREFs of ?SetRemarshalingFlags@CColorMatrixEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0216B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CColorMatrixEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CColorMatrixEffectMarshaler *this)
{
  char result; // al

  result = 0;
  *((_DWORD *)this + 28) = 0;
  if ( *((_DWORD *)this + 20)
    || *((_DWORD *)this + 50) != 1
    || *((_DWORD *)this + 51)
    || *((float *)this + 30) != 1.0
    || *((float *)this + 31) != 0.0
    || *((float *)this + 32) != 0.0
    || *((float *)this + 33) != 0.0
    || *((float *)this + 34) != 0.0
    || *((float *)this + 35) != 1.0
    || *((float *)this + 36) != 0.0
    || *((float *)this + 37) != 0.0
    || *((float *)this + 38) != 0.0
    || *((float *)this + 39) != 0.0
    || *((float *)this + 40) != 1.0
    || *((float *)this + 41) != 0.0
    || *((float *)this + 42) != 0.0
    || *((float *)this + 43) != 0.0
    || *((float *)this + 44) != 0.0
    || *((float *)this + 45) != 1.0
    || *((float *)this + 46) != 0.0
    || *((float *)this + 47) != 0.0
    || *((float *)this + 48) != 0.0
    || *((float *)this + 49) != 0.0 )
  {
    return 1;
  }
  return result;
}
