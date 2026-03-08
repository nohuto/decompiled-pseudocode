/*
 * XREFs of ?vPlgWrite24@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C0303460
 * Callers:
 *     <none>
 * Callees:
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00B5E70 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C00B5F94 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x1C0268008 (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 */

void __fastcall vPlgWrite24(struct _PLGRUN *a1, struct _PLGRUN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  unsigned __int64 v4; // rdi
  __int64 v6; // rax
  struct SURFACE *v7; // r15
  struct _PLGRUN *v8; // r14
  unsigned __int64 v10; // rsi
  int v11; // eax
  int v12; // r10d
  int v13; // r8d
  __int64 j; // rdx
  unsigned __int64 v15; // rcx
  int k; // eax
  int v17; // eax
  LONG v18; // esi
  int v19; // edx
  __int64 v20; // rcx
  bool i; // zf
  int v22; // r12d
  __int64 v23; // rdi
  unsigned __int64 v24; // rbx
  __int16 v25; // r15
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rsi
  char v28; // [rsp+32h] [rbp-4Eh]
  int v29; // [rsp+34h] [rbp-4Ch]
  LONG v30; // [rsp+38h] [rbp-48h]
  struct _RECTL si128; // [rsp+40h] [rbp-40h] BYREF
  int v32; // [rsp+50h] [rbp-30h]
  __int64 v33; // [rsp+58h] [rbp-28h]
  unsigned __int64 v34; // [rsp+60h] [rbp-20h]
  unsigned __int64 v35; // [rsp+68h] [rbp-18h]
  struct _PLGRUN *v36; // [rsp+70h] [rbp-10h]

  if ( a2 )
  {
    v4 = *((_QWORD *)a3 + 9);
    v6 = *((unsigned int *)a3 + 16);
    v7 = a3;
    v8 = a2;
    v34 = v4;
    v10 = v6 + v4 - 3;
    v35 = v10;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      while ( a1 < v8 )
      {
        v17 = *(_DWORD *)a1;
        v18 = *((_DWORD *)a1 + 1);
        v19 = *((_DWORD *)a1 + 2);
        a1 = (struct _PLGRUN *)((char *)a1 + 12);
        v32 = v17;
        v28 = BYTE2(v17);
        v20 = *((_QWORD *)v7 + 10) + *((_DWORD *)v7 + 22) * v18;
        for ( i = v19 == 0; ; i = v19 == 0 )
        {
          v33 = v20;
          v29 = v19;
          v30 = v18;
          if ( i )
            break;
          v36 = (struct _PLGRUN *)((char *)a1 + 8);
          if ( (struct _PLGRUN *)((char *)a1 + 8) > v8 )
            break;
          if ( v18 < si128.top || v18 >= si128.bottom )
          {
            XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &si128, v18);
            v20 = v33;
            v19 = v29;
          }
          if ( v18 >= si128.top && v18 < si128.bottom )
          {
            v22 = *((_DWORD *)a1 + 1);
            v23 = *(int *)a1;
            v24 = v23 + v20 + 2 * v23;
            if ( v22 )
            {
              v25 = v32;
              v26 = v34;
              v27 = v35;
              do
              {
                if ( v24 < v26 || v24 > v27 )
                  break;
                if ( (int)v23 < si128.left || (int)v23 >= si128.right )
                {
                  XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &si128, v23);
                  v26 = v34;
                }
                if ( (int)v23 >= si128.left && (int)v23 < si128.right )
                {
                  *(_WORD *)v24 = v25;
                  *(_BYTE *)(v24 + 2) = v28;
                }
                LODWORD(v23) = v23 + 1;
                v24 += 3LL;
                --v22;
              }
              while ( v22 );
              v18 = v30;
              v8 = a2;
              v7 = a3;
              v20 = v33;
              v19 = v29;
            }
          }
          ++v18;
          a1 = v36;
          v20 += *((int *)v7 + 22);
          --v19;
        }
      }
    }
    else
    {
      while ( a1 < v8 )
      {
        v11 = *((_DWORD *)v7 + 22) * *((_DWORD *)a1 + 1);
        v12 = *(_DWORD *)a1;
        v13 = *((_DWORD *)a1 + 2);
        a1 = (struct _PLGRUN *)((char *)a1 + 12);
        for ( j = *((_QWORD *)v7 + 10) + v11; v13; --v13 )
        {
          if ( (struct _PLGRUN *)((char *)a1 + 8) > v8 )
            break;
          v15 = j + 2LL * *(int *)a1 + *(int *)a1;
          for ( k = *((_DWORD *)a1 + 1); k; --k )
          {
            if ( v15 < v4 )
              break;
            if ( v15 > v10 )
              break;
            *(_WORD *)v15 = v12;
            *(_BYTE *)(v15 + 2) = BYTE2(v12);
            v15 += 3LL;
          }
          a1 = (struct _PLGRUN *)((char *)a1 + 8);
          j += *((int *)v7 + 22);
        }
      }
    }
  }
}
