/*
 * XREFs of ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C006BA90
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C002B73C (xxxMinMaximizeEx.c)
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x1C00323C8 (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x1C0036BFC (-AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C003E97C (xxxDeferWindowPosAndCheckPoint.c)
 *     xxxSetWindowPosAndBand @ 0x1C006BDD0 (xxxSetWindowPosAndBand.c)
 *     xxxSetWindowRgn @ 0x1C010E240 (xxxSetWindowRgn.c)
 *     xxxArrangeIconicWindows @ 0x1C015E5A0 (xxxArrangeIconicWindows.c)
 * Callees:
 *     DestroySMWP @ 0x1C006F4F0 (DestroySMWP.c)
 */

__int64 __fastcall _DeferWindowPos(__int64 a1, _QWORD *a2, __int64 *a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v11; // ecx
  __int64 v14; // r10
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // r8d
  int v18; // ecx
  __int64 result; // rax
  unsigned int v20; // esi
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rax

  v11 = *(_DWORD *)(a1 + 28);
  v14 = *(int *)(a1 + 32);
  if ( v11 + 1 > (int)v14 )
  {
    v20 = v14 + 4;
    if ( (int)v14 + 4 < (unsigned int)v14
      || v20 > 0xC30C30
      || ((v21 = *(_QWORD *)(a1 + 40), v22 = 168LL * v20, v23 = 168 * v14, a1 == gSMWP)
        ? (v24 = UserReAllocPoolZInit(v21, v23, v22, 2004054869LL))
        : (v24 = UserReAllocPoolWithQuotaZInit(v21, v23, v22, 2004054869LL)),
          !v24) )
    {
      DestroySMWP(a1);
      return 0LL;
    }
    v11 = *(_DWORD *)(a1 + 28);
    *(_QWORD *)(a1 + 40) = v24;
    *(_DWORD *)(a1 + 32) = v20;
  }
  v15 = *(_QWORD *)(a1 + 40) + 168LL * v11;
  *(_DWORD *)(a1 + 28) = v11 + 1;
  *(_QWORD *)v15 = *a2;
  v16 = 1LL;
  if ( (*(_BYTE *)(a2[5] + 20LL) & 0x20) == 0 )
  {
    if ( (unsigned __int64)a3 <= 1 || (unsigned __int64)a3 > 0xFFFFFFFFFFFFFFFDuLL )
      v16 = (__int64)a3;
    else
      v16 = *a3;
  }
  *(_QWORD *)(v15 + 8) = v16;
  *(_DWORD *)(v15 + 20) = a5;
  *(_DWORD *)(v15 + 24) = a6;
  *(_DWORD *)(v15 + 28) = a7;
  *(_DWORD *)(v15 + 16) = a4;
  *(_DWORD *)(v15 + 32) = a8;
  *(_DWORD *)(v15 + 156) &= 0xFFFFFF1F;
  *(_QWORD *)(v15 + 112) = 0LL;
  *(_QWORD *)(v15 + 120) = 0LL;
  *(_QWORD *)(v15 + 128) = 0LL;
  *(_DWORD *)(v15 + 140) = 0;
  *(_DWORD *)(v15 + 136) = 0;
  *(_DWORD *)(v15 + 148) = 0;
  *(_DWORD *)(v15 + 144) = 0;
  v17 = *(_DWORD *)(v15 + 156);
  if ( (a8 & 3) != 3 || (v18 = *(_DWORD *)(v15 + 156), (a8 & 4) == 0) && a3 == (__int64 *)-1LL )
  {
    *(_QWORD *)(v15 + 128) = *(_QWORD *)(a2[5] + 256LL);
    v18 = v17 | 0x20;
  }
  *(_DWORD *)(v15 + 152) = a9;
  result = a1;
  *(_DWORD *)(v15 + 156) = v18 & 0xFFFFFEE0;
  return result;
}
