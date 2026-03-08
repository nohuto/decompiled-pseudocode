/*
 * XREFs of ESM_CheckingIfStopEndpontReissueCountReached @ 0x1C0051690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ESM_CheckingIfStopEndpontReissueCountReached(__int64 a1)
{
  __m128i **v1; // rdx
  __m128i *v2; // rcx
  __int64 result; // rax

  v1 = *(__m128i ***)(a1 + 960);
  v2 = *v1;
  if ( *((_DWORD *)v1 + 39) < ((_mm_srli_si128((*v1)[21], 8).m128i_u32[0] & 0x40000) != 0LL ? 50 : 20) )
    return 21LL;
  ++v2[32].m128i_i32[0];
  result = 33LL;
  ++v2[34].m128i_i32[3];
  v2[29].m128i_i8[8] = 1;
  return result;
}
