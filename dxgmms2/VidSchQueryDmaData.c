/*
 * XREFs of VidSchQueryDmaData @ 0x1C010A1FC
 * Callers:
 *     ?WriteDmaHistoryToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK2K@Z @ 0x1C00F0B74 (-WriteDmaHistoryToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK2K@Z.c)
 * Callees:
 *     VidSchiBlockDriverCallback @ 0x1C010A3BC (VidSchiBlockDriverCallback.c)
 */

__int64 __fastcall VidSchQueryDmaData(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 *v5; // rdi
  unsigned int v6; // ebx
  __int64 v8; // rdi
  unsigned int v9; // r9d
  unsigned int v10; // r8d
  __int64 i; // rdx
  __int64 result; // rax
  __int64 v13; // rcx
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  unsigned int v18; // [rsp+44h] [rbp+1Ch]

  v18 = HIDWORD(a3);
  v5 = *(__int64 **)(a1 + 632);
  v6 = a3;
  if ( a2 < *(_DWORD *)(a1 + 704) )
    v5 += a2;
  v8 = *v5;
  VidSchiBlockDriverCallback(a1);
  v9 = *(_DWORD *)(a1 + 2620);
  v10 = 0;
  if ( !v9 )
    return 3221225485LL;
  for ( i = v8 + 11404; *(_DWORD *)(i - 20) == 3 || *(_QWORD *)(i - 4) != __PAIR64__(v18, v6); i += 224LL )
  {
    if ( ++v10 >= v9 )
      return 3221225485LL;
  }
  v13 = 224LL * v10;
  result = 0LL;
  v14 = *(_OWORD *)(v13 + v8 + 11424);
  *(_OWORD *)a4 = *(_OWORD *)(v13 + v8 + 11408);
  v15 = *(_OWORD *)(v13 + v8 + 11440);
  *(_OWORD *)(a4 + 16) = v14;
  v16 = *(_OWORD *)(v13 + v8 + 11456);
  *(_OWORD *)(a4 + 32) = v15;
  v17 = *(_OWORD *)(v13 + v8 + 11472);
  *(_OWORD *)(a4 + 48) = v16;
  *(_QWORD *)&v16 = *(_QWORD *)(v13 + v8 + 11488);
  *(_OWORD *)(a4 + 64) = v17;
  *(_QWORD *)(a4 + 80) = v16;
  return result;
}
