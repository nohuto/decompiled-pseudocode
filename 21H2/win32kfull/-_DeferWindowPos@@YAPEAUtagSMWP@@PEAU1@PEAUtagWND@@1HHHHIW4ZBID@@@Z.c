/*
 * XREFs of ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C0048C48
 * Callers:
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x1C002536C (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     xxxSetWindowPosAndBand @ 0x1C0048AFC (xxxSetWindowPosAndBand.c)
 *     ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x1C0081C18 (-AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00CA7B4 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxSetWindowRgn @ 0x1C00F914C (xxxSetWindowRgn.c)
 *     xxxArrangeIconicWindows @ 0x1C014E0E4 (xxxArrangeIconicWindows.c)
 * Callees:
 *     DestroySMWP @ 0x1C0047920 (DestroySMWP.c)
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     _MonitorFromRect @ 0x1C007B570 (_MonitorFromRect.c)
 *     ?ExtendRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@W4LegacyMarginsSource@@I@Z @ 0x1C00B29D0 (-ExtendRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@W4LegacyMarginsSource@@I@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memcmp @ 0x1C0159400 (memcmp.c)
 *     PhysicalToLogicalPointForWindow @ 0x1C01DFB10 (PhysicalToLogicalPointForWindow.c)
 */

__int64 __fastcall _DeferWindowPos(__int64 a1, _QWORD *a2, __int64 *a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // r13d
  int v11; // ecx
  int v13; // r12d
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rax
  unsigned int v18; // edx
  unsigned int v19; // edx
  int v20; // edi
  unsigned int v21; // edi
  unsigned int v23; // ebx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rax
  int v28; // eax
  int v29; // r9d
  int v30; // r9d
  LONG v31; // ecx
  __m128i v32; // xmm1
  int v33; // ecx
  _QWORD v34[2]; // [rsp+30h] [rbp-30h] BYREF
  struct tagRECT v35; // [rsp+40h] [rbp-20h] BYREF

  v9 = a6;
  v11 = *(_DWORD *)(a1 + 28);
  v13 = a8;
  LODWORD(v34[0]) = a4;
  v15 = *(int *)(a1 + 32);
  if ( v11 + 1 > (int)v15 )
  {
    v23 = v15 + 4;
    if ( (int)v15 + 4 < (unsigned int)v15
      || v23 > 0xC30C30
      || ((v24 = *(_QWORD *)(a1 + 40), v25 = 168LL * v23, v26 = 168 * v15, a1 == gSMWP)
        ? (v27 = UserReAllocPool(v24, v26, v25, 2004054869LL))
        : (v27 = UserReAllocPoolWithQuota(v24, v26, v25, 2004054869LL)),
          !v27) )
    {
      DestroySMWP(a1);
      return 0LL;
    }
    v11 = *(_DWORD *)(a1 + 28);
    a4 = v34[0];
    *(_QWORD *)(a1 + 40) = v27;
    *(_DWORD *)(a1 + 32) = v23;
  }
  v16 = *(_QWORD *)(a1 + 40) + 168LL * v11;
  *(_DWORD *)(a1 + 28) = v11 + 1;
  *(_QWORD *)v16 = *a2;
  v17 = 1LL;
  if ( (*(_BYTE *)(a2[5] + 20LL) & 0x20) == 0 )
  {
    if ( (unsigned __int64)a3 <= 1 || (unsigned __int64)a3 > 0xFFFFFFFFFFFFFFFDuLL )
      v17 = (__int64)a3;
    else
      v17 = *a3;
  }
  *(_QWORD *)(v16 + 8) = v17;
  *(_DWORD *)(v16 + 20) = a5;
  *(_DWORD *)(v16 + 28) = a7;
  *(_DWORD *)(v16 + 16) = a4;
  *(_DWORD *)(v16 + 24) = a6;
  *(_DWORD *)(v16 + 32) = a8;
  v18 = *(_DWORD *)(v16 + 156) & 0xFFFFFF9F;
  *(_QWORD *)(v16 + 112) = 0LL;
  v19 = v18 & 0xFFFFFF7F;
  *(_QWORD *)(v16 + 120) = 0LL;
  *(_QWORD *)(v16 + 128) = 0LL;
  *(_QWORD *)(v16 + 136) = 0LL;
  *(_QWORD *)(v16 + 144) = 0LL;
  *(_DWORD *)(v16 + 156) = v19;
  if ( (a8 & 3) != 3 || (v20 = v19, (a8 & 4) == 0) && a3 == (__int64 *)-1LL )
  {
    v20 = v19 | 0x20;
    *(_QWORD *)(v16 + 128) = *(_QWORD *)(a2[5] + 256LL);
  }
  v21 = v20 & 0xFFFFFEE0;
  *(_DWORD *)(v16 + 156) = v21;
  *(_DWORD *)(v16 + 152) = a9;
  *(_DWORD *)(v16 + 156) = (memcmp((const void *)(a2[5] + 88LL), (const void *)(a2[5] + 104LL), 0x10uLL) != 0 ? 0x200 : 0) | v21 & 0xFFFFFDFF;
  if ( (a8 & 0x800000) != 0 )
  {
    v35.left = a6 + LODWORD(v34[0]);
    HIDWORD(v34[0]) = a5;
    v35.top = a5 + a7;
    PhysicalToLogicalPointForWindow(v34[0], a2, v34);
    PhysicalToLogicalPointForWindow(*(_QWORD *)&v35.left, a2, &v35);
    v28 = HIDWORD(v34[0]);
    v29 = v35.top - HIDWORD(v34[0]);
    v9 = v35.left - LODWORD(v34[0]);
    *(_DWORD *)(v16 + 16) = v34[0];
    *(_DWORD *)(v16 + 32) &= ~0x800000u;
    v13 = *(_DWORD *)(v16 + 32);
    *(_DWORD *)(v16 + 20) = v28;
    *(_DWORD *)(v16 + 24) = v9;
    *(_DWORD *)(v16 + 28) = v29;
  }
  if ( (v13 & 0x400000) != 0 )
  {
    if ( (unsigned int)IsTopLevelWindow(a2) )
    {
      v31 = *(_DWORD *)(v16 + 20);
      v35.left = *(_DWORD *)(v16 + 16);
      v35.right = v9 + v35.left;
      v35.top = v31;
      v35.bottom = v31 + v30;
      MonitorFromRect(&v35);
      v32 = *(__m128i *)WindowMargins::ExtendRect(v34, a2, &v35);
      v33 = _mm_cvtsi128_si32(v32);
      *(_DWORD *)(v16 + 16) = v33;
      *(_DWORD *)(v16 + 20) = v32.m128i_i32[1];
      *(_DWORD *)(v16 + 24) = _mm_cvtsi128_si32(_mm_srli_si128(v32, 8)) - v33;
      *(_DWORD *)(v16 + 32) &= ~0x400000u;
      *(_DWORD *)(v16 + 28) = _mm_srli_si128(v32, 8).m128i_i32[1] - v32.m128i_i32[1];
    }
  }
  return a1;
}
