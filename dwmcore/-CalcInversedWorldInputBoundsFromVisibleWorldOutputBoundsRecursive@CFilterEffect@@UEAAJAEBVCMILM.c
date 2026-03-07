__int64 __fastcall CFilterEffect::CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive(
        _DWORD *a1,
        CMILMatrix *a2,
        float *a3,
        __int64 a4,
        float *a5,
        float *a6)
{
  int v6; // eax
  __int128 v9; // xmm0
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rcx
  char v17; // al
  __int64 v18; // rcx
  CMILMatrix *v19; // rsi
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  unsigned int v23; // eax
  __m128i v24; // xmm0
  int v25; // eax
  float v26; // xmm2_4
  float v27; // xmm3_4
  float v28; // xmm4_4
  float v29; // xmm0_4
  unsigned int v30; // r8d
  int v31; // esi
  __int64 v32; // rcx
  __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // rcx
  float v36; // xmm0_4
  float v37; // xmm1_4
  float v38; // xmm0_4
  float v39; // xmm2_4
  float v40; // xmm0_4
  float v41; // xmm3_4
  float v42; // xmm4_4
  float v43; // xmm0_4
  __int64 v45; // rcx
  unsigned int v46; // [rsp+20h] [rbp-B9h]
  int v48; // [rsp+48h] [rbp-91h]
  __int128 v49; // [rsp+50h] [rbp-89h] BYREF
  __int64 v50; // [rsp+60h] [rbp-79h]
  unsigned int v51; // [rsp+68h] [rbp-71h]
  __int64 v52; // [rsp+70h] [rbp-69h]
  __int128 v53; // [rsp+78h] [rbp-61h] BYREF
  float v54; // [rsp+88h] [rbp-51h] BYREF
  float v55; // [rsp+8Ch] [rbp-4Dh]
  float v56; // [rsp+90h] [rbp-49h]
  float v57; // [rsp+94h] [rbp-45h]
  __int128 v58; // [rsp+98h] [rbp-41h] BYREF
  __int128 v59; // [rsp+A8h] [rbp-31h] BYREF
  _BYTE v60[20]; // [rsp+B8h] [rbp-21h] BYREF
  __int128 v61; // [rsp+D0h] [rbp-9h] BYREF

  v6 = a1[8];
  v49 = 0LL;
  v9 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v50 = 0LL;
  v10 = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(v6 + 2)) & 6u;
  v51 = 0;
  a1[8] = v10;
  LOBYTE(v10) = (v6 ^ (v6 ^ (v6 + 2)) & 6) & 6;
  v59 = v9;
  v58 = 0LL;
  v61 = 0LL;
  if ( (_BYTE)v10 != 2 )
  {
    v46 = 406;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(_DWORD *, CMILMatrix *, float *, _DWORD *, __int128 *, __int128 *))(*(_QWORD *)a1 + 256LL))(
    a1,
    a2,
    a3,
    a1 + 40,
    &v58,
    &v61);
  v12 = (int)a1[38];
  if ( !(_DWORD)v12 )
  {
    TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a5, (float *)&v58);
    v11 = 0;
    *(_OWORD *)a6 = v61;
    goto LABEL_48;
  }
  v52 = (int)a1[38];
  v11 = 0;
  v53 = 0LL;
  if ( v12 <= 0 )
  {
LABEL_36:
    (*(void (__fastcall **)(_DWORD *, __int128 *, __int128 *))(*(_QWORD *)a1 + 216LL))(a1, &v49, &v59);
    CMILMatrix::Transform2DBoundsHelper<1>(a2, (struct MilRectF *)&v59, a6);
    if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(a6) )
    {
      v36 = *a3;
      v37 = *a6;
      if ( *a3 > *a6 )
      {
        *a6 = v36;
        v37 = v36;
      }
      v38 = a3[1];
      v39 = a6[1];
      if ( v38 > v39 )
      {
        a6[1] = v38;
        v39 = v38;
      }
      v40 = a3[2];
      v41 = a6[2];
      if ( v41 > v40 )
      {
        a6[2] = v40;
        v41 = v40;
      }
      v42 = a3[3];
      v43 = a6[3];
      if ( v43 > v42 )
      {
        a6[3] = v42;
        v43 = v42;
      }
      if ( v41 <= v37 || v43 <= v39 )
      {
        *((_QWORD *)a6 + 1) = 0LL;
        *(_QWORD *)a6 = 0LL;
      }
    }
    goto LABEL_48;
  }
  v13 = 0LL;
  while ( 1 )
  {
    v14 = *((_QWORD *)a1 + 18);
    v53 = v58;
    v15 = *(_QWORD *)(v14 + 8 * v13);
    v16 = *(_QWORD *)(v15 + 24);
    v48 = *(_DWORD *)(*((_QWORD *)a1 + 17) + 4 * v13);
    if ( v16 )
    {
      v17 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 56LL))(v16, 61LL);
      v18 = *(_QWORD *)(v15 + 24);
      if ( v17 )
      {
        *(_OWORD *)v60 = v53;
        v19 = a2;
        v20 = (*(__int64 (__fastcall **)(__int64, CMILMatrix *, _BYTE *, __int64, float *, __int128 *))(*(_QWORD *)v18 + 240LL))(
                v18,
                a2,
                v60,
                v18 + 160,
                a5,
                &v53);
        v11 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x1C0u, 0LL);
          goto LABEL_48;
        }
      }
      else
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 56LL))(v18, 42LL) )
        {
          v11 = -2147467263;
          MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, -2147467263, 0x1D5u, 0LL);
          goto LABEL_48;
        }
        v23 = *(_DWORD *)(v15 + 12) - *(_DWORD *)(v15 + 4);
        v54 = 0.0;
        v55 = 0.0;
        v24 = _mm_cvtsi32_si128(v23);
        v25 = *(_DWORD *)(v15 + 16) - *(_DWORD *)(v15 + 8);
        v19 = a2;
        LODWORD(v56) = _mm_cvtepi32_ps(v24).m128_u32[0];
        v57 = (float)v25;
        CMILMatrix::Transform2DBoundsHelper<1>(a2, (struct MilRectF *)&v54, &v54);
        v26 = *(float *)&v53;
        if ( v54 > *(float *)&v53 )
        {
          *(float *)&v53 = v54;
          v26 = v54;
        }
        v27 = *((float *)&v53 + 1);
        if ( v55 > *((float *)&v53 + 1) )
        {
          *((float *)&v53 + 1) = v55;
          v27 = v55;
        }
        v28 = *((float *)&v53 + 2);
        if ( *((float *)&v53 + 2) > v56 )
        {
          *((float *)&v53 + 2) = v56;
          v28 = v56;
        }
        v29 = *((float *)&v53 + 3);
        if ( *((float *)&v53 + 3) > v57 )
        {
          *((float *)&v53 + 3) = v57;
          v29 = v57;
        }
        if ( v28 <= v26 || v29 <= v27 )
          v53 = 0uLL;
        TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a5, (float *)&v53);
      }
    }
    else
    {
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a5, (float *)&v53);
      v19 = a2;
    }
    if ( (float)(*((float *)&v53 + 2) - *(float *)&v53) <= 0.0000099999997
      || (float)(*((float *)&v53 + 3) - *((float *)&v53 + 1)) <= 0.0000099999997 )
    {
      goto LABEL_35;
    }
    if ( !(unsigned __int8)CFilterEffect::InvertTransformToCalc2DBounds(v19, &v53, &v53) )
      break;
    *(_DWORD *)v60 = v48;
    *(_OWORD *)&v60[4] = v53;
    v30 = v51 + 1;
    if ( v51 + 1 < v51 )
    {
      v11 = -2147024362;
      v31 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024362, 0xB5u, 0LL);
      goto LABEL_52;
    }
    v31 = 0;
    if ( v30 > HIDWORD(v50) )
    {
      v34 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v49, 20, 1, v60);
      v31 = v34;
      v11 = v34;
      if ( v34 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0xC0u, 0LL);
LABEL_52:
        MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, v31, 0x1E7u, 0LL);
        goto LABEL_48;
      }
    }
    else
    {
      v32 = v49;
      v33 = 5LL * v51;
      *(_OWORD *)(v49 + 4 * v33) = *(_OWORD *)v60;
      *(_DWORD *)(v32 + 4 * v33 + 16) = *(_DWORD *)&v60[16];
      v51 = v30;
    }
    v11 = v31;
LABEL_35:
    if ( ++v13 >= v52 )
      goto LABEL_36;
  }
  v46 = 484;
LABEL_3:
  v11 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147467259, v46, 0LL);
LABEL_48:
  a1[8] ^= (a1[8] ^ (2 * (a1[8] >> 1) - 2)) & 6;
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v49);
  return v11;
}
