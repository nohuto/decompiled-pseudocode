/*
 * XREFs of ?vSpDwmMaskToARGB@@YAXPEAU_SURFOBJ@@0PEAH@Z @ 0x1C0269908
 * Callers:
 *     ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x1C02691E4 (-bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEA.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

void __fastcall vSpDwmMaskToARGB(struct _SURFOBJ *lDelta, struct _SURFOBJ *a2, int *a3)
{
  PVOID *p_pvScan0; // rsi
  char *pvScan0; // rdi
  struct _SURFOBJ *v5; // r10
  __int64 cx; // rbx
  struct _SURFOBJ *v7; // r14
  LONG v8; // r9d
  _BYTE *v9; // r8
  char *v10; // r11
  int v11; // r13d
  __int64 v12; // rbp
  __int64 v13; // rbx
  int v14; // r15d
  __int64 v15; // r13
  __int64 v16; // r10
  int v17; // ebp
  __int32 *v18; // r12
  __int32 *v19; // rdx
  __int32 v20; // ecx
  int v21; // eax
  char *v22; // r11
  _BYTE *v23; // r8
  unsigned int *v24; // rdi
  unsigned int *v25; // rdx
  signed __int64 v26; // r14
  __int64 v27; // r12
  unsigned int *v28; // rax
  __int32 v29; // r9d
  __int64 v30; // rax
  char *v31; // rcx
  __int64 i; // rax
  int v33; // [rsp+0h] [rbp-78h]
  struct _SURFOBJ *v35; // [rsp+10h] [rbp-68h]
  __int64 v36; // [rsp+18h] [rbp-60h]
  __m128i si128; // [rsp+28h] [rbp-50h] BYREF

  p_pvScan0 = &a2->pvScan0;
  pvScan0 = (char *)lDelta->pvScan0;
  v5 = lDelta;
  cx = lDelta->sizlBitmap.cx;
  v7 = a2;
  v8 = lDelta->sizlBitmap.cy >> 1;
  v35 = lDelta;
  LODWORD(lDelta) = lDelta->lDelta;
  v9 = 0LL;
  v10 = &pvScan0[v8 * (int)lDelta];
  if ( a2 )
    v9 = *p_pvScan0;
  v11 = 0;
  v36 = cx;
  v12 = cx;
  v33 = 0;
  v13 = (unsigned int)v8;
  si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffff0000000000ffffffff000000);
  if ( v8 > 0 )
  {
    v14 = 0;
    v15 = (unsigned int)v8;
    do
    {
      if ( v12 > 0 )
      {
        v16 = v12;
        v17 = v33;
        v18 = (__int32 *)v10;
        do
        {
          v19 = (__int32 *)((char *)v18 + v9 - v10);
          if ( !v9 )
            v19 = v18;
          v20 = si128.m128i_i32[2 * (*(_DWORD *)&pvScan0[(char *)v18 - v10] & 1) + (*v19 & 1)];
          *v18++ = v20;
          v17 |= v20 == -1;
          --v16;
        }
        while ( v16 );
        v5 = v35;
        v7 = a2;
        v33 = v17;
        v14 = v17;
        v12 = v36;
      }
      if ( v9 )
        v9 += v7->lDelta;
      lDelta = (struct _SURFOBJ *)v5->lDelta;
      pvScan0 = &pvScan0[(_QWORD)lDelta];
      v10 = &v10[(_QWORD)lDelta];
      --v15;
    }
    while ( v15 );
    v11 = v14;
    if ( v14 )
      goto LABEL_36;
  }
  v21 = (_DWORD)lDelta * v8;
  if ( !v7 )
  {
    v31 = (char *)v5->pvScan0 + v21;
    if ( v8 > 0 )
    {
      do
      {
        for ( i = 0LL; i < v12; ++i )
        {
          if ( *(_DWORD *)&v31[4 * i] == 0xFFFFFF )
            *(_DWORD *)&v31[4 * i] = -1;
        }
        v31 += v5->lDelta;
        --v13;
      }
      while ( v13 );
    }
    goto LABEL_36;
  }
  v22 = (char *)v5->pvScan0;
  v23 = *p_pvScan0;
  v24 = (unsigned int *)&v22[v21];
  if ( v8 <= 0 )
    goto LABEL_36;
  do
  {
    if ( v12 <= 0 )
      goto LABEL_27;
    v25 = v24;
    v26 = v23 - (_BYTE *)v24;
    v27 = v12;
    do
    {
      v28 = (unsigned int *)((char *)v25 + v26);
      if ( !v23 )
        v28 = v25;
      v29 = si128.m128i_i32[2 * (*(_DWORD *)&v22[(char *)v25 - (char *)v24] & 1) + (*v28 & 1)];
      if ( v29 == -16777216 )
        goto LABEL_24;
      if ( v29 )
      {
        if ( v29 != 0xFFFFFF )
          goto LABEL_25;
LABEL_24:
        *v25 = *(unsigned int *)((char *)v25 + v26) | 0xFF000000;
        goto LABEL_25;
      }
      *v25 = 0;
LABEL_25:
      ++v25;
      --v27;
    }
    while ( v27 );
    v7 = a2;
LABEL_27:
    v23 += v7->lDelta;
    v30 = v5->lDelta;
    v22 += v30;
    v24 = (unsigned int *)((char *)v24 + v30);
    --v13;
  }
  while ( v13 );
LABEL_36:
  *a3 = v11;
}
