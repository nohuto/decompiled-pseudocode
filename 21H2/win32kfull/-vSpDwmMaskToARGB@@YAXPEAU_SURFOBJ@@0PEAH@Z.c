/*
 * XREFs of ?vSpDwmMaskToARGB@@YAXPEAU_SURFOBJ@@0PEAH@Z @ 0x1C026C9E4
 * Callers:
 *     ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x1C026C464 (-bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEA.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

void __fastcall vSpDwmMaskToARGB(struct _SURFOBJ *a1, struct _SURFOBJ *lDelta, int *a3)
{
  struct _SURFOBJ *v3; // r11
  struct _SURFOBJ *v4; // rbx
  __int64 cx; // rcx
  _BYTE *v6; // r8
  char *pvScan0; // rdi
  int v8; // r9d
  __int32 *v9; // r10
  __int64 v10; // rsi
  __int64 v11; // r15
  int v12; // r11d
  __int32 *v13; // r12
  __int64 v14; // r13
  __int32 *v15; // rdx
  __int32 v16; // ecx
  __int64 v17; // rax
  char *v18; // rdx
  _BYTE *v19; // r10
  unsigned int *v20; // rdi
  __int64 v21; // r12
  unsigned int *v22; // r8
  signed __int64 v23; // rbp
  __int64 v24; // r13
  unsigned int *v25; // rax
  __int32 v26; // r9d
  __int64 v27; // rax
  char *v28; // rcx
  __int64 v29; // rdx
  __int64 i; // rax
  int v31; // [rsp+0h] [rbp-68h]
  __m128i si128; // [rsp+18h] [rbp-50h] BYREF

  v3 = a1;
  v4 = lDelta;
  cx = a1->sizlBitmap.cx;
  v6 = 0LL;
  LODWORD(lDelta) = v3->lDelta;
  pvScan0 = (char *)v3->pvScan0;
  v8 = v3->sizlBitmap.cy >> 1;
  v9 = (__int32 *)&pvScan0[v8 * (int)lDelta];
  if ( v4 )
    v6 = v4->pvScan0;
  v31 = 0;
  v10 = cx;
  si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffff0000000000ffffffff000000);
  if ( v8 <= 0 )
    goto LABEL_15;
  v11 = (unsigned int)v8;
  do
  {
    if ( v10 > 0 )
    {
      v12 = v31;
      v13 = v9;
      v14 = v10;
      do
      {
        v15 = (__int32 *)((char *)v13 + v6 - (_BYTE *)v9);
        if ( !v6 )
          v15 = v13;
        v16 = si128.m128i_i32[2 * (*(_DWORD *)&pvScan0[(char *)v13 - (char *)v9] & 1) + (*v15 & 1)];
        *v13++ = v16;
        v12 |= v16 == -1;
        --v14;
      }
      while ( v14 );
      v31 = v12;
      v3 = a1;
    }
    if ( v6 )
      v6 += v4->lDelta;
    lDelta = (struct _SURFOBJ *)v3->lDelta;
    pvScan0 = &pvScan0[(_QWORD)lDelta];
    v9 = (__int32 *)((char *)v9 + (_QWORD)lDelta);
    --v11;
  }
  while ( v11 );
  if ( !v31 )
  {
LABEL_15:
    v17 = v8 * (int)lDelta;
    v18 = (char *)v3->pvScan0;
    if ( v4 )
    {
      v19 = v4->pvScan0;
      v20 = (unsigned int *)&v18[v17];
      if ( v8 > 0 )
      {
        v21 = (unsigned int)v8;
        while ( v10 <= 0 )
        {
LABEL_27:
          v19 += v4->lDelta;
          v27 = v3->lDelta;
          v18 += v27;
          v20 = (unsigned int *)((char *)v20 + v27);
          if ( !--v21 )
            goto LABEL_37;
        }
        v22 = v20;
        v23 = v19 - (_BYTE *)v20;
        v24 = v10;
        while ( 1 )
        {
          v25 = (unsigned int *)((char *)v22 + v23);
          if ( !v19 )
            v25 = v22;
          v26 = si128.m128i_i32[2 * (*(_DWORD *)&v18[(char *)v22 - (char *)v20] & 1) + (*v25 & 1)];
          switch ( v26 )
          {
            case -16777216:
              goto LABEL_25;
            case 0:
              *v22 = 0;
              break;
            case 16777215:
LABEL_25:
              *v22 = *(unsigned int *)((char *)v22 + v23) | 0xFF000000;
              break;
          }
          ++v22;
          if ( !--v24 )
            goto LABEL_27;
        }
      }
    }
    else
    {
      v28 = &v18[v17];
      if ( v8 > 0 )
      {
        v29 = (unsigned int)v8;
        do
        {
          for ( i = 0LL; i < v10; ++i )
          {
            if ( *(_DWORD *)&v28[4 * i] == 0xFFFFFF )
              *(_DWORD *)&v28[4 * i] = -1;
          }
          v28 += v3->lDelta;
          --v29;
        }
        while ( v29 );
      }
    }
  }
LABEL_37:
  *a3 = v31;
}
