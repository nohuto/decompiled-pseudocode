/*
 * XREFs of ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x1C00C3160
 * Callers:
 *     <none>
 * Callees:
 *     isInputVirtualizationEnabled @ 0x1C00384C4 (isInputVirtualizationEnabled.c)
 *     ?CreateInstance@CKeyboardProcessor@@SAJPEAPEAV1@@Z @ 0x1C00C31B0 (-CreateInstance@CKeyboardProcessor@@SAJPEAPEAV1@@Z.c)
 *     ?Initialize@CIVChannel@@QEAAXXZ @ 0x1C01F654C (-Initialize@CIVChannel@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CKeyboardSensor::PostInitialize(CKeyboardSensor *this, __int64 a2, __int64 a3)
{
  struct CKeyboardProcessor **v3; // rdi
  int Instance; // edi

  v3 = (struct CKeyboardProcessor **)((char *)this + 1320);
  if ( *((_QWORD *)this + 165) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  Instance = CKeyboardProcessor::CreateInstance(v3);
  if ( Instance >= 0 && isInputVirtualizationEnabled() )
    CIVChannel::Initialize((CKeyboardSensor *)((char *)this + 1264));
  return (unsigned int)Instance;
}
