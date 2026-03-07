void __fastcall RFONTOBJ::ComputeEUDCLogfont(RFONTOBJ *this, struct _EUDCLOGFONT *a2, struct XDCOBJ *a3)
{
  struct XDCOBJ *v4; // r15
  struct HLFONT__ *v6; // rdx
  struct LFONT *v7; // rbx
  __int64 v8; // r12
  __int64 v9; // rcx
  int v10; // r13d
  __int64 v11; // rax
  bool v12; // zf
  __int64 v13; // rsi
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rcx
  __m128i v21; // xmm0
  __int64 v22; // r15
  int v23; // r8d
  float *v24; // rdx
  int v25; // esi
  int v26; // eax
  int v27; // eax
  unsigned int v28; // r8d
  int v29; // r12d
  float v30; // xmm0_4
  int v31; // eax
  float v32; // xmm2_4
  float v33; // xmm1_4
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // rcx
  unsigned int v37; // r8d
  unsigned int v38; // eax
  __int64 v39; // rcx
  int v40; // r8d
  int v41; // r9d
  __int64 v42; // [rsp+20h] [rbp-50h]
  __int64 v43; // [rsp+28h] [rbp-48h]
  _QWORD v44[5]; // [rsp+30h] [rbp-40h] BYREF
  int v45; // [rsp+58h] [rbp-18h]
  __int64 v46; // [rsp+B0h] [rbp+40h] BYREF
  struct XDCOBJ *v47; // [rsp+C0h] [rbp+50h] BYREF
  struct LFONT *v48; // [rsp+C8h] [rbp+58h] BYREF

  v47 = a3;
  v4 = a3;
  v6 = *(struct HLFONT__ **)(*(_QWORD *)a3 + 1744LL);
  v46 = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v48, v6, (struct PDEVOBJ *)&v46);
  v46 = *(_QWORD *)this;
  IFIOBJR::IFIOBJR(
    (IFIOBJR *)v44,
    *(const struct _IFIMETRICS **)(*(_QWORD *)(v46 + 120) + 32LL),
    (struct RFONTOBJ *)&v46,
    v4);
  v7 = v48;
  if ( !v48 )
  {
    v46 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v46);
    LFONTOBJ::~LFONTOBJ(&v48);
    return;
  }
  v8 = v44[0];
  v42 = v44[0];
  *(_DWORD *)a2 = *(unsigned __int16 *)(v44[0] + 52LL);
  v9 = *(unsigned int *)(*(_QWORD *)this + 12LL);
  *((_DWORD *)a2 + 1) = v9;
  *((_DWORD *)a2 + 3) = *((_DWORD *)v7 + 69);
  *((_DWORD *)a2 + 2) = *((_DWORD *)v7 + 70);
  *((_DWORD *)a2 + 4) = *((_DWORD *)v7 + 71);
  *((_DWORD *)a2 + 5) = *((_DWORD *)v7 + 72);
  *((_DWORD *)a2 + 7) = 1065353216;
  v10 = *(_DWORD *)(v8 + 48) & 0x401000;
  v11 = SGDGetSessionState(v9);
  v12 = (*(_DWORD *)(v8 + 48) & 0x3000010) == 0;
  v13 = *(_QWORD *)(v11 + 32);
  *((_DWORD *)a2 + 6) = *(_DWORD *)(v8 + 48) & 0x3000010;
  v43 = v13;
  v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 976LL) + 340LL);
  if ( !v12 )
  {
    v22 = *(_QWORD *)this;
    v23 = *(_DWORD *)(*(_QWORD *)this + 324LL);
    v24 = (float *)(*(_QWORD *)this + 684LL);
    if ( (v14 & 0x802) == 0x802 )
    {
      v25 = (v23 + 8) >> 4;
    }
    else
    {
      LODWORD(v46) = 0;
      bFToL((float)v23 * *v24, (int *)&v46, 0);
      v25 = v46;
      v24 = (float *)(v22 + 684);
    }
    LODWORD(v46) = 0;
    v26 = *(_DWORD *)(v22 + 380);
    if ( v26 == 0x80000000 )
    {
      v27 = *(__int16 *)(v8 + 56);
      LODWORD(v48) = *(_DWORD *)(v22 + 216);
      bFToL((float)v27 * *(float *)&v48, (int *)&v46, 0);
      v29 = v25 - v46;
      if ( !v10 || *(_DWORD *)(v43 + 19400) != v28 )
        goto LABEL_34;
      LODWORD(v48) = *(_DWORD *)(v22 + 212);
      v30 = (float)v45 * *(float *)&v48;
    }
    else
    {
      bFToL((float)v26 * *v24, (int *)&v46, 0);
      v29 = v46;
      if ( !v10 || *(_DWORD *)(v43 + 19400) != v28 )
        goto LABEL_34;
      v30 = (float)*(int *)(v22 + 388) * *(float *)(v22 + 680);
    }
    LODWORD(v46) = v28 & v46;
    bFToL(v30, (int *)&v46, v28);
    *((_DWORD *)a2 + 2) = v46;
LABEL_34:
    if ( v29 >= 0 )
      v31 = v25 - v29;
    else
      v31 = v25 + v29;
    *((_DWORD *)a2 + 3) = v31;
    if ( v31 > 13 )
      goto LABEL_45;
    if ( v31 == 11 )
    {
      v31 = 12;
      if ( v25 < 12 )
        goto LABEL_45;
    }
    else
    {
      if ( v31 != 13 )
        goto LABEL_45;
      if ( v25 >= 15 )
        v31 = 15;
    }
    *((_DWORD *)a2 + 3) = v31;
LABEL_45:
    if ( *((_DWORD *)v7 + 70) && !v10 )
    {
      *((_DWORD *)a2 + 2) = 0;
      v32 = *(float *)(*(_QWORD *)this + 152LL);
      v33 = *(float *)(*(_QWORD *)this + 136LL);
      *(float *)&v46 = v32;
      if ( EFLOAT::bIsZero((EFLOAT *)&v46) )
      {
        v33 = *(float *)(v34 + 140);
        v32 = *(float *)(v34 + 156);
      }
      *((float *)a2 + 7) = v33 / v32;
    }
    v8 = v42;
    v4 = v47;
    goto LABEL_51;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 976LL) + 340LL) & 0x802) != 0x802 )
  {
    if ( v10 )
    {
      v19 = *(__int16 *)(v8 + 76);
      LODWORD(v47) = 0;
      bFToL((float)(16 * v19) * *(float *)(*(_QWORD *)this + 680LL), (int *)&v47, 0);
      *((_DWORD *)a2 + 2) = (_DWORD)v47;
    }
    LODWORD(v47) = 0;
    v20 = *(_QWORD *)this;
    if ( (*(_DWORD *)(v13 + 13308) & 0x4000) != 0 )
      v21 = _mm_cvtsi32_si128(*(_DWORD *)(v20 + 324));
    else
      v21 = _mm_cvtsi32_si128(*(_DWORD *)(v20 + 316));
    bFToL(_mm_cvtepi32_ps(v21).m128_f32[0] * *(float *)(v20 + 684), (int *)&v47, 0);
    *((_DWORD *)a2 + 3) = (_DWORD)v47;
    goto LABEL_21;
  }
  if ( v10 )
    *((_DWORD *)a2 + 2) = *(__int16 *)(v8 + 76);
  v15 = _wcsicmp((const wchar_t *)(v8 + *(int *)(v8 + 16)), L"Ms Sans Serif");
  v16 = *(_QWORD *)this;
  if ( v15 )
  {
    if ( (*(_DWORD *)(v13 + 13308) & 0x4000) != 0 )
    {
      v18 = *(_DWORD *)(v16 + 324);
LABEL_13:
      v17 = (v18 + 8) >> 4;
      goto LABEL_14;
    }
LABEL_12:
    v18 = *(_DWORD *)(v16 + 316);
    goto LABEL_13;
  }
  if ( (unsigned int)(*(_DWORD *)(v16 + 324) - 193) > 0x4E )
    goto LABEL_12;
  v17 = 12;
