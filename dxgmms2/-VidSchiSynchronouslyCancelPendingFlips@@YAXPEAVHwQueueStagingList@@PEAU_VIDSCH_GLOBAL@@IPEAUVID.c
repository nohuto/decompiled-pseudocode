/*
 * XREFs of ?VidSchiSynchronouslyCancelPendingFlips@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@I@Z @ 0x1C004AC28
 * Callers:
 *     ?VidSchiCancelHwQueuedFlips@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_DEVICE@@IPEAUVIDSCH_FLIP_QUEUE@@I@Z @ 0x1C0048798 (-VidSchiCancelHwQueuedFlips@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_DEVICE@@IPEAUVIDSCH_FLIP_QUE.c)
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x1C000D060 (VidSchiCompleteFlipEntry.c)
 */

void __fastcall VidSchiSynchronouslyCancelPendingFlips(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        unsigned int a3,
        struct VIDSCH_FLIP_QUEUE *a4,
        unsigned int a5)
{
  unsigned int v6; // ebx
  int v9; // esi
  __int64 v10; // r13
  __int64 v11; // rcx
  unsigned int v12; // eax
  int v13; // edx
  _DWORD *v14; // r11
  unsigned int v15; // edx
  char v16; // r9
  bool v17; // zf
  int v18; // eax
  char v19; // r15
  unsigned int v20; // r14d
  int v21; // r8d
  unsigned __int64 v22; // r10
  __int64 v23; // rcx
  int v24; // eax
  int v26; // [rsp+98h] [rbp+20h] BYREF

  if ( a4 )
  {
    v6 = *((_DWORD *)a4 + 17);
    v9 = ((unsigned __int8)*((_DWORD *)a4 + 18) + 1) & 0x3F;
    v10 = *((_QWORD *)a2 + a3 + 400);
    while ( v6 != v9 )
    {
      v11 = 1384LL * v6;
      v12 = *(_DWORD *)((char *)a4 + v11 + 1172);
      if ( v12 > 0xC || (v13 = 4673, !_bittest(&v13, v12)) )
      {
        if ( v12 == 5 || v12 == 15 )
        {
          v14 = *(_DWORD **)((char *)a4 + v11 + 1296);
          if ( (*(_DWORD *)((_BYTE *)a4 + v11 + 1256) & 0x10) != 0 )
            v15 = ((unsigned __int16)*v14 | (unsigned __int16)(*v14 >> 10)) & 0x3FF;
          else
            v15 = (1 << *((_DWORD *)a2 + 38)) - 1;
          v26 = 0;
          v16 = -1;
          v17 = !_BitScanForward((unsigned int *)&v18, v15);
          if ( !v17 )
            v16 = v18;
          v19 = 0;
          if ( v15 )
          {
            v20 = (8 * v14[2] + 231) & 0xFFFFFFF8;
            while ( 1 )
            {
              v21 = 1 << v16;
              v22 = *(_QWORD *)((char *)v14 + v20 * v19 + 24);
              if ( v22 )
              {
                v23 = 288LL * v16;
                if ( (v21 & a5) == 0 || v22 < *(_QWORD *)(v23 + v10 + 408) || v22 > *(_QWORD *)(v23 + v10 + 416) )
                  break;
              }
              v26 = 0;
              v15 &= ~v21;
              v16 = -1;
              v17 = !_BitScanForward((unsigned int *)&v24, v15);
              if ( !v17 )
                v16 = v24;
              ++v19;
              if ( !v15 )
                goto LABEL_21;
            }
          }
          else
          {
LABEL_21:
            LOBYTE(v26) = 0;
            VidSchiCompleteFlipEntry((__int64)a1, (__int64)a2, a3, (__int64)a4, v6, v6, 9u, &v26);
          }
        }
      }
      v6 = ((_BYTE)v6 + 1) & 0x3F;
    }
  }
}
