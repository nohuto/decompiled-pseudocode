/*
 * XREFs of ?bIFIMetricsToTextMetricW2@@YAHAEAVDCOBJ@@PEAU_NTMW_INTERNAL@@AEAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z @ 0x1C000EAC4
 * Callers:
 *     cjCopyFontDataW @ 0x1C000E5E8 (cjCopyFontDataW.c)
 * Callees:
 *     bFToL @ 0x1C00E82E4 (bFToL.c)
 */

__int64 __fastcall bIFIMetricsToTextMetricW2(
        struct XDCOBJ *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        float a5,
        float a6,
        int a7,
        int a8)
{
  unsigned int v8; // esi
  __int64 v13; // rbx
  int v14; // edx
  __int64 v15; // r8
  unsigned int v16; // ecx
  __int64 v17; // r8
  __int64 v18; // r8
  float v19; // xmm1_4
  float v20; // xmm1_4
  unsigned int v21; // ecx
  __int64 v22; // r8
  __int64 v23; // r8
  unsigned int v24; // ecx
  __int64 v25; // r8
  __int64 v26; // r8
  __int16 v27; // cx
  unsigned int v28; // ecx
  __int64 v29; // r8
  __int64 v30; // r8
  __int64 v31; // rcx
  unsigned int v32; // r9d
  __int64 v33; // r8
  __int64 v34; // r8
  unsigned int v35; // r8d
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  int v39; // ecx
  unsigned int v40; // edx
  char v41; // al
  __int16 v42; // ax
  int v43; // ecx
  int v44; // eax
  int v45; // ecx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int16 v49; // cx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  _DWORD v56[2]; // [rsp+20h] [rbp-20h] BYREF
  _DWORD v57[2]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v58; // [rsp+30h] [rbp-10h] BYREF
  int v59; // [rsp+38h] [rbp-8h]
  int v60; // [rsp+3Ch] [rbp-4h]
  int v61; // [rsp+88h] [rbp+48h] BYREF
  int v62; // [rsp+90h] [rbp+50h] BYREF

  v8 = 0;
  v13 = *(_QWORD *)(*(_QWORD *)a3 + 32LL);
  v14 = *(__int16 *)(v13 + 60) + *(__int16 *)(v13 + 62);
  if ( v14 != 0 && *(_WORD *)(v13 + 56) != 0 )
  {
    if ( (*(_DWORD *)(v13 + 48) & 0x3000010) != 0 )
    {
      LODWORD(v15) = 0;
      a5 = (float)v14 * a6;
      v16 = (unsigned __int8)(SLODWORD(a5) >> 23);
      if ( v16 <= 0x9E )
      {
        v17 = LODWORD(a5) & 0x7FFFFFLL | 0x800000;
        v18 = v16 < 0x76 ? v17 >> (118 - (unsigned __int8)v16) : v17 << ((unsigned __int8)v16 - 118);
        v15 = (v18 + 0x80000000LL) >> 32;
        if ( a5 < 0.0 )
          LODWORD(v15) = -(int)v15;
      }
      *(_DWORD *)(a2 + 8) = v15;
      v19 = (float)(int)v15;
      LODWORD(v15) = 0;
      v20 = v19 / (float)(*(__int16 *)(v13 + 60) + *(__int16 *)(v13 + 62));
      a5 = (float)*(__int16 *)(v13 + 60) * v20;
      v21 = (unsigned __int8)(SLODWORD(a5) >> 23);
      if ( v21 <= 0x9E )
      {
        v22 = LODWORD(a5) & 0x7FFFFFLL | 0x800000;
        v23 = v21 < 0x76 ? v22 >> (118 - (unsigned __int8)v21) : v22 << ((unsigned __int8)v21 - 118);
        v15 = (v23 + 0x80000000LL) >> 32;
        if ( a5 < 0.0 )
          LODWORD(v15) = -(int)v15;
      }
      *(_DWORD *)(a2 + 12) = v15;
      LODWORD(v15) = 0;
      a5 = (float)(__int16)(*(_WORD *)(v13 + 60) + *(_WORD *)(v13 + 62) - *(_WORD *)(v13 + 56)) * v20;
      v24 = (unsigned __int8)(SLODWORD(a5) >> 23);
      if ( v24 <= 0x9E )
      {
        v25 = LODWORD(a5) & 0x7FFFFFLL | 0x800000;
        v26 = v24 < 0x76 ? v25 >> (118 - (unsigned __int8)v24) : v25 << ((unsigned __int8)v24 - 118);
        v15 = (v26 + 0x80000000LL) >> 32;
        if ( a5 < 0.0 )
          LODWORD(v15) = -(int)v15;
      }
      *(_DWORD *)(a2 + 20) = v15;
      LODWORD(v15) = 0;
      v27 = *(_WORD *)(v13 + 64)
          + *(_WORD *)(v13 + 68)
          - *(_WORD *)(v13 + 66)
          - *(_WORD *)(v13 + 62)
          - *(_WORD *)(v13 + 60);
      if ( v27 <= 0 )
        v27 = 0;
      a5 = (float)v27 * v20;
      v28 = (unsigned __int8)(SLODWORD(a5) >> 23);
      if ( v28 <= 0x9E )
      {
        v29 = LODWORD(a5) & 0x7FFFFFLL | 0x800000;
        v30 = v28 >= 0x76 ? v29 << ((unsigned __int8)v28 - 118) : v29 >> (118 - (unsigned __int8)v28);
        v15 = (v30 + 0x80000000LL) >> 32;
        if ( a5 < 0.0 )
          LODWORD(v15) = -(int)v15;
      }
      *(_DWORD *)(a2 + 24) = v15;
      LODWORD(v31) = 0;
      a5 = (float)*(__int16 *)(v13 + 76) * v20;
      v32 = (unsigned __int8)(SLODWORD(a5) >> 23);
      if ( v32 <= 0x9E )
      {
        v33 = LODWORD(a5) & 0x7FFFFFLL | 0x800000;
        v34 = v32 < 0x76 ? v33 >> (118 - (unsigned __int8)v32) : v33 << ((unsigned __int8)v32 - 118);
        v31 = (v34 + 0x80000000LL) >> 32;
        if ( a5 < 0.0 )
          LODWORD(v31) = -(int)v31;
      }
      *(_DWORD *)(a2 + 28) = v31;
      LODWORD(v31) = 0;
      a5 = (float)*(__int16 *)(v13 + 78) * v20;
      v35 = (unsigned __int8)(SLODWORD(a5) >> 23);
      if ( v35 <= 0x9E )
      {
        v36 = LODWORD(a5) & 0x7FFFFFLL | 0x800000;
        v37 = v35 < 0x76 ? v36 >> (118 - (unsigned __int8)v35) : v36 << ((unsigned __int8)v35 - 118);
        v31 = (v37 + 0x80000000LL) >> 32;
        if ( a5 < 0.0 )
          LODWORD(v31) = -(int)v31;
      }
    }
    else
    {
      *(_DWORD *)(a2 + 8) = v14;
      *(_DWORD *)(a2 + 12) = *(__int16 *)(v13 + 60);
      *(_DWORD *)(a2 + 20) = (__int16)(*(_WORD *)(v13 + 60) + *(_WORD *)(v13 + 62) - *(_WORD *)(v13 + 56));
      v49 = *(_WORD *)(v13 + 64)
          + *(_WORD *)(v13 + 68)
          - *(_WORD *)(v13 + 66)
          - *(_WORD *)(v13 + 62)
          - *(_WORD *)(v13 + 60);
      if ( v49 <= 0 )
        v49 = 0;
      *(_DWORD *)(a2 + 24) = v49;
      *(_DWORD *)(a2 + 28) = *(__int16 *)(v13 + 76);
      LODWORD(v31) = *(__int16 *)(v13 + 78);
    }
    *(_DWORD *)(a2 + 32) = v31;
    v38 = *(_QWORD *)a1;
    v59 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 208LL);
    v60 = *(_DWORD *)(*(_QWORD *)(v38 + 976) + 108LL) & 1;
    EXFORMOBJ::vInit((EXFORMOBJ *)&v58, a1, 0x402u, 0);
    if ( v58 )
    {
      if ( (*(_DWORD *)(v58 + 32) & 2) == 0 )
      {
        v56[1] = 0;
        v56[0] = 1065353216;
        if ( !EXFORMOBJ::bXform((EXFORMOBJ *)&v58, (struct VECTORFL *)v56, (struct VECTORFL *)v56, 1uLL) )
          return v8;
        EFLOAT::eqLength(&v61, &a5, v56);
        v57[0] = 0;
        v57[1] = 1065353216;
        if ( (*(_DWORD *)(v58 + 32) & 2) == 0
          && !EXFORMOBJ::bXform((EXFORMOBJ *)&v58, (struct VECTORFL *)v57, (struct VECTORFL *)v57, 1uLL) )
        {
          return v8;
        }
        EFLOAT::eqLength(&v62, &a5, v57);
        a5 = 0.0;
        bFToL(v50, &a5, 0LL);
        *(float *)(a2 + 8) = a5;
        a5 = 0.0;
        bFToL(v51, &a5, 0LL);
        *(float *)(a2 + 12) = a5;
        a5 = 0.0;
        bFToL(v52, &a5, 0LL);
        *(float *)(a2 + 28) = a5;
        a5 = 0.0;
        bFToL(v53, &a5, 0LL);
        *(float *)(a2 + 32) = a5;
        a5 = 0.0;
        bFToL(v54, &a5, 0LL);
        *(float *)(a2 + 20) = a5;
        a5 = 0.0;
        bFToL(v55, &a5, 0LL);
        *(float *)(a2 + 24) = a5;
      }
      v39 = *(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 12);
      *(_DWORD *)(a2 + 44) = a7;
      *(_DWORD *)(a2 + 48) = a8;
      *(_DWORD *)(a2 + 16) = v39;
      *(_DWORD *)(a2 + 36) = *(unsigned __int16 *)(v13 + 46);
      *(_BYTE *)(a2 + 60) = -((*(_BYTE *)(v13 + 52) & 1) != 0);
      *(_BYTE *)(a2 + 61) = *(_BYTE *)(v13 + 52) & 2;
      *(_BYTE *)(a2 + 62) = *(_BYTE *)(v13 + 52) & 0x10;
      *(_WORD *)(a2 + 52) = *(_WORD *)(v13 + 112);
      *(_WORD *)(a2 + 54) = *(_WORD *)(v13 + 114);
      *(_WORD *)(a2 + 56) = *(_WORD *)(v13 + 116);
      *(_WORD *)(a2 + 58) = *(_WORD *)(v13 + 118);
      *(_BYTE *)(a2 + 64) = *(_BYTE *)(v13 + 44);
      v40 = *(_DWORD *)(v13 + 48);
      v41 = *(_BYTE *)(v13 + 45);
      *(_DWORD *)(a2 + 40) = 0;
      *(_DWORD *)(a2 + 68) = 0;
      *(_BYTE *)(a2 + 63) = (a4 != 0 ? 8 : 0) | v41 & 0xF0 | (v40 >> 1) & 2 | ((v40 & 1) != 0 ? 6 : 0) | ((v40 & 8) != 0 ? 0xA : 0) | ((v40 & 0x401000) == 0);
      v42 = *(_WORD *)(v13 + 52);
      if ( (v42 & 0x21) != 0 )
      {
        v43 = 0;
        if ( (v42 & 1) != 0 )
        {
          *(_DWORD *)(a2 + 68) = 1;
          v43 = 1;
          v42 = *(_WORD *)(v13 + 52);
        }
        if ( (v42 & 0x20) == 0 )
          goto LABEL_40;
        v43 |= 0x20u;
      }
      else
      {
        v43 = 64;
      }
      *(_DWORD *)(a2 + 68) = v43;
LABEL_40:
      v44 = *(_DWORD *)(v13 + 48);
      if ( (v44 & 0x20000000) != 0 )
      {
        v43 |= 0x10000u;
        *(_DWORD *)(a2 + 68) = v43;
        v44 = *(_DWORD *)(v13 + 48);
      }
      if ( v44 < 0 )
      {
        if ( (v44 & 0x4000) != 0 )
        {
          v43 |= 0x80000u;
          *(_DWORD *)(a2 + 68) = v43;
          v44 = *(_DWORD *)(v13 + 48);
        }
        if ( (v44 & 0x4000000) != 0 )
          v43 |= 0x20000u;
        else
          v43 |= 0x100000u;
        *(_DWORD *)(a2 + 68) = v43;
      }
      if ( (*(_DWORD *)(v13 + 48) & 0x40000) != 0 )
      {
        v45 = v43 | 0x200000;
        *(_DWORD *)(a2 + 68) = v45;
        if ( (*(_DWORD *)(v13 + 48) & 1) != 0 )
          *(_DWORD *)(a2 + 68) = v45 | 0x40000;
      }
      *(_DWORD *)(a2 + 72) = *(__int16 *)(v13 + 56);
      *(_DWORD *)(a2 + 76) = *(__int16 *)(v13 + 60) + *(__int16 *)(v13 + 62);
      *(_DWORD *)(a2 + 80) = *(__int16 *)(v13 + 76);
      *(_BYTE *)(a2 + 4) = *(_BYTE *)(v13 + 108);
      *(_BYTE *)(a2 + 5) = *(_BYTE *)(v13 + 109);
      *(_BYTE *)(a2 + 6) = *(_BYTE *)(v13 + 110);
      *(_BYTE *)(a2 + 7) = *(_BYTE *)(v13 + 111);
      v46 = *(_QWORD *)(*(_QWORD *)a3 + 32LL);
      if ( *(_DWORD *)(v46 + 4) > 4u && (v47 = *(int *)(v46 + 196), (_DWORD)v47) )
      {
        *(_OWORD *)(a2 + 84) = *(_OWORD *)(v47 + v13);
        *(_QWORD *)(a2 + 100) = *(_QWORD *)(v47 + v13 + 16);
      }
      else
      {
        *(_OWORD *)(a2 + 84) = 0LL;
        *(_QWORD *)(a2 + 100) = 0LL;
      }
      return 1;
    }
  }
  return v8;
}
