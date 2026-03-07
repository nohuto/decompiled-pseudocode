void __fastcall vPlgWrite32(struct _PLGRUN *a1, struct _PLGRUN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  unsigned __int64 v4; // r11
  struct SURFACE *v6; // r14
  struct _PLGRUN *v7; // rbp
  unsigned __int64 v9; // rdi
  int v10; // r9d
  int v11; // eax
  int v12; // r8d
  int v13; // r10d
  __int64 j; // rdx
  _DWORD *v15; // rcx
  int k; // eax
  int v17; // eax
  LONG v18; // esi
  int v19; // ecx
  __int64 v20; // r13
  bool i; // zf
  int v22; // r15d
  __int64 v23; // rdi
  _DWORD *v24; // rbx
  unsigned __int64 v25; // rax
  int v26; // [rsp+30h] [rbp-68h]
  int v27; // [rsp+34h] [rbp-64h]
  unsigned __int64 v28; // [rsp+38h] [rbp-60h]
  unsigned __int64 v29; // [rsp+40h] [rbp-58h]
  struct _PLGRUN *v30; // [rsp+48h] [rbp-50h]
  struct _RECTL si128; // [rsp+50h] [rbp-48h] BYREF

  if ( a2 )
  {
    v4 = *((_QWORD *)a3 + 9);
    v6 = a3;
    v7 = a2;
    v28 = v4;
    v9 = *((unsigned int *)a3 + 16) + v4 - 4;
    v29 = v9;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      while ( a1 < v7 )
      {
        v17 = *(_DWORD *)a1;
        v18 = *((_DWORD *)a1 + 1);
        v19 = *((_DWORD *)a1 + 2);
        a1 = (struct _PLGRUN *)((char *)a1 + 12);
        v27 = v17;
        v20 = *((_QWORD *)v6 + 10) + *((_DWORD *)v6 + 22) * v18;
        for ( i = v19 == 0; ; i = v19 == 0 )
        {
          v26 = v19;
          if ( i )
            break;
          v30 = (struct _PLGRUN *)((char *)a1 + 8);
          if ( (struct _PLGRUN *)((char *)a1 + 8) > v7 )
            break;
          if ( v18 < si128.top || v18 >= si128.bottom )
          {
            XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &si128, v18);
            v19 = v26;
          }
          if ( v18 >= si128.top && v18 < si128.bottom )
          {
            v22 = *((_DWORD *)a1 + 1);
            v23 = *(int *)a1;
            v24 = (_DWORD *)(v20 + 4 * v23);
            if ( v22 )
            {
              v25 = v28;
              do
              {
                if ( (unsigned __int64)v24 < v25 || (unsigned __int64)v24 > v29 )
                  break;
                if ( (int)v23 < si128.left || (int)v23 >= si128.right )
                {
                  XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &si128, v23, v10);
                  v25 = v28;
                }
                if ( (int)v23 >= si128.left && (int)v23 < si128.right )
                  *v24 = v27;
                LODWORD(v23) = v23 + 1;
                ++v24;
                --v22;
              }
              while ( v22 );
              v7 = a2;
              v6 = a3;
              v19 = v26;
            }
          }
          ++v18;
          a1 = v30;
          v20 += *((int *)v6 + 22);
          --v19;
        }
      }
    }
    else
    {
      while ( a1 < v7 )
      {
        v11 = *((_DWORD *)v6 + 22) * *((_DWORD *)a1 + 1);
        v12 = *((_DWORD *)a1 + 2);
        v13 = *(_DWORD *)a1;
        a1 = (struct _PLGRUN *)((char *)a1 + 12);
        for ( j = *((_QWORD *)v6 + 10) + v11; v12; --v12 )
        {
          if ( (struct _PLGRUN *)((char *)a1 + 8) > v7 )
            break;
          v15 = (_DWORD *)(j + 4LL * *(int *)a1);
          for ( k = *((_DWORD *)a1 + 1); k; --k )
          {
            if ( (unsigned __int64)v15 < v4 )
              break;
            if ( (unsigned __int64)v15 > v9 )
              break;
            *v15++ = v13;
          }
          a1 = (struct _PLGRUN *)((char *)a1 + 8);
          j += *((int *)v6 + 22);
        }
      }
    }
  }
}
