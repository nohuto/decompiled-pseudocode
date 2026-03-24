/*
 * XREFs of CMouseAcceleration_CreateInstance @ 0x1C000C240
 * Callers:
 *     <none>
 * Callees:
 *     ??0CMouseAcceleration@@IEAA@I@Z @ 0x1C000C294 (--0CMouseAcceleration@@IEAA@I@Z.c)
 *     Win32AllocPool @ 0x1C002C2D0 (Win32AllocPool.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

CMouseAcceleration *__fastcall CMouseAcceleration_CreateInstance(unsigned int a1)
{
  __int64 v1; // rbx
  CMouseAcceleration *v3; // rax

  v1 = 0LL;
  if ( qword_1C0245098 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 702LL);
  v3 = (CMouseAcceleration *)Win32AllocPool(120LL, 1682006883LL);
  if ( v3 )
    return CMouseAcceleration::CMouseAcceleration(v3, a1);
  return (CMouseAcceleration *)v1;
}
