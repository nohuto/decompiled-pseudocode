/*
 * XREFs of ?GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11_NPEAU9Foundation@8@PEA_N4@Z @ 0x1803DC798
 * Callers:
 *     ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundation@Windows@@00UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x1803DA6E0 (-GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundatio.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x1801C9278 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z @ 0x1803CD6BC (-IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z.c)
 *     ?GetAvoidanceRect@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@URect@Foundation@Windows@@0@Z @ 0x1803DC4A8 (-GetAvoidanceRect@ViewRectHelper@KeyboardHosting@@CA-AUtagRECT@@URect@Foundation@Windows@@0@Z.c)
 *     ?GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@9@U3@UtagSIZE@@@Z @ 0x1803DC5C8 (-GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA-AUtagRECT@@UCoreKeyboardPositionAndSizeR.c)
 */

__int64 __fastcall KeyboardHosting::ViewRectHelper::GetViewRectNearCaret(
        __int128 *a1,
        float *a2,
        __int64 a3,
        const __m128i *a4,
        char a5,
        __int64 a6,
        bool *a7,
        char *a8)
{
  char v8; // di
  __m128 v13; // xmm2
  float v14; // xmm1_4
  struct _GUID v15; // xmm1
  struct _GUID v16; // xmm0
  __m128i v17; // xmm1
  int v18; // eax
  __int128 v19; // xmm1
  int v20; // eax
  __int128 v21; // xmm0
  __int128 v22; // xmm0
  __int128 *RelativePosition; // rax
  float v24; // xmm3_4
  __m128i v25; // xmm1
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // xmm0_8
  unsigned __int64 v28; // rcx
  float v29; // xmm4_4
  float v30; // xmm1_4
  float v31; // xmm3_4
  int v32; // eax
  float v33; // xmm2_4
  float v34; // xmm1_4
  bool v35; // cc
  float v36; // xmm2_4
  float v37; // xmm4_4
  float v38; // xmm3_4
  float v39; // xmm0_4
  float v40; // xmm1_4
  __m128i v41; // xmm0
  float v42; // xmm4_4
  float v43; // xmm1_4
  float v44; // xmm0_4
  __int64 result; // rax
  __m128i v46; // [rsp+30h] [rbp-A1h] BYREF
  struct _GUID v47; // [rsp+40h] [rbp-91h] BYREF
  __m128i v48; // [rsp+50h] [rbp-81h] BYREF
  char *v49; // [rsp+60h] [rbp-71h]
  _OWORD v50[3]; // [rsp+70h] [rbp-61h] BYREF
  __int64 v51; // [rsp+A0h] [rbp-31h]
  int v52; // [rsp+A8h] [rbp-29h]
  struct _GUID v53; // [rsp+B0h] [rbp-21h] BYREF

  v8 = 0;
  *(_OWORD *)a6 = 0LL;
  *a7 = 0;
  *a8 = 0;
  v49 = a8;
  if ( a5 )
  {
    v13 = (__m128)_mm_loadu_si128(a4);
    v14 = _mm_shuffle_ps(v13, v13, 85).m128_f32[0];
    v53.Data1 = (int)v13.m128_f32[0];
    *(_DWORD *)&v53.Data2 = (int)v14;
    *(_DWORD *)v53.Data4 = (int)(float)(_mm_shuffle_ps(v13, v13, 170).m128_f32[0] + v13.m128_f32[0]);
    *(_DWORD *)&v53.Data4[4] = (int)(float)(_mm_shuffle_ps(v13, v13, 255).m128_f32[0] + v14);
  }
  else
  {
    v15 = *(struct _GUID *)a3;
    v48 = *a4;
    v53 = v15;
    v53 = (struct _GUID)*KeyboardHosting::ViewRectHelper::GetAvoidanceRect(
                           &v46,
                           (struct Windows::Foundation::Rect *)&v53,
                           (struct Windows::Foundation::Rect *)&v48);
  }
  v16 = v53;
  v48 = (__m128i)v53;
  v47 = v53;
  if ( !_tlgGuidIsZero(&v47) )
  {
    v17 = *(__m128i *)a2;
    v47.Data1 = *((_DWORD *)a1 + 2);
    v18 = *((_DWORD *)a1 + 1);
    v46 = v17;
    *(_DWORD *)&v47.Data2 = v18;
    v19 = a1[1];
    v20 = *((_DWORD *)a1 + 14);
    v53 = v16;
    v52 = v20;
    v21 = *a1;
    v50[1] = v19;
    *(_QWORD *)&v19 = *((_QWORD *)a1 + 6);
    v50[0] = v21;
    v22 = a1[2];
    v51 = v19;
    v50[2] = v22;
    RelativePosition = KeyboardHosting::ViewRectHelper::GetRelativePosition(
                         (__int128 *)&v47,
                         v50,
                         (__int64)&v46,
                         &v53,
                         *(__int64 *)&v47.Data1);
    v24 = *a2;
    v25 = (__m128i)*RelativePosition;
    v26 = *(_QWORD *)RelativePosition;
    v27 = _mm_srli_si128(v25, 8).m128i_u64[0];
    v28 = HIDWORD(v26);
    v29 = (float)(int)v26;
    v30 = (float)(int)v26;
    *(float *)(a6 + 8) = (float)((int)v27 - (int)v26);
    *(float *)(a6 + 12) = (float)(HIDWORD(v27) - HIDWORD(v26));
    if ( v24 > (float)(int)v26 )
    {
      v29 = v24;
      v30 = v24;
    }
    v31 = (float)(v24 + a2[2]) - (float)((int)v27 - (int)v26 + 1);
    if ( v30 <= v31 )
      v31 = v30;
    if ( a5 && (*((_BYTE *)a1 + 20) & 4) != 0 )
      v31 = *(float *)a4->m128i_i32;
    if ( ((*((_DWORD *)a1 + 5) - 4) & 0xFFFFFFFB) != 0 )
    {
      v32 = *((_DWORD *)a1 + 4);
      if ( (int)v28 <= v48.m128i_i32[1] )
      {
        v33 = a2[1];
        v34 = (float)((int)v28 - v32);
LABEL_15:
        v35 = v33 <= v34;
LABEL_22:
        if ( v35 )
          v33 = v34;
        *a7 = v29 != v31;
        if ( v34 != v33 )
          v8 = 1;
        *v49 = v8;
        goto LABEL_32;
      }
      v36 = a2[3] + a2[1];
      v34 = (float)((int)v28 + v32);
    }
    else
    {
      v33 = a2[1];
      v34 = (float)SHIDWORD(v26);
      if ( v33 > (float)SHIDWORD(v26) )
        v34 = a2[1];
      if ( SHIDWORD(v26) <= v48.m128i_i32[1] )
        goto LABEL_15;
      v36 = v33 + a2[3];
    }
    v33 = v36 - (float)(HIDWORD(v27) - HIDWORD(v26) + 1);
    v35 = v34 <= v33;
    goto LABEL_22;
  }
  v37 = a2[1] + a2[3];
  v38 = a2[2] + *a2;
  v39 = (float)*((int *)a1 + 2);
  v40 = (float)*((int *)a1 + 1);
  *(float *)(a6 + 8) = v39;
  v31 = v38 - v39;
  v41 = *(__m128i *)a3;
  *(float *)(a6 + 12) = v40;
  v46 = v41;
  v33 = (float)(v37 - v40) - 10.0;
  if ( !KeyboardHosting::IsRectNull((float *)v46.m128i_i32)
    || (v46 = *a4, !KeyboardHosting::IsRectNull((float *)v46.m128i_i32)) )
  {
    v43 = *(float *)(a3 + 4);
    v31 = fminf(v31, (float)*((int *)a1 + 3) + *(float *)a3);
    v44 = (float)*((int *)a1 + 4);
    if ( *((_DWORD *)a1 + 5) == 1 )
      v33 = fmaxf(a2[1], v43 - v44);
    else
      v33 = fminf(v42, v44 + v43);
  }
LABEL_32:
  *(float *)a6 = v31;
  result = 0LL;
  *(float *)(a6 + 4) = v33;
  return result;
}
