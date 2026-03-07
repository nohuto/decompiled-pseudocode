char __fastcall PopIsSimulateHeteroProcessorsPresent(__int64 a1)
{
  __int64 v1; // rdi
  char result; // al
  unsigned int v4; // edx
  __int64 v5; // rbx

  v1 = PpmHeteroCapabilitySimulation;
  result = 0;
  if ( PpmHeteroCapabilitySimulation )
  {
    v4 = *(_DWORD *)PpmHeteroCapabilitySimulation;
    *(_DWORD *)a1 = *(_DWORD *)PpmHeteroCapabilitySimulation;
    v5 = v4;
    *(_DWORD *)(a1 + 4) = *(_DWORD *)(v1 + 4);
    memmove(*(void **)(a1 + 8), *(const void **)(v1 + 8), v4);
    **(_WORD **)(a1 + 16) = **(_WORD **)(v1 + 16);
    memmove((void *)(a1 + 24), (const void *)(v1 + 24), 4 * v5);
    return 1;
  }
  return result;
}
