/*
 * XREFs of CarLoadFromDV @ 0x1405D5788
 * Callers:
 *     CarLoadConfig @ 0x1405D5724 (CarLoadConfig.c)
 * Callees:
 *     memmove @ 0x140435100 (memmove.c)
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
