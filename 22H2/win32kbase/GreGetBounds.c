/*
 * XREFs of GreGetBounds @ 0x1C0037E80
 * Callers:
 *     GetMonitorDC @ 0x1C003B0E0 (GetMonitorDC.c)
 *     CreateCacheDC @ 0x1C006B8B0 (CreateCacheDC.c)
 * Callees:
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C0038DB0 (--1DCOBJA@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0038DDC (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreGetBounds(HDC a1, _DWORD *a2, char a3)
{
  __int64 v5; // rdi
  int v6; // esi
  __m128i *v7; // rax
  unsigned __int128 v8; // xmm0
  unsigned __int128 v9; // kr00_16
  __int64 v10; // rcx
  int v11; // r9d
  int v12; // ecx
  unsigned int v13; // ebx
  unsigned __int64 v15; // xmm0_8
  __m128i v16; // [rsp+20h] [rbp-48h]
  _QWORD v17[7]; // [rsp+30h] [rbp-38h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v17, a1);
  v5 = v17[0];
  if ( !v17[0] )
  {
    v13 = 0;
    goto LABEL_18;
  }
  if ( (a3 & 1) != 0 )
  {
    if ( (a3 & 4) != 0 )
      *(_DWORD *)(v17[0] + 36LL) |= 0x40u;
    else
      *(_DWORD *)(v17[0] + 36LL) |= 0x20u;
    goto LABEL_27;
  }
  if ( (a3 & 2) == 0 )
    goto LABEL_4;
  if ( (a3 & 4) == 0 )
  {
    *(_DWORD *)(v17[0] + 36LL) &= ~0x20u;
LABEL_27:
    v5 = v17[0];
    goto LABEL_4;
  }
  *(_DWORD *)(v17[0] + 36LL) &= ~0x40u;
  v5 = v17[0];
LABEL_4:
  v6 = a3 & 4;
  if ( (a3 & 4) == 0 )
  {
    v8 = *(_OWORD *)(v5 + 1064);
    goto LABEL_7;
  }
  v7 = *(__m128i **)(v5 + 1192);
  if ( !v7
    || (a3 & 3) != 0
    || (v16 = v7[6],
        v15 = _mm_srli_si128(v16, 8).m128i_u64[0],
        v9 = __PAIR128__(v15, v7[6].m128i_i64[0]),
        v16.m128i_i32[0] == (_DWORD)v15)
    || v16.m128i_i32[1] == HIDWORD(v15) )
  {
    v8 = *(_OWORD *)(v5 + 1080);
LABEL_7:
    v16 = (__m128i)v8;
    v9 = v8;
  }
  if ( (_DWORD)v9 == DWORD2(v9) || (int)v9 >= SDWORD2(v9) || DWORD1(v9) == HIDWORD(v9) || SDWORD1(v9) >= SHIDWORD(v9) )
  {
    v13 = 0;
  }
  else
  {
    if ( a2 )
    {
      v10 = 1016LL;
      if ( (*(_DWORD *)(v5 + 40) & 1) != 0 )
        v10 = 1024LL;
      v11 = *(_DWORD *)(v10 + v5);
      v12 = *(_DWORD *)(v10 + v5 + 4);
      *a2 = v11 + v9;
      a2[1] = v12 + v16.m128i_i32[1];
      a2[2] = v11 + DWORD2(v9);
      a2[3] = v12 + v16.m128i_i32[3];
    }
    v13 = 1;
    if ( v6 )
    {
      *(_DWORD *)(v5 + 1080) = 0x7FFFFFFF;
      *(_DWORD *)(v17[0] + 1084LL) = 0x7FFFFFFF;
      *(_DWORD *)(v17[0] + 1088LL) = 0x80000000;
      *(_DWORD *)(v17[0] + 1092LL) = 0x80000000;
    }
    else
    {
      *(_DWORD *)(v5 + 1064) = 0x7FFFFFFF;
      *(_DWORD *)(v17[0] + 1068LL) = 0x7FFFFFFF;
      *(_DWORD *)(v17[0] + 1072LL) = 0x80000000;
      *(_DWORD *)(v17[0] + 1076LL) = 0x80000000;
    }
  }
LABEL_18:
  DCOBJA::~DCOBJA((DCOBJA *)v17);
  return v13;
}
