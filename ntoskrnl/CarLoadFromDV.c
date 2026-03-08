/*
 * XREFs of CarLoadFromDV @ 0x1405D32D8
 * Callers:
 *     CarLoadConfig @ 0x1405D3274 (CarLoadConfig.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

unsigned __int64 __fastcall CarLoadFromDV(char a1)
{
  unsigned __int64 result; // rax

  CarRuleClasses = VfRuleClasses;
  result = (unsigned int)VfTriageContext;
  CarTriageContext = VfTriageContext;
  if ( !a1 )
  {
    CarXdvOptions = VfFlightOptions;
    return (unsigned __int64)memmove(CarDrivers, MmVerifyDriverBuffer, (unsigned int)MmVerifyDriverBufferLength);
  }
  return result;
}
