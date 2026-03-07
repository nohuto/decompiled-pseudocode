void __fastcall vStrWrite24(struct _STRRUN *a1, struct _XRUNLEN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  LONG *v4; // rdi
  struct SURFACE *v6; // r12
  __int64 v9; // r14
  __int64 v10; // rdx
  unsigned int v11; // r10d
  char *v12; // r9
  char *v13; // r8
  int *v14; // rdx
  __int64 v15; // r11
  __int16 v16; // ax
  char v17; // cl
  int i; // r15d
  char *v19; // rbx
  bool v20; // zf
  LONG v21; // ecx
  unsigned __int64 v22; // xmm0_8
  LONG v23; // r10d
  unsigned __int64 v24; // r14
  LONG v25; // edx
  __int64 v26; // rax
  int v27; // r14d
  __int64 v28; // r11
  LONG v29; // edx
  int v30; // eax
  LONG v31; // r9d
  LONG left; // r8d
  LONG v33; // ecx
  int v34; // r9d
  char *v35; // r10
  char *v36; // r11
  __int64 v37; // rdx
  __int64 v38; // r8
  int *v39; // rdx
  __int16 v40; // ax
  char v41; // cl
  size_t v42; // r15
  __int64 v43; // rsi
  char *v44; // rbx
  LONG v45; // ebx
  int v46; // esi
  __int64 v47; // rcx
  struct _XRUNLEN *v48; // r14
  __int64 v49; // rsi
  int v50; // edx
  __int64 v51; // r12
  int *v52; // rcx
  int v53; // [rsp+30h] [rbp-30h]
  __int64 v54; // [rsp+38h] [rbp-28h]
  int *v55; // [rsp+38h] [rbp-28h]
  __int64 v56; // [rsp+40h] [rbp-20h]
  struct _RECTL rclBounds; // [rsp+48h] [rbp-18h] BYREF
  int v58; // [rsp+A8h] [rbp+48h]

  if ( a2 )
  {
    v4 = (LONG *)((char *)a1 + 8);
    v6 = a3;
    if ( a4 )
    {
      v20 = a4->iDComplexity == 1;
      rclBounds = 0LL;
      if ( v20 )
      {
        v21 = *(_DWORD *)a1;
        rclBounds = a4->rclBounds;
        v22 = _mm_srli_si128((__m128i)rclBounds, 8).m128i_u64[0];
        v23 = v22;
        v24 = HIDWORD(v22);
        if ( v21 < SHIDWORD(v22) )
        {
          v25 = v21 + *((_DWORD *)a1 + 1);
          v26 = HIDWORD(*(_QWORD *)&rclBounds.left);
          if ( v25 > rclBounds.top )
          {
            if ( v21 >= rclBounds.top )
              LODWORD(v26) = v21;
            if ( v25 < SHIDWORD(v22) )
              LODWORD(v24) = v21 + *((_DWORD *)a1 + 1);
            v27 = v24 - v26;
            v28 = *((_QWORD *)a3 + 10) + *((_DWORD *)a3 + 22) * (int)v26;
            v54 = v28;
            while ( v4 != (LONG *)a2 )
            {
              v29 = *v4;
              v30 = v4[1];
              v31 = v30 + *v4;
              if ( v31 >= rclBounds.left )
              {
                if ( v29 >= v23 )
                  return;
                left = rclBounds.left;
                v33 = v23;
                if ( v29 >= rclBounds.left )
                  left = *v4;
                if ( v31 < v23 )
                  v33 = v30 + *v4;
                v34 = v33 - left;
                v35 = (char *)(v28 + 2LL * left + left);
                v36 = v35;
                if ( left < v33 )
                {
                  v37 = left - v29;
                  v38 = v34;
                  v39 = &v4[v37 + 2];
                  do
                  {
                    v40 = *(_WORD *)v39;
                    v41 = *((_BYTE *)v39++ + 2);
                    *(_WORD *)v36 = v40;
                    v36[2] = v41;
                    v36 += 3;
                    --v38;
                  }
                  while ( v38 );
                }
                if ( v27 > 1 )
                {
                  v42 = 3 * v34;
                  v43 = (unsigned int)(v27 - 1);
                  do
                  {
                    v44 = &v35[*((int *)v6 + 22)];
                    memmove(v44, v35, v42);
                    v35 = v44;
                    --v43;
                  }
                  while ( v43 );
                }
                v30 = v4[1];
                v23 = v22;
                v28 = v54;
              }
              v4 += v30 + 2;
            }
          }
        }
      }
      else
      {
        XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
        v45 = *(_DWORD *)a1;
        v46 = *((_DWORD *)a1 + 1);
        rclBounds = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
LABEL_55:
        XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &rclBounds, v45);
        while ( v46 )
        {
          v53 = --v46;
          if ( v45 >= rclBounds.top && v45 < rclBounds.bottom )
          {
            v47 = *((_QWORD *)v6 + 10) + *((_DWORD *)v6 + 22) * v45;
            v56 = v47;
            if ( v4 != (LONG *)a2 )
            {
              v48 = (struct _XRUNLEN *)v4;
              do
              {
                v49 = *(int *)v48;
                v50 = v49 + *((_DWORD *)v48 + 1);
                v58 = v50;
                v51 = v49 + v47 + 2 * v49;
                if ( (int)v49 < v50 )
                {
                  v52 = (int *)((char *)v48 + 8);
                  v55 = (int *)((char *)v48 + 8);
                  do
                  {
                    if ( (int)v49 < rclBounds.left || (int)v49 >= rclBounds.right )
                    {
                      XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &rclBounds, v49);
                      v50 = v58;
                      v52 = v55;
                    }
                    if ( (int)v49 >= rclBounds.left && (int)v49 < rclBounds.right )
                    {
                      *(_WORD *)v51 = *(_WORD *)v52;
                      *(_BYTE *)(v51 + 2) = *((_BYTE *)v52 + 2);
                    }
                    ++v52;
                    v51 += 3LL;
                    LODWORD(v49) = v49 + 1;
                    v55 = v52;
                  }
                  while ( (int)v49 < v50 );
                  v47 = v56;
                }
                v48 = (struct _XRUNLEN *)((char *)v48 + 4 * *((int *)v48 + 1) + 8);
              }
              while ( v48 != a2 );
              v6 = a3;
              v46 = v53;
            }
          }
          if ( ++v45 < rclBounds.top || v45 >= rclBounds.bottom )
            goto LABEL_55;
        }
      }
    }
    else
    {
      v9 = *((_QWORD *)a3 + 10) + *(_DWORD *)a1 * *((_DWORD *)a3 + 22);
      while ( v4 != (LONG *)a2 )
      {
        v10 = *v4;
        v11 = v4[1];
        v12 = (char *)(v10 + v9 + 2 * v10);
        v13 = v12;
        if ( (int)v10 < (int)(v11 + v10) )
        {
          v14 = v4 + 2;
          v15 = v11;
          do
          {
            v16 = *(_WORD *)v14;
            v17 = *((_BYTE *)v14++ + 2);
            *(_WORD *)v13 = v16;
            v13[2] = v17;
            v13 += 3;
            --v15;
          }
          while ( v15 );
        }
        for ( i = 1; i < *((_DWORD *)a1 + 1); v12 = v19 )
        {
          v19 = &v12[*((int *)v6 + 22)];
          memmove(v19, v12, 3 * v4[1]);
          ++i;
        }
        v4 += v4[1] + 2;
      }
    }
  }
}
