/*
 * XREFs of ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01CFA10
 * Callers:
 *     xxxSetWindowPosAndBand @ 0x1C006BD30 (xxxSetWindowPosAndBand.c)
 * Callees:
 *     GetMonitorWorkRect @ 0x1C0041390 (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x1C0041D58 (GetMonitorRect.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C0042160 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     IntersectRect @ 0x1C00750C0 (IntersectRect.c)
 *     ?IsRectBogus@@YAHHHHH@Z @ 0x1C01CFB7C (-IsRectBogus@@YAHHHHH@Z.c)
 */

void __fastcall FixBogusSWP(struct tagWND **a1, int *a2, int *a3, int a4, int a5, char a6)
{
  struct tagMONITOR *v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagWND *v13; // rdx
  int v14; // edi
  __m128i v15; // xmm0
  struct tagWND *v16; // rax
  __m128i *MonitorWorkRect; // rax
  int v18; // ecx
  __m128i v19; // xmm0
  unsigned __int64 v20; // xmm0_8
  int v21; // edx
  int v22; // r8d
  unsigned __int64 v23; // rcx
  int v24; // eax
  unsigned __int64 v25; // rcx
  __int128 v26; // [rsp+20h] [rbp-20h] BYREF
  __m128i v27; // [rsp+30h] [rbp-10h] BYREF

  v10 = _MonitorFromWindowInternal(a1[15], 2, 0);
  if ( v10 != *(struct tagMONITOR **)(GetDispInfo(v12, v11) + 96) )
  {
    if ( (a6 & 1) != 0 )
    {
      v13 = a1[5];
      a4 = *((_DWORD *)v13 + 24) - *((_DWORD *)v13 + 22);
      v14 = *((_DWORD *)v13 + 25) - *((_DWORD *)v13 + 23);
    }
    else
    {
      v14 = a5;
    }
    if ( (unsigned int)IsRectBogus(*a2, *a3, a4, v14) )
    {
      v26 = 0LL;
      v15 = *(__m128i *)GetMonitorRect(&v27, (__int64)v10);
      v16 = a1[15];
      v27 = v15;
      IntersectRect(&v26, v27.m128i_i32, (int *)(*((_QWORD *)v16 + 5) + 88LL));
      MonitorWorkRect = (__m128i *)GetMonitorWorkRect(&v27, (__int64)v10);
      v18 = DWORD1(v26);
      v27 = *MonitorWorkRect;
      v19 = v27;
      *a2 = v26 + (DWORD2(v26) - (int)v26 - a4) / 2;
      v20 = _mm_srli_si128(v19, 8).m128i_u64[0];
      v21 = (HIDWORD(v26) - v18 - v14) / 2 + v18;
      *a3 = v21;
      v22 = *a2;
      if ( *a2 + a4 > (int)v20 )
      {
        v22 = v20 - a4;
        *a2 = v20 - a4;
        v21 = *a3;
      }
      if ( v21 + v14 > SHIDWORD(v20) )
      {
        v21 = HIDWORD(v20) - v14;
        *a3 = HIDWORD(v20) - v14;
        v22 = *a2;
      }
      v23 = v27.m128i_i64[0];
      if ( v22 < v27.m128i_i32[0] )
      {
        *a2 = v27.m128i_i32[0];
        v21 = *a3;
      }
      v24 = *a3;
      v25 = HIDWORD(v23);
      if ( v21 < (int)v25 )
        v24 = v25;
      *a3 = v24;
    }
  }
}
