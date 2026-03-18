/*
 * XREFs of CMouseAcceleration_CreateInstance @ 0x1C00BE440
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateInstance@CMouseAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z @ 0x1C00BE480 (-CreateInstance@CMouseAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CDeviceAcceleration *__fastcall CMouseAcceleration_CreateInstance(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  struct CDeviceAcceleration *v5; // [rsp+38h] [rbp+10h] BYREF

  v3 = a1;
  if ( qword_1C0288098 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v5 = 0LL;
  CMouseAcceleration::CreateInstance(&v5, v3);
  return v5;
}
