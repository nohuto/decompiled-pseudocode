/*
 * XREFs of ScaleDPIRect @ 0x1C00089CC
 * Callers:
 *     PhysicalToLogicalDPIRect @ 0x1C00A8E10 (PhysicalToLogicalDPIRect.c)
 * Callees:
 *     EngMulDiv @ 0x1C003BF30 (EngMulDiv.c)
 */

__int64 __fastcall ScaleDPIRect(
        _DWORD *a1,
        __m128i *a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        __int64 a5,
        __int64 a6)
{
  INT v7; // r12d
  __m128i v8; // xmm6
  INT v9; // r15d
  __int64 v10; // r14
  int v11; // esi
  INT v12; // eax
  int v13; // edi
  __int64 result; // rax

  v7 = a3;
  v8 = *a2;
  v9 = a4;
  v10 = a2->m128i_i64[0];
  v11 = EngMulDiv(*(_OWORD *)a2 - a6, a3, a4) + a5;
  *a1 = v11;
  v12 = EngMulDiv(v8.m128i_i32[1] - HIDWORD(a6), v7, v9);
  v8.m128i_i64[0] = _mm_srli_si128(v8, 8).m128i_u64[0];
  v13 = v12 + HIDWORD(a5);
  a1[1] = v12 + HIDWORD(a5);
  a1[2] = v11 + EngMulDiv(v8.m128i_i32[0] - v10, v7, v9);
  result = (unsigned int)(v13 + EngMulDiv(v8.m128i_i32[1] - HIDWORD(v10), v7, v9));
  a1[3] = result;
  return result;
}
