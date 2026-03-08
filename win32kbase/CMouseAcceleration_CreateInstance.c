/*
 * XREFs of CMouseAcceleration_CreateInstance @ 0x1C009C820
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateInstance@CMouseAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z @ 0x1C009C870 (-CreateInstance@CMouseAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct CDeviceAcceleration *__fastcall CMouseAcceleration_CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  struct CDeviceAcceleration *v6; // [rsp+38h] [rbp+10h] BYREF

  v4 = a1;
  if ( *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 16008) )
  {
    LODWORD(v6) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 703LL);
  }
  v6 = 0LL;
  CMouseAcceleration::CreateInstance(&v6, v4);
  return v6;
}
