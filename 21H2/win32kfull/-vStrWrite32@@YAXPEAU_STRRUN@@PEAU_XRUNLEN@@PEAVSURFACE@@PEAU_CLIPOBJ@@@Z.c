/*
 * XREFs of ?vStrWrite32@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C00E05C0
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C0008F24 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x1C0008FA8 (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0009024 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

void __fastcall vStrWrite32(struct _STRRUN *a1, struct _XRUNLEN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  LONG *v4; // rdi
  struct _XRUNLEN *v6; // r12
  bool v8; // zf
  LONG v9; // ecx
  unsigned __int64 v10; // xmm0_8
  unsigned __int64 v11; // r14
  LONG v12; // edx
  __int64 v13; // rax
  int v14; // r14d
  __int64 v15; // r11
  LONG v16; // edx
  int v17; // eax
  LONG v18; // r9d
  LONG left; // r8d
  LONG v20; // ecx
  int v21; // r10d
  _DWORD *v22; // r11
  _DWORD *v23; // r9
  int v24; // r8d
  __int64 v25; // rdx
  int *v26; // rcx
  int v27; // eax
  __int64 v28; // r14
  __int64 v29; // rdx
  unsigned int v30; // r10d
  _DWORD *v31; // r9
  _DWORD *v32; // r8
  int *v33; // rcx
  __int64 v34; // rdx
  int v35; // eax
  int v36; // r15d
  char *v37; // rbx
  size_t v38; // r15
  __int64 v39; // rsi
  char *v40; // rbx
  LONG v41; // ebx
  int v42; // r13d
  __int64 v43; // rdx
  struct _XRUNLEN *v44; // r14
  __int64 v45; // rsi
  int v46; // ecx
  int *v47; // r8
  int v48; // r9d
  int *v49; // rcx
  int *v50; // [rsp+30h] [rbp-30h]
  __int64 v51; // [rsp+38h] [rbp-28h]
  int *v52; // [rsp+38h] [rbp-28h]
  __int64 v53; // [rsp+40h] [rbp-20h]
  struct _RECTL rclBounds; // [rsp+48h] [rbp-18h] BYREF
  int v56; // [rsp+A8h] [rbp+48h]

  if ( a2 )
  {
    v4 = (LONG *)((char *)a1 + 8);
    v6 = a2;
    if ( a4 )
    {
      v8 = a4->iDComplexity == 1;
      rclBounds = 0LL;
      if ( v8 )
      {
        v9 = *(_DWORD *)a1;
        rclBounds = a4->rclBounds;
        v10 = _mm_srli_si128((__m128i)rclBounds, 8).m128i_u64[0];
        v11 = HIDWORD(v10);
        if ( v9 < SHIDWORD(v10) )
        {
          v12 = v9 + *((_DWORD *)a1 + 1);
          v13 = HIDWORD(*(_QWORD *)&rclBounds.left);
          if ( v12 > rclBounds.top )
          {
            if ( v9 >= rclBounds.top )
              LODWORD(v13) = v9;
            if ( v12 < SHIDWORD(v10) )
              LODWORD(v11) = v9 + *((_DWORD *)a1 + 1);
            v14 = v11 - v13;
            v15 = *((_QWORD *)a3 + 10) + *((_DWORD *)a3 + 22) * (int)v13;
            v51 = v15;
            while ( v4 != (LONG *)v6 )
            {
              v16 = *v4;
              v17 = v4[1];
              v18 = v17 + *v4;
              if ( v18 >= rclBounds.left )
              {
                if ( v16 >= (int)v10 )
                  return;
                left = rclBounds.left;
                v20 = v10;
                if ( v16 >= rclBounds.left )
                  left = *v4;
                if ( v18 < (int)v10 )
                  v20 = v17 + *v4;
                v21 = v20 - left;
                v22 = (_DWORD *)(v15 + 4LL * left);
                v23 = v22;
                if ( left < v20 )
                {
                  v24 = left - v16;
                  v25 = v21;
                  v26 = &v4[v24 + 2];
                  do
                  {
                    v27 = *v26++;
                    *v23++ = v27;
                    --v25;
                  }
                  while ( v25 );
                }
                if ( v14 > 1 )
                {
                  v38 = 4 * v21;
                  v39 = (unsigned int)(v14 - 1);
                  do
                  {
                    v40 = (char *)v22 + *((int *)a3 + 22);
                    memmove(v40, v22, v38);
                    v22 = v40;
                    --v39;
                  }
                  while ( v39 );
                  v6 = a2;
                }
                v17 = v4[1];
                v15 = v51;
              }
              v4 += v17 + 2;
            }
          }
        }
      }
      else
      {
        XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
        v41 = *(_DWORD *)a1;
        v42 = *((_DWORD *)a1 + 1);
        rclBounds = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
LABEL_56:
        XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &rclBounds, v41);
        while ( v42 )
        {
          --v42;
          if ( v41 >= rclBounds.top && v41 < rclBounds.bottom )
          {
            v43 = *((_QWORD *)a3 + 10) + v41 * *((_DWORD *)a3 + 22);
            v53 = v43;
            if ( v4 != (LONG *)v6 )
            {
              v44 = (struct _XRUNLEN *)v4;
              do
              {
                v45 = *(int *)v44;
                v46 = *((_DWORD *)v44 + 1);
                v47 = (int *)(v43 + 4 * v45);
                v48 = v46 + v45;
                v50 = v47;
                v56 = v46 + v45;
                if ( (int)v45 < v46 + (int)v45 )
                {
                  v49 = (int *)((char *)v44 + 8);
                  v52 = (int *)((char *)v44 + 8);
                  do
                  {
                    if ( (int)v45 < rclBounds.left || (int)v45 >= rclBounds.right )
                    {
                      XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &rclBounds, v45);
                      v47 = v50;
                      v48 = v56;
                      v49 = v52;
                    }
                    if ( (int)v45 >= rclBounds.left && (int)v45 < rclBounds.right )
                      *v47 = *v49;
                    ++v47;
                    ++v49;
                    LODWORD(v45) = v45 + 1;
                    v50 = v47;
                    v52 = v49;
                  }
                  while ( (int)v45 < v48 );
                  v46 = *((_DWORD *)v44 + 1);
                  v43 = v53;
                }
                v44 = (struct _XRUNLEN *)((char *)v44 + 4 * v46 + 8);
              }
              while ( v44 != v6 );
            }
          }
          if ( ++v41 < rclBounds.top || v41 >= rclBounds.bottom )
            goto LABEL_56;
        }
      }
    }
    else
    {
      v28 = *((_QWORD *)a3 + 10) + *(_DWORD *)a1 * *((_DWORD *)a3 + 22);
      while ( v4 != (LONG *)v6 )
      {
        v29 = *v4;
        v30 = v4[1];
        v31 = (_DWORD *)(v28 + 4 * v29);
        v32 = v31;
        if ( (int)v29 < (int)(v30 + v29) )
        {
          v33 = v4 + 2;
          v34 = v30;
          do
          {
            v35 = *v33++;
            *v32++ = v35;
            --v34;
          }
          while ( v34 );
        }
        v36 = 1;
        if ( *((int *)a1 + 1) > 1 )
        {
          do
          {
            v37 = (char *)v31 + *((int *)a3 + 22);
            memmove(v37, v31, 4 * v4[1]);
            ++v36;
            v31 = v37;
          }
          while ( v36 < *((_DWORD *)a1 + 1) );
          v6 = a2;
        }
        v4 += v4[1] + 2;
      }
    }
  }
}
