/*
 * XREFs of ?SignalMarshalingCompleted@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C007B074
 * Callers:
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C007A800 (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 * Callees:
 *     ?_Signal@MarshalingCompletion@SensorDispatcherObject@CRIMBase@@AEBAXXZ @ 0x1C0031780 (-_Signal@MarshalingCompletion@SensorDispatcherObject@CRIMBase@@AEBAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CRIMBase::SignalMarshalingCompleted(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  PRKEVENT *v4; // rcx

  v2 = a2;
  if ( a2 >= 0x12 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 416LL);
  if ( *(_DWORD *)((v2 << 6) + a1 + 184) != (_DWORD)v2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 419LL);
  v4 = (PRKEVENT *)((v2 << 6) + a1 + 224);
  if ( *v4 )
    CRIMBase::SensorDispatcherObject::MarshalingCompletion::_Signal(v4);
}
