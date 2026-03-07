void __fastcall CBaseProcessor::SetUMInputObservationState(__int64 a1, __int32 a2)
{
  if ( !CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 72);
  _InterlockedExchange((volatile __int32 *)(a1 + 8), a2);
}
