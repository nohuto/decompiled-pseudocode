/*
 * XREFs of ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C00E8C04
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00E7AAC (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C02A7164 (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02A7388 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C00986B8 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009AE74 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C009B920 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C009BFA8 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     bFToL @ 0x1C00FB1E8 (bFToL.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016A21C (--1MDCOBJ@@QEAA@XZ.c)
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
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  _DWORD *v19; // r14
  int v20; // esi
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // r12d
  int v25; // ecx
  int v26; // eax
  float v27; // xmm2_4
  float v28; // xmm1_4
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rcx
  unsigned int v32; // r8d
  unsigned int v33; // eax
  __int64 v34; // rcx
  int v35; // r8d
  int v36; // r9d
  __int64 v37; // [rsp+20h] [rbp-59h]
  _BYTE v38[16]; // [rsp+28h] [rbp-51h] BYREF
  _BYTE v39[40]; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v40[5]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v41; // [rsp+E0h] [rbp+67h] BYREF
  struct XDCOBJ *v42; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v43; // [rsp+F8h] [rbp+7Fh] BYREF

  v42 = a3;
  v4 = a3;
  v6 = *(struct HLFONT__ **)(*(_QWORD *)a3 + 1752LL);
  v41 = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v43, v6, (struct PDEVOBJ *)&v41);
  v7 = *(HDC **)v4;
  v41 = *(_QWORD *)this;
  v8 = *(_QWORD *)(v41 + 120);
  DCOBJ::DCOBJ((DCOBJ *)v38, *v7);
  IFIOBJR::IFIOBJR(
    (IFIOBJR *)v40,
    *(const struct _IFIMETRICS **)(v8 + 32),
    (struct RFONTOBJ *)&v41,
    (struct DCOBJ *)v38);
  v9 = v43;
  if ( !v43 )
    goto LABEL_56;
  v10 = v40[0];
  v37 = v40[0];
  *(_DWORD *)a2 = *(unsigned __int16 *)(v40[0] + 52LL);
  *((_DWORD *)a2 + 1) = *(_DWORD *)(*(_QWORD *)this + 12LL);
  *((_DWORD *)a2 + 3) = *(_DWORD *)(v9 + 276);
  *((_DWORD *)a2 + 2) = *(_DWORD *)(v9 + 280);
  *((_DWORD *)a2 + 4) = *(_DWORD *)(v9 + 284);
  *((_DWORD *)a2 + 5) = *(_DWORD *)(v9 + 288);
  *((_DWORD *)a2 + 7) = 1065353216;
  v11 = *(_DWORD *)(v10 + 48) & 0x401000;
  v12 = (*(_DWORD *)(v10 + 48) & 0x3000010) == 0;
  *((_DWORD *)a2 + 6) = *(_DWORD *)(v10 + 48) & 0x3000010;
  v13 = 2050LL;
  if ( !v12 )
  {
    v19 = *(_DWORD **)this;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 976LL) + 340LL) & 0x802) == 0x802 )
    {
      v20 = (*(_DWORD *)(*(_QWORD *)this + 324LL) + 8) >> 4;
    }
    else
    {
      LODWORD(v41) = 0;
      bFToL(2050LL, &v41, 0LL);
      v20 = v41;
    }
    v21 = v19[95];
    LODWORD(v41) = 0;
    if ( v21 == 0x80000000 )
    {
      LODWORD(v43) = v19[54];
      bFToL(v13, &v41, 0LL);
      v24 = v20 - v41;
      if ( v11 && gbJpn98FixPitch == (_DWORD)v23 )
      {
        LODWORD(v43) = v19[53];
LABEL_28:
        LODWORD(v41) = v23 & v41;
        bFToL(v22, &v41, v23);
        *((_DWORD *)a2 + 2) = v41;
      }
    }
    else
    {
      bFToL(v13, &v41, 0LL);
      v24 = v41;
      if ( v11 && gbJpn98FixPitch == (_DWORD)v23 )
        goto LABEL_28;
    }
    v25 = v20 + v24;
    if ( v24 >= 0 )
      v25 = v20 - v24;
    *((_DWORD *)a2 + 3) = v25;
    if ( v25 > 13 )
      goto LABEL_39;
    if ( v25 == 11 )
    {
      v26 = 12;
      if ( v20 < 12 )
        goto LABEL_39;
    }
    else
    {
      if ( v25 != 13 )
        goto LABEL_39;
      v26 = 13;
      if ( v20 >= 15 )
        v26 = 15;
    }
    *((_DWORD *)a2 + 3) = v26;
LABEL_39:
    if ( *(_DWORD *)(v9 + 280) && !v11 )
    {
      *((_DWORD *)a2 + 2) = 0;
      v27 = *(float *)(*(_QWORD *)this + 152LL);
      v28 = *(float *)(*(_QWORD *)this + 136LL);
      *(float *)&v41 = v27;
      if ( EFLOAT::bIsZero((EFLOAT *)&v41) )
      {
        v28 = *(float *)(v29 + 140);
        v27 = *(float *)(v29 + 156);
      }
      *((float *)a2 + 7) = v28 / v27;
    }
    v4 = v42;
    goto LABEL_45;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 976LL) + 340LL) & 0x802) != 0x802 )
  {
    if ( v11 )
    {
      LODWORD(v42) = 0;
      bFToL(2050LL, &v42, 0LL);
      *((_DWORD *)a2 + 2) = (_DWORD)v42;
    }
    v18 = *(_QWORD *)this;
    LODWORD(v42) = 0;
    bFToL(v18, &v42, 0LL);
    *((_DWORD *)a2 + 3) = (_DWORD)v42;
    goto LABEL_17;
  }
  if ( v11 )
    *((_DWORD *)a2 + 2) = *(__int16 *)(v10 + 76);
  v14 = _wcsicmp((const wchar_t *)(v10 + *(int *)(v10 + 16)), L"Ms Sans Serif");
  v15 = *(_QWORD *)this;
  if ( v14 )
  {
    if ( (ulFontLinkControl & 0x4000) != 0 )
    {
      v17 = *(_DWORD *)(v15 + 324);
LABEL_12:
      v16 = (v17 + 8) >> 4;
      goto LABEL_13;
    }
LABEL_11:
    v17 = *(_DWORD *)(v15 + 316);
    goto LABEL_12;
  }
  if ( (unsigned int)(*(_DWORD *)(v15 + 324) - 193) > 0x4E )
    goto LABEL_11;
  v16 = 12;
LABEL_13:
  *((_DWORD *)a2 + 3) = v16;
LABEL_17:
  if ( v11 )
    *((_DWORD *)a2 + 2) *= *(_DWORD *)(*(_QWORD *)this + 648LL);
LABEL_45:
  v30 = *(_DWORD *)(v37 + 48);
  if ( (v30 & 0x10) == 0 )
  {
    if ( (v30 & 0x200000) != 0 )
    {
      v31 = *((unsigned int *)a2 + 5);
      if ( (_DWORD)v31 )
      {
        v32 = lNormAngle(v31);
        v33 = 900 * (v32 / 0x384);
        *((_DWORD *)a2 + 5) = v33;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 976LL) + 340LL) & 0x40) != 0 && v32 != v33 )
          *((_DWORD *)a2 + 5) = lNormAngle(v33 + 900);
      }
      v34 = *((unsigned int *)a2 + 4);
      if ( (_DWORD)v34 )
      {
        v35 = lNormAngle(v34);
        v36 = 900 * (v35 / 900);
        *((_DWORD *)a2 + 4) = v36;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 976LL) + 340LL) & 0x40) != 0 && v35 != v36 )
          *((_DWORD *)a2 + 4) = lNormAngle((unsigned int)(v36 + 900));
      }
    }
    else
    {
      *((_QWORD *)a2 + 2) = 0LL;
    }
  }
LABEL_56:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v38);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v39);
  v41 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v41);
  if ( v9 )
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v9);
}
