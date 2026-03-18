/*
 * XREFs of ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x1C0031740
 * Callers:
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C0031540 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 * Callees:
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C0031718 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     bFToL @ 0x1C009B150 (bFToL.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C016F338 (-vMakeIso@DC@@QEAAXXZ.c)
 */

void __fastcall DC::vUpdateWtoDXform(DC *this)
{
  float *v1; // r8
  int v3; // esi
  int v4; // eax
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  float v13; // xmm5_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  float v16; // r9d
  unsigned int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rdx
  int v20; // eax
  float v21; // edx
  unsigned int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  _DWORD *v26; // rdi
  int v27; // eax
  int v28; // eax
  int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  float v33; // xmm0_4
  __int64 v34; // rcx
  float v35; // xmm0_4
  __int64 v36; // rcx
  float v37; // xmm0_4
  _DWORD *v38; // rcx
  int v39; // eax
  float v40; // xmm0_4
  __int64 v41; // rcx
  float v42; // xmm0_4
  __int64 v43; // rax
  float v44; // xmm0_4
  float v45; // xmm0_4
  __int64 v46; // rcx
  __int64 v47; // r8
  int v48; // edx
  int v49; // ecx
  float v50; // xmm1_4
  __int64 v51; // rcx
  float v52; // xmm1_4
  __int64 v53; // rdx
  unsigned int v54; // ecx
  __int64 v55; // rdx
  int v56; // ecx
  unsigned int v57; // ecx
  int v58; // xmm0_4
  __int64 v59; // rax
  int v60; // xmm1_4
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r8
  float v65; // xmm3_4
  float v66; // xmm4_4
  float v67; // xmm2_4
  float v68; // xmm4_4
  __int64 v69; // rax
  __int64 v70; // rcx
  float v71; // xmm1_4
  __int64 v72; // rcx
  __int64 v73; // r8

  v1 = (float *)*((_QWORD *)this + 122);
  v3 = 11;
  v4 = *((_DWORD *)v1 + 85);
  if ( (v4 & 0xE000) != 0 )
  {
    if ( (v4 & 0x4000) != 0 )
    {
      if ( *((_DWORD *)v1 + 26) == 7 )
      {
        DC::vMakeIso(this);
        v1 = (float *)*((_QWORD *)this + 122);
      }
      v48 = *((_DWORD *)v1 + 79);
      v49 = *((_DWORD *)v1 + 83);
      if ( v48 == v49 && *((_DWORD *)v1 + 80) == *((_DWORD *)v1 + 84) )
      {
        v58 = ef16;
        *((_DWORD *)v1 + 98) = ef16;
        v59 = *((_QWORD *)this + 122);
        *((_DWORD *)this + 107) = v58;
        v60 = ef16;
        *(_DWORD *)(v59 + 396) = ef16;
        *((_DWORD *)this + 108) = v60;
        *((_DWORD *)this + 88) = 11;
        *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x1000u;
      }
      else
      {
        v50 = (float)(16 * v49) / (float)v48;
        v1[98] = v50;
        v51 = *((_QWORD *)this + 122);
        *((float *)this + 107) = v50;
        v52 = (float)(16 * *(_DWORD *)(v51 + 336)) / (float)*(int *)(v51 + 320);
        *(float *)(v51 + 396) = v52;
        *((float *)this + 108) = v52;
        *((_DWORD *)this + 88) = 9;
        *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFFE7FF;
      }
      v53 = *((_QWORD *)this + 122);
      v54 = *(_DWORD *)(v53 + 340) | 0x100;
      if ( *((float *)this + 107) >= 0.0 )
        v54 = *(_DWORD *)(v53 + 340) & 0xFFFFFEFF;
      *(_DWORD *)(v53 + 340) = v54;
      v55 = *((_QWORD *)this + 122);
      v56 = *(_DWORD *)(v55 + 340);
      if ( *((float *)this + 108) >= 0.0 )
        v57 = v56 & 0xFFFFFDFF;
      else
        v57 = v56 | 0x200;
      *(_DWORD *)(v55 + 340) = v57;
    }
    v5 = *((_QWORD *)this + 122);
    if ( !*(_DWORD *)(v5 + 308) && !*(_DWORD *)(v5 + 312) )
    {
      v6 = *(_DWORD *)(v5 + 324);
      if ( v6 || *(_DWORD *)(v5 + 328) )
      {
        v35 = (float)(16 * v6);
        *(float *)(v5 + 400) = v35;
        v36 = *((_QWORD *)this + 122);
        *((float *)this + 109) = v35;
        v37 = (float)(16 * *(_DWORD *)(v36 + 328));
        *(float *)(v36 + 404) = v37;
        v38 = (_DWORD *)*((_QWORD *)this + 122);
        *((float *)this + 110) = v37;
        *((_DWORD *)this + 86) = 16 * v38[81];
        v39 = v38[82];
        *((_DWORD *)this + 88) &= ~0x40u;
        *((_DWORD *)this + 87) = 16 * v39;
        v38[85] &= ~0x800u;
      }
      else
      {
        *(_DWORD *)(v5 + 400) = 0;
        v7 = *((_QWORD *)this + 122);
        *((_DWORD *)this + 109) = 0;
        *(_DWORD *)(v7 + 404) = 0;
        *((_DWORD *)this + 110) = 0;
        *((_DWORD *)this + 88) |= 0x40u;
        *((_QWORD *)this + 43) = 0LL;
        v8 = *((_QWORD *)this + 122);
        v9 = *(_DWORD *)(v8 + 340);
        if ( (v9 & 0x1000) != 0 )
          *(_DWORD *)(v8 + 340) = v9 | 0x800;
      }
LABEL_9:
      v1 = (float *)*((_QWORD *)this + 122);
      if ( ((_DWORD)v1[85] & 2) != 0 )
      {
        v10 = *((_DWORD *)this + 130);
        if ( (v10 & 1) == 0 || (v10 & 2) != 0 )
        {
          *((_DWORD *)this + 80) = *((_DWORD *)this + 107);
          *((_DWORD *)this + 83) = *((_DWORD *)this + 108);
          *(_QWORD *)((char *)this + 324) = 0LL;
          *((_DWORD *)this + 84) = *((_DWORD *)this + 109);
          *((_DWORD *)this + 85) = *((_DWORD *)this + 110);
          if ( ((_DWORD)v1[85] & 0x800) != 0 )
            *((_DWORD *)this + 88) = 75;
          else
            *((_DWORD *)this + 88) = ((_DWORD)v1[85] & 0x1000 | 0x4800u) >> 11;
          *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFF1FFF;
LABEL_14:
          v11 = *((_QWORD *)this + 122);
          *(_OWORD *)(v11 + 32) = *((_OWORD *)this + 20);
          *(_OWORD *)(v11 + 48) = *((_OWORD *)this + 21);
          *(_DWORD *)(v11 + 64) = *((_DWORD *)this + 88);
          return;
        }
      }
      goto LABEL_16;
    }
    *(_DWORD *)(v5 + 340) &= ~0x800u;
    *((_DWORD *)this + 88) &= ~0x40u;
    v30 = *((_QWORD *)this + 122);
    v31 = -*(_DWORD *)(v30 + 308);
    if ( (*(_DWORD *)(v30 + 340) & 0x1000) != 0 )
    {
      *(float *)(v30 + 400) = (float)(-16 * *(_DWORD *)(v30 + 308));
      v32 = *((_QWORD *)this + 122);
      *((float *)this + 109) = (float)(16 * v31);
      v33 = (float)(-16 * *(_DWORD *)(v32 + 312));
      *(float *)(v32 + 404) = v33;
      v34 = *((_QWORD *)this + 122);
      *((float *)this + 110) = v33;
      if ( !*(_DWORD *)(v34 + 324) && !*(_DWORD *)(v34 + 328) )
      {
        *((_DWORD *)this + 86) = -16 * *(_DWORD *)(v34 + 308);
        *((_DWORD *)this + 87) = -16 * *(_DWORD *)(v34 + 312);
        goto LABEL_9;
      }
    }
    else
    {
      v40 = (float)v31 * *((float *)this + 107);
      *(float *)(v30 + 400) = v40;
      v41 = *((_QWORD *)this + 122);
      *((float *)this + 109) = v40;
      v42 = (float)-*(_DWORD *)(v41 + 312) * *((float *)this + 108);
      *(float *)(v41 + 404) = v42;
      v43 = *((_QWORD *)this + 122);
      *((float *)this + 110) = v42;
      v34 = v43;
      if ( !*(_DWORD *)(v43 + 324) && !*(_DWORD *)(v43 + 328) )
        goto LABEL_47;
    }
    v44 = (float)(16 * *(_DWORD *)(v34 + 324)) + *((float *)this + 109);
    *(float *)(v34 + 400) = v44;
    v34 = *((_QWORD *)this + 122);
    *((float *)this + 109) = v44;
    v45 = (float)(16 * *(_DWORD *)(v34 + 328)) + *((float *)this + 110);
    *(float *)(v34 + 404) = v45;
    *((float *)this + 110) = v45;
LABEL_47:
    bFToL(v34, (char *)this + 344, 6LL);
    bFToL(v46, (char *)this + 348, v47);
    goto LABEL_9;
  }
  if ( (v4 & 2) != 0 && !(unsigned int)DC::bDpiScaleTransform(this) )
  {
    *(_DWORD *)(v61 + 320) = *(_DWORD *)(v61 + 428);
    *(_DWORD *)(v61 + 332) = *(_DWORD *)(v61 + 432);
    *(_QWORD *)(v61 + 324) = 0LL;
    *(_DWORD *)(v61 + 336) = *(_DWORD *)(v61 + 436);
    *(_DWORD *)(v61 + 340) = *(_DWORD *)(v61 + 440);
    bFToL(v61, v61 + 344, 6LL);
    bFToL(v62, (char *)this + 348, v63);
    v64 = *((_QWORD *)this + 122);
    if ( (*(_DWORD *)(v64 + 340) & 0x800) != 0 )
      *((_DWORD *)this + 88) = 75;
    else
      *((_DWORD *)this + 88) = (*(_DWORD *)(v64 + 340) & 0x1000 | 0x4800u) >> 11;
    *(_DWORD *)(v64 + 340) &= 0xFFFF1FFF;
    goto LABEL_14;
  }
LABEL_16:
  v12 = *((_DWORD *)this + 130);
  if ( (v12 & 1) != 0 && (v12 & 2) == 0 )
  {
    *((_DWORD *)v1 + 85) &= 0xFFFFE7FF;
    v1 = (float *)*((_QWORD *)this + 122);
  }
  v13 = *(float *)&_xmm;
  if ( ((_DWORD)v1[85] & 0x1000) != 0 )
  {
    *((_OWORD *)this + 20) = *(_OWORD *)((char *)this + 392);
    *((_OWORD *)this + 21) = *(_OWORD *)((char *)this + 408);
    v14 = *((float *)this + 84) * 16.0;
    *((__m128 *)this + 20) = _mm_mul_ps(*((__m128 *)this + 20), (__m128)_xmm);
    v15 = *((float *)this + 85) * 16.0;
    *((float *)this + 84) = v14;
    *((float *)this + 85) = v15;
  }
  else
  {
    v65 = *((float *)this + 107);
    if ( (unsigned int)DC::bDpiScaleTransform(this) )
    {
      v65 = v65 * *((float *)this + 131);
      v66 = v66 * *((float *)this + 132);
    }
    *((float *)this + 80) = v65 * *((float *)this + 98);
    *((float *)this + 82) = v65 * *((float *)this + 100);
    *((float *)this + 81) = v66 * *((float *)this + 99);
    *((float *)this + 83) = v66 * *((float *)this + 101);
    v14 = *((float *)this + 107) * *((float *)this + 102);
    *((float *)this + 84) = v14;
    *((float *)this + 85) = *((float *)this + 108) * *((float *)this + 103);
  }
  v16 = v14 + *((float *)this + 109);
  *((float *)this + 84) = v16;
  v17 = (unsigned __int8)(SLODWORD(v16) >> 23);
  if ( v17 <= 0x9E )
  {
    v18 = LODWORD(v16) & 0x7FFFFFLL | 0x800000;
    if ( v17 < 0x76 )
      v19 = v18 >> (118 - (unsigned __int8)v17);
    else
      v19 = v18 << ((unsigned __int8)v17 - 118);
    v20 = -((unsigned __int64)(v19 + 0x80000000LL) >> 32);
    if ( v16 >= 0.0 )
      v20 = (unsigned __int64)(v19 + 0x80000000LL) >> 32;
    *((_DWORD *)this + 86) = v20;
  }
  v21 = *((float *)this + 110) + *((float *)this + 85);
  v22 = (unsigned __int8)(SLODWORD(v21) >> 23);
  *((float *)this + 85) = v21;
  if ( v22 > 0x9E )
  {
    v26 = (_DWORD *)((char *)this + 348);
  }
  else
  {
    v23 = LODWORD(v21) & 0x7FFFFFLL | 0x800000;
    if ( v22 < 0x76 )
      v24 = v23 >> (118 - (unsigned __int8)v22);
    else
      v24 = v23 << ((unsigned __int8)v22 - 118);
    v25 = (v24 + 0x80000000LL) >> 32;
    v26 = (_DWORD *)((char *)this + 348);
    v27 = -((unsigned __int64)(v24 + 0x80000000LL) >> 32);
    if ( v21 >= 0.0 )
      v27 = v25;
    *v26 = v27;
  }
  v28 = *((_DWORD *)this + 130);
  if ( (v28 & 1) != 0 && (v28 & 2) == 0 )
  {
    v67 = *((float *)this + 131) * *((float *)this + 84);
    *((float *)this + 84) = v67;
    v68 = *((float *)this + 132) * *((float *)this + 85);
    *((float *)this + 85) = v68;
    v69 = *((_DWORD *)this + 10) & 1;
    v70 = *((unsigned int *)this + 2 * v69 + 255);
    v71 = (float)*((int *)this + 2 * v69 + 255);
    *((float *)this + 84) = (float)((float)((float)((float)*((int *)this + 2 * v69 + 254) * *((float *)this + 131))
                                          - (float)*((int *)this + 2 * v69 + 254))
                                  * v13)
                          + v67;
    *((float *)this + 85) = (float)((float)((float)(v71 * *((float *)this + 132)) - v71) * v13) + v68;
    bFToL(v70, (char *)this + 344, 6LL);
    bFToL(v72, v26, v73);
  }
  *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= ~0x10000u;
  if ( *((float *)this + 81) == 0.0 && *((float *)this + 82) == 0.0 )
  {
    if ( *((float *)this + 80) != v13 || *((float *)this + 83) != v13 )
      v3 = 9;
  }
  else
  {
    v3 = 8;
  }
  *((_DWORD *)this + 88) = v3;
  if ( !*((_DWORD *)this + 86) && !*((_DWORD *)this + 87) )
    *((_DWORD *)this + 88) = v3 | 0x40;
  *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFF1FFF;
  v29 = *((_DWORD *)this + 130);
  if ( (v29 & 1) == 0 || (v29 & 2) != 0 )
    goto LABEL_14;
}
