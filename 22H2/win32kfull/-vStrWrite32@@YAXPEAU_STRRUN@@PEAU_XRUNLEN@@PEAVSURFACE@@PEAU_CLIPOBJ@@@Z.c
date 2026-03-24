/*
 * XREFs of ?vStrWrite32@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C00F2FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C00CEAA0 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x1C00CEB24 (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00CEBA0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 */

void __fastcall vStrWrite32(struct _STRRUN *a1, struct _XRUNLEN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  struct _XRUNLEN *v5; // r12
  struct SURFACE *v6; // rbx
  struct _XRUNLEN *v7; // rdi
  __int64 v9; // r14
  __int64 v11; // rdx
  unsigned int v12; // r10d
  _DWORD *v13; // r9
  _DWORD *v14; // r8
  int *v15; // rcx
  __int64 v16; // rdx
  int v17; // eax
  int v18; // edi
  char *v19; // rbx
  bool v20; // zf
  LONG v21; // edx
  unsigned __int64 v22; // xmm0_8
  unsigned __int64 v23; // rbp
  LONG left; // r15d
  LONG v25; // r8d
  __int64 v26; // rcx
  int v27; // ebp
  __int64 i; // r13
  int v29; // r8d
  int v30; // eax
  int v31; // edx
  LONG v32; // r10d
  LONG v33; // ecx
  int v34; // r11d
  _DWORD *v35; // r9
  _DWORD *v36; // rdx
  int v37; // r10d
  __int64 v38; // r8
  int *v39; // rcx
  int v40; // eax
  size_t v41; // rsi
  __int64 v42; // rdi
  char *v43; // rbx
  LONG v44; // r13d
  LONG v45; // r8d
  int v46; // esi
  LONG right; // ecx
  LONG v48; // edx
  __int64 v49; // r9
  struct _XRUNLEN *v50; // r14
  __int64 v51; // rbx
  int v52; // r8d
  _DWORD *v53; // rsi
  int v54; // ebp
  _DWORD *v55; // rdi
  __int64 j; // [rsp+30h] [rbp-58h]
  int v57; // [rsp+30h] [rbp-58h]
  __int64 v58; // [rsp+38h] [rbp-50h]
  struct _RECTL rclBounds; // [rsp+40h] [rbp-48h] BYREF

  if ( a2 )
  {
    v5 = (struct _STRRUN *)((char *)a1 + 8);
    v6 = a3;
    v7 = a2;
    if ( a4 )
    {
      v20 = a4->iDComplexity == 1;
      rclBounds = 0LL;
      if ( v20 )
      {
        v21 = *(_DWORD *)a1;
        rclBounds = a4->rclBounds;
        v22 = _mm_srli_si128((__m128i)rclBounds, 8).m128i_u64[0];
        v23 = HIDWORD(v22);
        if ( v21 < SHIDWORD(v22) )
        {
          left = rclBounds.left;
          v25 = v21 + *((_DWORD *)a1 + 1);
          v26 = HIDWORD(*(_QWORD *)&rclBounds.left);
          if ( v25 > rclBounds.top )
          {
            if ( v21 >= rclBounds.top )
              LODWORD(v26) = v21;
            if ( v25 < SHIDWORD(v22) )
              LODWORD(v23) = v25;
            v27 = v23 - v26;
            for ( i = *((_QWORD *)v6 + 10) + (int)v26 * *((_DWORD *)v6 + 22);
                  v5 != v7;
                  v5 = (struct _XRUNLEN *)((char *)v5 + 4 * v30 + 8) )
            {
              v29 = *(_DWORD *)v5;
              v30 = *((_DWORD *)v5 + 1);
              v31 = v30 + *(_DWORD *)v5;
              if ( v31 >= left )
              {
                if ( v29 >= (int)v22 )
                  return;
                v32 = left;
                v33 = v22;
                if ( v29 >= left )
                  v32 = *(_DWORD *)v5;
                if ( v31 < (int)v22 )
                  v33 = v30 + *(_DWORD *)v5;
                v34 = v33 - v32;
                v35 = (_DWORD *)(i + 4LL * v32);
                v36 = v35;
                if ( v32 < v33 )
                {
                  v37 = v32 - v29;
                  v38 = v34;
                  v39 = (int *)((char *)v5 + 4 * v37 + 8);
                  do
                  {
                    v40 = *v39++;
                    *v36++ = v40;
                    --v38;
                  }
                  while ( v38 );
                }
                if ( v27 > 1 )
                {
                  v41 = 4 * v34;
                  v42 = (unsigned int)(v27 - 1);
                  do
                  {
                    v43 = (char *)v35 + *((int *)a3 + 22);
                    memmove(v43, v35, v41);
                    v35 = v43;
                    --v42;
                  }
                  while ( v42 );
                  left = rclBounds.left;
                  v7 = a2;
                }
                v30 = *((_DWORD *)v5 + 1);
              }
            }
          }
        }
      }
      else
      {
        XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
        v44 = *(_DWORD *)a1;
        v45 = *(_DWORD *)a1;
        v46 = *((_DWORD *)a1 + 1);
        rclBounds = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
        XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &rclBounds, v45);
        if ( v46 )
        {
          right = rclBounds.right;
          v48 = rclBounds.left;
          do
          {
            v57 = --v46;
            if ( v44 >= rclBounds.top && v44 < rclBounds.bottom )
            {
              v49 = *((_QWORD *)v6 + 10) + v44 * *((_DWORD *)v6 + 22);
              v58 = v49;
              if ( v5 != v7 )
              {
                v50 = v5;
                do
                {
                  v51 = *(int *)v50;
                  v52 = *((_DWORD *)v50 + 1);
                  v53 = (_DWORD *)(v49 + 4 * v51);
                  v54 = v52 + v51;
                  if ( (int)v51 < v52 + (int)v51 )
                  {
                    v55 = (_DWORD *)((char *)v50 + 8);
                    do
                    {
                      if ( (int)v51 < v48 || (int)v51 >= right )
                      {
                        XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &rclBounds, v51);
                        v48 = rclBounds.left;
                        right = rclBounds.right;
                      }
                      if ( (int)v51 >= v48 && (int)v51 < right )
                        *v53 = *v55;
                      ++v53;
                      ++v55;
                      LODWORD(v51) = v51 + 1;
                    }
                    while ( (int)v51 < v54 );
                    v52 = *((_DWORD *)v50 + 1);
                    v49 = v58;
                    v7 = a2;
                  }
                  v50 = (struct _XRUNLEN *)((char *)v50 + 4 * v52 + 8);
                }
                while ( v50 != v7 );
                v6 = a3;
                v46 = v57;
              }
            }
            if ( ++v44 < rclBounds.top || v44 >= rclBounds.bottom )
            {
              XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &rclBounds, v44);
              right = rclBounds.right;
              v48 = rclBounds.left;
            }
          }
          while ( v46 );
        }
      }
    }
    else
    {
      v9 = *((_QWORD *)a3 + 10) + *(_DWORD *)a1 * *((_DWORD *)a3 + 22);
      for ( j = v9; v5 != a2; v5 = (struct _XRUNLEN *)((char *)v5 + 4 * *((int *)v5 + 1) + 8) )
      {
        v11 = *(int *)v5;
        v12 = *((_DWORD *)v5 + 1);
        v13 = (_DWORD *)(v9 + 4 * v11);
        v14 = v13;
        if ( (int)v11 < (int)(v12 + v11) )
        {
          v15 = (int *)((char *)v5 + 8);
          v16 = v12;
          do
          {
            v17 = *v15++;
            *v14++ = v17;
            --v16;
          }
          while ( v16 );
        }
        v18 = 1;
        if ( *((int *)a1 + 1) > 1 )
        {
          do
          {
            v19 = (char *)v13 + *((int *)a3 + 22);
            memmove(v19, v13, 4 * *((_DWORD *)v5 + 1));
            ++v18;
            v13 = v19;
          }
          while ( v18 < *((_DWORD *)a1 + 1) );
          v9 = j;
        }
      }
    }
  }
}
