/*
 * XREFs of ?vStrWrite04@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02E5190
 * Callers:
 *     <none>
 * Callees:
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00B5E70 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C00B5F94 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x1C0268008 (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 */

void __fastcall vStrWrite04(struct _STRRUN *a1, struct _XRUNLEN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  XCLIPOBJ *v4; // rbx
  int *v5; // r12
  LONG *v7; // r15
  __int64 v8; // r13
  int v9; // r11d
  int v10; // ecx
  int *v11; // r8
  int *v12; // r9
  char v13; // r10
  int v14; // ebx
  __int64 v15; // rsi
  int *v16; // r12
  int v17; // r13d
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  int v21; // r10d
  int v22; // r9d
  int v23; // esi
  int v24; // edx
  int v25; // esi
  __int64 v26; // rcx
  int v27; // ebx
  int v28; // edx
  int v29; // r10d
  int v30; // r9d
  int v31; // r11d
  int v32; // edx
  int v33; // ecx
  int v34; // edx
  int v35; // r8d
  char *v36; // rdx
  int v37; // r13d
  size_t v38; // r12
  char *v39; // rbx
  int v40; // r9d
  int *v41; // rcx
  int v42; // r10d
  int v43; // edx
  LONG v44; // esi
  LONG v45; // r15d
  int *v46; // r10
  __int64 v47; // rcx
  int *v48; // r15
  int v49; // ebx
  __int64 v50; // rax
  int v51; // edx
  char v52; // r8
  unsigned int v53; // r8d
  int *v54; // r9
  int v55; // r13d
  char v56; // al
  __int64 v57; // r10
  int *v58; // r11
  char v59; // [rsp+30h] [rbp-39h]
  int v60; // [rsp+34h] [rbp-35h]
  LONG v61; // [rsp+34h] [rbp-35h]
  unsigned int v62; // [rsp+38h] [rbp-31h]
  __int64 i; // [rsp+40h] [rbp-29h]
  LONG v64; // [rsp+40h] [rbp-29h]
  struct _RECTL si128; // [rsp+48h] [rbp-21h] BYREF
  int *v66; // [rsp+58h] [rbp-11h]
  int *v67; // [rsp+60h] [rbp-9h]
  int v68; // [rsp+68h] [rbp-1h]
  __int64 v69; // [rsp+70h] [rbp+7h]
  int *v70; // [rsp+78h] [rbp+Fh]
  __int64 v71; // [rsp+80h] [rbp+17h]
  struct _XRUNLEN *v73; // [rsp+D8h] [rbp+6Fh]

  if ( a2 )
  {
    v73 = a2;
    v4 = (XCLIPOBJ *)a4;
    v5 = (int *)((char *)a1 + 8);
    v66 = (int *)((char *)a1 + 8);
    v7 = (LONG *)a1;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
      v44 = *v7;
      v45 = v7[1];
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      v61 = v44;
      XCLIPOBJ::vFindScan(v4, &si128, v44);
      while ( v45 )
      {
        v64 = --v45;
        if ( v44 >= si128.top && v44 < si128.bottom )
        {
          v46 = (int *)v73;
          v47 = *((_QWORD *)a3 + 10) + *((_DWORD *)a3 + 22) * v44;
          v71 = v47;
          if ( v5 != (int *)v73 )
          {
            v48 = v5;
            do
            {
              v49 = *v48;
              v50 = (__int64)*v48 >> 3;
              v51 = *v48 + v48[1];
              v52 = *v48;
              v68 = v51;
              v53 = v52 & 7;
              v62 = v53;
              v54 = (int *)(v47 + 4 * v50);
              v67 = v54;
              if ( v49 < 0 || v49 >= *((_DWORD *)a3 + 14) )
              {
                v56 = 0;
                v55 = 0;
              }
              else
              {
                v55 = *v54;
                v56 = 1;
              }
              v59 = v56;
              if ( v49 < v51 )
              {
                v57 = v53;
                v58 = v48 + 2;
                v69 = v53;
                v70 = v48 + 2;
                do
                {
                  if ( v49 < si128.left || v49 >= si128.right )
                  {
                    XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &si128, v49);
                    v53 = v62;
                    v54 = v67;
                    v57 = v69;
                    v58 = v70;
                  }
                  if ( v49 >= si128.left && v49 < si128.right )
                    v55 = v55 & ~dword_1C031B088[v57] | dword_1C031B088[v57] & (*v58 << dword_1C031B068[v57]);
                  ++v53;
                  ++v57;
                  ++v58;
                  v62 = v53;
                  ++v49;
                  v69 = v57;
                  v70 = v58;
                  if ( (v53 & 8) != 0 )
                  {
                    if ( v59 )
                      *v54 = v55;
                    ++v54;
                    v53 = 0;
                    v57 = 0LL;
                    v67 = v54;
                    v62 = 0;
                    v69 = 0LL;
                    if ( v49 < 0 || v49 >= *((_DWORD *)a3 + 14) )
                    {
                      v56 = 0;
                      v59 = 0;
                      v55 = 0;
                    }
                    else
                    {
                      v55 = *v54;
                      v56 = 1;
                      v59 = 1;
                    }
                  }
                  else
                  {
                    v56 = v59;
                  }
                }
                while ( v49 < v68 );
                v47 = v71;
                v46 = (int *)v73;
              }
              if ( v56 )
                *v54 = v55;
              v48 += v48[1] + 2;
            }
            while ( v48 != v46 );
            v44 = v61;
            v5 = v66;
            v4 = (XCLIPOBJ *)a4;
            v45 = v64;
          }
        }
        v61 = ++v44;
        if ( v44 < si128.top || v44 >= si128.bottom )
          XCLIPOBJ::vFindScan(v4, &si128, v44);
      }
    }
    else
    {
      v8 = *((_QWORD *)a3 + 10) + *(_DWORD *)a1 * *((_DWORD *)a3 + 22);
      for ( i = v8; v5 != (int *)a2; v66 = v5 )
      {
        v9 = *v5;
        v10 = *v5 + v5[1];
        v11 = (int *)(v8 + 4 * ((__int64)*v5 >> 3));
        v12 = v11;
        if ( *v5 < v10 )
        {
          v13 = v9 & 7;
          v14 = *v11;
          if ( (unsigned __int64)v11 < *((_QWORD *)a3 + 9) + (unsigned __int64)*((unsigned int *)a3 + 16) )
          {
            v15 = v9 & 7;
            v16 = v5 + 2;
            v17 = v10;
            do
            {
              v18 = dword_1C031B088[v15];
              ++v13;
              v19 = *v16;
              ++v9;
              v20 = dword_1C031B068[v15];
              ++v16;
              ++v15;
              v14 = v14 & ~v18 | v18 & (v19 << v20);
              if ( v9 >= v17 )
                break;
              if ( (v13 & 8) != 0 )
              {
                *v12 = v14;
                v13 = 0;
                ++v12;
                v15 = 0LL;
                v14 = *v12;
              }
            }
            while ( (unsigned __int64)v12 < *((_QWORD *)a3 + 9) + (unsigned __int64)*((unsigned int *)a3 + 16) );
            v7 = (LONG *)a1;
            v5 = v66;
            v8 = i;
            a2 = v73;
          }
          *v12 = v14;
          v21 = v7[1];
          if ( v21 > 1 )
          {
            v22 = *v5 >> 3;
            v23 = *v5 + v5[1];
            v24 = v23 & 7;
            v25 = v23 >> 3;
            v26 = 4 * (*v5 & 7u);
            v27 = 4 * v24;
            v60 = 4 * v24;
            if ( v22 == v25 )
            {
              v28 = *v11;
              v29 = 1;
              v30 = dword_1C032AE00[v26] & ~dword_1C032AE00[v27];
              do
              {
                ++v29;
                v11 = (int *)((char *)v11 + *((int *)a3 + 22));
                v28 = v30 & v28 | *v11 & ~v30;
                *v11 = v28;
              }
              while ( v29 < v7[1] );
            }
            else
            {
              if ( (_DWORD)v26 )
              {
                v31 = 1;
                v32 = dword_1C032AE00[(unsigned int)v26];
                v33 = *v11 & v32;
                v34 = ~v32;
                do
                {
                  ++v31;
                  v11 = (int *)((char *)v11 + *((int *)a3 + 22));
                  *v11 = v33 | v34 & *v11;
                  v21 = v7[1];
                }
                while ( v31 < v21 );
                ++v22;
              }
              v35 = v21;
              if ( v22 != v25 )
              {
                v36 = (char *)(v8 + 4LL * v22);
                v37 = 1;
                if ( v21 > 1 )
                {
                  v38 = 4 * (v25 - v22);
                  do
                  {
                    v39 = &v36[*((int *)a3 + 22)];
                    memmove(v39, v36, v38);
                    v35 = v7[1];
                    ++v37;
                    v36 = v39;
                  }
                  while ( v37 < v35 );
                  v5 = v66;
                  v27 = v60;
                }
                v8 = i;
              }
              if ( v27 )
              {
                v40 = 1;
                v41 = (int *)(v8 + 4LL * v25);
                v42 = dword_1C032AE00[v27];
                v43 = *v41 & ~v42;
                if ( v35 > 1 )
                {
                  do
                  {
                    ++v40;
                    v41 = (int *)((char *)v41 + *((int *)a3 + 22));
                    *v41 = v43 | v42 & *v41;
                  }
                  while ( v40 < v7[1] );
                }
              }
            }
            a2 = v73;
          }
        }
        v5 += v5[1] + 2;
      }
    }
  }
}
