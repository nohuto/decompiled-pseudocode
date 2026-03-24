/*
 * XREFs of CKeyboardSensor_CreateInstance @ 0x1C008ACA0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C002AE60 (Win32AllocPool.c)
 *     ??0CBaseInput@@IEAA@K@Z @ 0x1C008AEA8 (--0CBaseInput@@IEAA@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

CBaseInput *CKeyboardSensor_CreateInstance()
{
  CBaseInput *v0; // rax
  CBaseInput *v1; // rbx

  if ( gpKeyboardSensor )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 308LL);
  gpKeyboardSensor = 0LL;
  v0 = (CBaseInput *)Win32AllocPool(1288LL, 0x70694843u);
  v1 = v0;
  if ( v0 )
  {
    CBaseInput::CBaseInput(v0, 2u);
    *((_QWORD *)v1 + 160) = 0LL;
    *(_QWORD *)v1 = &CKeyboardSensor::`vftable';
  }
  else
  {
    v1 = 0LL;
  }
  if ( !v1 )
    return 0LL;
  gpKeyboardSensor = v1;
  return v1;
}
