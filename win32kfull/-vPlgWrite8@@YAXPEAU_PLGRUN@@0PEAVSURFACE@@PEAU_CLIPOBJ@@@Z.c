void __fastcall vPlgWrite8(struct _PLGRUN *a1, struct _PLGRUN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  unsigned __int64 v4; // rsi
  struct SURFACE *v6; // r13
  struct _PLGRUN *v7; // r14
  unsigned __int64 v9; // r12
  int v10; // eax
  int v11; // r8d
  int v12; // r10d
  __int64 m; // rcx
  int v14; // edx
  _BYTE *n; // rax
  LONG v16; // edx
  int v17; // r10d
  int v18; // edi
  __int64 i; // r9
  __int64 v20; // rcx
  int v21; // r8d
  _BYTE *j; // rax
  int v23; // eax
  LONG v24; // esi
  int v25; // edx
  __int64 v26; // rcx
  bool k; // zf
  int v28; // r12d
  __int64 v29; // rdi
  _BYTE *v30; // rbx
  unsigned __int64 v31; // rax
  int v32; // [rsp+30h] [rbp-40h]
  char v33; // [rsp+34h] [rbp-3Ch]
  __int64 v34; // [rsp+38h] [rbp-38h]
  unsigned __int64 v35; // [rsp+40h] [rbp-30h]
  unsigned __int64 v36; // [rsp+48h] [rbp-28h]
  struct _PLGRUN *v37; // [rsp+50h] [rbp-20h]
  struct _RECTL rclBounds; // [rsp+58h] [rbp-18h] BYREF

  if ( a2 )
  {
    v4 = *((_QWORD *)a3 + 9);
    v6 = a3;
    v7 = a2;
    v35 = v4;
    v9 = *((unsigned int *)a3 + 16) + v4 - 1;
    v36 = v9;
    if ( a4 )
    {
      k = a4->iDComplexity == 1;
      rclBounds = 0LL;
      if ( k )
      {
        rclBounds = a4->rclBounds;
        while ( a1 < v7 )
        {
          v16 = *((_DWORD *)a1 + 1);
          v17 = *((_DWORD *)a1 + 2);
          v18 = *(_DWORD *)a1;
          a1 = (struct _PLGRUN *)((char *)a1 + 12);
          for ( i = *((_QWORD *)v6 + 10) + *((_DWORD *)v6 + 22) * v16; v17; --v17 )
          {
            if ( (struct _PLGRUN *)((char *)a1 + 8) > v7 )
              break;
            if ( v16 >= rclBounds.top && v16 < rclBounds.bottom )
            {
              v20 = *(int *)a1;
              v21 = *((_DWORD *)a1 + 1);
              for ( j = (_BYTE *)(i + v20); v21; --v21 )
              {
                if ( (unsigned __int64)j < v4 || (unsigned __int64)j > v9 )
                  break;
                if ( (int)v20 >= rclBounds.left && (int)v20 < rclBounds.right )
                  *j = v18;
                LODWORD(v20) = v20 + 1;
                ++j;
              }
            }
            ++v16;
            i += *((int *)v6 + 22);
            a1 = (struct _PLGRUN *)((char *)a1 + 8);
          }
        }
      }
      else
      {
        XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
        rclBounds = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
        while ( a1 < v7 )
        {
          v23 = *(_DWORD *)a1;
          v24 = *((_DWORD *)a1 + 1);
          v25 = *((_DWORD *)a1 + 2);
          a1 = (struct _PLGRUN *)((char *)a1 + 12);
          v33 = v23;
          v26 = *((_QWORD *)v6 + 10) + *((_DWORD *)v6 + 22) * v24;
          for ( k = v25 == 0; ; k = v25 == 0 )
          {
            v34 = v26;
            v32 = v25;
            if ( k )
              break;
            v37 = (struct _PLGRUN *)((char *)a1 + 8);
            if ( (struct _PLGRUN *)((char *)a1 + 8) > v7 )
              break;
            if ( v24 < rclBounds.top || v24 >= rclBounds.bottom )
            {
              XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &rclBounds, v24);
              v26 = v34;
              v25 = v32;
            }
            if ( v24 >= rclBounds.top && v24 < rclBounds.bottom )
            {
              v28 = *((_DWORD *)a1 + 1);
              v29 = *(int *)a1;
              v30 = (_BYTE *)(v26 + v29);
              if ( v28 )
              {
                v31 = v35;
                do
                {
                  if ( (unsigned __int64)v30 < v31 || (unsigned __int64)v30 > v36 )
                    break;
                  if ( (int)v29 < rclBounds.left || (int)v29 >= rclBounds.right )
                  {
                    XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &rclBounds, v29);
                    v31 = v35;
                  }
                  if ( (int)v29 >= rclBounds.left && (int)v29 < rclBounds.right )
                    *v30 = v33;
                  LODWORD(v29) = v29 + 1;
                  ++v30;
                  --v28;
                }
                while ( v28 );
                v7 = a2;
                v6 = a3;
                v26 = v34;
                v25 = v32;
              }
            }
            ++v24;
            a1 = v37;
            v26 += *((int *)v6 + 22);
            --v25;
          }
        }
      }
    }
    else
    {
      while ( a1 < v7 )
      {
        v10 = *((_DWORD *)v6 + 22) * *((_DWORD *)a1 + 1);
        v11 = *((_DWORD *)a1 + 2);
        v12 = *(_DWORD *)a1;
        a1 = (struct _PLGRUN *)((char *)a1 + 12);
        for ( m = *((_QWORD *)v6 + 10) + v10; v11; --v11 )
        {
          if ( (struct _PLGRUN *)((char *)a1 + 8) > v7 )
            break;
          v14 = *((_DWORD *)a1 + 1);
          for ( n = (_BYTE *)(m + *(int *)a1); v14; --v14 )
          {
            if ( (unsigned __int64)n < v4 )
              break;
            if ( (unsigned __int64)n > v9 )
              break;
            *n++ = v12;
          }
          a1 = (struct _PLGRUN *)((char *)a1 + 8);
          m += *((int *)v6 + 22);
        }
      }
    }
  }
}
