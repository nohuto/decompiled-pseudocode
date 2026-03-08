/*
 * XREFs of EtwpCleanupSiloState @ 0x1409E04E0
 * Callers:
 *     EtwpPreInitializeSiloState @ 0x14084497C (EtwpPreInitializeSiloState.c)
 *     EtwCleanupSiloState @ 0x1409DEED0 (EtwCleanupSiloState.c)
 *     EtwInitializeSiloState @ 0x1409DF038 (EtwInitializeSiloState.c)
 * Callees:
 *     ExFreeCacheAwareRundownProtection @ 0x14028E220 (ExFreeCacheAwareRundownProtection.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCleanupSiloState(_QWORD *P)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  PEX_RUNDOWN_REF_CACHE_AWARE *v5; // rcx
  __int64 i; // rdi

  if ( P )
  {
    v2 = (void *)P[527];
    if ( v2 )
      ExFreePoolWithTag(v2, 0x61777445u);
    v3 = (void *)P[514];
    if ( v3 )
      ExFreePoolWithTag(v3, 0x50777445u);
    v4 = (void *)P[518];
    if ( v4 )
      ExFreePoolWithTag(v4, 0x61777445u);
    v5 = (PEX_RUNDOWN_REF_CACHE_AWARE *)P[56];
    if ( v5 )
    {
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 4); i = (unsigned int)(i + 1) )
      {
        if ( v5[i] )
        {
          ExFreeCacheAwareRundownProtection(v5[i]);
          v5 = (PEX_RUNDOWN_REF_CACHE_AWARE *)P[56];
        }
      }
      ExFreePoolWithTag(v5, 0x61777445u);
    }
    ExFreePoolWithTag(P, 0x61777445u);
  }
}
