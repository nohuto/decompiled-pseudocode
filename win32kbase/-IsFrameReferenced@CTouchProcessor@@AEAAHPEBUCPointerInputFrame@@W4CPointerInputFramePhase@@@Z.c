__int64 __fastcall CTouchProcessor::IsFrameReferenced(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8038);
  LOBYTE(v2) = *(_DWORD *)(a2 + 44) != 0;
  return v2;
}
