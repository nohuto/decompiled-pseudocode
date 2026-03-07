__int64 __fastcall CHolographicClient::Initialize(LARGE_INTEGER *this)
{
  __int64 v2; // rcx
  int AnalogExclusiveTokenEvent; // ebx
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx

  AnalogExclusiveTokenEvent = NtTokenManagerGetAnalogExclusiveTokenEvent(&this[32]);
  if ( AnalogExclusiveTokenEvent >= 0 )
  {
    v5 = CHolographicClient::EnsureHolographicCompositor((CHolographicClient *)this);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x66u, 0LL);
    else
      QueryPerformanceFrequency(this + 35);
  }
  else
  {
    v4 = AnalogExclusiveTokenEvent | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, v4, 0x64u, 0LL);
  }
  return v4;
}
