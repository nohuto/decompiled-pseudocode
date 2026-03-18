/*
 * XREFs of ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x1C0039250
 * Callers:
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C003AC00 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0001C08 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     bFToL @ 0x1C00038EC (bFToL.c)
 *     ?bIs16@EFLOAT@@QEBAHXZ @ 0x1C00387FC (-bIs16@EFLOAT@@QEBAHXZ.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C0039224 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C015F82C (-vMakeIso@DC@@QEAAXXZ.c)
 */

void __fastcall DC::vUpdateWtoDXform(DC *this)
{
  __int64 v1; // r8
  char *v2; // rdi
  int v3; // esi
  int v5; // eax
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  int v12; // xmm1_4
  __int64 v13; // rcx
  DC *v14; // rcx
  __int64 v15; // r8
  EFLOAT *v16; // r15
  EFLOAT *v17; // rbp
  EFLOAT *v18; // r12
  float v19; // xmm2_4
  float v20; // xmm0_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  unsigned int v23; // r8d
  unsigned int v24; // r8d
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  float v28; // xmm0_4
  __int64 v29; // rcx
  float v30; // xmm0_4
  __int64 v31; // rcx
  float v32; // xmm0_4
  __int64 v33; // rax
  float v34; // xmm0_4
  __int64 v35; // rcx
  float v36; // xmm0_4
  unsigned int v37; // r8d
  float *v38; // rcx
  int v39; // r8d
  int v40; // edx
  __int64 v41; // rax
  float v42; // xmm1_4
  __int64 v43; // rcx
  float v44; // xmm1_4
  __int64 v45; // rdx
  int v46; // ecx
  unsigned int v47; // ecx
  __int64 v48; // rdx
  int v49; // ecx
  unsigned int v50; // ecx
  float v51; // xmm0_4
  __int64 v52; // rcx
  float v53; // xmm0_4
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // r10
  unsigned int v57; // r8d
  float v58; // xmm3_4
  float v59; // xmm4_4
  float v60; // xmm2_4
  float v61; // xmm4_4
  float v62; // xmm1_4
  int v63; // eax
  float v64; // xmm3_4
  float v65; // xmm3_4
  unsigned int v66; // r8d

  v1 = *((_QWORD *)this + 122);
  v2 = (char *)this + 320;
  v3 = 11;
  v5 = *(_DWORD *)(v1 + 340);
  if ( (v5 & 0xE000) != 0 )
  {
    if ( (v5 & 0x4000) != 0 )
    {
      if ( *(_DWORD *)(v1 + 104) == 7 )
        DC::vMakeIso(this);
      v38 = (float *)*((_QWORD *)this + 122);
      v39 = *((_DWORD *)v38 + 79);
      v40 = *((_DWORD *)v38 + 83);
      if ( v39 == v40 && *((_DWORD *)v38 + 80) == *((_DWORD *)v38 + 84) )
      {
        v38[98] = 16.0;
        v41 = *((_QWORD *)this + 122);
        *((float *)this + 107) = FLOAT_16_0;
        *(_DWORD *)(v41 + 396) = 1098907648;
        *((float *)this + 108) = FLOAT_16_0;
        *((_DWORD *)v2 + 8) = 11;
        *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x1000u;
      }
      else
      {
        v42 = (float)(16 * v40) / (float)v39;
        v38[98] = v42;
        v43 = *((_QWORD *)this + 122);
        *((float *)this + 107) = v42;
        v44 = (float)(16 * *(_DWORD *)(v43 + 336)) / (float)*(int *)(v43 + 320);
        *(float *)(v43 + 396) = v44;
        *((float *)this + 108) = v44;
        *((_DWORD *)v2 + 8) = 9;
        *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFFE7FF;
      }
      v45 = *((_QWORD *)this + 122);
      v46 = *(_DWORD *)(v45 + 340);
      if ( *((float *)this + 107) >= 0.0 )
        v47 = v46 & 0xFFFFFEFF;
      else
        v47 = v46 | 0x100;
      *(_DWORD *)(v45 + 340) = v47;
      v48 = *((_QWORD *)this + 122);
      v49 = *(_DWORD *)(v48 + 340);
      if ( *((float *)this + 108) >= 0.0 )
        v50 = v49 & 0xFFFFFDFF;
      else
        v50 = v49 | 0x200;
      *(_DWORD *)(v48 + 340) = v50;
    }
    v6 = *((_QWORD *)this + 122);
    if ( !*(_DWORD *)(v6 + 308) && !*(_DWORD *)(v6 + 312) )
    {
      v7 = *(_DWORD *)(v6 + 324);
      if ( v7 || *(_DWORD *)(v6 + 328) )
      {
        v30 = (float)(16 * v7);
        *(float *)(v6 + 400) = v30;
        v31 = *((_QWORD *)this + 122);
        *((float *)this + 109) = v30;
        v32 = (float)(16 * *(_DWORD *)(v31 + 328));
        *(float *)(v31 + 404) = v32;
        v33 = *((_QWORD *)this + 122);
        *((float *)this + 110) = v32;
        *((_DWORD *)v2 + 6) = 16 * *(_DWORD *)(v33 + 324);
        LODWORD(v31) = *(_DWORD *)(*((_QWORD *)this + 122) + 328LL);
        *((_DWORD *)v2 + 8) &= ~0x40u;
        *((_DWORD *)v2 + 7) = 16 * v31;
        *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= ~0x800u;
      }
      else
      {
        *(_DWORD *)(v6 + 400) = 0;
        v8 = *((_QWORD *)this + 122);
        *((_DWORD *)this + 109) = 0;
        *(_DWORD *)(v8 + 404) = 0;
        *((_DWORD *)this + 110) = 0;
        *((_QWORD *)v2 + 3) = 0LL;
        *((_DWORD *)v2 + 8) |= 0x40u;
        v9 = *((_QWORD *)this + 122);
        v10 = *(_DWORD *)(v9 + 340);
        if ( (v10 & 0x1000) != 0 )
          *(_DWORD *)(v9 + 340) = v10 | 0x800;
      }
LABEL_9:
      if ( (*(_DWORD *)(*((_QWORD *)this + 122) + 340LL) & 2) != 0 )
      {
        v11 = *((_DWORD *)this + 130);
        if ( (v11 & 1) == 0 || (v11 & 2) != 0 )
        {
          *(_DWORD *)v2 = *((_DWORD *)this + 107);
          v12 = *((_DWORD *)this + 108);
          *(_QWORD *)(v2 + 4) = 0LL;
          *((_DWORD *)v2 + 3) = v12;
          *((_DWORD *)v2 + 4) = *((_DWORD *)this + 109);
          *((_DWORD *)v2 + 5) = *((_DWORD *)this + 110);
          if ( (*(_DWORD *)(*((_QWORD *)this + 122) + 340LL) & 0x800) == 0 )
          {
            *((_DWORD *)v2 + 8) = (*(_DWORD *)(*((_QWORD *)this + 122) + 340LL) & 0x1000 | 0x4800u) >> 11;
LABEL_13:
            *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFF1FFF;
LABEL_14:
            v13 = *((_QWORD *)this + 122);
            *(_OWORD *)(v13 + 32) = *(_OWORD *)v2;
            *(_OWORD *)(v13 + 48) = *((_OWORD *)v2 + 1);
            *(_DWORD *)(v13 + 64) = *((_DWORD *)v2 + 8);
            return;
          }
LABEL_32:
          *((_DWORD *)v2 + 8) = 75;
          goto LABEL_13;
        }
      }
      goto LABEL_15;
    }
    *(_DWORD *)(v6 + 340) &= ~0x800u;
    *((_DWORD *)v2 + 8) &= ~0x40u;
    v25 = *((_QWORD *)this + 122);
    v26 = -*(_DWORD *)(v25 + 308);
    if ( (*(_DWORD *)(v25 + 340) & 0x1000) != 0 )
    {
      *(float *)(v25 + 400) = (float)(-16 * *(_DWORD *)(v25 + 308));
      v27 = *((_QWORD *)this + 122);
      *((float *)this + 109) = (float)(16 * v26);
      v28 = (float)(-16 * *(_DWORD *)(v27 + 312));
      *(float *)(v27 + 404) = v28;
      v29 = *((_QWORD *)this + 122);
      *((float *)this + 110) = v28;
      if ( !*(_DWORD *)(v29 + 324) && !*(_DWORD *)(v29 + 328) )
      {
        *((_DWORD *)v2 + 6) = -16 * *(_DWORD *)(v29 + 308);
        *((_DWORD *)v2 + 7) = -16 * *(_DWORD *)(*((_QWORD *)this + 122) + 312LL);
        goto LABEL_9;
      }
    }
    else
    {
      v51 = (float)v26 * *((float *)this + 107);
      *(float *)(v25 + 400) = v51;
      v52 = *((_QWORD *)this + 122);
      *((float *)this + 109) = v51;
      v53 = (float)-*(_DWORD *)(v52 + 312) * *((float *)this + 108);
      *(float *)(v52 + 404) = v53;
      v54 = *((_QWORD *)this + 122);
      *((float *)this + 110) = v53;
      v29 = v54;
      if ( !*(_DWORD *)(v54 + 324) && !*(_DWORD *)(v54 + 328) )
        goto LABEL_35;
    }
    v34 = (float)(16 * *(_DWORD *)(v29 + 324)) + *((float *)this + 109);
    *(float *)(v29 + 400) = v34;
    v35 = *((_QWORD *)this + 122);
    *((float *)this + 109) = v34;
    v36 = (float)(16 * *(_DWORD *)(v35 + 328)) + *((float *)this + 110);
    *(float *)(v35 + 404) = v36;
    *((float *)this + 110) = v36;
LABEL_35:
    bFToL(*((float *)this + 109), (int *)v2 + 6, 6u);
    bFToL(*((float *)this + 110), (int *)v2 + 7, v37);
    goto LABEL_9;
  }
  if ( (v5 & 2) != 0 && !(unsigned int)DC::bDpiScaleTransform(this) )
  {
    *(_DWORD *)v2 = *(_DWORD *)(v55 + 428);
    *((_DWORD *)v2 + 3) = *(_DWORD *)(v55 + 432);
    *(_QWORD *)(v2 + 4) = v56;
    *((_DWORD *)v2 + 4) = *(_DWORD *)(v55 + 436);
    *((_DWORD *)v2 + 5) = *(_DWORD *)(v55 + 440);
    bFToL(*(float *)(v55 + 436), (int *)v2 + 6, 6u);
    bFToL(*((float *)this + 110), (int *)v2 + 7, v57);
    if ( (*(_DWORD *)(*((_QWORD *)this + 122) + 340LL) & 0x800) == 0 )
    {
      *((_DWORD *)v2 + 8) = (*(_DWORD *)(*((_QWORD *)this + 122) + 340LL) & 0x1000 | 0x4800u) >> 11;
      goto LABEL_13;
    }
    goto LABEL_32;
  }
LABEL_15:
  if ( (unsigned int)DC::bDpiScaleTransform(this) )
    *(_DWORD *)(v15 + 340) &= 0xFFFFE7FF;
  if ( (*(_DWORD *)(*((_QWORD *)this + 122) + 340LL) & 0x1000) != 0 )
  {
    v16 = (EFLOAT *)(v2 + 4);
    v17 = (EFLOAT *)(v2 + 8);
    *(_OWORD *)v2 = *(_OWORD *)((char *)this + 392);
    v18 = (EFLOAT *)(v2 + 12);
    *((_OWORD *)v2 + 1) = *(_OWORD *)((char *)this + 408);
    v19 = *((float *)v2 + 4) * 16.0;
    *(float *)v2 = *(float *)v2 * 16.0;
    v20 = *((float *)v2 + 1) * 16.0;
    *((float *)v2 + 4) = v19;
    *((float *)v2 + 1) = v20;
    *((float *)v2 + 2) = *((float *)v2 + 2) * 16.0;
    *((float *)v2 + 3) = *((float *)v2 + 3) * 16.0;
    *((float *)v2 + 5) = *((float *)v2 + 5) * 16.0;
  }
  else
  {
    v58 = *((float *)this + 107);
    if ( (unsigned int)DC::bDpiScaleTransform(v14) )
    {
      v58 = v58 * *((float *)this + 131);
      v59 = v59 * *((float *)this + 132);
    }
    v17 = (EFLOAT *)(v2 + 8);
    v16 = (EFLOAT *)(v2 + 4);
    v18 = (EFLOAT *)(v2 + 12);
    *(float *)v2 = v58 * *((float *)this + 98);
    *((float *)v2 + 2) = v58 * *((float *)this + 100);
    *((float *)v2 + 1) = v59 * *((float *)this + 99);
    *((float *)v2 + 3) = v59 * *((float *)this + 101);
    v19 = *((float *)this + 107) * *((float *)this + 102);
    *((float *)v2 + 4) = v19;
    *((float *)v2 + 5) = *((float *)this + 108) * *((float *)this + 103);
  }
  v21 = *((float *)this + 109) + v19;
  *((float *)v2 + 4) = v21;
  bFToL(v21, (int *)v2 + 6, 6u);
  v22 = *((float *)this + 110) + *((float *)v2 + 5);
  *((float *)v2 + 5) = v22;
  bFToL(v22, (int *)v2 + 7, v23);
  if ( (unsigned int)DC::bDpiScaleTransform(this) )
  {
    v60 = *((float *)this + 131) * *((float *)v2 + 4);
    *((float *)v2 + 4) = v60;
    v61 = *((float *)this + 132) * *((float *)v2 + 5);
    *((float *)v2 + 5) = v61;
    v62 = *((float *)this + 132);
    v63 = *((_DWORD *)this + 2 * (*((_DWORD *)this + 10) & 1) + 255);
    v64 = (float)*((int *)this + 2 * (*((_DWORD *)this + 10) & 1) + 254);
    v65 = (float)((float)((float)(v64 * *((float *)this + 131)) - v64) * 16.0) + v60;
    *((float *)v2 + 4) = v65;
    *((float *)v2 + 5) = (float)((float)((float)((float)v63 * v62) - (float)v63) * 16.0) + v61;
    bFToL(v65, (int *)v2 + 6, v24);
    bFToL(*((float *)v2 + 5), (int *)v2 + 7, v66);
  }
  *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= ~0x10000u;
  if ( EFLOAT::bIsZero(v16) && EFLOAT::bIsZero(v17) )
  {
    if ( !EFLOAT::bIs16((EFLOAT *)v2) || !EFLOAT::bIs16(v18) )
      v3 = 9;
  }
  else
  {
    v3 = 8;
  }
  *((_DWORD *)v2 + 8) = v3;
  if ( !*((_DWORD *)v2 + 6) && !*((_DWORD *)v2 + 7) )
    *((_DWORD *)v2 + 8) = v3 | 0x40;
  *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFF1FFF;
  if ( !(unsigned int)DC::bDpiScaleTransform(this) )
    goto LABEL_14;
}
