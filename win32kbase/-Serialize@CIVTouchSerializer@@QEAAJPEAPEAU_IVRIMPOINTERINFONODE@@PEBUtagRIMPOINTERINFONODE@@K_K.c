/*
 * XREFs of ?Serialize@CIVTouchSerializer@@QEAAJPEAPEAU_IVRIMPOINTERINFONODE@@PEBUtagRIMPOINTERINFONODE@@K_K_N@Z @ 0x1C02341DC
 * Callers:
 *     ?IVSerializeRimCompleteFrameForTouchInputPacket@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame@@U_UNICODE_STRING@@HAEAVCIVTouchSerializer@@@Z @ 0x1C021D9B8 (-IVSerializeRimCompleteFrameForTouchInputPacket@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame.c)
 * Callees:
 *     ?Ensure@CIVSerializer@@IEAA_NK@Z @ 0x1C0233430 (-Ensure@CIVSerializer@@IEAA_NK@Z.c)
 */

__int64 __fastcall CIVTouchSerializer::Serialize(
        CIVTouchSerializer *this,
        struct _IVRIMPOINTERINFONODE **a2,
        const struct tagRIMPOINTERINFONODE *a3,
        __int64 a4,
        unsigned __int64 a5)
{
  __int64 v5; // rdi
  __int64 v7; // rcx
  unsigned int v8; // r9d
  __int64 v9; // r10
  __int64 *v10; // r11
  __int64 v11; // rcx
  char *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  int v15; // eax
  __m128i v16; // xmm3
  __m128i v17; // xmm2
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __m128i v20; // xmm5
  __m128i v21; // xmm4

  v5 = *((unsigned int *)this + 3);
  if ( !CIVSerializer::Ensure(this, (a5 + 7) & 0xFFFFFFF8) )
    return 3221225495LL;
  v11 = v5 + *(_QWORD *)(v7 + 16);
  *v10 = v11;
  if ( v8 )
  {
    v12 = (char *)a3 + 10;
    v13 = v8;
    v14 = v11 + 28;
    do
    {
      *(_DWORD *)(v14 - 28) = *(_DWORD *)(v12 - 10);
      *(_WORD *)(v14 - 20) = *((_WORD *)v12 - 1);
      *(_WORD *)(v14 - 16) = *(_WORD *)v12;
      *(_DWORD *)(v14 + 124) = *(_DWORD *)(v12 + 150);
      *(_DWORD *)(v14 + 128) = *(_DWORD *)(v12 + 154);
      *(_OWORD *)(v14 + 132) = *(_OWORD *)(v12 + 158);
      v15 = *(_DWORD *)(v12 + 6);
      if ( v15 == 2 )
      {
        *(_DWORD *)(v14 + 76) = *(_DWORD *)(v12 + 102);
        *(_DWORD *)(v14 + 80) = *(_DWORD *)(v12 + 106);
        *(_OWORD *)(v14 + 84) = *(_OWORD *)(v12 + 110);
        *(_OWORD *)(v14 + 100) = *(_OWORD *)(v12 + 126);
        *(_DWORD *)(v14 + 116) = *(_DWORD *)(v12 + 142);
        *(_DWORD *)(v14 + 120) = *(_DWORD *)(v12 + 146);
      }
      else if ( v15 == 3 )
      {
        *(_DWORD *)(v14 + 76) = *(_DWORD *)(v12 + 102);
        *(_DWORD *)(v14 + 80) = *(_DWORD *)(v12 + 106);
        *(_DWORD *)(v14 + 84) = *(_DWORD *)(v12 + 110);
        *(_DWORD *)(v14 + 88) = *(_DWORD *)(v12 + 114);
        *(_DWORD *)(v14 + 92) = *(_DWORD *)(v12 + 118);
        *(_DWORD *)(v14 + 96) = *(_DWORD *)(v12 + 122);
      }
      v16 = *(__m128i *)(v12 + 70);
      v17 = *(__m128i *)(v12 + 6);
      v18 = *(_OWORD *)(v12 + 38);
      v19 = *(_OWORD *)(v12 + 54);
      v20 = *(__m128i *)(v12 + 22);
      v21 = *(__m128i *)(v12 + 86);
      v12 += 192;
      *(_DWORD *)(v14 - 12) = v17.m128i_i32[0];
      *(_DWORD *)(v14 - 8) = v17.m128i_i32[1];
      *(_DWORD *)(v14 + 44) = _mm_cvtsi128_si32(v16);
      *(_QWORD *)(v14 + 60) = v21.m128i_i64[0];
      *(_DWORD *)v14 = _mm_srli_si128(v17, 8).m128i_i32[1];
      *(_OWORD *)(v14 + 12) = v18;
      *(_OWORD *)(v14 + 28) = v19;
      *(_DWORD *)(v14 + 48) = _mm_cvtsi128_si32(_mm_srli_si128(v16, 4));
      *(_DWORD *)(v14 + 52) = _mm_cvtsi128_si32(_mm_srli_si128(v16, 8));
      *(_DWORD *)(v14 + 56) = _mm_cvtsi128_si32(_mm_srli_si128(v16, 12));
      *(_DWORD *)(v14 + 68) = _mm_cvtsi128_si32(_mm_srli_si128(v21, 8));
      *(_QWORD *)(v14 + 4) = _mm_srli_si128(v20, 8).m128i_u64[0];
      v14 += 176LL;
      --v13;
    }
    while ( v13 );
  }
  *v10 = (*v10 - *(_QWORD *)(v9 + 16)) | 1;
  return 0LL;
}
