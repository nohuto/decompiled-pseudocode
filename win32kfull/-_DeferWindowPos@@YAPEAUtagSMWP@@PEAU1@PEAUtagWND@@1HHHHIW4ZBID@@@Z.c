/*
 * XREFs of ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C0067EB8
 * Callers:
 *     ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x1C0026850 (-AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z.c)
 *     xxxSetWindowRgn @ 0x1C0028E44 (xxxSetWindowRgn.c)
 *     xxxSetWindowPosAndBand @ 0x1C0028FFC (xxxSetWindowPosAndBand.c)
 *     NtUserSetWindowPos @ 0x1C0067A30 (NtUserSetWindowPos.c)
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x1C0099DE8 (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00FFAF8 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxArrangeIconicWindows @ 0x1C023C684 (xxxArrangeIconicWindows.c)
 * Callees:
 *     DestroySMWP @ 0x1C003A920 (DestroySMWP.c)
 *     _IsTopLevelWindow @ 0x1C004A140 (_IsTopLevelWindow.c)
 *     _MonitorFromRect @ 0x1C00AEE80 (_MonitorFromRect.c)
 *     ?ExtendRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x1C00FB30C (-ExtendRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     PhysicalToLogicalPointForWindow @ 0x1C01BAF3C (PhysicalToLogicalPointForWindow.c)
 */

__int64 __fastcall _DeferWindowPos(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  int v9; // r12d
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v16; // rcx
  __int64 v17; // rbx
  int v18; // edx
  unsigned int v19; // edx
  int v20; // ecx
  unsigned int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  unsigned int v27; // r8d
  int v28; // r9d
  int v29; // r10d
  unsigned int v30; // r8d
  int v31; // r9d
  int v32; // r10d
  __int64 v33; // rax
  __m128i v34; // xmm1
  int v35; // ecx
  unsigned int v36[4]; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int64 v37; // [rsp+30h] [rbp-20h] BYREF
  int v38; // [rsp+38h] [rbp-18h]
  int v39; // [rsp+3Ch] [rbp-14h]

  v9 = a8;
  v11 = *(int *)(a1 + 32);
  v12 = 1LL;
  if ( *(_DWORD *)(a1 + 28) + 1 > (int)v11 )
  {
    v22 = v11 + 4;
    if ( (int)v11 + 4 < (unsigned int)v11
      || v22 > 0xC30C30
      || ((v23 = 168 * v11, v24 = *(_QWORD *)(a1 + 40), v25 = 168LL * v22, a1 == gSMWP)
        ? (v26 = UserReAllocPool(v24, v23, v25, 2004054869LL))
        : (v26 = UserReAllocPoolWithQuota(v24, v23, v25, 2004054869LL)),
          !v26) )
    {
      DestroySMWP(a1);
      return 0LL;
    }
    *(_QWORD *)(a1 + 40) = v26;
    *(_DWORD *)(a1 + 32) = v22;
  }
  v16 = *(int *)(a1 + 28);
  v17 = *(_QWORD *)(a1 + 40) + 168 * v16;
  *(_DWORD *)(a1 + 28) = v16 + 1;
  *(_QWORD *)v17 = *(_QWORD *)a2;
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 40) + 20LL) & 0x20) == 0 )
  {
    if ( (unsigned __int64)a3 <= 1 || a3 == (__int64 *)-1LL || a3 == (__int64 *)-2LL )
      v12 = (__int64)a3;
    else
      v12 = *a3;
  }
  *(_DWORD *)(v17 + 20) = a5;
  *(_DWORD *)(v17 + 24) = a6;
  *(_DWORD *)(v17 + 28) = a7;
  *(_QWORD *)(v17 + 8) = v12;
  *(_DWORD *)(v17 + 16) = a4;
  *(_DWORD *)(v17 + 32) = a8;
  v18 = *(_DWORD *)(v17 + 156);
  *(_QWORD *)(v17 + 136) = 0LL;
  *(_QWORD *)(v17 + 144) = 0LL;
  v19 = v18 & 0xFFFFFF1F;
  *(_QWORD *)(v17 + 112) = 0LL;
  *(_QWORD *)(v17 + 120) = 0LL;
  *(_QWORD *)(v17 + 128) = 0LL;
  *(_DWORD *)(v17 + 156) = v19;
  if ( (a8 & 3) != 3 || (v20 = v19, (a8 & 4) == 0) && a3 == (__int64 *)-1LL )
  {
    *(_QWORD *)(v17 + 128) = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 256LL);
    v20 = v19 | 0x20;
  }
  *(_DWORD *)(v17 + 152) = a9;
  *(_DWORD *)(v17 + 156) = v20 & 0xFFFFFEE0;
  if ( (a8 & 0x800000) != 0 )
  {
    LODWORD(v37) = a6 + a4;
    *(_QWORD *)v36 = __PAIR64__(a5, a4);
    HIDWORD(v37) = a5 + a7;
    PhysicalToLogicalPointForWindow(__PAIR64__(a5, a4), a2, v36);
    PhysicalToLogicalPointForWindow(v37, a2, &v37);
    a4 = v36[0];
    v27 = v36[1];
    v28 = v37 - v36[0];
    v29 = HIDWORD(v37) - v36[1];
    *(_DWORD *)(v17 + 16) = v36[0];
    *(_DWORD *)(v17 + 32) &= ~0x800000u;
    v9 = *(_DWORD *)(v17 + 32);
    *(_DWORD *)(v17 + 20) = v27;
    *(_DWORD *)(v17 + 24) = v28;
    *(_DWORD *)(v17 + 28) = v29;
  }
  if ( (v9 & 0x400000) != 0 && IsTopLevelWindow(a2) )
  {
    v38 = v31 + a4;
    v37 = __PAIR64__(v30, a4);
    v39 = v32 + v30;
    v33 = MonitorFromRect(&v37, 2LL);
    v34 = *(__m128i *)WindowMargins::ExtendRect(
                        (WindowMargins *)v36,
                        (struct tagRECT *)a2,
                        (const struct tagWND *)&v37,
                        (const struct tagRECT *)*(unsigned __int16 *)(*(_QWORD *)(v33 + 40) + 60LL),
                        v36[0]);
    v35 = _mm_cvtsi128_si32(v34);
    *(_DWORD *)(v17 + 16) = v35;
    *(_DWORD *)(v17 + 20) = v34.m128i_i32[1];
    *(_DWORD *)(v17 + 24) = _mm_cvtsi128_si32(_mm_srli_si128(v34, 8)) - v35;
    *(_DWORD *)(v17 + 32) &= ~0x400000u;
    *(_DWORD *)(v17 + 28) = _mm_srli_si128(v34, 8).m128i_i32[1] - v34.m128i_i32[1];
  }
  return a1;
}
