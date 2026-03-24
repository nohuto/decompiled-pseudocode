/*
 * XREFs of RemapHimetricPointsForMultiMonDigitizers @ 0x1C01E562C
 * Callers:
 *     PointerInfoCopyOutHelperInternal @ 0x1C01F1EE0 (PointerInfoCopyOutHelperInternal.c)
 * Callees:
 *     GetMonitorRect @ 0x1C0041D58 (GetMonitorRect.c)
 *     GetScreenRect @ 0x1C0122924 (GetScreenRect.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01E5CA4 (VirtualizeMultiMonDigitizerSize.c)
 */

__int64 __fastcall RemapHimetricPointsForMultiMonDigitizers(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  INT v4; // r14d
  __int64 v6; // rax
  int v7; // ecx
  __m128i v8; // xmm6
  int v9; // r15d
  INT v10; // r12d
  INT v11; // eax
  INT v12; // ebx
  int v13; // edi
  INT v14; // esi
  INT v15; // eax
  __m128i v16; // xmm6
  __m128i *ScreenRect; // rax
  __int64 v18; // rbx
  unsigned __int64 v19; // xmm0_8
  unsigned __int64 v20; // rsi
  INT v21; // edi
  INT v22; // r15d
  INT v23; // r12d
  INT v24; // edi
  INT v25; // eax
  INT v26; // ecx
  __int64 result; // rax
  INT v28; // [rsp+20h] [rbp-58h]
  INT v29; // [rsp+24h] [rbp-54h]
  INT v30; // [rsp+28h] [rbp-50h]
  INT b[4]; // [rsp+30h] [rbp-48h] BYREF
  __m128i v32; // [rsp+40h] [rbp-38h] BYREF
  __m128i v33; // [rsp+50h] [rbp-28h] BYREF
  INT v34; // [rsp+C0h] [rbp+48h]

  v4 = *(_DWORD *)(a1 + 8);
  v6 = *(_QWORD *)(a2 + 40);
  v7 = _mm_cvtsi128_si32(*(__m128i *)(v6 + 28));
  *(_OWORD *)b = *(_OWORD *)(v6 + 28);
  v8 = *(__m128i *)(*gpDispInfo + 24LL);
  v9 = _mm_cvtsi128_si32(v8);
  v10 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 8)) - v9;
  v11 = EngMulDiv(v7 - v9, v4, v10);
  v12 = *(_DWORD *)(a1 + 12);
  v13 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 4));
  v34 = v11;
  v14 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 12)) - v13;
  v30 = EngMulDiv(b[1] - v13, v12, v14);
  v28 = EngMulDiv(b[2] - v9, v4, v10);
  v15 = EngMulDiv(b[3] - v13, v12, v14);
  *(_OWORD *)b = *(_OWORD *)a1;
  v29 = v15;
  VirtualizeMultiMonDigitizerSize(b);
  v16 = *(__m128i *)GetMonitorRect(&v32, a2);
  v32 = v16;
  ScreenRect = GetScreenRect(&v33);
  v18 = ScreenRect->m128i_i64[0];
  v19 = _mm_srli_si128(*ScreenRect, 8).m128i_u64[0];
  v20 = HIDWORD(ScreenRect->m128i_i64[0]);
  v21 = v19 - ScreenRect->m128i_i64[0];
  v22 = EngMulDiv(_mm_cvtsi128_si32(v16) - ScreenRect->m128i_i64[0], b[2], v21);
  v23 = EngMulDiv(v32.m128i_i32[1] - v20, b[3], HIDWORD(v19) - v20);
  LODWORD(v18) = EngMulDiv(v32.m128i_i32[2] - v18, b[2], v21) - v22;
  v24 = EngMulDiv(v32.m128i_i32[3] - v20, b[3], HIDWORD(v19) - v20) - v23;
  *a3 = v22 + EngMulDiv(*a3 - v34, v18, v28 - v34);
  a3[1] = v23 + EngMulDiv(a3[1] - v30, v24, v29 - v30);
  v25 = EngMulDiv(*a4 - v34, v18, v28 - v34);
  v26 = a4[1] - v30;
  *a4 = v22 + v25;
  result = (unsigned int)(v23 + EngMulDiv(v26, v24, v29 - v30));
  a4[1] = result;
  return result;
}
