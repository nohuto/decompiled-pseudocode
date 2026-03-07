__int64 __fastcall RtlGetSuiteMask(__int64 a1, __int64 a2)
{
  if ( PsIsCurrentThreadInServerSilo(a1, a2) )
    return HIDWORD(PsGetCurrentServerSiloGlobals()[82].Blink[1].Flink);
  else
    return MEMORY[0xFFFFF780000002D0];
}
