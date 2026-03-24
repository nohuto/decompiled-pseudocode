/*
 * XREFs of CMouseAcceleration_CreateInstance @ 0x1C000ADC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CMouseAcceleration@@IEAA@I@Z @ 0x1C000AE14 (--0CMouseAcceleration@@IEAA@I@Z.c)
 *     Win32AllocPool @ 0x1C002AE60 (Win32AllocPool.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

CMouseAcceleration *__fastcall CMouseAcceleration_CreateInstance(unsigned int a1)
{
  __int64 v1; // rbx
  CMouseAcceleration *v3; // rax

  v1 = 0LL;
  if ( qword_1C0246098 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 702LL);
  v3 = (CMouseAcceleration *)Win32AllocPool(120LL, 1682006883LL);
  if ( v3 )
    return CMouseAcceleration::CMouseAcceleration(v3, a1);
  return (CMouseAcceleration *)v1;
}
