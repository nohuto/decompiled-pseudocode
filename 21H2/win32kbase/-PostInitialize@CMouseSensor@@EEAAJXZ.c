/*
 * XREFs of ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C0087870
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C002AE60 (Win32AllocPool.c)
 *     isChildPartition @ 0x1C0040F30 (isChildPartition.c)
 *     isInputVirtualizationEnabled @ 0x1C004164C (isInputVirtualizationEnabled.c)
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1C008845C (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 *     ?SetInputRateLimitingTime@CMouseSensor@@QEAAJK@Z @ 0x1C0089CD8 (-SetInputRateLimitingTime@CMouseSensor@@QEAAJK@Z.c)
 *     ??0CMouseProcessor@@IEAA@XZ @ 0x1C008A75C (--0CMouseProcessor@@IEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ivRegisterChildLifetimeNotifications@CBaseInput@@IEAAJK@Z @ 0x1C01BA124 (-ivRegisterChildLifetimeNotifications@CBaseInput@@IEAAJK@Z.c)
 *     ?ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z @ 0x1C01BD1D8 (-ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z.c)
 */

__int64 __fastcall CMouseSensor::PostInitialize(CMouseSensor *this)
{
  CMouseProcessor *v2; // rax
  CMouseProcessor *v3; // rax
  unsigned int v4; // edi

  if ( *((_QWORD *)this + 218) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 62LL);
  *((_QWORD *)this + 218) = 0LL;
  v2 = (CMouseProcessor *)Win32AllocPool(4968LL, 0x70724D50u);
  if ( v2 )
    v3 = CMouseProcessor::CMouseProcessor(v2);
  else
    v3 = 0LL;
  if ( v3 )
  {
    *((_QWORD *)this + 218) = v3;
    v4 = 0;
    if ( isInputVirtualizationEnabled() )
    {
      v4 = CBaseInput::ivRegisterChildLifetimeNotifications(this, 0);
      if ( isChildPartition() )
        v4 = CBaseInput::ivChildLoop(this, 0, *((struct RawInputManagerObject **)this + 2));
    }
    CMouseSensor::SetInputRateLimitingTime(this, 0);
    *((_QWORD *)this + 217) = CRIMBase::GetDispatcherHandleByName(this, 8LL, 1LL);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v4;
}
