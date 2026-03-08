/*
 * XREFs of HalpMceBarrierWait @ 0x14050196C
 * Callers:
 *     HalpMceHandlerWithRendezvous @ 0x140501CF0 (HalpMceHandlerWithRendezvous.c)
 * Callees:
 *     <none>
 */

char __fastcall HalpMceBarrierWait(_DWORD *a1, int a2, int a3)
{
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rax

  if ( !a3 || HalpMceBarrierTimeoutDisabled )
  {
    while ( *a1 < a2 )
      _mm_pause();
  }
  else
  {
    v3 = *(_QWORD *)KeGetPcr()->HalReserved * a3 / 0x3E8uLL;
    v4 = __rdtsc();
    v5 = v4;
    while ( *a1 < a2 )
    {
      v6 = __rdtsc();
      if ( v6 - v5 <= v3 >> 1 )
      {
        if ( v6 - v4 > v3 )
          return 0;
      }
      else
      {
        v4 = v6;
      }
      v5 = v6;
      _mm_pause();
    }
  }
  return 1;
}
