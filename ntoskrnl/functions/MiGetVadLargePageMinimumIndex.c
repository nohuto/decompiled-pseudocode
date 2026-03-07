__int64 __fastcall MiGetVadLargePageMinimumIndex(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // rcx

  v1 = *(_DWORD *)(a1 + 48);
  v2 = (v1 >> 19) & 3;
  if ( LODWORD(MiVadPageSizes[v2]) == 16 )
    return 2LL;
  if ( (v1 & 0xA00000) == 0xA00000 )
    return (unsigned int)MiVadPageIndices[v2];
  return 1LL;
}
