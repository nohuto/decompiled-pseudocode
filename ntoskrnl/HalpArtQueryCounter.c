/*
 * XREFs of HalpArtQueryCounter @ 0x1402D4F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall HalpArtQueryCounter(unsigned int *a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // r8

  v2 = (unsigned int)HalpTscFenceRequired;
  if ( HalpTscFenceRequired )
  {
    if ( HalpTscFenceRequired == 1 )
    {
      _mm_lfence();
    }
    else if ( HalpTscFenceRequired == 2 )
    {
      _mm_mfence();
    }
    v2 = __rdtsc();
    LODWORD(a2) = HIDWORD(v2);
    v2 = (unsigned int)v2;
    a2 = (unsigned int)a2;
  }
  else
  {
    __asm { rdtscp }
  }
  v4 = *a1;
  v5 = a1[1];
  v6 = ((a2 << 32) | v2) - __readmsr(0x3Bu);
  if ( is_mul_ok(v6, (unsigned int)v4) )
    return v6 * (unsigned __int128)(unsigned int)v4 / v5;
  if ( v6 <= v4 )
    return v6 * (v4 / v5);
  return v4 * (v6 / v5);
}
