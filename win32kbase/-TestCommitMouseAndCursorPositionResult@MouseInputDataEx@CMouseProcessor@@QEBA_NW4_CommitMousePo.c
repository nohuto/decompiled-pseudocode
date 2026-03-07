bool __fastcall CMouseProcessor::MouseInputDataEx::TestCommitMouseAndCursorPositionResult(__int64 a1, int a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 76);
  if ( v2 && (v2 & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2348);
  return (*(_DWORD *)(a1 + 76) & a2) == a2;
}
