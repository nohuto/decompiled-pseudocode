/*
 * XREFs of CKeyboardSensor_CreateInstance @ 0x1C005B270
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateInstance@CKeyboardSensor@@SAJPEAPEAV1@@Z @ 0x1C005C7B8 (-CreateInstance@CKeyboardSensor@@SAJPEAPEAV1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

CHidInput *__fastcall CKeyboardSensor_CreateInstance(struct CKeyboardSensor **a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx

  v3 = 0LL;
  if ( gpKeyboardSensor )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( (int)CKeyboardSensor::CreateInstance(a1) >= 0 )
    return gpKeyboardSensor;
  return (CHidInput *)v3;
}
