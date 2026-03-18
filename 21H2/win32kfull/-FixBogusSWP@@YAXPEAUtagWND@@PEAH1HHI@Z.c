/*
 * XREFs of ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01CC428
 * Callers:
 *     xxxSetWindowPosAndBand @ 0x1C0048AFC (xxxSetWindowPosAndBand.c)
 * Callees:
 *     IntersectRect @ 0x1C004CD28 (IntersectRect.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C007B464 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     GetMonitorRect @ 0x1C007CB08 (GetMonitorRect.c)
 *     GetMonitorWorkRect @ 0x1C007CB4C (GetMonitorWorkRect.c)
 *     ?IsRectBogus@@YAHHHHH@Z @ 0x1C01CC5A8 (-IsRectBogus@@YAHHHHH@Z.c)
 */

void __fastcall FixBogusSWP(struct tagWND **a1, int *a2, int *a3, int a4, int a5, char a6)
{
  struct tagMONITOR *v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct tagWND *v15; // rdx
  int v16; // edi
  __int128 v17; // xmm0
  struct tagWND *v18; // rax
  _OWORD *MonitorWorkRect; // rax
  int v20; // ecx
  __m128i v21; // xmm0
  unsigned __int64 v22; // xmm0_8
  int v23; // edx
  int v24; // r8d
  unsigned __int64 v25; // rcx
  int v26; // eax
  unsigned __int64 v27; // rcx
  __int128 v28; // [rsp+20h] [rbp-38h] BYREF
  _OWORD v29[2]; // [rsp+30h] [rbp-28h] BYREF

  v10 = _MonitorFromWindowInternal(a1[15], 2, 0);
  if ( v10 != *(struct tagMONITOR **)(GetDispInfo(v12, v11, v13, v14) + 96) )
  {
    if ( (a6 & 1) != 0 )
    {
      v15 = a1[5];
      a4 = *((_DWORD *)v15 + 24) - *((_DWORD *)v15 + 22);
      v16 = *((_DWORD *)v15 + 25) - *((_DWORD *)v15 + 23);
    }
    else
    {
      v16 = a5;
    }
    if ( (unsigned int)IsRectBogus(*a2, *a3, a4, v16) )
    {
      v28 = 0LL;
      v17 = *(_OWORD *)GetMonitorRect((__int64)v29, (__int64)v10);
      v18 = a1[15];
      v29[0] = v17;
      IntersectRect(&v28, (int *)v29, (int *)(*((_QWORD *)v18 + 5) + 88LL));
      MonitorWorkRect = (_OWORD *)GetMonitorWorkRect((__int64)v29, (__int64)v10);
      v20 = DWORD1(v28);
      v29[0] = *MonitorWorkRect;
      v21 = (__m128i)v29[0];
      *a2 = v28 + (DWORD2(v28) - (int)v28 - a4) / 2;
      v22 = _mm_srli_si128(v21, 8).m128i_u64[0];
      v23 = (HIDWORD(v28) - v20 - v16) / 2 + v20;
      *a3 = v23;
      v24 = *a2;
      if ( *a2 + a4 > (int)v22 )
      {
        v24 = v22 - a4;
        *a2 = v22 - a4;
        v23 = *a3;
      }
      if ( v23 + v16 > SHIDWORD(v22) )
      {
        v23 = HIDWORD(v22) - v16;
        *a3 = HIDWORD(v22) - v16;
        v24 = *a2;
      }
      v25 = *(_QWORD *)&v29[0];
      if ( v24 < SLODWORD(v29[0]) )
      {
        *a2 = v29[0];
        v23 = *a3;
      }
      v26 = *a3;
      v27 = HIDWORD(v25);
      if ( v23 < (int)v27 )
        v26 = v27;
      *a3 = v26;
    }
  }
}
