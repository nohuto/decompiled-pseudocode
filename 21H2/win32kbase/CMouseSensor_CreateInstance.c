/*
 * XREFs of CMouseSensor_CreateInstance @ 0x1C005B2B0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateInstance@CMouseSensor@@SAJPEAPEAV1@@Z @ 0x1C005C858 (-CreateInstance@CMouseSensor@@SAJPEAPEAV1@@Z.c)
 */

CHidInput *__fastcall CMouseSensor_CreateInstance(struct CMouseSensor **a1)
{
  int Instance; // eax
  __int64 v2; // rdx

  Instance = CMouseSensor::CreateInstance(a1);
  v2 = 0LL;
  if ( Instance >= 0 )
    return gpMouseSensor;
  return (CHidInput *)v2;
}
