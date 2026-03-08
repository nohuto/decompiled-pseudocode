/*
 * XREFs of CTouchpadAcceleration_CreateInstance @ 0x1C00D0130
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateInstance@CTouchpadAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z @ 0x1C00D0180 (-CreateInstance@CTouchpadAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct CDeviceAcceleration *__fastcall CTouchpadAcceleration_CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  struct CDeviceAcceleration *v6; // [rsp+38h] [rbp+10h] BYREF

  v4 = a1;
  if ( *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 16032) )
  {
    LODWORD(v6) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 716LL);
  }
  v6 = 0LL;
  CTouchpadAcceleration::CreateInstance(&v6, v4);
  return v6;
}
