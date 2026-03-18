/*
 * XREFs of ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C02A51B0
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C015154C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C02A583C (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02A5B8C (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C001713C (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0017E64 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0019ED8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C001EC98 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     bFToL @ 0x1C00E82E4 (bFToL.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 */

void __fastcall RFONTOBJ::ComputeEUDCLogfont(RFONTOBJ *this, struct _EUDCLOGFONT *a2, struct XDCOBJ *a3)
{
  struct XDCOBJ *v4; // rsi
  struct HLFONT__ *v6; // rdx
  HDC *v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rdx
  int v11; // r13d
  bool v12; // zf
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  __m128i v19; // xmm0
  __int64 v20; // r14
  int v21; // r8d
  int v22; // esi
  int v23; // eax
  int v24; // eax
  unsigned int v25; // r8d
  int v26; // r12d
  float v27; // xmm0_4
  int v28; // eax
  float v29; // xmm2_4
  float v30; // xmm1_4
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rcx
  unsigned int v34; // r8d
  unsigned int v35; // eax
  __int64 v36; // rcx
  int v37; // r8d
  int v38; // r9d
  __int64 v39; // [rsp+20h] [rbp-59h]
  _BYTE v40[16]; // [rsp+28h] [rbp-51h] BYREF
  _BYTE v41[40]; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v42[5]; // [rsp+60h] [rbp-19h] BYREF
  int v43; // [rsp+88h] [rbp+Fh]
  __int64 v44; // [rsp+E0h] [rbp+67h] BYREF
  struct XDCOBJ *v45; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v46; // [rsp+F8h] [rbp+7Fh] BYREF

  v45 = a3;
  v4 = a3;
  v6 = *(struct HLFONT__ **)(*(_QWORD *)a3 + 1744LL);
  v44 = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v46, v6, (struct PDEVOBJ *)&v44);
  v7 = *(HDC **)v4;
  v44 = *(_QWORD *)this;
  v8 = *(_QWORD *)(v44 + 120);
  DCOBJ::DCOBJ((DCOBJ *)v40, *v7);
  IFIOBJR::IFIOBJR(
    (IFIOBJR *)v42,
    *(const struct _IFIMETRICS **)(v8 + 32),
    (struct RFONTOBJ *)&v44,
    (struct DCOBJ *)v40);
  v9 = v46;
  if ( !v46 )
    goto LABEL_61;
  v10 = v42[0];
  v39 = v42[0];
  *(_DWORD *)a2 = *(unsigned __int16 *)(v42[0] + 52LL);
  *((_DWORD *)a2 + 1) = *(_DWORD *)(*(_QWORD *)this + 12LL);
  *((_DWORD *)a2 + 3) = *(_DWORD *)(v9 + 276);
  *((_DWORD *)a2 + 2) = *(_DWORD *)(v9 + 280);
  *((_DWORD *)a2 + 4) = *(_DWORD *)(v9 + 284);
  *((_DWORD *)a2 + 5) = *(_DWORD *)(v9 + 288);
  *((_DWORD *)a2 + 7) = 1065353216;
  v11 = *(_DWORD *)(v10 + 48) & 0x401000;
  v12 = (*(_DWORD *)(v10 + 48) & 0x3000010) == 0;
  *((_DWORD *)a2 + 6) = *(_DWORD *)(v10 + 48) & 0x3000010;
  if ( !v12 )
  {
    v20 = *(_QWORD *)this;
    v21 = *(_DWORD *)(*(_QWORD *)this + 324LL);
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 976LL) + 340LL) & 0x802) == 0x802 )
    {
      v22 = (v21 + 8) >> 4;
    }
    else
    {
      LODWORD(v44) = 0;
      bFToL((float)v21 * *(float *)(v20 + 684), (int *)&v44, 0);
      v10 = v39;
      v22 = v44;
    }
    v23 = *(_DWORD *)(v20 + 380);
    LODWORD(v44) = 0;
    if ( v23 == 0x80000000 )
    {
      v24 = *(__int16 *)(v10 + 56);
      LODWORD(v46) = *(_DWORD *)(v20 + 216);
      bFToL((float)v24 * *(float *)&v46, (int *)&v44, 0);
      v26 = v22 - v44;
      if ( !v11 || gbJpn98FixPitch != v25 )
        goto LABEL_33;
      LODWORD(v46) = *(_DWORD *)(v20 + 212);
      v27 = (float)v43 * *(float *)&v46;
    }
    else
    {
      bFToL((float)v23 * *(float *)(v20 + 684), (int *)&v44, 0);
      v26 = v44;
      if ( !v11 || gbJpn98FixPitch != v25 )
        goto LABEL_33;
      v27 = (float)*(int *)(v20 + 388) * *(float *)(v20 + 680);
    }
    LODWORD(v44) = v25 & v44;
    bFToL(v27, (int *)&v44, v25);
    *((_DWORD *)a2 + 2) = v44;
