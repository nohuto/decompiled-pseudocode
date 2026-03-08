/*
 * XREFs of ?VidSchiSynchronouslyUpdateFlipQueueLogs@@YAXPEAU_VIDSCH_GLOBAL@@IQEAKI@Z @ 0x1C004ADD8
 * Callers:
 *     ?VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEA_N@Z @ 0x1C0049888 (-VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEA_N@Z.c)
 *     ?VidSchiUpdateHwPresentTimeForImmediateFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@I@Z @ 0x1C004AF34 (-VidSchiUpdateHwPresentTimeForImmediateFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     ?VidSchiCommitFlipQueueLogUpdate@@YAXAEAU_VIDSCH_PLANE_STATE@@IIQEAK_N@Z @ 0x1C0048E70 (-VidSchiCommitFlipQueueLogUpdate@@YAXAEAU_VIDSCH_PLANE_STATE@@IIQEAK_N@Z.c)
 */

void __fastcall VidSchiSynchronouslyUpdateFlipQueueLogs(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        unsigned int *const a3,
        int a4)
{
  __int64 v8; // r14
  __int64 i; // rbx
  __int64 v10; // rsi
  __int64 v11; // r9
  __int64 v12; // rcx
  _BYTE v13[8]; // [rsp+30h] [rbp-68h] BYREF
  struct _VIDSCH_GLOBAL *v14; // [rsp+38h] [rbp-60h] BYREF
  unsigned int v15; // [rsp+40h] [rbp-58h]
  int v16; // [rsp+44h] [rbp-54h]
  unsigned int v17[2]; // [rsp+48h] [rbp-50h]

  v8 = *((_QWORD *)a1 + a2 + 400);
  if ( *(_QWORD *)(v8 + 32) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 38); i = (unsigned int)(i + 1) )
    {
      if ( a4 == -1 || (_DWORD)i == a4 )
      {
        v10 = 288 * i;
        if ( a4 != -1 || *(_DWORD *)(v10 + v8 + 200) )
        {
          v11 = *((unsigned int *)a1 + 8);
          v12 = *((_QWORD *)a1 + 3);
          *(_QWORD *)v17 = 0LL;
          v14 = a1;
          v15 = a2;
          v16 = i;
          v13[0] = 0;
          DpSynchronizeExecution(v12, VidSchiUpdateFlipQueueLogAtISR, &v14, v11, v13);
          if ( *(_DWORD *)(v10 + v8 + 376) != v17[0] )
            VidSchiCommitFlipQueueLogUpdate((LARGE_INTEGER *)(v10 + v8 + 152), i, v17[0], a3, 0);
        }
      }
    }
  }
}
