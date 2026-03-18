/*
 * XREFs of GreGetBounds @ 0x1C004A0F0
 * Callers:
 *     GetMonitorDC @ 0x1C005B3E8 (GetMonitorDC.c)
 *     CreateCacheDC @ 0x1C005BC20 (CreateCacheDC.c)
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C004B718 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C004B77C (--1DCOBJA@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetBounds(HDC a1, _DWORD *a2, char a3)
{
  __int64 v5; // rbx
  unsigned int v6; // edi
  int v7; // r8d
  char v8; // r11
  int v9; // r11d
  __int64 v10; // rax
  unsigned __int128 v11; // xmm0
  unsigned __int128 v12; // kr00_16
  __int64 v14; // rax
  int v15; // ecx
  int v16; // r9d
  unsigned __int64 v17; // xmm0_8
  bool v18; // zf
  __m128i v19; // [rsp+20h] [rbp-40h]
  _QWORD v20[6]; // [rsp+30h] [rbp-30h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v20, a1);
  v5 = v20[0];
  v6 = 0;
  v7 = 1;
  if ( !v20[0] )
    goto LABEL_10;
  v8 = a3;
  if ( (a3 & 1) != 0 )
  {
    if ( (a3 & 4) == 0 )
    {
      *(_DWORD *)(v20[0] + 36LL) |= 0x20u;
LABEL_12:
      v5 = v20[0];
      v9 = v8 & 4;
      goto LABEL_13;
    }
    *(_DWORD *)(v20[0] + 36LL) |= 0x40u;
LABEL_22:
    v5 = v20[0];
    v9 = v8 & 4;
    goto LABEL_5;
  }
  v9 = a3 & 4;
  if ( (a3 & 2) != 0 )
  {
    v18 = v9 == 0;
    v8 = a3;
    if ( v18 )
    {
      *(_DWORD *)(v20[0] + 36LL) &= ~0x20u;
      goto LABEL_12;
    }
    *(_DWORD *)(v20[0] + 36LL) &= ~0x40u;
    goto LABEL_22;
  }
  if ( (a3 & 4) == 0 )
  {
LABEL_13:
    v11 = *(_OWORD *)(v5 + 1064);
    goto LABEL_7;
  }
LABEL_5:
  v10 = *(_QWORD *)(v5 + 1184);
  if ( !v10
    || (a3 & 3) != 0
    || (v19 = *(__m128i *)(v10 + 56),
        v17 = _mm_srli_si128(v19, 8).m128i_u64[0],
        v12 = __PAIR128__(v17, *(_QWORD *)(v10 + 56)),
        v19.m128i_i32[0] == (_DWORD)v17)
    || v19.m128i_i32[1] == HIDWORD(v17) )
  {
    v11 = *(_OWORD *)(v5 + 1080);
LABEL_7:
    v19 = (__m128i)v11;
    v12 = v11;
  }
  if ( (_DWORD)v12 != DWORD2(v12)
    && (int)v12 < SDWORD2(v12)
    && DWORD1(v12) != HIDWORD(v12)
    && SDWORD1(v12) < SHIDWORD(v12) )
  {
    if ( a2 )
    {
      v14 = *(_DWORD *)(v5 + 40) & 1LL;
      v15 = *(_DWORD *)(v5 + 8 * v14 + 1020);
      v16 = *(_DWORD *)(v5 + 8 * v14 + 1016);
      *a2 = v16 + v12;
      a2[1] = v15 + v19.m128i_i32[1];
      a2[2] = v16 + DWORD2(v12);
      a2[3] = v15 + v19.m128i_i32[3];
    }
    v7 = 0;
    if ( v9 )
    {
      *(_DWORD *)(v5 + 1080) = 0x7FFFFFFF;
      *(_DWORD *)(v20[0] + 1084LL) = 0x7FFFFFFF;
      *(_DWORD *)(v20[0] + 1088LL) = 0x80000000;
      *(_DWORD *)(v20[0] + 1092LL) = 0x80000000;
    }
    else
    {
      *(_DWORD *)(v5 + 1064) = 0x7FFFFFFF;
      *(_DWORD *)(v20[0] + 1068LL) = 0x7FFFFFFF;
      *(_DWORD *)(v20[0] + 1072LL) = 0x80000000;
      *(_DWORD *)(v20[0] + 1076LL) = 0x80000000;
    }
  }
LABEL_10:
  LOBYTE(v6) = v7 == 0;
  DCOBJA::~DCOBJA((DCOBJA *)v20);
  return v6;
}
