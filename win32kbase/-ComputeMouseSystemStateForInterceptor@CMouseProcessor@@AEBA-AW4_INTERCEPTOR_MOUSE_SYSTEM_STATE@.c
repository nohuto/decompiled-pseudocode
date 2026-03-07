__int64 __fastcall CMouseProcessor::ComputeMouseSystemStateForInterceptor(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  unsigned __int16 v4; // bx
  __int64 v5; // rdx
  unsigned int v6; // esi

  v3 = 0;
  v4 = *(_WORD *)(a2 + 4) & 0xF;
  if ( v4 && !CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 1024) )
  {
    if ( (v4 & 3) != 0 )
    {
      v6 = 1;
    }
    else
    {
      v4 >>= 2;
      v6 = 2;
      if ( !v4 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5899);
    }
    LOBYTE(v5) = (v4 & 2) != 0;
    if ( (unsigned __int8)anonymous_namespace_::IsMouseButtonSwapped(v6, v5) )
      v3 = 1;
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3696), 1, 1) )
    v3 |= 2u;
  return v3;
}