LABEL_33:
    if ( v26 >= 0 )
      v28 = v22 - v26;
    else
      v28 = v22 + v26;
    *((_DWORD *)a2 + 3) = v28;
    if ( v28 > 13 )
      goto LABEL_44;
    if ( v28 == 11 )
    {
      v28 = 12;
      if ( v22 < 12 )
        goto LABEL_44;
    }
    else
    {
      if ( v28 != 13 )
        goto LABEL_44;
      if ( v22 >= 15 )
        v28 = 15;
    }
    *((_DWORD *)a2 + 3) = v28;
LABEL_44:
    if ( *(_DWORD *)(v9 + 280) && !v11 )
    {
      *((_DWORD *)a2 + 2) = 0;
      v29 = *(float *)(*(_QWORD *)this + 152LL);
      v30 = *(float *)(*(_QWORD *)this + 136LL);
      *(float *)&v44 = v29;
      if ( EFLOAT::bIsZero((EFLOAT *)&v44) )
      {
        v30 = *(float *)(v31 + 140);
        v29 = *(float *)(v31 + 156);
      }
      *((float *)a2 + 7) = v30 / v29;
    }
    v4 = v45;
    goto LABEL_50;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 976LL) + 340LL) & 0x802) != 0x802 )
  {
    if ( v11 )
    {
      v17 = 16 * *(__int16 *)(v10 + 76);
      LODWORD(v45) = 0;
      bFToL((float)v17 * *(float *)(*(_QWORD *)this + 680LL), (int *)&v45, 0);
      *((_DWORD *)a2 + 2) = (_DWORD)v45;
    }
    v18 = *(_QWORD *)this;
    LODWORD(v45) = 0;
    if ( (ulFontLinkControl & 0x4000) != 0 )
      v19 = _mm_cvtsi32_si128(*(_DWORD *)(v18 + 324));
    else
      v19 = _mm_cvtsi32_si128(*(_DWORD *)(v18 + 316));
    bFToL(_mm_cvtepi32_ps(v19).m128_f32[0] * *(float *)(v18 + 684), (int *)&v45, 0);
    *((_DWORD *)a2 + 3) = (_DWORD)v45;
    goto LABEL_20;
  }
  if ( v11 )
    *((_DWORD *)a2 + 2) = *(__int16 *)(v10 + 76);
  v13 = _wcsicmp((const wchar_t *)(v10 + *(int *)(v10 + 16)), L"Ms Sans Serif");
  v14 = *(_QWORD *)this;
  if ( v13 )
  {
    if ( (ulFontLinkControl & 0x4000) != 0 )
    {
      v16 = *(_DWORD *)(v14 + 324);
LABEL_12:
      v15 = (v16 + 8) >> 4;
      goto LABEL_13;
    }
LABEL_11:
    v16 = *(_DWORD *)(v14 + 316);
    goto LABEL_12;
  }
  if ( (unsigned int)(*(_DWORD *)(v14 + 324) - 193) > 0x4E )
    goto LABEL_11;
  v15 = 12;
LABEL_13:
  *((_DWORD *)a2 + 3) = v15;
LABEL_20:
  if ( v11 )
    *((_DWORD *)a2 + 2) *= *(_DWORD *)(*(_QWORD *)this + 648LL);
LABEL_50:
  v32 = *(_DWORD *)(v39 + 48);
  if ( (v32 & 0x10) == 0 )
  {
    if ( (v32 & 0x200000) != 0 )
    {
      v33 = *((unsigned int *)a2 + 5);
      if ( (_DWORD)v33 )
      {
        v34 = lNormAngle(v33);
        v35 = 900 * (v34 / 0x384);
        *((_DWORD *)a2 + 5) = v35;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 976LL) + 340LL) & 0x40) != 0 && v34 != v35 )
          *((_DWORD *)a2 + 5) = lNormAngle(v35 + 900);
      }
      v36 = *((unsigned int *)a2 + 4);
      if ( (_DWORD)v36 )
      {
        v37 = lNormAngle(v36);
        v38 = 900 * (v37 / 900);
        *((_DWORD *)a2 + 4) = v38;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 976LL) + 340LL) & 0x40) != 0 && v37 != v38 )
          *((_DWORD *)a2 + 4) = lNormAngle((unsigned int)(v38 + 900));
      }
    }
    else
    {
      *((_QWORD *)a2 + 2) = 0LL;
    }
  }
LABEL_61:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v40);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v41);
  v44 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v44);
  if ( v9 )
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v9);
}
