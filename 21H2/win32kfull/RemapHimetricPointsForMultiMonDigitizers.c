/*
 * XREFs of RemapHimetricPointsForMultiMonDigitizers @ 0x1C01DFB4C
 * Callers:
 *     PointerInfoCopyOutHelperInternal @ 0x1C01ECD10 (PointerInfoCopyOutHelperInternal.c)
 * Callees:
 *     GetMonitorRect @ 0x1C007CB08 (GetMonitorRect.c)
 *     GetScreenRect @ 0x1C0110C1C (GetScreenRect.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01E01B4 (VirtualizeMultiMonDigitizerSize.c)
 */

__int64 __fastcall RemapHimetricPointsForMultiMonDigitizers(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v4; // rax
  INT v6; // ebp
  int v8; // ecx
  __m128i v9; // xmm6
  int v10; // r14d
  INT v11; // r15d
  INT v12; // eax
  INT v13; // ebx
  int v14; // edi
  INT v15; // esi
  INT v16; // eax
  __m128i v17; // xmm6
  __int64 v18; // rdx
  __m128i *ScreenRect; // rax
  __int64 v20; // rbx
  unsigned __int64 v21; // xmm0_8
  unsigned __int64 v22; // rsi
  INT v23; // edi
  INT v24; // r14d
  INT v25; // r15d
  INT v26; // edi
  INT v27; // eax
  INT v28; // ecx
  __int64 result; // rax
  INT v30; // [rsp+20h] [rbp-98h]
  INT v31; // [rsp+24h] [rbp-94h]
  INT b[4]; // [rsp+28h] [rbp-90h] BYREF
  __m128i v33; // [rsp+38h] [rbp-80h] BYREF
  __m128i v34; // [rsp+48h] [rbp-70h] BYREF
  INT v35; // [rsp+C0h] [rbp+8h]
  INT v36; // [rsp+C8h] [rbp+10h]

  v4 = *(_QWORD *)(a2 + 40);
  v6 = *(_DWORD *)(a1 + 8);
  v8 = _mm_cvtsi128_si32(*(__m128i *)(v4 + 28));
  *(_OWORD *)b = *(_OWORD *)(v4 + 28);
  v9 = *(__m128i *)(*gpDispInfo + 24LL);
  v10 = _mm_cvtsi128_si32(v9);
  v11 = _mm_cvtsi128_si32(_mm_srli_si128(v9, 8)) - v10;
  v12 = EngMulDiv(v8 - v10, v6, v11);
  v13 = *(_DWORD *)(a1 + 12);
  v14 = _mm_cvtsi128_si32(_mm_srli_si128(v9, 4));
  v36 = v12;
  v15 = _mm_cvtsi128_si32(_mm_srli_si128(v9, 12)) - v14;
  v31 = EngMulDiv(b[1] - v14, v13, v15);
  v35 = EngMulDiv(b[2] - v10, v6, v11);
  v16 = EngMulDiv(b[3] - v14, v13, v15);
  *(_OWORD *)b = *(_OWORD *)a1;
  v30 = v16;
  VirtualizeMultiMonDigitizerSize(b);
  v17 = *(__m128i *)GetMonitorRect((__int64)&v33, a2);
  v33 = v17;
  ScreenRect = GetScreenRect(&v34, v18);
  v20 = ScreenRect->m128i_i64[0];
  v21 = _mm_srli_si128(*ScreenRect, 8).m128i_u64[0];
  v22 = HIDWORD(ScreenRect->m128i_i64[0]);
  v23 = v21 - ScreenRect->m128i_i64[0];
  v24 = EngMulDiv(_mm_cvtsi128_si32(v17) - ScreenRect->m128i_i64[0], b[2], v23);
  v25 = EngMulDiv(v33.m128i_i32[1] - v22, b[3], HIDWORD(v21) - v22);
  LODWORD(v20) = EngMulDiv(v33.m128i_i32[2] - v20, b[2], v23) - v24;
  v26 = EngMulDiv(v33.m128i_i32[3] - v22, b[3], HIDWORD(v21) - v22) - v25;
  *a3 = v24 + EngMulDiv(*a3 - v36, v20, v35 - v36);
  a3[1] = v25 + EngMulDiv(a3[1] - v31, v26, v30 - v31);
  v27 = EngMulDiv(*a4 - v36, v20, v35 - v36);
  v28 = a4[1] - v31;
  *a4 = v24 + v27;
  result = (unsigned int)(v25 + EngMulDiv(v28, v26, v30 - v31));
  a4[1] = result;
  return result;
}
