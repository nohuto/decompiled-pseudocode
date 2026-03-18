/*
 * XREFs of ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x1C00C0C90
 * Callers:
 *     <none>
 * Callees:
 *     isInputVirtualizationEnabled @ 0x1C004FF0C (isInputVirtualizationEnabled.c)
 *     ?CreateInstance@CKeyboardProcessor@@SAJPEAPEAV1@@Z @ 0x1C00C0CE8 (-CreateInstance@CKeyboardProcessor@@SAJPEAPEAV1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Initialize@CIVChannel@@QEAAXXZ @ 0x1C01F38F0 (-Initialize@CIVChannel@@QEAAXXZ.c)
 */

__int64 __fastcall CKeyboardSensor::PostInitialize(CKeyboardSensor *this)
{
  struct CKeyboardProcessor **v1; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  int Instance; // edi
  __int64 v6; // r8
  __int64 v7; // r9

  v1 = (struct CKeyboardProcessor **)((char *)this + 1344);
  if ( *((_QWORD *)this + 168) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 73LL);
  Instance = CKeyboardProcessor::CreateInstance(v1);
  if ( Instance >= 0 && isInputVirtualizationEnabled(v4, v3, v6, v7) )
    CIVChannel::Initialize((CKeyboardSensor *)((char *)this + 1288));
  return (unsigned int)Instance;
}