LABEL_14:
  *((_DWORD *)a2 + 3) = v17;
LABEL_21:
  if ( v10 )
    *((_DWORD *)a2 + 2) *= *(_DWORD *)(*(_QWORD *)this + 648LL);
LABEL_51:
  v35 = *(_DWORD *)(v8 + 48);
  if ( (v35 & 0x10) == 0 )
  {
    if ( (v35 & 0x200000) != 0 )
    {
      v36 = *((unsigned int *)a2 + 5);
      if ( (_DWORD)v36 )
      {
        v37 = lNormAngle(v36);
        v38 = 900 * (v37 / 0x384);
        *((_DWORD *)a2 + 5) = v38;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 976LL) + 340LL) & 0x40) != 0 && v37 != v38 )
          *((_DWORD *)a2 + 5) = lNormAngle(v38 + 900);
      }
      v39 = *((unsigned int *)a2 + 4);
      if ( (_DWORD)v39 )
      {
        v40 = lNormAngle(v39);
        v41 = 900 * (v40 / 900);
        *((_DWORD *)a2 + 4) = v41;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 976LL) + 340LL) & 0x40) != 0 && v40 != v41 )
          *((_DWORD *)a2 + 4) = lNormAngle((unsigned int)(v41 + 900));
      }
    }
    else
    {
      *((_QWORD *)a2 + 2) = 0LL;
    }
  }
  v46 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v46);
  if ( v7 )
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v7);
}
