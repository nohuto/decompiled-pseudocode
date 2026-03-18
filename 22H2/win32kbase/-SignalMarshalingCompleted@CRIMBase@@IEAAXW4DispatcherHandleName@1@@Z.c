/*
 * XREFs of ?SignalMarshalingCompleted@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C0053550
 * Callers:
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C0053374 (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 * Callees:
 *     ?_Signal@MarshalingCompletion@SensorDispatcherObject@CRIMBase@@AEBAXXZ @ 0x1C006E750 (-_Signal@MarshalingCompletion@SensorDispatcherObject@CRIMBase@@AEBAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CRIMBase::SignalMarshalingCompleted(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  CRIMBase::SensorDispatcherObject::MarshalingCompletion *v4; // rcx

  v2 = a2;
  if ( a2 >= 0x11 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 410LL);
  if ( *(_DWORD *)((v2 << 6) + a1 + 184) != (_DWORD)v2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 413LL);
  v4 = (CRIMBase::SensorDispatcherObject::MarshalingCompletion *)((v2 << 6) + a1 + 224);
  if ( *(_QWORD *)v4 )
    CRIMBase::SensorDispatcherObject::MarshalingCompletion::_Signal(v4);
}
