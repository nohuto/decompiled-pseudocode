__int64 __fastcall ESM_CheckingIfFasterRetriesOnStopEpFailuresSet1(__int64 a1)
{
  return (_mm_srli_si128(*(__m128i *)(**(_QWORD **)(a1 + 960) + 336LL), 8).m128i_u32[0] & 0x40000) != 0LL ? 33 : 21;
}
