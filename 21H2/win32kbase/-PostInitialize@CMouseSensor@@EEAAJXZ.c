/*
 * XREFs of ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C005D270
 * Callers:
 *     <none>
 * Callees:
 *     isInputVirtualizationEnabled @ 0x1C00384C4 (isInputVirtualizationEnabled.c)
 *     ?CreateInstance@CMouseProcessor@@SAJPEAPEAV1@@Z @ 0x1C005C978 (-CreateInstance@CMouseProcessor@@SAJPEAPEAV1@@Z.c)
 *     ?SetInputRateLimitingTime@CMouseSensor@@QEAAJK@Z @ 0x1C005D1C4 (-SetInputRateLimitingTime@CMouseSensor@@QEAAJK@Z.c)
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1C005DFB4 (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 *     ?Initialize@CIVChannel@@QEAAXXZ @ 0x1C01F654C (-Initialize@CIVChannel@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseSensor::PostInitialize(CMouseSensor *this, __int64 a2, __int64 a3)
{
  struct CMouseProcessor **v3; // rdi
  int Instance; // edi

  v3 = (struct CMouseProcessor **)((char *)this + 1784);
  if ( *((_QWORD *)this + 223) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  Instance = CMouseProcessor::CreateInstance(v3);
  if ( Instance >= 0 )
  {
    if ( isInputVirtualizationEnabled() )
      CIVChannel::Initialize((CMouseSensor *)((char *)this + 1264));
    CMouseSensor::SetInputRateLimitingTime(this, 0);
    *((_QWORD *)this + 222) = CRIMBase::GetDispatcherHandleByName(this, 8LL, 1LL);
  }
  return (unsigned int)Instance;
}
