char __fastcall RtlIsMultiSessionSku(__int64 a1, __int64 a2)
{
  if ( PsIsCurrentThreadInServerSilo(a1, a2) )
    return BYTE4(PsGetCurrentServerSiloGlobals()[82].Blink[1].Blink);
  else
    return MEMORY[0xFFFFF780000002F1] & 1;
}
