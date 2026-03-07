void __fastcall vPlgWrite16(struct _PLGRUN *a1, struct _PLGRUN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  unsigned __int64 v4; // r11
  struct SURFACE *v6; // r14
  struct _PLGRUN *v7; // rbp
  unsigned __int64 v9; // rdi
  int v10; // eax
  int v11; // r8d
  int v12; // r10d
  __int64 j; // rdx
  _WORD *v14; // rcx
  int k; // eax
  int v16; // eax
  LONG v17; // esi
  int v18; // ecx
  __int64 v19; // r13
  bool i; // zf
  int v21; // r15d
  __int64 v22; // rdi
  _WORD *v23; // rbx
  unsigned __int64 v24; // rax
  int v25; // [rsp+30h] [rbp-68h]
  __int16 v26; // [rsp+34h] [rbp-64h]
  unsigned __int64 v27; // [rsp+38h] [rbp-60h]
  unsigned __int64 v28; // [rsp+40h] [rbp-58h]
  struct _PLGRUN *v29; // [rsp+48h] [rbp-50h]
  struct _RECTL si128; // [rsp+50h] [rbp-48h] BYREF

  if ( a2 )
  {
    v4 = *((_QWORD *)a3 + 9);
    v6 = a3;
    v7 = a2;
    v27 = v4;
    v9 = *((unsigned int *)a3 + 16) + v4 - 2;
    v28 = v9;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      while ( a1 < v7 )
      {
        v16 = *(_DWORD *)a1;
        v17 = *((_DWORD *)a1 + 1);
        v18 = *((_DWORD *)a1 + 2);
        a1 = (struct _PLGRUN *)((char *)a1 + 12);
        v26 = v16;
        v19 = *((_QWORD *)v6 + 10) + *((_DWORD *)v6 + 22) * v17;
        for ( i = v18 == 0; ; i = v18 == 0 )
        {
          v25 = v18;
          if ( i )
            break;
          v29 = (struct _PLGRUN *)((char *)a1 + 8);
          if ( (struct _PLGRUN *)((char *)a1 + 8) > v7 )
            break;
          if ( v17 < si128.top || v17 >= si128.bottom )
          {
            XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &si128, v17);
            v18 = v25;
          }
          if ( v17 >= si128.top && v17 < si128.bottom )
          {
            v21 = *((_DWORD *)a1 + 1);
            v22 = *(int *)a1;
            v23 = (_WORD *)(v19 + 2 * v22);
            if ( v21 )
            {
              v24 = v27;
              do
              {
                if ( (unsigned __int64)v23 < v24 || (unsigned __int64)v23 > v28 )
                  break;
                if ( (int)v22 < si128.left || (int)v22 >= si128.right )
                {
                  XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &si128, v22);
                  v24 = v27;
                }
                if ( (int)v22 >= si128.left && (int)v22 < si128.right )
                  *v23 = v26;
                LODWORD(v22) = v22 + 1;
                ++v23;
                --v21;
              }
              while ( v21 );
              v7 = a2;
              v6 = a3;
              v18 = v25;
            }
          }
          ++v17;
          a1 = v29;
          v19 += *((int *)v6 + 22);
          --v18;
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
        for ( j = *((_QWORD *)v6 + 10) + v10; v11; --v11 )
        {
          if ( (struct _PLGRUN *)((char *)a1 + 8) > v7 )
            break;
          v14 = (_WORD *)(j + 2LL * *(int *)a1);
          for ( k = *((_DWORD *)a1 + 1); k; --k )
          {
            if ( (unsigned __int64)v14 < v4 )
              break;
            if ( (unsigned __int64)v14 > v9 )
              break;
            *v14++ = v12;
          }
          a1 = (struct _PLGRUN *)((char *)a1 + 8);
          j += *((int *)v6 + 22);
        }
      }
    }
  }
}
