void __fastcall vStrWrite08(struct _STRRUN *a1, struct _XRUNLEN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  struct _XRUNLEN *v4; // rbx
  struct SURFACE *v6; // r13
  struct _XRUNLEN *v7; // r12
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // r8
  char *v12; // rdi
  _BYTE *v13; // rdx
  char *v14; // rcx
  char v15; // al
  int v16; // r14d
  __int64 v17; // rax
  bool v18; // zf
  LONG v19; // ecx
  unsigned __int64 v20; // xmm0_8
  LONG v21; // r10d
  unsigned __int64 v22; // rdi
  LONG v23; // edx
  __int64 v24; // rax
  int v25; // edi
  __int64 v26; // r11
  LONG v27; // edx
  int v28; // eax
  LONG v29; // r9d
  LONG left; // r8d
  LONG v31; // ecx
  _BYTE *v32; // rsi
  _BYTE *v33; // r9
  int v34; // eax
  size_t v35; // r14
  int v36; // r8d
  __int64 v37; // rdx
  int *v38; // rcx
  char v39; // al
  __int64 v40; // rcx
  __int64 v41; // r15
  LONG v42; // edi
  int v43; // esi
  __int64 v44; // rcx
  struct _XRUNLEN *v45; // r14
  __int64 v46; // rsi
  int v47; // edx
  _BYTE *v48; // r12
  int *v49; // rcx
  int v50; // [rsp+30h] [rbp-30h]
  int v51; // [rsp+34h] [rbp-2Ch]
  __int64 v52; // [rsp+38h] [rbp-28h]
  int *v53; // [rsp+38h] [rbp-28h]
  __int64 v54; // [rsp+40h] [rbp-20h]
  struct _RECTL rclBounds; // [rsp+48h] [rbp-18h] BYREF

  if ( a2 )
  {
    v4 = (struct _STRRUN *)((char *)a1 + 8);
    v6 = a3;
    v7 = a2;
    if ( a4 )
    {
      v18 = a4->iDComplexity == 1;
      rclBounds = 0LL;
      if ( v18 )
      {
        v19 = *(_DWORD *)a1;
        rclBounds = a4->rclBounds;
        v20 = _mm_srli_si128((__m128i)rclBounds, 8).m128i_u64[0];
        v21 = v20;
        v22 = HIDWORD(v20);
        if ( v19 < SHIDWORD(v20) )
        {
          v23 = v19 + *((_DWORD *)a1 + 1);
          v24 = HIDWORD(*(_QWORD *)&rclBounds.left);
          if ( v23 > rclBounds.top )
          {
            if ( v19 >= rclBounds.top )
              LODWORD(v24) = v19;
            if ( v23 < SHIDWORD(v20) )
              LODWORD(v22) = v19 + *((_DWORD *)a1 + 1);
            v25 = v22 - v24;
            v26 = *((_QWORD *)a3 + 10) + *((_DWORD *)a3 + 22) * (int)v24;
            v52 = v26;
            while ( v4 != v7 )
            {
              v27 = *(_DWORD *)v4;
              v28 = *((_DWORD *)v4 + 1);
              v29 = v28 + *(_DWORD *)v4;
              if ( v29 >= rclBounds.left )
              {
                if ( v27 >= v21 )
                  return;
                left = rclBounds.left;
                v31 = v21;
                if ( v27 >= rclBounds.left )
                  left = *(_DWORD *)v4;
                if ( v29 < v21 )
                  v31 = v28 + *(_DWORD *)v4;
                v32 = (_BYTE *)(v26 + left);
                v33 = v32;
                v34 = v31 - left;
                v35 = v31 - left;
                if ( left < v31 )
                {
                  v36 = left - v27;
                  v37 = v34;
                  v38 = (int *)((char *)v4 + 4 * v36 + 8);
                  do
                  {
                    v39 = *(_BYTE *)v38++;
                    *v33++ = v39;
                    --v37;
                  }
                  while ( v37 );
                }
                if ( v25 > 1 )
                {
                  v40 = *((int *)v6 + 22);
                  v41 = (unsigned int)(v25 - 1);
                  do
                  {
                    memmove(&v32[v40], v32, v35);
                    v40 = *((int *)v6 + 22);
                    v32 += v40;
                    --v41;
                  }
                  while ( v41 );
                  v21 = v20;
                  v26 = v52;
                }
                v28 = *((_DWORD *)v4 + 1);
              }
              v4 = (struct _XRUNLEN *)((char *)v4 + 4 * v28 + 8);
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
LABEL_57:
        XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &rclBounds, v42);
        while ( v43 )
        {
          v51 = --v43;
          if ( v42 >= rclBounds.top && v42 < rclBounds.bottom )
          {
            v44 = *((_QWORD *)v6 + 10) + *((_DWORD *)v6 + 22) * v42;
            v54 = v44;
            if ( v4 != v7 )
            {
              v45 = v4;
              do
              {
                v46 = *(int *)v45;
                v47 = v46 + *((_DWORD *)v45 + 1);
                v50 = v47;
                v48 = (_BYTE *)(v44 + v46);
                if ( (int)v46 < v47 )
                {
                  v49 = (int *)((char *)v45 + 8);
                  v53 = (int *)((char *)v45 + 8);
                  do
                  {
                    if ( (int)v46 < rclBounds.left || (int)v46 >= rclBounds.right )
                    {
                      XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &rclBounds, v46);
                      v47 = v50;
                      v49 = v53;
                    }
                    if ( (int)v46 >= rclBounds.left && (int)v46 < rclBounds.right )
                      *v48 = *(_BYTE *)v49;
                    ++v49;
                    ++v48;
                    LODWORD(v46) = v46 + 1;
                    v53 = v49;
                  }
                  while ( (int)v46 < v47 );
                  v44 = v54;
                }
                v45 = (struct _XRUNLEN *)((char *)v45 + 4 * *((int *)v45 + 1) + 8);
              }
              while ( v45 != a2 );
              v6 = a3;
              v43 = v51;
              v7 = a2;
            }
          }
          if ( ++v42 < rclBounds.top || v42 >= rclBounds.bottom )
            goto LABEL_57;
        }
      }
    }
    else
    {
      v9 = *((_QWORD *)a3 + 10) + *(_DWORD *)a1 * *((_DWORD *)a3 + 22);
      while ( v4 != v7 )
      {
        v10 = *(int *)v4;
        v11 = *((unsigned int *)v4 + 1);
        v12 = (char *)(v9 + v10);
        v13 = (_BYTE *)(v9 + v10);
        if ( (int)v10 < (int)v11 + (int)v10 )
        {
          v14 = (char *)v4 + 8;
          do
          {
            v15 = *v14;
            v14 += 4;
            *v13++ = v15;
            --v11;
          }
          while ( v11 );
        }
        v16 = 1;
        if ( *((int *)a1 + 1) > 1 )
        {
          v17 = *((int *)v6 + 22);
          do
          {
            memmove(&v12[v17], v12, *((int *)v4 + 1));
            v17 = *((int *)v6 + 22);
            ++v16;
            v12 += v17;
          }
          while ( v16 < *((_DWORD *)a1 + 1) );
        }
        v4 = (struct _XRUNLEN *)((char *)v4 + 4 * *((int *)v4 + 1) + 8);
      }
    }
  }
}
