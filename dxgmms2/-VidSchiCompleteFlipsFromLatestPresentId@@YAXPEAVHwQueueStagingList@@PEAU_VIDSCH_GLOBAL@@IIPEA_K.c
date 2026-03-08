/*
 * XREFs of ?VidSchiCompleteFlipsFromLatestPresentId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IIPEA_KPEAIPEA_NQEAKPEAPEAU_VIDSCH_DEVICE@@@Z @ 0x1C004900C
 * Callers:
 *     ?VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEA_N@Z @ 0x1C0049888 (-VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEA_N@Z.c)
 *     ?VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C0049A8C (-VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00062E0 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x1C000CDD0 (VidSchiProcessVsyncCompletedFlipEntry.c)
 *     ?GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ @ 0x1C00183C8 (-GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ.c)
 *     ?VidSchiIsExpectedVSyncCookie3@@YAHPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@QEAK@Z @ 0x1C00495BC (-VidSchiIsExpectedVSyncCookie3@@YAHPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLI.c)
 */

void __fastcall VidSchiCompleteFlipsFromLatestPresentId(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        unsigned int a3,
        int a4,
        unsigned __int64 *a5,
        unsigned int *a6,
        bool *a7,
        unsigned int *const a8,
        struct _VIDSCH_DEVICE **a9)
{
  int v10; // edi
  struct VIDSCH_FLIP_QUEUE *FlipQueue; // rax
  int v12; // r9d
  struct VIDSCH_FLIP_QUEUE *v13; // rsi
  int v14; // ecx
  struct _VIDSCH_DEVICE *v15; // r13
  unsigned int v16; // ebx
  struct _VIDSCH_DEVICE **v17; // rdi
  char *v18; // r15
  unsigned int v19; // eax
  int v20; // ecx
  __int64 v21; // r12
  unsigned int v22; // edx
  __int64 v23; // r8
  unsigned int v24; // [rsp+38h] [rbp-61h]
  struct _VIDSCH_PRESENT_INFO *v25; // [rsp+40h] [rbp-59h]
  struct _VIDSCH_GLOBAL *v26; // [rsp+48h] [rbp-51h] BYREF
  unsigned int v27; // [rsp+50h] [rbp-49h]
  int v28; // [rsp+54h] [rbp-45h]
  __int64 v29[2]; // [rsp+58h] [rbp-41h] BYREF
  unsigned int v30; // [rsp+68h] [rbp-31h]
  int v31; // [rsp+6Ch] [rbp-2Dh]
  struct VIDSCH_FLIP_QUEUE *v32; // [rsp+70h] [rbp-29h]
  unsigned int v33; // [rsp+78h] [rbp-21h]
  int v34; // [rsp+7Ch] [rbp-1Dh]
  __int64 v35; // [rsp+80h] [rbp-19h]
  __int64 v36; // [rsp+88h] [rbp-11h]
  __int64 v37; // [rsp+90h] [rbp-9h]
  int v39; // [rsp+F0h] [rbp+57h] BYREF
  unsigned int v40; // [rsp+F8h] [rbp+5Fh]
  int v41; // [rsp+100h] [rbp+67h]

  v41 = a4;
  v40 = a3;
  v26 = a2;
  v10 = -1;
  v27 = a3;
  v25 = (struct _VIDSCH_PRESENT_INFO *)*((_QWORD *)a2 + a3 + 400);
  while ( 1 )
  {
    v28 = v10;
    if ( v10 == *((_DWORD *)a2 + 38) )
      break;
    FlipQueue = VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueue((VIDSCH_FLIP_QUEUE_ITERATOR *)&v26);
    v13 = FlipQueue;
    if ( FlipQueue )
    {
      v14 = *((_DWORD *)FlipQueue + 18);
      v15 = 0LL;
      v39 = 0;
      v24 = 0;
      v16 = *((_DWORD *)FlipQueue + 17);
      if ( v16 != (((_BYTE)v14 + 1) & 0x3F) )
      {
        v17 = a9;
        while ( 1 )
        {
          v18 = (char *)v13 + 1384 * v16;
          v19 = *((_DWORD *)v18 + 293);
          if ( v19 > 0xC || (v20 = 4673, !_bittest(&v20, v19)) )
          {
            if ( v19 != 5 && v19 != 15
              || v12 && v12 != *((_DWORD *)v18 + 300)
              || !(unsigned int)VidSchiIsExpectedVSyncCookie3(
                                  a2,
                                  v25,
                                  (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v18 + 120),
                                  a8) )
            {
LABEL_15:
              v10 = v28;
              v21 = v40;
              if ( v15 )
              {
                v31 = 0;
                v34 = 0;
                v33 = v24;
                v35 = *((_QWORD *)v25 + 5524);
                v36 = *((_QWORD *)v25 + 5526);
                v37 = *((_QWORD *)v25 + 5528);
                v29[0] = (__int64)a2;
                v29[1] = (__int64)v15;
                v30 = v40;
                v32 = v13;
                VidSchiProcessVsyncCompletedFlipEntry((__int64)a1, v29, (__int64)a5, a6, &v39, a7);
                VidSchiCheckPendingDeviceCommand(v15);
                v22 = -v39;
                v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v15 + 5) + 32LL)
                                            + 8LL * *(unsigned int *)(*((_QWORD *)v15 + 4) + 4LL))
                                + 8 * v21
                                + 88);
                _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)a2 + v21 + 810) + 8LL), -v39);
                **((_DWORD **)a2 + v21 + 810) += v39;
                _InterlockedExchangeAdd((volatile signed __int32 *)(v23 + 8), v22);
                *(_DWORD *)v23 += v39;
                v10 = v28;
              }
              break;
            }
            v15 = (struct _VIDSCH_DEVICE *)*((_QWORD *)v18 + 145);
            v12 = v41;
            *v17 = v15;
            v24 = v16;
          }
          v16 = ((_BYTE)v16 + 1) & 0x3F;
          if ( v16 == (((unsigned __int8)*((_DWORD *)v13 + 18) + 1) & 0x3F) )
            goto LABEL_15;
        }
      }
    }
    ++v10;
  }
}
