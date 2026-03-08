/*
 * XREFs of BgpRasPrintGlyph @ 0x140381CD4
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x140381538 (BgpTxtDisplayCharacter.c)
 *     BgpTxtDisplayString @ 0x140AEF7A0 (BgpTxtDisplayString.c)
 * Callees:
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     RaspGetCacheEntry @ 0x1403823F4 (RaspGetCacheEntry.c)
 *     RaspRasterize @ 0x140382470 (RaspRasterize.c)
 *     RaspFreeMemory @ 0x140382634 (RaspFreeMemory.c)
 *     BgpFmRoundUp @ 0x14038305C (BgpFmRoundUp.c)
 *     RaspRectangleCreate @ 0x140383284 (RaspRectangleCreate.c)
 *     BgpFwAllocateMemory @ 0x140383BDC (BgpFwAllocateMemory.c)
 *     RaspAntiAlias @ 0x140384090 (RaspAntiAlias.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RaspDestroyCachedBitmap @ 0x140AEAB20 (RaspDestroyCachedBitmap.c)
 *     RaspAddCacheEntry @ 0x140AEAB60 (RaspAddCacheEntry.c)
 *     BgpGxCopyRectangle @ 0x140AEF654 (BgpGxCopyRectangle.c)
 */

__int64 __fastcall BgpRasPrintGlyph(
        __m128i *a1,
        __int64 a2,
        __int16 a3,
        unsigned int a4,
        int a5,
        char a6,
        int *a7,
        __int64 a8,
        __int128 *a9)
{
  int v9; // edi
  __int128 *v10; // rsi
  __int64 v11; // r12
  __m128i *v12; // r14
  bool v13; // r15
  int v14; // r13d
  int v15; // r8d
  int v16; // r8d
  int v17; // r9d
  _BYTE *Memory; // rbx
  __int16 v19; // r12
  __int64 v20; // rdx
  _DWORD *v21; // r8
  __int64 v22; // r9
  int v23; // ecx
  __int64 v24; // rcx
  int v25; // r10d
  __int64 v26; // rdx
  __int64 v27; // rax
  int v28; // ecx
  __int64 v29; // r9
  int v30; // r10d
  int v31; // r11d
  int v32; // eax
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  bool v35; // zf
  __m128i v36; // xmm0
  __m128i v37; // xmm3
  __m128i v38; // xmm1
  __int64 v39; // xmm0_8
  int v40; // edx
  unsigned __int64 v41; // xmm3_8
  int v43; // r9d
  int v44; // eax
  int v45; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v46; // [rsp+54h] [rbp-ACh]
  int v47; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v48; // [rsp+60h] [rbp-A0h]
  unsigned int v49; // [rsp+68h] [rbp-98h]
  _DWORD *v50; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v51; // [rsp+78h] [rbp-88h] BYREF
  __int64 v52; // [rsp+80h] [rbp-80h] BYREF
  __m128i *v53; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v54[4]; // [rsp+90h] [rbp-70h] BYREF
  __m128i *v55; // [rsp+A0h] [rbp-60h]
  int *v56; // [rsp+A8h] [rbp-58h]
  __int128 v57; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v58; // [rsp+C0h] [rbp-40h]
  _BYTE v59[80]; // [rsp+D0h] [rbp-30h] BYREF
  __m128i v60[5]; // [rsp+120h] [rbp+20h] BYREF
  char v61[8]; // [rsp+1F8h] [rbp+F8h]

  v48 = a2;
  LOWORD(v46) = a3;
  v55 = a1;
  v49 = a4;
  v56 = a7;
  memset(v60, 0, 0x48uLL);
  memset(v59, 0, 0x46uLL);
  v45 = 0;
  *a7 = 0;
  v9 = 0;
  v54[0] = 0;
  v10 = &v57;
  v51 = 0LL;
  v11 = 0LL;
  v47 = 0;
  v12 = 0LL;
  v13 = 0;
  v58 = 0LL;
  v14 = 0;
  v52 = 0LL;
  v61[0] = a6 & 1;
  v53 = 0LL;
  if ( a9 )
    v10 = a9;
  v57 = 0LL;
  if ( (unsigned __int16)v46 < 0x20u )
    goto LABEL_28;
  v15 = *(_DWORD *)(v48 + 16);
  v50 = *(_DWORD **)(v48 + 8);
  RaspGetCacheEntry((unsigned int)&RaspBitmapCache, (unsigned __int16)v46, v15, v50[10], (__int64)v50, (__int64)&v51);
  Memory = (_BYTE *)v51;
  if ( v51 )
  {
    v22 = v48;
    v21 = v50;
  }
  else
  {
    LOBYTE(v14) = (dword_140C0E3B0 & 4) != 0;
    if ( (dword_140C0E3B0 & 4) == 0 && !*(_QWORD *)v10 )
      v13 = (*(_BYTE *)(v48 + 20) & 1) == 0;
    v19 = v46;
    v9 = RaspRasterize(
           v48,
           (unsigned __int16)v46,
           v16,
           v17,
           v14,
           (__int64)&v52,
           (__int64)&v47,
           (__int64)&v45,
           (__int64)v10);
    if ( v9 < 0 )
    {
      v11 = v52;
      goto LABEL_25;
    }
    if ( v13 )
    {
      Memory = (_BYTE *)BgpFwAllocateMemory(70LL);
      if ( !Memory )
      {
        v11 = v52;
        v9 = -1073741801;
        goto LABEL_41;
      }
    }
    else
    {
      Memory = v59;
    }
    v20 = *((_QWORD *)v10 + 2);
    v21 = v50;
    v22 = v48;
    v23 = v50[10];
    *((_DWORD *)Memory + 10) = *(_DWORD *)(v48 + 16);
    *((_DWORD *)Memory + 11) = v47;
    *((_DWORD *)Memory + 12) = v45;
    *((_WORD *)Memory + 30) = v19;
    v11 = v52;
    *((_DWORD *)Memory + 13) = 4;
    *((_DWORD *)Memory + 14) = 4;
    *((_DWORD *)Memory + 9) = v23;
    *((_QWORD *)Memory + 3) = v21;
    *((_QWORD *)Memory + 2) = v11;
    *(_QWORD *)(Memory + 62) = v20;
  }
  v24 = *((__int16 *)v21 + 43);
  v25 = *((_DWORD *)Memory + 11);
  v50 = (_DWORD *)*((_QWORD *)Memory + 2);
  v26 = *(_QWORD *)(v22 + 8);
  v47 = *v50 / *((_DWORD *)Memory + 14);
  v45 = v25;
  v27 = *(unsigned int *)(v22 + 16) * v24 * *(unsigned int *)(v26 + 96);
  v28 = BgpFmRoundUp(
          (v27 << 6) / (72LL * *(unsigned __int16 *)(v26 + 120)),
          (v27 << 6) % (72LL * *(unsigned __int16 *)(v26 + 120)));
  v32 = *((_DWORD *)Memory + 12);
  v33 = a5 + v28;
  if ( v32 >= 0 && v32 > v33 )
  {
    v43 = *((unsigned __int16 *)Memory + 30);
    v46 = 0;
    DbgPrintEx(0x65u, 0, "BGFX internal font error char %x!\n", v43);
    v29 = v48;
    v34 = 0;
    v30 = v45;
    v31 = v47;
  }
  else
  {
    v34 = v33 - v32;
    v46 = v34;
  }
  if ( v55->m128i_i32[0] < v31 + v34 || v55->m128i_i32[1] < v30 + v49 )
  {
    v9 = -2147483643;
  }
  else
  {
    if ( v61[0] )
    {
      v35 = (*(_BYTE *)(v29 + 20) & 1) == 0;
      v12 = v60;
      v36 = v55[2];
      v37 = v55[1];
      v38 = v55[3];
      v60[0] = *v55;
      v60[1] = v37;
      v60[2] = v36;
      v39 = v55[4].m128i_i64[0];
      v40 = _mm_cvtsi128_si32(_mm_srli_si128(v60[0], 4));
      v41 = _mm_srli_si128(v37, 8).m128i_u64[0];
      v60[3] = v38;
      if ( v35 )
        v40 = v30;
      v60[4].m128i_i64[0] = v39;
      v45 = v40;
      v60[0].m128i_i64[0] = __PAIR64__(v40, v31);
      v60[1].m128i_i64[1] = v40 * ((unsigned __int32)v60[0].m128i_i32[2] >> 3) * v34 + v41;
      goto LABEL_21;
    }
    v54[1] = v31;
    v54[0] = v30;
    v54[2] = v30;
    v44 = RaspRectangleCreate(v54, 32LL, &v53, v10);
    v12 = v53;
    v9 = v44;
    if ( v44 >= 0 )
    {
      v29 = v48;
LABEL_21:
      RaspAntiAlias((_DWORD)v50, (_DWORD)v12, *((_DWORD *)Memory + 13), *((_DWORD *)Memory + 14), v29);
      if ( !v61[0] )
      {
        v50 = 0LL;
        v51 = __PAIR64__(v46, v49);
        BgpGxCopyRectangle(v55, v12, &v51, &v50);
      }
      *v56 = v45;
      if ( v13 )
        RaspAddCacheEntry(&RaspBitmapCache, Memory);
LABEL_25:
      if ( v9 >= 0 )
      {
        if ( v13 )
          goto LABEL_30;
LABEL_27:
        if ( !v14 )
          goto LABEL_28;
LABEL_43:
        if ( v9 >= 0 || Memory )
          goto LABEL_30;
        goto LABEL_28;
      }
    }
  }
  if ( !v13 )
    goto LABEL_27;
LABEL_41:
  if ( Memory )
  {
    RaspDestroyCachedBitmap(Memory);
    goto LABEL_43;
  }
LABEL_28:
  if ( v11 )
    RaspFreeMemory(v11, v10);
LABEL_30:
  if ( !v61[0] && v12 )
    RaspFreeMemory(v12, v10);
  *((_QWORD *)v10 + 2) = 0LL;
  return (unsigned int)v9;
}
