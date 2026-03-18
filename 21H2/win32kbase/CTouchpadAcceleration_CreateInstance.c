/*
 * XREFs of CTouchpadAcceleration_CreateInstance @ 0x1C00C3250
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateInstance@CTouchpadAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z @ 0x1C00C3290 (-CreateInstance@CTouchpadAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CDeviceAcceleration *__fastcall CTouchpadAcceleration_CreateInstance(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  struct CDeviceAcceleration *v5; // [rsp+38h] [rbp+10h] BYREF

  v3 = a1;
  if ( qword_1C02880B0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v5 = 0LL;
  CTouchpadAcceleration::CreateInstance(&v5, v3);
  return v5;
}
