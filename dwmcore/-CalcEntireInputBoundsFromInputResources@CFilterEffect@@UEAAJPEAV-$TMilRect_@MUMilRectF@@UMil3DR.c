/*
 * XREFs of ?CalcEntireInputBoundsFromInputResources@CFilterEffect@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x180218050
 * Callers:
 *     <none>
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180040360 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180097680 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800C35E0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800C3DD8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CFilterEffect::CalcEntireInputBoundsFromInputResources(__int64 a1, __int128 *a2, CMILMatrix *a3)
{
  int v3; // eax
  int v5; // xmm6_4
  unsigned int v6; // r13d
  int v7; // xmm7_4
  unsigned int v8; // r14d
  int v9; // xmm8_4
  int v10; // xmm9_4
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // rax
  __int128 v14; // xmm0
  int v15; // eax
  __int64 v16; // rcx
  float *v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r10
  __int64 v21; // r15
  __int64 v22; // rbx
  int v23; // r12d
  __int64 v24; // rcx
  char v25; // al
  _OWORD *v26; // rsi
  bool v27; // zf
  __int64 v28; // rax
  __int128 v29; // xmm0
  int v30; // eax
  __int64 v31; // rcx
  unsigned int v32; // eax
  __m128i v33; // xmm0
  int v34; // eax
  unsigned int v35; // r8d
  int v36; // esi
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  unsigned int v44; // [rsp+28h] [rbp-E0h]
  __int128 v45; // [rsp+38h] [rbp-D0h] BYREF
  int v46; // [rsp+48h] [rbp-C0h]
  __int64 v47; // [rsp+4Ch] [rbp-BCh]
  CMILMatrix *v48; // [rsp+58h] [rbp-B0h]
  __int128 *v49; // [rsp+60h] [rbp-A8h]
  __m256i v50; // [rsp+68h] [rbp-A0h] BYREF
  int v51; // [rsp+88h] [rbp-80h]
  __int64 v52; // [rsp+90h] [rbp-78h] BYREF
  int v53; // [rsp+98h] [rbp-70h]
  int v54; // [rsp+9Ch] [rbp-6Ch]
  _BYTE v55[20]; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v56; // [rsp+B8h] [rbp-50h] BYREF
  _DWORD v57[4]; // [rsp+C8h] [rbp-40h] BYREF

  v3 = *(_DWORD *)(a1 + 32);
  v5 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v6 = 0;
  v7 = DWORD1(TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
  v8 = 0;
  v9 = DWORD2(TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
  v10 = HIDWORD(TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
  v46 = 0;
  v52 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v11 = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6u;
  *(_DWORD *)(a1 + 32) = v11;
  LOBYTE(v11) = (v3 ^ (v3 ^ (v3 + 2)) & 6) & 6;
  v53 = v9;
  v54 = v10;
  v48 = a3;
  v49 = a2;
  v47 = 0LL;
  v45 = 0LL;
  if ( (_BYTE)v11 != 2 )
  {
    v12 = -2147467259;
    v44 = 521;
LABEL_3:
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v12, v44, 0LL);
    goto LABEL_14;
  }
  v13 = *(int *)(a1 + 152);
  if ( !(_DWORD)v13 )
  {
    v14 = *a2;
    *(_DWORD *)v55 = 0;
    *(_OWORD *)&v55[4] = v14;
    v15 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v45, 20, 1, v55);
    v12 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xC0u, 0LL);
      v44 = 528;
      goto LABEL_3;
    }
    v8 = HIDWORD(v47);
    goto LABEL_9;
  }
  v12 = 0;
  v50.m256i_i64[0] = *(int *)(a1 + 152);
  if ( v13 <= 0 )
  {
LABEL_9:
    if ( v8 )
    {
      v17 = (float *)(v45 + 4);
      do
      {
        TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)&v52, v17);
        v17 = (float *)(v18 + 20);
      }
      while ( v19 != 1 );
      v10 = v54;
      v9 = v53;
      v7 = HIDWORD(v52);
      v5 = v52;
    }
    *(_DWORD *)(a1 + 160) = v5;
    *(_DWORD *)(a1 + 164) = v7;
    *(_DWORD *)(a1 + 168) = v9;
    *(_DWORD *)(a1 + 172) = v10;
    goto LABEL_14;
  }
  v21 = 0LL;
  while ( 1 )
  {
    v22 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v21);
    v23 = *(_DWORD *)(*(_QWORD *)(a1 + 136) + 4 * v21);
    v56 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v24 = *(_QWORD *)(v22 + 24);
    if ( v24 )
    {
      v25 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 56LL))(v24, 61LL);
      v26 = *(_OWORD **)(v22 + 24);
      v27 = v25 == 0;
      v28 = *(_QWORD *)v26;
      if ( v27 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(v28 + 56))(*(_QWORD *)(v22 + 24), 42LL) )
        {
          v12 = -2147467263;
          v44 = 573;
          goto LABEL_3;
        }
        v32 = *(_DWORD *)(v22 + 12) - *(_DWORD *)(v22 + 4);
        v57[0] = 0;
        v57[1] = 0;
        v33 = _mm_cvtsi32_si128(v32);
        v34 = *(_DWORD *)(v22 + 16) - *(_DWORD *)(v22 + 8);
        v57[2] = _mm_cvtepi32_ps(v33).m128_u32[0];
        *(float *)&v57[3] = (float)v34;
        CMILMatrix::Transform2DBoundsHelper<1>(v48, (struct MilRectF *)v57, (float *)&v56);
      }
      else
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, CMILMatrix *))(v28 + 248))(*(_QWORD *)(v22 + 24), v49, v48);
        if ( v12 < 0 )
        {
          v44 = 546;
          goto LABEL_3;
        }
        memset(&v50.m256i_u64[1], 0, 24);
        v51 = 0;
        v29 = v26[10];
        *(_DWORD *)v55 = v23;
        *(_OWORD *)&v55[4] = v29;
        v30 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v50.m256i_i64[1], 20, 1, v55);
        v12 = v30;
        if ( v30 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0xC0u, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v12, 0x226u, 0LL);
          DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v50.m256i_i64[1]);
          goto LABEL_14;
        }
        (*(void (__fastcall **)(_OWORD *, unsigned __int64 *, __int128 *))(*(_QWORD *)v26 + 216LL))(
          v26,
          &v50.m256i_u64[1],
          &v56);
        DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v50.m256i_i64[1]);
      }
    }
    else
    {
      v56 = *a2;
    }
    v35 = v8 + 1;
    *(_DWORD *)v55 = v23;
    *(_OWORD *)&v55[4] = v56;
    if ( v8 + 1 < v8 )
      break;
    v36 = 0;
    if ( v35 > v6 )
    {
      v40 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v45, 20, 1, v55);
      v36 = v40;
      v12 = v40;
      if ( v40 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40, 0xC0u, 0LL);
        goto LABEL_37;
      }
      v8 = HIDWORD(v47);
      v6 = v47;
    }
    else
    {
      v37 = v45;
      v38 = v8++;
      HIDWORD(v47) = v35;
      v39 = 5 * v38;
      *(_OWORD *)(v45 + 4 * v39) = *(_OWORD *)v55;
      *(_DWORD *)(v37 + 4 * v39 + 16) = *(_DWORD *)&v55[16];
    }
    v12 = v36;
    if ( ++v21 >= v50.m256i_i64[0] )
      goto LABEL_9;
    a2 = v49;
  }
  v12 = -2147024362;
  v36 = -2147024362;
  MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, -2147024362, 0xB5u, 0LL);
LABEL_37:
  MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v36, 0x245u, 0LL);
LABEL_14:
  *(_DWORD *)(a1 + 32) ^= (*(_DWORD *)(a1 + 32) ^ (2 * (*(_DWORD *)(a1 + 32) >> 1) - 2)) & 6;
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v45);
  return (unsigned int)v12;
}
