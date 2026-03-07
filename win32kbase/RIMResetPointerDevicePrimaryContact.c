__int64 __fastcall RIMResetPointerDevicePrimaryContact(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 1016);
  if ( result )
  {
    if ( (*(_DWORD *)(result + 32) & 2) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1546);
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1016) + 32LL) & 8) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1547);
    *(_DWORD *)(*(_QWORD *)(a1 + 1016) + 2444LL) &= ~0x4000000u;
    result = *(_QWORD *)(a1 + 1016);
    *(_DWORD *)(result + 32) &= ~8u;
    *(_QWORD *)(a1 + 1016) = 0LL;
  }
  return result;
}
