/*
 * XREFs of ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C002E140
 * Callers:
 *     <none>
 * Callees:
 *     ?SetInputRateLimitingTime@CMouseSensor@@QEAAJK@Z @ 0x1C002D7C4 (-SetInputRateLimitingTime@CMouseSensor@@QEAAJK@Z.c)
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1C0039100 (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 *     isInputVirtualizationEnabled @ 0x1C0079014 (isInputVirtualizationEnabled.c)
 *     ?CreateInstance@CMouseProcessor@@SAJPEAPEAV1@@Z @ 0x1C0095CA4 (-CreateInstance@CMouseProcessor@@SAJPEAPEAV1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Initialize@CIVChannel@@QEAAXXZ @ 0x1C022858C (-Initialize@CIVChannel@@QEAAXXZ.c)
 */

__int64 __fastcall CMouseSensor::PostInitialize(CMouseSensor *this)
{
  struct CMouseProcessor **v1; // rdi
  int Instance; // edi
  __int64 result; // rax

  v1 = (struct CMouseProcessor **)((char *)this + 1872);
  if ( *((_QWORD *)this + 234) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 62LL);
  Instance = CMouseProcessor::CreateInstance(v1);
  if ( Instance >= 0 )
  {
    if ( (unsigned __int8)isInputVirtualizationEnabled() )
      CIVChannel::Initialize((CMouseSensor *)((char *)this + 1352));
    CMouseSensor::SetInputRateLimitingTime(this, 0);
    *((_QWORD *)this + 233) = CRIMBase::GetDispatcherHandleByName(this, 8LL, 1LL);
  }
  *((_QWORD *)this + 249) = gliQpcFreq.QuadPart * (unsigned __int64)*((unsigned int *)this + 486) / 0x3E8;
  result = (unsigned int)Instance;
  *((_QWORD *)this + 250) = gliQpcFreq.QuadPart * (unsigned __int64)*((unsigned int *)this + 492) / 0x3E8;
  return result;
}
