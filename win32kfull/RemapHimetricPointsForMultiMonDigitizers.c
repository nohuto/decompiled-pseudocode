/*
 * XREFs of RemapHimetricPointsForMultiMonDigitizers @ 0x1C01BAF78
 * Callers:
 *     PointerInfoCopyOutHelperInternal @ 0x1C01C7CD0 (PointerInfoCopyOutHelperInternal.c)
 * Callees:
 *     GetScreenRect @ 0x1C00E4C8C (GetScreenRect.c)
 *     GetMonitorRect @ 0x1C0101788 (GetMonitorRect.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C0145242 (VirtualizeMultiMonDigitizerSize.c)
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
  __m128i *ScreenRect; // rax
  __int64 v19; // rbx
  unsigned __int64 v20; // xmm0_8
  unsigned __int64 v21; // rsi
  INT v22; // edi
  INT v23; // r14d
  INT v24; // r15d
  INT v25; // edi
  INT v26; // eax
  INT v27; // ecx
  __int64 result; // rax
  INT v29; // [rsp+20h] [rbp-98h]
  INT v30; // [rsp+24h] [rbp-94h]
  INT b[4]; // [rsp+28h] [rbp-90h] BYREF
  __m128i v32; // [rsp+38h] [rbp-80h] BYREF
  __m128i v33; // [rsp+48h] [rbp-70h] BYREF
  INT v34; // [rsp+C0h] [rbp+8h]
  INT v35; // [rsp+C8h] [rbp+10h]

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
  v35 = v12;
  v15 = _mm_cvtsi128_si32(_mm_srli_si128(v9, 12)) - v14;
  v30 = EngMulDiv(b[1] - v14, v13, v15);
  v34 = EngMulDiv(b[2] - v10, v6, v11);
  v16 = EngMulDiv(b[3] - v14, v13, v15);
  *(_OWORD *)b = *(_OWORD *)a1;
  v29 = v16;
  VirtualizeMultiMonDigitizerSize((__int64)b);
  v17 = *(__m128i *)GetMonitorRect(v32.m128i_i64, a2);
  v32 = v17;
  ScreenRect = GetScreenRect(&v33);
  v19 = ScreenRect->m128i_i64[0];
  v20 = _mm_srli_si128(*ScreenRect, 8).m128i_u64[0];
  v21 = HIDWORD(ScreenRect->m128i_i64[0]);
  v22 = v20 - ScreenRect->m128i_i64[0];
  v23 = EngMulDiv(_mm_cvtsi128_si32(v17) - ScreenRect->m128i_i64[0], b[2], v22);
  v24 = EngMulDiv(v32.m128i_i32[1] - v21, b[3], HIDWORD(v20) - v21);
  LODWORD(v19) = EngMulDiv(v32.m128i_i32[2] - v19, b[2], v22) - v23;
  v25 = EngMulDiv(v32.m128i_i32[3] - v21, b[3], HIDWORD(v20) - v21) - v24;
  *a3 = v23 + EngMulDiv(*a3 - v35, v19, v34 - v35);
  a3[1] = v24 + EngMulDiv(a3[1] - v30, v25, v29 - v30);
  v26 = EngMulDiv(*a4 - v35, v19, v34 - v35);
  v27 = a4[1] - v30;
  *a4 = v23 + v26;
  result = (unsigned int)(v24 + EngMulDiv(v27, v25, v29 - v30));
  a4[1] = result;
  return result;
}
