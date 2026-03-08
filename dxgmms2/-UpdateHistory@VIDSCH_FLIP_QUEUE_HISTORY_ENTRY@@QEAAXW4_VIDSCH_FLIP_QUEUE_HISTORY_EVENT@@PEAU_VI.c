/*
 * XREFs of ?UpdateHistory@VIDSCH_FLIP_QUEUE_HISTORY_ENTRY@@QEAAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@PEBU_VIDSCH_PRESENT_INFO@@PEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C000F860
 * Callers:
 *     VidSchUnwaitFlipQueue @ 0x1C0003B80 (VidSchUnwaitFlipQueue.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C000F7FC (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAU.c)
 * Callees:
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C001124C (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     memset @ 0x1C001AC80 (memset.c)
 */

__int64 __fastcall VIDSCH_FLIP_QUEUE_HISTORY_ENTRY::UpdateHistory(
        __int64 a1,
        int a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        unsigned int a6)
{
  void *v8; // rcx
  __int64 v11; // r14
  bool v12; // zf
  __int64 result; // rax
  unsigned int v14; // r8d
  unsigned int v15; // r9d
  unsigned int v16; // r8d
  int v17; // r11d
  int v18; // eax
  char v19; // dl
  char v20; // cl
  int v21; // eax
  unsigned int v22; // r10d
  unsigned int v23; // eax
  __int64 v24; // [rsp+20h] [rbp-30h] BYREF
  unsigned int *v25; // [rsp+28h] [rbp-28h]
  unsigned int v26; // [rsp+30h] [rbp-20h]
  unsigned int v27; // [rsp+34h] [rbp-1Ch]
  int v28; // [rsp+38h] [rbp-18h]
  unsigned int v29; // [rsp+3Ch] [rbp-14h]
  unsigned int v30; // [rsp+40h] [rbp-10h]

  v8 = *(void **)(a1 + 72);
  if ( v8 )
    memset(v8, 0, 8LL * *(unsigned int *)(a3 + 152));
  *(_DWORD *)a1 = a2;
  v11 = 1384LL * a6;
  *(_DWORD *)(a1 + 16) = **(_DWORD **)(v11 + a5 + 1296) & 0x3FF;
  *(_DWORD *)(a1 + 20) = (**(_DWORD **)(v11 + a5 + 1296) >> 10) & 0x3FF;
  *(_BYTE *)(a1 + 24) = *(_BYTE *)(a5 + 80);
  *(_DWORD *)(a1 + 28) = a6;
  *(LARGE_INTEGER *)(a1 + 8) = KeQueryPerformanceCounter(0LL);
  v12 = *(_QWORD *)(a1 + 72) == 0LL;
  *(_BYTE *)(a1 + 36) = (*(_DWORD *)(v11 + a5 + 1256) & 0x20) != 0;
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(v11 + a5 + 1172);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(v11 + a5 + 1176);
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(v11 + a5 + 1260);
  *(_DWORD *)(a1 + 48) = a4[758];
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(v11 + a5 + 1416);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(v11 + a5 + 1424);
  if ( !v12 && ((a2 - 1) & 0xFFFFFFFD) == 0 )
  {
    v25 = *(unsigned int **)(v11 + a5 + 1296);
    v24 = a3;
    v14 = *v25;
    v15 = *v25 & 0x3FF;
    v12 = *(_BYTE *)(a3 + 156) == 0;
    v26 = v15;
    if ( v12 )
      v16 = 0;
    else
      v16 = (v14 >> 10) & 0x3FF;
    v17 = 0;
    v27 = v16;
    v12 = !_BitScanForward((unsigned int *)&v18, v15);
    v19 = -1;
    v28 = 0;
    v20 = -1;
    if ( !v12 )
      v20 = v18;
    v12 = !_BitScanForward((unsigned int *)&v21, v16);
    v22 = v20;
    v29 = v20;
    if ( !v12 )
      v19 = v21;
    v23 = v19;
    v30 = v19;
    while ( v15 || v16 )
    {
      if ( v22 < v23 )
        *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8LL * v22) = *(_QWORD *)(v17
                                                                  * ((8
                                                                    * *(_DWORD *)(*(_QWORD *)(v11 + a5 + 1296) + 8LL)
                                                                    + 231) & 0xFFFFFFF8)
                                                                  + *(_QWORD *)(v11 + a5 + 1296)
                                                                  + 24LL);
      VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++(&v24);
      v23 = v30;
      v16 = v27;
      v22 = v29;
      v17 = v28;
      v15 = v26;
    }
  }
  *(_DWORD *)(a1 + 84) = a4[773];
  *(_DWORD *)(a1 + 80) = a4[772];
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(a5 + 56);
  *(_DWORD *)(a1 + 92) = *(_DWORD *)(a5 + 60);
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a5 + 64);
  *(_DWORD *)(a1 + 100) = *(_DWORD *)(a5 + 68);
  *(_DWORD *)(a1 + 104) = *(_DWORD *)(a5 + 72);
  result = *(unsigned int *)(a5 + 76);
  *(_DWORD *)(a1 + 108) = result;
  return result;
}
