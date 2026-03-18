/*
 * XREFs of ?vStrWrite01@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C0008BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C0008F24 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x1C0008FA8 (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0009024 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

void __fastcall vStrWrite01(struct _STRRUN *a1, LONG *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  int *v4; // rbx
  XCLIPOBJ *v5; // r15
  struct _XRUNLEN *v7; // r12
  __int64 v9; // rsi
  int v10; // ecx
  int v11; // r15d
  int *v12; // r8
  int *v13; // r10
  char v14; // dl
  int v15; // r9d
  int *v16; // r12
  __int64 v17; // rsi
  int v18; // eax
  int v19; // r11d
  int v20; // edx
  LONG v21; // esi
  int v22; // r14d
  __int64 v23; // rcx
  LONG *v24; // r15
  LONG v25; // ebx
  __int64 v26; // rax
  int v27; // r9d
  char v28; // r12
  unsigned int v29; // r12d
  _DWORD *v30; // rcx
  int v31; // r14d
  char v32; // al
  __int64 v33; // rdx
  int *v34; // r8
  int v35; // eax
  int v36; // ecx
  int v37; // r15d
  __int64 v38; // r9
  __int64 v39; // r12
  int v40; // r15d
  int v41; // ecx
  int v42; // edx
  int v43; // r9d
  int v44; // r10d
  int v45; // r11d
  int v46; // r9d
  int v47; // r11d
  int v48; // r8d
  char *v49; // r9
  int v50; // esi
  size_t v51; // r12
  char *v52; // rbx
  int v53; // r9d
  int *v54; // rcx
  int v55; // r10d
  int v56; // edx
  char v57; // [rsp+30h] [rbp-50h]
  LONG v58; // [rsp+34h] [rbp-4Ch]
  int v59; // [rsp+34h] [rbp-4Ch]
  __int64 v60; // [rsp+38h] [rbp-48h]
  int v61; // [rsp+38h] [rbp-48h]
  struct _RECTL si128; // [rsp+40h] [rbp-40h] BYREF
  char *v63; // [rsp+50h] [rbp-30h]
  int v64; // [rsp+58h] [rbp-28h]
  __int64 v65; // [rsp+60h] [rbp-20h]
  int *v66; // [rsp+68h] [rbp-18h]
  _DWORD *v67; // [rsp+70h] [rbp-10h]
  __int64 v68; // [rsp+78h] [rbp-8h]

  if ( a2 )
  {
    v4 = (int *)((char *)a1 + 8);
    v5 = (XCLIPOBJ *)a4;
    v63 = (char *)a1 + 8;
    v7 = (struct _XRUNLEN *)a2;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
      v21 = *(_DWORD *)a1;
      v22 = *((_DWORD *)a1 + 1);
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      v58 = v21;
      XCLIPOBJ::vFindScan(v5, &si128, v21);
      while ( v22 )
      {
        v61 = --v22;
        if ( v21 >= si128.top && v21 < si128.bottom )
        {
          v23 = *((_QWORD *)a3 + 10) + v21 * *((_DWORD *)a3 + 22);
          v68 = v23;
          if ( v4 != (int *)v7 )
          {
            v24 = v4;
            do
            {
              v25 = *v24;
              v26 = (__int64)*v24 >> 5;
              v27 = *v24 + v24[1];
              v28 = *v24;
              v64 = v27;
              v29 = v28 & 0x1F;
              v30 = (_DWORD *)(v23 + 4 * v26);
              v67 = v30;
              if ( v25 < 0 || v25 >= *((_DWORD *)a3 + 14) )
              {
                v32 = 0;
                v31 = 0;
              }
              else
              {
                v31 = *v30;
                v32 = 1;
              }
              v57 = v32;
              if ( v25 < v27 )
              {
                v33 = v29;
                v34 = v24 + 2;
                v65 = v29;
                v66 = v24 + 2;
                do
                {
                  if ( v25 >= si128.right || v25 < si128.left )
                  {
                    XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &si128, v25, v27);
                    v33 = v65;
                    v34 = v66;
                    v27 = v64;
                    v30 = v67;
                  }
                  if ( v25 >= si128.left && v25 < si128.right )
                  {
                    v35 = dword_1C02ED6E0[v33];
                    if ( *v34 )
                      v31 |= v35;
                    else
                      v31 &= ~v35;
                  }
                  ++v33;
                  ++v34;
                  ++v29;
                  v65 = v33;
                  ++v25;
                  v66 = v34;
                  if ( (v29 & 0x20) != 0 )
                  {
                    if ( v57 )
                      *v30 = v31;
                    ++v30;
                    v33 = 0LL;
                    v29 = 0;
                    v67 = v30;
                    v65 = 0LL;
                    if ( v25 >= 0 && v25 < *((_DWORD *)a3 + 14) )
                    {
                      v31 = *v30;
                      v32 = 1;
                      v57 = 1;
                    }
                    else
                    {
                      v32 = 0;
                      v57 = 0;
                      v31 = 0;
                    }
                  }
                  else
                  {
                    v32 = v57;
                  }
                }
                while ( v25 < v27 );
              }
              if ( v32 )
                *v30 = v31;
              v7 = (struct _XRUNLEN *)a2;
              v23 = v68;
              v24 += v24[1] + 2;
            }
            while ( v24 != a2 );
            v21 = v58;
            v4 = (int *)v63;
            v5 = (XCLIPOBJ *)a4;
            v22 = v61;
          }
        }
        v58 = ++v21;
        if ( v21 >= si128.bottom || v21 < si128.top )
          XCLIPOBJ::vFindScan(v5, &si128, v21);
      }
    }
    else
    {
      v9 = *((_QWORD *)a3 + 10) + *(_DWORD *)a1 * *((_DWORD *)a3 + 22);
      v60 = v9;
      if ( v4 != a2 )
      {
        do
        {
          v10 = *v4;
          v11 = *v4 + v4[1];
          v12 = (int *)(v9 + 4 * ((__int64)*v4 >> 5));
          v13 = v12;
          if ( *v4 < v11 )
          {
            v14 = v10 & 0x1F;
            v15 = *v12;
            if ( (unsigned __int64)v12 < *((_QWORD *)a3 + 9) + (unsigned __int64)*((unsigned int *)a3 + 16) )
            {
              v16 = v4 + 2;
              v17 = v10 & 0x1F;
              do
              {
                v18 = *v16++;
                v19 = dword_1C02ED6E0[v17];
                if ( v18 )
                  v15 |= v19;
                else
                  v15 &= ~v19;
                ++v14;
                ++v17;
                if ( ++v10 >= v11 )
                  break;
                if ( (v14 & 0x20) != 0 )
                {
                  *v13 = v15;
                  v14 = 0;
                  ++v13;
                  v17 = 0LL;
                  v15 = *v13;
                }
              }
              while ( (unsigned __int64)v13 < *((_QWORD *)a3 + 9) + (unsigned __int64)*((unsigned int *)a3 + 16) );
              v4 = (int *)v63;
              v9 = v60;
              v7 = (struct _XRUNLEN *)a2;
            }
            *v13 = v15;
            v20 = *((_DWORD *)a1 + 1);
            if ( v20 > 1 )
            {
              v36 = *v4 >> 5;
              v37 = *v4 + v4[1];
              v38 = *v4 & 0x1F;
              v39 = v37 & 0x1F;
              v40 = v37 >> 5;
              v59 = v39;
              if ( v36 == v40 )
              {
                v41 = *v12;
                v42 = dword_1C02F9C00[v38] & ~dword_1C02F9C00[v39];
                v43 = 1;
                do
                {
                  v12 = (int *)((char *)v12 + *((int *)a3 + 22));
                  ++v43;
                  v41 = *v12 & ~v42 | v42 & v41;
                  *v12 = v41;
                }
                while ( v43 < *((_DWORD *)a1 + 1) );
              }
              else
              {
                if ( (_DWORD)v38 )
                {
                  v44 = 1;
                  v45 = dword_1C02F9C00[v38];
                  v46 = *v12 & v45;
                  v47 = ~v45;
                  do
                  {
                    ++v44;
                    v12 = (int *)((char *)v12 + *((int *)a3 + 22));
                    *v12 = v46 | v47 & *v12;
                    v20 = *((_DWORD *)a1 + 1);
                  }
                  while ( v44 < v20 );
                  ++v36;
                }
                v48 = v20;
                if ( v36 != v40 )
                {
                  v49 = (char *)(v9 + 4LL * v36);
                  v50 = 1;
                  if ( v20 > 1 )
                  {
                    v51 = 4 * (v40 - v36);
                    do
                    {
                      v52 = &v49[*((int *)a3 + 22)];
                      memmove(v52, v49, v51);
                      v48 = *((_DWORD *)a1 + 1);
                      ++v50;
                      v49 = v52;
                    }
                    while ( v50 < v48 );
                    v4 = (int *)v63;
                    LODWORD(v39) = v59;
                  }
                }
                v9 = v60;
                if ( (_DWORD)v39 )
                {
                  v53 = 1;
                  v54 = (int *)(v60 + 4LL * v40);
                  v55 = dword_1C02F9C00[(unsigned int)v39];
                  v56 = *v54 & ~v55;
                  if ( v48 > 1 )
                  {
                    do
                    {
                      ++v53;
                      v54 = (int *)((char *)v54 + *((int *)a3 + 22));
                      *v54 = v56 | v55 & *v54;
                    }
                    while ( v53 < *((_DWORD *)a1 + 1) );
                  }
                }
              }
              v7 = (struct _XRUNLEN *)a2;
            }
          }
          v4 += v4[1] + 2;
          v63 = (char *)v4;
        }
        while ( v4 != (int *)v7 );
      }
    }
  }
}
