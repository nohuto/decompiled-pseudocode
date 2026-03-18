/*
 * XREFs of ?SetRemarshalingFlags@CFloodEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C02176E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CFloodEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CFloodEffectMarshaler *this)
{
  char result; // al

  result = 0;
  *((_DWORD *)this + 28) = 0;
  if ( *((_DWORD *)this + 20)
    || *((float *)this + 30) != 0.0
    || *((float *)this + 31) != 0.0
    || *((float *)this + 32) != 0.0
    || 1.0 != *((float *)this + 33) )
  {
    return 1;
  }
  return result;
}
