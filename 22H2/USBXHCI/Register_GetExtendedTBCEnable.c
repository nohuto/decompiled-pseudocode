/*
 * XREFs of Register_GetExtendedTBCEnable @ 0x1C001417C
 * Callers:
 *     Controller_Start @ 0x1C0011474 (Controller_Start.c)
 *     Register_GetExtendedTBCTRBStatusSupported @ 0x1C001415C (Register_GetExtendedTBCTRBStatusSupported.c)
 * Callees:
 *     <none>
 */

bool __fastcall Register_GetExtendedTBCEnable(__int64 a1)
{
  return (_mm_srli_si128(*(__m128i *)(*(_QWORD *)(a1 + 8) + 336LL), 8).m128i_u64[0] & 0x800) == 0
      && (*(_BYTE *)(a1 + 108) & 0x50) == 0x50;
}
