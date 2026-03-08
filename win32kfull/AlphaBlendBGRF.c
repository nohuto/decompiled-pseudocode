/*
 * XREFs of AlphaBlendBGRF @ 0x1C0260824
 * Callers:
 *     BltDIB_CY @ 0x1C0260E50 (BltDIB_CY.c)
 *     ExpandDIB_CY @ 0x1C0261EE0 (ExpandDIB_CY.c)
 *     ExpandDIB_CY_ExpCX @ 0x1C0262870 (ExpandDIB_CY_ExpCX.c)
 *     FastExpAA_CY @ 0x1C0263760 (FastExpAA_CY.c)
 *     GrayExpandDIB_CY @ 0x1C02640E0 (GrayExpandDIB_CY.c)
 *     GrayExpandDIB_CY_ExpCX @ 0x1C0264850 (GrayExpandDIB_CY_ExpCX.c)
 *     GrayShrinkDIB_CY @ 0x1C0265340 (GrayShrinkDIB_CY.c)
 *     RepDIB_CY @ 0x1C0265B80 (RepDIB_CY.c)
 *     ShrinkDIB_CY @ 0x1C0266300 (ShrinkDIB_CY.c)
 *     ShrinkDIB_CY_SrkCX @ 0x1C0266AA0 (ShrinkDIB_CY_SrkCX.c)
 *     SkipDIB_CY @ 0x1C02674B0 (SkipDIB_CY.c)
 *     TileDIB_CY @ 0x1C0267720 (TileDIB_CY.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int16 __fastcall AlphaBlendBGRF(int *a1)
{
  unsigned __int8 *v1; // rbx
  int v3; // r13d
  int v4; // r12d
  unsigned __int16 *v5; // rdi
  unsigned __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int8 *v9; // rbx
  unsigned __int8 *v10; // rdi
  __int64 v11; // rdx
  _BYTE *v12; // rdi
  unsigned __int8 *v13; // rbx
  __int64 v14; // rax
  __int16 v15; // dx
  unsigned __int8 *v16; // r10
  unsigned __int16 v17; // cx
  int v18; // edx
  unsigned int v19; // ecx
  __int64 v20; // rax
  unsigned int v21; // ecx
  unsigned int v22; // edx
  _BYTE *v23; // r14
  unsigned __int8 *v24; // rdi
  __int64 v25; // rdx
  int v26; // r8d
  __int64 v27; // rax
  int v28; // ecx
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int8 v31; // cl
  __int64 v32; // rax
  _BYTE *v33; // rdi
  __int64 v34; // rdx
  int v35; // r8d
  __int64 v36; // rax
  int v37; // ecx
  __int64 v38; // rax
  __int64 v39; // rax
  char v40; // cl
  __int64 v41; // rax
  unsigned __int8 *v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rcx
  int v45; // r8d
  __int64 v46; // rax
  int v47; // ecx
  __int64 v48; // rax
  unsigned __int8 v49; // cl
  __int64 v50; // rax
  unsigned __int8 v51; // cl
  __int64 v52; // rax
  _BYTE *v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rcx
  int v56; // r8d
  __int64 v57; // rax
  int v58; // ecx
  __int64 v59; // rax
  char v60; // cl
  __int64 v61; // rax
  char v62; // cl
  __int64 v63; // rax

  v1 = (unsigned __int8 *)*((_QWORD *)a1 + 67);
  v3 = *a1;
  v4 = a1[2] & 4;
  v5 = (unsigned __int16 *)*((_QWORD *)a1 + 68);
  v6 = *((_QWORD *)a1 + 69);
  v7 = *((_QWORD *)a1 + 42);
  LOWORD(v8) = (*((__int64 (__fastcall **)(int *, unsigned __int8 *))a1 + 14))(a1 + 24, v1);
  if ( (v3 & 0x1000) != 0 )
  {
    if ( (v3 & 0x80) != 0 )
    {
      if ( v4 )
      {
        do
        {
          if ( *((_BYTE *)v5 + 3) )
          {
            LOWORD(v8) = *(_WORD *)(v7 + 2LL * *((unsigned __int8 *)v5 + 1)) + *(_WORD *)(v7 + 2LL * *v1 + 1536);
            *v5 = v8;
          }
          ++v1;
          v5 += 2;
        }
        while ( (unsigned __int64)v5 < v6 );
      }
      else
      {
        v9 = v1 + 2;
        v10 = (unsigned __int8 *)v5 + 1;
        do
        {
          if ( v10[2] )
          {
            *(v10 - 1) = (unsigned __int16)(*(_WORD *)(v7 + 2LL * *(v10 - 1)) + *(_WORD *)(v7 + 2LL * *(v9 - 2) + 1536)) >> 8;
            *v10 = (unsigned __int16)(*(_WORD *)(v7 + 2LL * *v10 + 512) + *(_WORD *)(v7 + 2LL * *(v9 - 1) + 1536)) >> 8;
            v10[1] = (unsigned __int16)(*(_WORD *)(v7 + 2LL * v10[1] + 1024) + *(_WORD *)(v7 + 2LL * *v9 + 1536)) >> 8;
          }
          v10 += 4;
          v9 += 3;
          LOWORD(v8) = (_WORD)v10 - 1;
        }
        while ( (unsigned __int64)(v10 - 1) < v6 );
      }
    }
    else if ( v4 )
    {
      do
      {
        v11 = *v1++;
        LOWORD(v8) = *(_WORD *)(v7 + 2LL * *((unsigned __int8 *)v5 + 1)) + *(_WORD *)(v7 + 2 * v11 + 1536);
        *v5 = v8;
        v5 += 2;
      }
      while ( (unsigned __int64)v5 < v6 );
    }
    else
    {
      v12 = v5 + 1;
      v13 = v1 + 2;
      do
      {
        *(v12 - 2) = (unsigned __int16)(*(_WORD *)(v7 + 2LL * (unsigned __int8)*(v12 - 2))
                                      + *(_WORD *)(v7 + 2LL * *(v13 - 2) + 1536)) >> 8;
        v14 = (unsigned __int8)*v12;
        *(v12 - 1) = (unsigned __int16)(*(_WORD *)(v7 + 2LL * (unsigned __int8)*(v12 - 1) + 512)
                                      + *(_WORD *)(v7 + 2LL * *(v13 - 1) + 1536)) >> 8;
        v15 = *(_WORD *)(v7 + 2 * v14 + 1024);
        v8 = *v13;
        v13 += 3;
        *v12 = (unsigned __int16)(*(_WORD *)(v7 + 2 * v8 + 1536) + v15) >> 8;
        v12 += 4;
        LOWORD(v8) = (_WORD)v12 - 2;
      }
      while ( (unsigned __int64)(v12 - 2) < v6 );
    }
    return v8;
  }
  LOWORD(v8) = (*((__int64 (__fastcall **)(int *))a1 + 30))(a1);
  v16 = (unsigned __int8 *)*((_QWORD *)a1 + 43);
  if ( v4 )
  {
    if ( (v3 & 0x80) != 0 )
    {
      while ( 1 )
      {
        if ( *((_BYTE *)v5 + 3) )
        {
          v17 = GrayIdxWORD[*v1];
          v8 = *v16;
          if ( !(_BYTE)v8 )
            goto LABEL_25;
          if ( (_BYTE)v8 != 0xFF )
            break;
        }
LABEL_26:
        ++v16;
        ++v1;
        v5 += 2;
        if ( (unsigned __int64)v5 >= v6 )
          return v8;
      }
      v18 = GrayIdxWORD[*v1];
      v19 = GrayIdxWORD[v8];
      LODWORD(v8) = *v5 - v18;
      v17 = v18 + ((int)(v8 * (v19 >> 4) + 2048) >> 12);
LABEL_25:
      *v5 = v17;
      goto LABEL_26;
    }
    while ( 1 )
    {
      v20 = *v1++;
      v21 = GrayIdxWORD[v20];
      v8 = *v16;
      if ( !(_BYTE)v8 )
        goto LABEL_31;
      if ( (_BYTE)v8 != 0xFF )
        break;
LABEL_32:
      ++v16;
      v5 += 2;
      if ( (unsigned __int64)v5 >= v6 )
        return v8;
    }
    v22 = v21;
    v21 = GrayIdxWORD[v8];
    LODWORD(v8) = *v5 - v22;
    LOWORD(v21) = v22 + ((int)(v8 * (v21 >> 4) + 2048) >> 12);
LABEL_31:
    *v5 = v21;
    goto LABEL_32;
  }
  if ( (v3 & 0x100000) != 0 )
  {
    v23 = (_BYTE *)(*((_QWORD *)a1 + 17) + 3LL);
    if ( (v3 & 0x80) != 0 )
    {
      v24 = (unsigned __int8 *)v5 + 1;
      do
      {
        if ( v24[2] )
        {
          v25 = *v16;
          if ( (_BYTE)v25 )
          {
            if ( (_BYTE)v25 == 0xFF )
            {
              v30 = *v24;
              *(v24 - 1) = *(_BYTE *)(*(v24 - 1) + v7);
              v31 = *(_BYTE *)(v30 + v7);
              v32 = v24[1];
              *v24 = v31;
              v24[1] = *(_BYTE *)(v32 + v7);
              *v23 = -1;
            }
            else
            {
              v26 = GrayIdxWORD[v25];
              *v23 = v25 + *v23 - ((v26 * (unsigned int)(unsigned __int8)*v23 + 0x8000) >> 16);
              v27 = *v24;
              *(v24 - 1) = *v1 + ((v26 * (*(unsigned __int8 *)(*(v24 - 1) + v7) - (unsigned int)*v1) + 0x8000) >> 16);
              v28 = *(unsigned __int8 *)(v27 + v7 + 256);
              v29 = v24[1];
              *v24 = v1[1] + ((v26 * (v28 - (unsigned int)v1[1]) + 0x8000) >> 16);
              v24[1] = v1[2] + ((v26 * (*(unsigned __int8 *)(v29 + v7 + 512) - (unsigned int)v1[2]) + 0x8000) >> 16);
            }
          }
          else
          {
            *(_WORD *)(v24 - 1) = *(_WORD *)v1;
            v24[1] = v1[2];
          }
        }
        v24 += 4;
        ++v16;
        v23 += 4;
        v1 += 3;
        LOWORD(v8) = (_WORD)v24 - 1;
      }
      while ( (unsigned __int64)(v24 - 1) < v6 );
    }
    else
    {
      v33 = v5 + 1;
      do
      {
        v34 = *v16++;
        if ( (_BYTE)v34 )
        {
          if ( (_BYTE)v34 == 0xFF )
          {
            v39 = (unsigned __int8)*(v33 - 1);
            *(v33 - 2) = *(_BYTE *)((unsigned __int8)*(v33 - 2) + v7);
            v40 = *(_BYTE *)(v39 + v7);
            v41 = (unsigned __int8)*v33;
            *(v33 - 1) = v40;
            *v33 = *(_BYTE *)(v41 + v7);
            *v23 = -1;
          }
          else
          {
            v35 = GrayIdxWORD[v34];
            *v23 = v34 + *v23 - ((v35 * (unsigned int)(unsigned __int8)*v23 + 0x8000) >> 16);
            v36 = (unsigned __int8)*(v33 - 1);
            *(v33 - 2) = *v1
                       + ((v35 * (*(unsigned __int8 *)((unsigned __int8)*(v33 - 2) + v7) - (unsigned int)*v1) + 0x8000) >> 16);
            v37 = *(unsigned __int8 *)(v36 + v7 + 256);
            v38 = (unsigned __int8)*v33;
            *(v33 - 1) = v1[1] + ((v35 * (v37 - (unsigned int)v1[1]) + 0x8000) >> 16);
            *v33 = v1[2] + ((v35 * (*(unsigned __int8 *)(v38 + v7 + 512) - (unsigned int)v1[2]) + 0x8000) >> 16);
          }
        }
        else
        {
          *((_WORD *)v33 - 1) = *(_WORD *)v1;
          *v33 = v1[2];
        }
        v33 += 4;
        v23 += 4;
        v1 += 3;
        LOWORD(v8) = (_WORD)v33 - 2;
      }
      while ( (unsigned __int64)(v33 - 2) < v6 );
    }
  }
  else if ( (v3 & 0x80) != 0 )
  {
    v42 = (unsigned __int8 *)v5 + 1;
    do
    {
      if ( v42[2] )
      {
        v43 = *v16;
        if ( (_BYTE)v43 )
        {
          v44 = *(v42 - 1);
          if ( (_BYTE)v43 == 0xFF )
          {
            v50 = *v42;
            *(v42 - 1) = *(_BYTE *)(v44 + v7);
            v51 = *(_BYTE *)(v50 + v7);
            v52 = v42[1];
            *v42 = v51;
            v49 = *(_BYTE *)(v52 + v7);
          }
          else
          {
            v45 = GrayIdxWORD[v43];
            v46 = *v42;
            *(v42 - 1) = *v1 + ((v45 * (*(unsigned __int8 *)(v44 + v7) - (unsigned int)*v1) + 0x8000) >> 16);
            v47 = *(unsigned __int8 *)(v46 + v7 + 256);
            v48 = v42[1];
            *v42 = v1[1] + ((v45 * (v47 - (unsigned int)v1[1]) + 0x8000) >> 16);
            v49 = v1[2] + ((v45 * (*(unsigned __int8 *)(v48 + v7 + 512) - (unsigned int)v1[2]) + 0x8000) >> 16);
          }
          v42[1] = v49;
        }
        else
        {
          *(_WORD *)(v42 - 1) = *(_WORD *)v1;
          v42[1] = v1[2];
        }
      }
      v42 += 4;
      ++v16;
      v1 += 3;
      LOWORD(v8) = (_WORD)v42 - 1;
    }
    while ( (unsigned __int64)(v42 - 1) < v6 );
  }
  else
  {
    v53 = v5 + 1;
    do
    {
      v54 = *v16;
      if ( (_BYTE)v54 )
      {
        v55 = (unsigned __int8)*(v53 - 2);
        if ( (_BYTE)v54 == 0xFF )
        {
          v61 = (unsigned __int8)*(v53 - 1);
          *(v53 - 2) = *(_BYTE *)(v55 + v7);
          v62 = *(_BYTE *)(v61 + v7);
          v63 = (unsigned __int8)*v53;
          *(v53 - 1) = v62;
          v60 = *(_BYTE *)(v63 + v7);
        }
        else
        {
          v56 = GrayIdxWORD[v54];
          v57 = (unsigned __int8)*(v53 - 1);
          *(v53 - 2) = *v1 + ((v56 * (*(unsigned __int8 *)(v55 + v7) - (unsigned int)*v1) + 0x8000) >> 16);
          v58 = *(unsigned __int8 *)(v57 + v7 + 256);
          v59 = (unsigned __int8)*v53;
          *(v53 - 1) = v1[1] + ((v56 * (v58 - (unsigned int)v1[1]) + 0x8000) >> 16);
          v60 = v1[2] + ((v56 * (*(unsigned __int8 *)(v59 + v7 + 512) - (unsigned int)v1[2]) + 0x8000) >> 16);
        }
        *v53 = v60;
      }
      else
      {
        *((_WORD *)v53 - 1) = *(_WORD *)v1;
        *v53 = v1[2];
      }
      v53 += 4;
      ++v16;
      v1 += 3;
      LOWORD(v8) = (_WORD)v53 - 2;
    }
    while ( (unsigned __int64)(v53 - 2) < v6 );
  }
  return v8;
}
