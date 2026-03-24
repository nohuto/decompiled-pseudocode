/*
 * XREFs of ?vStrWrite16@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02C3E30
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C00CEAA0 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x1C00CEB24 (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00CEBA0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 */

void __fastcall vStrWrite16(struct _STRRUN *a1, struct _XRUNLEN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  struct _XRUNLEN *v5; // rdi
  struct _XRUNLEN *v7; // r12
  __int64 v9; // r14
  __int64 v10; // rdx
  unsigned int v11; // r10d
  _WORD *v12; // r9
  _WORD *v13; // r8
  __int16 *v14; // rcx
  __int64 v15; // rdx
  __int16 v16; // ax
  int v17; // r15d
  char *v18; // rbx
  bool v19; // zf
  LONG v20; // edx
  unsigned __int64 v21; // xmm0_8
  unsigned __int64 v22; // r14
  LONG v23; // r8d
  __int64 v24; // rcx
  int v25; // r14d
  __int64 v26; // r11
  LONG v27; // edx
  int v28; // eax
  LONG v29; // r9d
  LONG left; // r8d
  LONG v31; // ecx
  int v32; // r10d
  _WORD *v33; // r11
  _WORD *v34; // r9
  int v35; // r8d
  __int64 v36; // rdx
  int *v37; // rcx
  __int16 v38; // ax
  size_t v39; // r15
  __int64 v40; // rsi
  char *v41; // rbx
  LONG v42; // ebx
  int v43; // r13d
  __int64 v44; // rdx
  struct _XRUNLEN *v45; // r14
  __int64 v46; // rsi
  int v47; // ecx
  _WORD *v48; // r8
  int v49; // r9d
  int *v50; // rcx
  _WORD *v51; // [rsp+30h] [rbp-30h]
  __int64 v52; // [rsp+38h] [rbp-28h]
  int *v53; // [rsp+38h] [rbp-28h]
  __int64 v54; // [rsp+40h] [rbp-20h]
  struct _RECTL rclBounds; // [rsp+48h] [rbp-18h] BYREF
  int v57; // [rsp+A8h] [rbp+48h]

  if ( a2 )
  {
    v5 = (struct _STRRUN *)((char *)a1 + 8);
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
          v23 = v20 + *((_DWORD *)a1 + 1);
          v24 = HIDWORD(*(_QWORD *)&rclBounds.left);
          if ( v23 > rclBounds.top )
          {
            if ( v20 >= rclBounds.top )
              LODWORD(v24) = v20;
            if ( v23 < SHIDWORD(v21) )
              LODWORD(v22) = v23;
            v25 = v22 - v24;
            v26 = *((_QWORD *)a3 + 10) + (int)v24 * *((_DWORD *)a3 + 22);
            v52 = v26;
            while ( v5 != v7 )
            {
              v27 = *(_DWORD *)v5;
              v28 = *((_DWORD *)v5 + 1);
              v29 = v28 + *(_DWORD *)v5;
              if ( v29 >= rclBounds.left )
              {
                if ( v27 >= (int)v21 )
                  return;
                left = rclBounds.left;
                v31 = v21;
                if ( v27 >= rclBounds.left )
                  left = *(_DWORD *)v5;
                if ( v29 < (int)v21 )
                  v31 = v28 + *(_DWORD *)v5;
                v32 = v31 - left;
                v33 = (_WORD *)(v26 + 2LL * left);
                v34 = v33;
                if ( left < v31 )
                {
                  v35 = left - v27;
                  v36 = v32;
                  v37 = (int *)((char *)v5 + 4 * v35 + 8);
                  do
                  {
                    v38 = *(_WORD *)v37++;
                    *v34++ = v38;
                    --v36;
                  }
                  while ( v36 );
                }
                if ( v25 > 1 )
                {
                  v39 = 2 * v32;
                  v40 = (unsigned int)(v25 - 1);
                  do
                  {
                    v41 = (char *)v33 + *((int *)a3 + 22);
                    memmove(v41, v33, v39);
                    v33 = v41;
                    --v40;
                  }
                  while ( v40 );
                  v7 = a2;
                }
                v28 = *((_DWORD *)v5 + 1);
                v26 = v52;
              }
              v5 = (struct _XRUNLEN *)((char *)v5 + 4 * v28 + 8);
            }
          }
        }
      }
      else
      {
        XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
        v42 = *(_DWORD *)a1;
        v43 = *((_DWORD *)a1 + 1);
        rclBounds = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
LABEL_56:
        XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &rclBounds, v42);
        while ( v43 )
        {
          --v43;
          if ( v42 >= rclBounds.top && v42 < rclBounds.bottom )
          {
            v44 = *((_QWORD *)a3 + 10) + v42 * *((_DWORD *)a3 + 22);
            v54 = v44;
            if ( v5 != v7 )
            {
              v45 = v5;
              do
              {
                v46 = *(int *)v45;
                v47 = *((_DWORD *)v45 + 1);
                v48 = (_WORD *)(v44 + 2 * v46);
                v49 = v47 + v46;
                v51 = v48;
                v57 = v47 + v46;
                if ( (int)v46 < v47 + (int)v46 )
                {
                  v50 = (int *)((char *)v45 + 8);
                  v53 = (int *)((char *)v45 + 8);
                  do
                  {
                    if ( (int)v46 < rclBounds.left || (int)v46 >= rclBounds.right )
                    {
                      XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &rclBounds, v46);
                      v48 = v51;
                      v49 = v57;
                      v50 = v53;
                    }
                    if ( (int)v46 >= rclBounds.left && (int)v46 < rclBounds.right )
                      *v48 = *(_WORD *)v50;
                    ++v48;
                    ++v50;
                    LODWORD(v46) = v46 + 1;
                    v51 = v48;
                    v53 = v50;
                  }
                  while ( (int)v46 < v49 );
                  v47 = *((_DWORD *)v45 + 1);
                  v44 = v54;
                }
                v45 = (struct _XRUNLEN *)((char *)v45 + 4 * v47 + 8);
              }
              while ( v45 != v7 );
            }
          }
          if ( ++v42 < rclBounds.top || v42 >= rclBounds.bottom )
            goto LABEL_56;
        }
      }
    }
    else
    {
      v9 = *((_QWORD *)a3 + 10) + *(_DWORD *)a1 * *((_DWORD *)a3 + 22);
      while ( v5 != v7 )
      {
        v10 = *(int *)v5;
        v11 = *((_DWORD *)v5 + 1);
        v12 = (_WORD *)(v9 + 2 * v10);
        v13 = v12;
        if ( (int)v10 < (int)(v11 + v10) )
        {
          v14 = (__int16 *)((char *)v5 + 8);
          v15 = v11;
          do
          {
            v16 = *v14;
            v14 += 2;
            *v13++ = v16;
            --v15;
          }
          while ( v15 );
        }
        v17 = 1;
        if ( *((int *)a1 + 1) > 1 )
        {
          do
          {
            v18 = (char *)v12 + *((int *)a3 + 22);
            memmove(v18, v12, 2 * *((_DWORD *)v5 + 1));
            ++v17;
            v12 = v18;
          }
          while ( v17 < *((_DWORD *)a1 + 1) );
          v7 = a2;
        }
        v5 = (struct _XRUNLEN *)((char *)v5 + 4 * *((int *)v5 + 1) + 8);
      }
    }
  }
}
