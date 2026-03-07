void __fastcall FixBogusSWP(struct tagWND **a1, int *a2, int *a3, int a4, int a5, char a6)
{
  struct tagMONITOR *v10; // r15
  __int64 v11; // rcx
  struct tagWND *v12; // rdx
  int v13; // edi
  __m128i v14; // xmm0
  struct tagWND *v15; // rax
  __m128i v16; // xmm0
  unsigned __int64 v17; // xmm0_8
  unsigned __int64 v18; // rcx
  int v19; // eax
  unsigned __int64 v20; // rcx
  __int128 v21; // [rsp+20h] [rbp-38h] BYREF
  __m128i v22[2]; // [rsp+30h] [rbp-28h] BYREF

  v10 = _MonitorFromWindowInternal(a1[15], 2u, 0);
  if ( v10 != *(struct tagMONITOR **)(GetDispInfo(v11) + 96) )
  {
    if ( (a6 & 1) != 0 )
    {
      v12 = a1[5];
      a4 = *((_DWORD *)v12 + 24) - *((_DWORD *)v12 + 22);
      v13 = *((_DWORD *)v12 + 25) - *((_DWORD *)v12 + 23);
    }
    else
    {
      v13 = a5;
    }
    if ( (unsigned int)IsRectBogus(*a2, *a3, a4, v13) )
    {
      v21 = 0LL;
      v14 = *(__m128i *)GetMonitorRect(v22[0].m128i_i64, (__int64)v10);
      v15 = a1[15];
      v22[0] = v14;
      IntersectRect(&v21, v22[0].m128i_i32, (int *)(*((_QWORD *)v15 + 5) + 88LL));
      v22[0] = *GetMonitorWorkRect(v22, (__int64)v10);
      v16 = v22[0];
      *a2 = v21 + (DWORD2(v21) - (int)v21 - a4) / 2;
      v17 = _mm_srli_si128(v16, 8).m128i_u64[0];
      *a3 = DWORD1(v21) + (HIDWORD(v21) - DWORD1(v21) - v13) / 2;
      if ( a4 + *a2 > (int)v17 )
        *a2 = v17 - a4;
      if ( v13 + *a3 > SHIDWORD(v17) )
        *a3 = HIDWORD(v17) - v13;
      v18 = v22[0].m128i_i64[0];
      if ( *a2 < v22[0].m128i_i32[0] )
        *a2 = v22[0].m128i_i32[0];
      v19 = *a3;
      v20 = HIDWORD(v18);
      if ( *a3 < (int)v20 )
        v19 = v20;
      *a3 = v19;
    }
  }
}
