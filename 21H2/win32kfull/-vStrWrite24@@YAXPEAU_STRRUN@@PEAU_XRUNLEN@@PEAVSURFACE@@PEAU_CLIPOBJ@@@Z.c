/*
 * XREFs of ?vStrWrite24@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C0125760
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C0008F24 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x1C0008FA8 (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0009024 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

void __fastcall vStrWrite24(struct _STRRUN *a1, struct _XRUNLEN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  struct _XRUNLEN *v5; // rsi
  struct SURFACE *v6; // r13
  struct _XRUNLEN *v7; // rbp
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r9
  char *v12; // r10
  char *v13; // r8
  int *v14; // rax
  __int16 v15; // cx
  char v16; // dl
  int j; // edi
  char *v18; // rbx
  bool v19; // zf
  LONG v20; // edx
  unsigned __int64 v21; // xmm0_8
  unsigned __int64 v22; // rdi
  LONG left; // r14d
  LONG v24; // r8d
  __int64 v25; // rcx
  int v26; // edi
  __int64 i; // r12
  int v28; // edx
  int v29; // eax
  int v30; // r9d
  LONG v31; // r8d
  LONG v32; // ecx
  int v33; // r9d
  char *v34; // r10
  char *v35; // r11
  __int64 v36; // rdx
  __int64 v37; // r8
  int *v38; // rdx
  __int16 v39; // ax
  char v40; // cl
  size_t v41; // rbp
  __int64 v42; // rsi
  char *v43; // rbx
  LONG v44; // edi
  int v45; // ebp
  LONG v46; // r8d
  LONG right; // edx
  LONG v48; // r8d
  struct _XRUNLEN *v49; // r10
  __int64 v50; // r13
  struct _XRUNLEN *v51; // r14
  __int64 v52; // rsi
  int v53; // ecx
  int v54; // r9d
  __int64 v55; // r15
  int *v56; // r12
  int v57; // [rsp+30h] [rbp-58h]
  struct _XRUNLEN *v58; // [rsp+38h] [rbp-50h]
  struct _RECTL rclBounds; // [rsp+40h] [rbp-48h] BYREF

  if ( a2 )
  {
    v5 = (struct _STRRUN *)((char *)a1 + 8);
    v58 = (struct _STRRUN *)((char *)a1 + 8);
    v6 = a3;
    v7 = a2;
    if ( a4 )
    {
      v19 = a4->iDComplexity == 1;
      rclBounds = 0LL;
      if ( v19 )
      {
        v20 = *(_DWORD *)a1;
        rclBounds = a4->rclBounds;
        v21 = _mm_srli_si128((__m128i)rclBounds, 8).m128i_u64[0];
        v22 = HIDWORD(v21);
        if ( v20 < SHIDWORD(v21) )
        {
          left = rclBounds.left;
          v24 = v20 + *((_DWORD *)a1 + 1);
          v25 = HIDWORD(*(_QWORD *)&rclBounds.left);
          if ( v24 > rclBounds.top )
          {
            if ( v20 >= rclBounds.top )
              LODWORD(v25) = v20;
            if ( v24 < SHIDWORD(v21) )
              LODWORD(v22) = v24;
            v26 = v22 - v25;
            for ( i = *((_QWORD *)v6 + 10) + (int)v25 * *((_DWORD *)v6 + 22); v5 != v7; v58 = v5 )
            {
              v28 = *(_DWORD *)v5;
              v29 = *((_DWORD *)v5 + 1);
              v30 = v29 + *(_DWORD *)v5;
              if ( v30 >= left )
              {
                if ( v28 >= (int)v21 )
                  return;
                v31 = left;
                v32 = v21;
                if ( v28 >= left )
                  v31 = *(_DWORD *)v5;
                if ( v30 < (int)v21 )
                  v32 = v29 + *(_DWORD *)v5;
                v33 = v32 - v31;
                v34 = (char *)(i + 2LL * v31 + v31);
                v35 = v34;
                if ( v31 < v32 )
                {
                  v36 = v31 - v28;
                  v37 = v33;
                  v38 = (int *)((char *)v5 + 4 * v36 + 8);
                  do
                  {
                    v39 = *(_WORD *)v38;
                    v35 += 3;
                    v40 = *((_BYTE *)v38++ + 2);
                    *(_WORD *)(v35 - 3) = v39;
                    *(v35 - 1) = v40;
                    --v37;
                  }
                  while ( v37 );
                }
                if ( v26 > 1 )
                {
                  v41 = 3 * v33;
                  v42 = (unsigned int)(v26 - 1);
                  do
                  {
                    v43 = &v34[*((int *)v6 + 22)];
                    memmove(v43, v34, v41);
                    v34 = v43;
                    --v42;
                  }
                  while ( v42 );
                  v5 = v58;
                  v7 = a2;
                }
                v29 = *((_DWORD *)v5 + 1);
              }
              v5 = (struct _XRUNLEN *)((char *)v5 + 4 * v29 + 8);
            }
          }
        }
      }
      else
      {
        XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
        v44 = *(_DWORD *)a1;
        v45 = *((_DWORD *)a1 + 1);
        v46 = *(_DWORD *)a1;
        rclBounds = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
        XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &rclBounds, v46);
        if ( v45 )
        {
          right = rclBounds.right;
          v48 = rclBounds.left;
          v49 = a2;
          do
          {
            --v45;
            if ( v44 >= rclBounds.top && v44 < rclBounds.bottom )
            {
              v50 = *((_QWORD *)a3 + 10) + v44 * *((_DWORD *)v6 + 22);
              if ( v5 != v49 )
              {
                v51 = v5;
                do
                {
                  v52 = *(int *)v51;
                  v53 = *((_DWORD *)v51 + 1);
                  v54 = v53 + v52;
                  v55 = v52 + v50 + 2 * v52;
                  v57 = v53 + v52;
                  if ( (int)v52 < v53 + (int)v52 )
                  {
                    v56 = (int *)((char *)v51 + 8);
                    do
                    {
                      if ( (int)v52 < v48 || (int)v52 >= right )
                      {
                        XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &rclBounds, v52);
                        right = rclBounds.right;
                        v48 = rclBounds.left;
                        v54 = v57;
                      }
                      if ( (int)v52 >= v48 && (int)v52 < right )
                      {
                        *(_WORD *)v55 = *(_WORD *)v56;
                        *(_BYTE *)(v55 + 2) = *((_BYTE *)v56 + 2);
                      }
                      v55 += 3LL;
                      ++v56;
                      LODWORD(v52) = v52 + 1;
                    }
                    while ( (int)v52 < v54 );
                    v53 = *((_DWORD *)v51 + 1);
                    v49 = a2;
                  }
                  v51 = (struct _XRUNLEN *)((char *)v51 + 4 * v53 + 8);
                }
                while ( v51 != v49 );
                v5 = v58;
              }
              v6 = a3;
            }
            if ( ++v44 < rclBounds.top || v44 >= rclBounds.bottom )
            {
              XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &rclBounds, v44);
              right = rclBounds.right;
              v48 = rclBounds.left;
              v49 = a2;
            }
          }
          while ( v45 );
        }
      }
    }
    else
    {
      v9 = *((_QWORD *)a3 + 10) + *(_DWORD *)a1 * *((_DWORD *)a3 + 22);
      if ( v5 != a2 )
      {
        do
        {
          v10 = *(int *)v5;
          v11 = *((unsigned int *)v5 + 1);
          v12 = (char *)(v10 + v9 + 2 * v10);
          v13 = v12;
          if ( (int)v10 < (int)v11 + (int)v10 )
          {
            v14 = (int *)((char *)v5 + 8);
            do
            {
              v15 = *(_WORD *)v14;
              v13 += 3;
              v16 = *((_BYTE *)v14++ + 2);
              *(_WORD *)(v13 - 3) = v15;
              *(v13 - 1) = v16;
              --v11;
            }
            while ( v11 );
          }
          for ( j = 1; j < *((_DWORD *)a1 + 1); v12 = v18 )
          {
            v18 = &v12[*((int *)v6 + 22)];
            memmove(v18, v12, 3 * *((_DWORD *)v5 + 1));
            ++j;
          }
          v5 = (struct _XRUNLEN *)((char *)v5 + 4 * *((int *)v5 + 1) + 8);
        }
        while ( v5 != v7 );
      }
    }
  }
}
