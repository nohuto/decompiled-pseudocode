/*
 * XREFs of ?SetRemarshalingFlags@CArithmeticCompositeEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C02199C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CArithmeticCompositeEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CArithmeticCompositeEffectMarshaler *this)
{
  char result; // al

  result = 0;
  *((_DWORD *)this + 28) = 0;
  if ( *((_DWORD *)this + 20)
    || 1.0 != *((float *)this + 30)
    || *((float *)this + 31) != 0.0
    || *((float *)this + 32) != 0.0
    || *((float *)this + 33) != 0.0
    || *((_DWORD *)this + 34) )
  {
    return 1;
  }
  return result;
}
