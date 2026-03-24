/*
 * XREFs of ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x1C00B8040
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C002C2D0 (Win32AllocPool.c)
 *     isChildPartition @ 0x1C00423A0 (isChildPartition.c)
 *     isInputVirtualizationEnabled @ 0x1C0042ABC (isInputVirtualizationEnabled.c)
 *     ??0CKeyboardProcessor@@IEAA@XZ @ 0x1C008C0FC (--0CKeyboardProcessor@@IEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ivRegisterChildLifetimeNotifications@CBaseInput@@IEAAJK@Z @ 0x1C01BA054 (-ivRegisterChildLifetimeNotifications@CBaseInput@@IEAAJK@Z.c)
 *     ?ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z @ 0x1C01BD108 (-ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z.c)
 */

__int64 __fastcall CKeyboardSensor::PostInitialize(CKeyboardSensor *this)
{
  CKeyboardProcessor *v2; // rax
  CKeyboardProcessor *v3; // rax
  unsigned int v4; // edx

  if ( *((_QWORD *)this + 160) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 72LL);
  *((_QWORD *)this + 160) = 0LL;
  v2 = (CKeyboardProcessor *)Win32AllocPool(32LL, 0x70724D50u);
  if ( v2 )
    v3 = CKeyboardProcessor::CKeyboardProcessor(v2);
  else
    v3 = 0LL;
  if ( v3 )
  {
    *((_QWORD *)this + 160) = v3;
    if ( isInputVirtualizationEnabled() )
    {
      CBaseInput::ivRegisterChildLifetimeNotifications(this, 1u);
      if ( isChildPartition() )
        return (unsigned int)CBaseInput::ivChildLoop(this, 1u, *((struct RawInputManagerObject **)this + 2));
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v4;
}
