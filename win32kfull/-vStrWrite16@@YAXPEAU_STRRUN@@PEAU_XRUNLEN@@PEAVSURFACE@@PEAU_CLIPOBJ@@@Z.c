/*
 * XREFs of ?vStrWrite16@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02E59A0
 * Callers:
 *     <none>
 * Callees:
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00B5E70 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C00B5F94 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x1C0268008 (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 */

void __fastcall vStrWrite16(struct _STRRUN *a1, struct _XRUNLEN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  struct _XRUNLEN *v4; // rdi
  struct _XRUNLEN *v6; // r12
  __int64 v8; // r14
  __int64 v9; // rdx
  unsigned int v10; // r10d
  _WORD *v11; // r9
  _WORD *v12; // r8
  __int16 *v13; // rcx
  __int64 v14; // rdx
  __int16 v15; // ax
  int v16; // r15d
  char *v17; // rbx
  bool v18; // zf
  LONG v19; // ecx
  unsigned __int64 v20; // xmm0_8
  unsigned __int64 v21; // r14
  LONG v22; // edx
  __int64 v23; // rax
  int v24; // r14d
  __int64 v25; // r11
  LONG v26; // edx
  int v27; // eax
  LONG v28; // r9d
  LONG left; // r8d
  LONG v30; // ecx
  int v31; // r10d
  _WORD *v32; // r11
  _WORD *v33; // r9
  int v34; // r8d
  __int64 v35; // rdx
  int *v36; // rcx
  __int16 v37; // ax
  size_t v38; // r15
  __int64 v39; // rsi
  char *v40; // rbx
  LONG v41; // ebx
  int v42; // r13d
  __int64 v43; // rdx
  struct _XRUNLEN *v44; // r14
  __int64 v45; // rsi
  int v46; // r9d
  _WORD *v47; // r8
  int *v48; // rcx
  _WORD *v49; // [rsp+30h] [rbp-30h]
  __int64 v50; // [rsp+38h] [rbp-28h]
  int *v51; // [rsp+38h] [rbp-28h]
  __int64 v52; // [rsp+40h] [rbp-20h]
  struct _RECTL rclBounds; // [rsp+48h] [rbp-18h] BYREF
  int v55; // [rsp+A8h] [rbp+48h]

  if ( a2 )
  {
    v4 = (struct _STRRUN *)((char *)a1 + 8);
    v6 = a2;
    if ( a4 )
    {
      v18 = a4->iDComplexity == 1;
      rclBounds = 0LL;
      if ( v18 )
      {
        v19 = *(_DWORD *)a1;
        rclBounds = a4->rclBounds;
        v20 = _mm_srli_si128((__m128i)rclBounds, 8).m128i_u64[0];
        v21 = HIDWORD(v20);
        if ( v19 < SHIDWORD(v20) )
        {
          v22 = v19 + *((_DWORD *)a1 + 1);
          v23 = HIDWORD(*(_QWORD *)&rclBounds.left);
          if ( v22 > rclBounds.top )
          {
            if ( v19 >= rclBounds.top )
              LODWORD(v23) = v19;
            if ( v22 < SHIDWORD(v20) )
              LODWORD(v21) = v19 + *((_DWORD *)a1 + 1);
            v24 = v21 - v23;
            v25 = *((_QWORD *)a3 + 10) + *((_DWORD *)a3 + 22) * (int)v23;
            v50 = v25;
            while ( v4 != v6 )
            {
              v26 = *(_DWORD *)v4;
              v27 = *((_DWORD *)v4 + 1);
              v28 = v27 + *(_DWORD *)v4;
              if ( v28 >= rclBounds.left )
              {
                if ( v26 >= (int)v20 )
                  return;
                left = rclBounds.left;
                v30 = v20;
                if ( v26 >= rclBounds.left )
                  left = *(_DWORD *)v4;
                if ( v28 < (int)v20 )
                  v30 = v27 + *(_DWORD *)v4;
                v31 = v30 - left;
                v32 = (_WORD *)(v25 + 2LL * left);
                v33 = v32;
                if ( left < v30 )
                {
                  v34 = left - v26;
                  v35 = v31;
                  v36 = (int *)((char *)v4 + 4 * v34 + 8);
                  do
                  {
                    v37 = *(_WORD *)v36++;
                    *v33++ = v37;
                    --v35;
                  }
                  while ( v35 );
                }
                if ( v24 > 1 )
                {
                  v38 = 2 * v31;
                  v39 = (unsigned int)(v24 - 1);
                  do
                  {
                    v40 = (char *)v32 + *((int *)a3 + 22);
                    memmove(v40, v32, v38);
                    v32 = v40;
                    --v39;
                  }
                  while ( v39 );
                  v6 = a2;
                }
                v27 = *((_DWORD *)v4 + 1);
                v25 = v50;
              }
              v4 = (struct _XRUNLEN *)((char *)v4 + 4 * v27 + 8);
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
            v43 = *((_QWORD *)a3 + 10) + *((_DWORD *)a3 + 22) * v41;
            v52 = v43;
            if ( v4 != v6 )
            {
              v44 = v4;
              do
              {
                v45 = *(int *)v44;
                v46 = v45 + *((_DWORD *)v44 + 1);
                v55 = v46;
                v47 = (_WORD *)(v43 + 2 * v45);
                v49 = v47;
                if ( (int)v45 < v46 )
                {
                  v48 = (int *)((char *)v44 + 8);
                  v51 = (int *)((char *)v44 + 8);
                  do
                  {
                    if ( (int)v45 < rclBounds.left || (int)v45 >= rclBounds.right )
                    {
                      XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &rclBounds, v45);
                      v47 = v49;
                      v46 = v55;
                      v48 = v51;
                    }
                    if ( (int)v45 >= rclBounds.left && (int)v45 < rclBounds.right )
                      *v47 = *(_WORD *)v48;
                    ++v47;
                    ++v48;
                    LODWORD(v45) = v45 + 1;
                    v49 = v47;
                    v51 = v48;
                  }
                  while ( (int)v45 < v46 );
                  v43 = v52;
                }
                v44 = (struct _XRUNLEN *)((char *)v44 + 4 * *((int *)v44 + 1) + 8);
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
      v8 = *((_QWORD *)a3 + 10) + *(_DWORD *)a1 * *((_DWORD *)a3 + 22);
      while ( v4 != v6 )
      {
        v9 = *(int *)v4;
        v10 = *((_DWORD *)v4 + 1);
        v11 = (_WORD *)(v8 + 2 * v9);
        v12 = v11;
        if ( (int)v9 < (int)(v10 + v9) )
        {
          v13 = (__int16 *)((char *)v4 + 8);
          v14 = v10;
          do
          {
            v15 = *v13;
            v13 += 2;
            *v12++ = v15;
            --v14;
          }
          while ( v14 );
        }
        v16 = 1;
        if ( *((int *)a1 + 1) > 1 )
        {
          do
          {
            v17 = (char *)v11 + *((int *)a3 + 22);
            memmove(v17, v11, 2 * *((_DWORD *)v4 + 1));
            ++v16;
            v11 = v17;
          }
          while ( v16 < *((_DWORD *)a1 + 1) );
          v6 = a2;
        }
        v4 = (struct _XRUNLEN *)((char *)v4 + 4 * *((int *)v4 + 1) + 8);
      }
    }
  }
}
