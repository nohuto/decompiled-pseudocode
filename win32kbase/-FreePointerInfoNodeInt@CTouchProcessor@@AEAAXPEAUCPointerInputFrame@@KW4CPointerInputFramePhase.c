void __fastcall CTouchProcessor::FreePointerInfoNodeInt(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v5; // rbx

  v3 = a3;
  if ( *(struct _KTHREAD **)(a1 + 40) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9095);
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9097);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(a1, a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9098);
  if ( (unsigned int)v3 >= *(_DWORD *)(a2 + 48) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9099);
  v5 = *(_QWORD *)(a2 + 240) + 480 * v3;
  if ( (*(_DWORD *)v5 & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9106);
  CInputDest::SetEmpty((CInputDest *)(v5 + 352));
  CInputDest::SetEmpty((CInputDest *)(v5 + 24));
  *(_DWORD *)v5 |= 0x2000u;
  *(_QWORD *)(v5 + 16) = 0LL;
  ++*(_DWORD *)(a2 + 52);
}
