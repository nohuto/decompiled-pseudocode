/*
 * XREFs of RtlpFcQueryAllInternalFeatureConfigurationsFromBuffers @ 0x14040C200
 * Callers:
 *     RtlQueryAllInternalFeatureConfigurations @ 0x14040BAE0 (RtlQueryAllInternalFeatureConfigurations.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

__int64 __fastcall RtlpFcQueryAllInternalFeatureConfigurationsFromBuffers(__int64 a1, void *a2, unsigned __int64 *a3)
{
  unsigned int v4; // ebx
  unsigned int *v5; // rdx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax

  v4 = 0;
  v5 = *(unsigned int **)(a1 + 8);
  if ( v5 )
  {
    v6 = *v5;
    v7 = *a3;
    *a3 = v6;
    if ( v6 <= v7 )
      memmove(a2, v5 + 1, 16LL * *v5);
    else
      return (unsigned int)-2147483643;
  }
  else
  {
    *a3 = 0LL;
  }
  return v4;
}
