__int64 __fastcall ACPIInternalInterruptPolarityCacheStorePolaritiesFromList(__int64 a1, __int64 a2)
{
  unsigned int v4; // r14d
  __int64 i; // rdi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  __int64 result; // rax

  if ( gAcpiHonorBiosPolarities )
  {
    v4 = 0;
    for ( i = a2 + 32; v4 < *(_DWORD *)(a2 + 28); i += 32LL * *(unsigned int *)(i + 4) + 8 )
    {
      v6 = i + 8;
      v7 = i + 8 + 32LL * *(unsigned int *)(i + 4);
      while ( v6 < v7 )
      {
        if ( *(_BYTE *)(v6 + 1) == 2 )
        {
          result = ACPIInternalInterruptPolarityCacheStorePolarity(
                     a1,
                     *(unsigned int *)(v6 + 12),
                     *(unsigned int *)(v6 + 16));
          if ( (int)result < 0 )
            return result;
        }
        v6 += 32LL;
      }
      ++v4;
    }
  }
  return 0LL;
}
