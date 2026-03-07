void __fastcall DC::vUpdateWtoDXform(DC *this)
{
  __int64 v1; // r8
  int v2; // edi
  int v4; // eax
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // r8
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  DC *v14; // rcx
  __int64 v15; // r8
  float v16; // xmm3_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  unsigned int v20; // r8d
  unsigned int v21; // r8d
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  float v25; // xmm0_4
  __int64 v26; // rcx
  float v27; // xmm0_4
  __int64 v28; // rcx
  float v29; // xmm0_4
  _DWORD *v30; // rcx
  int v31; // eax
  float v32; // xmm0_4
  __int64 v33; // rcx
  float v34; // xmm0_4
  unsigned int v35; // r8d
  float *v36; // rcx
  int v37; // r8d
  int v38; // edx
  __int64 v39; // rax
  float v40; // xmm1_4
  __int64 v41; // rcx
  float v42; // xmm1_4
  __int64 v43; // rdx
  int v44; // ecx
  unsigned int v45; // ecx
  __int64 v46; // rdx
  int v47; // ecx
  unsigned int v48; // ecx
  float v49; // xmm0_4
  __int64 v50; // rcx
  float v51; // xmm0_4
  __int64 v52; // rax
  __int64 v53; // rcx
  float v54; // xmm2_4
  unsigned int v55; // r8d
  float v56; // xmm3_4
  float v57; // xmm8_4
  float v58; // xmm4_4
  float v59; // xmm5_4
  float v60; // xmm0_4
  float v61; // xmm2_4
  float v62; // xmm4_4
  float v63; // xmm1_4
  float v64; // xmm3_4
  unsigned int v65; // r8d

  v1 = *((_QWORD *)this + 122);
  v2 = 11;
  v4 = *(_DWORD *)(v1 + 340);
  if ( (v4 & 0xE000) != 0 )
  {
    if ( (v4 & 0x4000) != 0 )
    {
      if ( *(_DWORD *)(v1 + 104) == 7 )
        DC::vMakeIso(this);
      v36 = (float *)*((_QWORD *)this + 122);
      v37 = *((_DWORD *)v36 + 79);
      v38 = *((_DWORD *)v36 + 83);
      if ( v37 == v38 && *((_DWORD *)v36 + 80) == *((_DWORD *)v36 + 84) )
      {
        v36[98] = 16.0;
        v39 = *((_QWORD *)this + 122);
        *((_DWORD *)this + 107) = _xmm;
        *(_DWORD *)(v39 + 396) = 1098907648;
        *((_DWORD *)this + 108) = _xmm;
        *((_DWORD *)this + 88) = 11;
        *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x1000u;
      }
      else
      {
        v40 = (float)(16 * v38) / (float)v37;
        v36[98] = v40;
        v41 = *((_QWORD *)this + 122);
        *((float *)this + 107) = v40;
        v42 = (float)(16 * *(_DWORD *)(v41 + 336)) / (float)*(int *)(v41 + 320);
        *(float *)(v41 + 396) = v42;
        *((float *)this + 108) = v42;
        *((_DWORD *)this + 88) = 9;
        *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFFE7FF;
      }
      v43 = *((_QWORD *)this + 122);
      v44 = *(_DWORD *)(v43 + 340);
      if ( *((float *)this + 107) >= 0.0 )
        v45 = v44 & 0xFFFFFEFF;
      else
        v45 = v44 | 0x100;
      *(_DWORD *)(v43 + 340) = v45;
      v46 = *((_QWORD *)this + 122);
      v47 = *(_DWORD *)(v46 + 340);
      if ( *((float *)this + 108) >= 0.0 )
        v48 = v47 & 0xFFFFFDFF;
      else
        v48 = v47 | 0x200;
      *(_DWORD *)(v46 + 340) = v48;
    }
    v5 = *((_QWORD *)this + 122);
    if ( !*(_DWORD *)(v5 + 308) && !*(_DWORD *)(v5 + 312) )
    {
      v6 = *(_DWORD *)(v5 + 324);
      if ( v6 || *(_DWORD *)(v5 + 328) )
      {
        v27 = (float)(16 * v6);
        *(float *)(v5 + 400) = v27;
        v28 = *((_QWORD *)this + 122);
        *((float *)this + 109) = v27;
        v29 = (float)(16 * *(_DWORD *)(v28 + 328));
        *(float *)(v28 + 404) = v29;
        v30 = (_DWORD *)*((_QWORD *)this + 122);
        *((float *)this + 110) = v29;
        *((_DWORD *)this + 86) = 16 * v30[81];
        v31 = v30[82];
        *((_DWORD *)this + 88) &= ~0x40u;
        *((_DWORD *)this + 87) = 16 * v31;
        v30[85] &= ~0x800u;
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
      v10 = *((_QWORD *)this + 122);
      if ( (*(_DWORD *)(v10 + 340) & 2) != 0 )
      {
        v11 = *((_DWORD *)this + 130);
        if ( (v11 & 1) == 0 || (v11 & 2) != 0 )
        {
          *((_DWORD *)this + 80) = *((_DWORD *)this + 107);
          *((_DWORD *)this + 83) = *((_DWORD *)this + 108);
          *(_QWORD *)((char *)this + 324) = 0LL;
          *((_DWORD *)this + 84) = *((_DWORD *)this + 109);
          *((_DWORD *)this + 85) = *((_DWORD *)this + 110);
          v12 = *(_DWORD *)(v10 + 340);
          if ( (v12 & 0x800) == 0 )
          {
LABEL_12:
            *((_DWORD *)this + 88) = (v12 & 0x1000 | 0x4800u) >> 11;
LABEL_13:
            *(_DWORD *)(v10 + 340) &= 0xFFFF1FFF;
LABEL_14:
            v13 = *((_QWORD *)this + 122);
            *(_OWORD *)(v13 + 32) = *((_OWORD *)this + 20);
            *(_OWORD *)(v13 + 48) = *((_OWORD *)this + 21);
            *(_DWORD *)(v13 + 64) = *((_DWORD *)this + 88);
            return;
          }
LABEL_32:
          *((_DWORD *)this + 88) = 75;
          goto LABEL_13;
        }
      }
      goto LABEL_15;
    }
    *(_DWORD *)(v5 + 340) &= ~0x800u;
    *((_DWORD *)this + 88) &= ~0x40u;
    v22 = *((_QWORD *)this + 122);
    v23 = -*(_DWORD *)(v22 + 308);
    if ( (*(_DWORD *)(v22 + 340) & 0x1000) != 0 )
    {
      *(float *)(v22 + 400) = (float)(-16 * *(_DWORD *)(v22 + 308));
      v24 = *((_QWORD *)this + 122);
      *((float *)this + 109) = (float)(16 * v23);
      v25 = (float)(-16 * *(_DWORD *)(v24 + 312));
      *(float *)(v24 + 404) = v25;
      v26 = *((_QWORD *)this + 122);
      *((float *)this + 110) = v25;
      if ( !*(_DWORD *)(v26 + 324) && !*(_DWORD *)(v26 + 328) )
      {
        *((_DWORD *)this + 86) = -16 * *(_DWORD *)(v26 + 308);
        *((_DWORD *)this + 87) = -16 * *(_DWORD *)(v26 + 312);
        goto LABEL_9;
      }
    }
    else
    {
      v49 = (float)v23 * *((float *)this + 107);
      *(float *)(v22 + 400) = v49;
      v50 = *((_QWORD *)this + 122);
      *((float *)this + 109) = v49;
      v51 = (float)-*(_DWORD *)(v50 + 312) * *((float *)this + 108);
      *(float *)(v50 + 404) = v51;
      v52 = *((_QWORD *)this + 122);
      *((float *)this + 110) = v51;
      v26 = v52;
      if ( !*(_DWORD *)(v52 + 324) && !*(_DWORD *)(v52 + 328) )
        goto LABEL_35;
    }
    v32 = (float)(16 * *(_DWORD *)(v26 + 324)) + *((float *)this + 109);
    *(float *)(v26 + 400) = v32;
    v33 = *((_QWORD *)this + 122);
    *((float *)this + 109) = v32;
    v34 = (float)(16 * *(_DWORD *)(v33 + 328)) + *((float *)this + 110);
    *(float *)(v33 + 404) = v34;
    *((float *)this + 110) = v34;
LABEL_35:
    bFToL(*((float *)this + 109), (int *)this + 86, 6u);
    bFToL(*((float *)this + 110), (int *)this + 87, v35);
    goto LABEL_9;
  }
  if ( (v4 & 2) != 0 && !(unsigned int)DC::bDpiScaleTransform(this) )
  {
    *(_DWORD *)(v53 + 320) = *(_DWORD *)(v53 + 428);
    *(_DWORD *)(v53 + 332) = *(_DWORD *)(v53 + 432);
    *(_QWORD *)(v53 + 324) = 0LL;
    v54 = *(float *)(v53 + 436);
    *(float *)(v53 + 336) = v54;
    *(_DWORD *)(v53 + 340) = *(_DWORD *)(v53 + 440);
    bFToL(v54, (int *)(v53 + 344), 6u);
    bFToL(*((float *)this + 110), (int *)this + 87, v55);
    v10 = *((_QWORD *)this + 122);
    v12 = *(_DWORD *)(v10 + 340);
    if ( (v12 & 0x800) == 0 )
      goto LABEL_12;
    goto LABEL_32;
  }
LABEL_15:
  if ( (unsigned int)DC::bDpiScaleTransform(this) )
    *(_DWORD *)(v15 + 340) &= 0xFFFFE7FF;
  if ( (*(_DWORD *)(*((_QWORD *)this + 122) + 340LL) & 0x1000) != 0 )
  {
    *((_OWORD *)this + 20) = *(_OWORD *)((char *)this + 392);
    *((_OWORD *)this + 21) = *(_OWORD *)((char *)this + 408);
    v16 = *((float *)this + 84) * 16.0;
    *((__m128 *)this + 20) = _mm_mul_ps(*((__m128 *)this + 20), (__m128)_xmm);
    v17 = *((float *)this + 85) * 16.0;
    *((float *)this + 84) = v16;
    *((float *)this + 85) = v17;
  }
  else
  {
    v56 = *((float *)this + 107);
    v57 = *((float *)this + 108);
    if ( (unsigned int)DC::bDpiScaleTransform(v14) )
    {
      v56 = v56 * *((float *)this + 131);
      v58 = v58 * *((float *)this + 132);
    }
    *((float *)this + 80) = v56 * *((float *)this + 98);
    *((float *)this + 82) = v56 * *((float *)this + 100);
    *((float *)this + 81) = v58 * *((float *)this + 99);
    *((float *)this + 83) = v58 * *((float *)this + 101);
    v16 = v59 * *((float *)this + 102);
    *((float *)this + 84) = v16;
    *((float *)this + 85) = v57 * *((float *)this + 103);
  }
  v18 = *((float *)this + 109) + v16;
  *((float *)this + 84) = v18;
  bFToL(v18, (int *)this + 86, 6u);
  v19 = *((float *)this + 110) + *((float *)this + 85);
  *((float *)this + 85) = v19;
  bFToL(v19, (int *)this + 87, v20);
  if ( (unsigned int)DC::bDpiScaleTransform(this) )
  {
    v60 = *((float *)this + 131);
    v61 = v60 * *((float *)this + 84);
    *((float *)this + 84) = v61;
    v62 = *((float *)this + 132) * *((float *)this + 85);
    *((float *)this + 85) = v62;
    v63 = (float)*((int *)this + 2 * (*((_DWORD *)this + 10) & 1) + 255);
    v64 = (float)((float)((float)((float)*((int *)this + 2 * (*((_DWORD *)this + 10) & 1) + 254) * v60)
                        - (float)*((int *)this + 2 * (*((_DWORD *)this + 10) & 1) + 254))
                * 16.0)
        + v61;
    *((float *)this + 84) = v64;
    *((float *)this + 85) = (float)((float)((float)(v63 * *((float *)this + 132)) - v63) * 16.0) + v62;
    bFToL(v64, (int *)this + 86, v21);
    bFToL(*((float *)this + 85), (int *)this + 87, v65);
  }
  *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= ~0x10000u;
  if ( *((float *)this + 81) == 0.0 && *((float *)this + 82) == 0.0 )
  {
    if ( *((float *)this + 80) != 16.0 || *((float *)this + 83) != 16.0 )
      v2 = 9;
  }
  else
  {
    v2 = 8;
  }
  *((_DWORD *)this + 88) = v2;
  if ( !*((_DWORD *)this + 86) && !*((_DWORD *)this + 87) )
    *((_DWORD *)this + 88) = v2 | 0x40;
  *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFF1FFF;
  if ( !(unsigned int)DC::bDpiScaleTransform(this) )
    goto LABEL_14;
}
