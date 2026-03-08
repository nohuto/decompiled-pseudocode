/*
 * XREFs of ?VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEA_N@Z @ 0x1C0049888
 * Callers:
 *     ?VidSchiCheckHeadTimeout@@YAHPEAU_VIDSCH_GLOBAL@@IPEAHPEA_KPEAT_ULARGE_INTEGER@@@Z @ 0x1C0008B70 (-VidSchiCheckHeadTimeout@@YAHPEAU_VIDSCH_GLOBAL@@IPEAHPEA_KPEAT_ULARGE_INTEGER@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     ?VidSchiTraceHwFlipQueueLogUpdate@@YAXPEAU_VIDSCH_GLOBAL@@_KIIK@Z @ 0x1C0037400 (-VidSchiTraceHwFlipQueueLogUpdate@@YAXPEAU_VIDSCH_GLOBAL@@_KIIK@Z.c)
 *     McTemplateK0pqXR1qqqXR5XR1_EtwWriteTransfer @ 0x1C003830C (McTemplateK0pqXR1qqqXR5XR1_EtwWriteTransfer.c)
 *     ?VidSchiCompleteFlipsFromLatestPresentId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IIPEA_KPEAIPEA_NQEAKPEAPEAU_VIDSCH_DEVICE@@@Z @ 0x1C004900C (-VidSchiCompleteFlipsFromLatestPresentId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IIPEA_K.c)
 *     ?VidSchiSubmitNextFlipRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C004AB60 (-VidSchiSubmitNextFlipRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiSynchronouslyUpdateFlipQueueLogs@@YAXPEAU_VIDSCH_GLOBAL@@IQEAKI@Z @ 0x1C004ADD8 (-VidSchiSynchronouslyUpdateFlipQueueLogs@@YAXPEAU_VIDSCH_GLOBAL@@IQEAKI@Z.c)
 *     ?VidSchiUpdateInterruptTargetsForAllPlanes@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C004B0C0 (-VidSchiUpdateInterruptTargetsForAllPlanes@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 */

void __fastcall VidSchiObserveHwFlipQueueUpdates(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        unsigned int a3,
        bool *a4)
{
  unsigned int v5; // ebx
  __int64 v9; // rsi
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rcx
  bool v15; // zf
  unsigned int v16; // eax
  unsigned __int64 *v17; // [rsp+20h] [rbp-E0h]
  bool *v18; // [rsp+30h] [rbp-D0h]
  unsigned int *v19; // [rsp+38h] [rbp-C8h]
  struct _VIDSCH_DEVICE **v20; // [rsp+40h] [rbp-C0h]
  unsigned int v21; // [rsp+60h] [rbp-A0h] BYREF
  struct _VIDSCH_DEVICE *v22; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v23[4]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v24; // [rsp+80h] [rbp-80h]
  __int64 v25; // [rsp+90h] [rbp-70h]
  _QWORD v26[10]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v27[10]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v28[10]; // [rsp+140h] [rbp+40h] BYREF

  v5 = 0;
  v9 = *((_QWORD *)a2 + a3 + 400);
  if ( *(_DWORD *)(v9 + 3088) )
  {
    v22 = 0LL;
    v21 = 0;
    memset(v27, 0, sizeof(v27));
    v25 = 0LL;
    v10 = *((_DWORD *)a2 + 38);
    *(_OWORD *)v23 = 0LL;
    v24 = 0LL;
    if ( v10 )
      memset(v23, -1, 4LL * v10);
    VidSchiSynchronouslyUpdateFlipQueueLogs(a2, a3, v23, 0xFFFFFFFF);
    VidSchiCompleteFlipsFromLatestPresentId(a1, a2, a3, 0, v27, &v21, a4, v23, &v22);
    VidSchiSubmitNextFlipRange(a1, a2, a3);
    VidSchiUpdateInterruptTargetsForAllPlanes(a2, a3);
    if ( bTracingEnabled )
    {
      memset(v28, 0, sizeof(v28));
      memset(v26, 0, sizeof(v26));
      v13 = *((unsigned int *)a2 + 38);
      if ( (_DWORD)v13 )
      {
        do
        {
          v11 = v5;
          v14 = 288LL * v5;
          v15 = (byte_1C00769C4 & 1) == 0;
          v28[v5] = *(_QWORD *)(v14 + v9 + 400);
          v26[v5] = *(_QWORD *)(v14 + v9 + 424);
          if ( !v15 )
          {
            v16 = v23[v5];
            if ( v16 != -1 )
              VidSchiTraceHwFlipQueueLogUpdate(a2, *(_QWORD *)(v9 + 44192), a3, v5, v16);
          }
          v13 = *((unsigned int *)a2 + 38);
          ++v5;
        }
        while ( v5 < (unsigned int)v13 );
      }
      if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
      {
        LODWORD(v20) = v21;
        LODWORD(v19) = *(_DWORD *)(v9 + 44192);
        LODWORD(v18) = a3;
        LODWORD(v17) = v13;
        McTemplateK0pqXR1qqqXR5XR1_EtwWriteTransfer(
          v13,
          v11,
          v12,
          *((_QWORD *)a2 + 2),
          v17,
          v28,
          v18,
          v19,
          v20,
          v27,
          v26);
      }
    }
  }
}
