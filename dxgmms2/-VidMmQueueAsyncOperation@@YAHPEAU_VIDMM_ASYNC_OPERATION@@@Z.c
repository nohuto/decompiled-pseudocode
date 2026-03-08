/*
 * XREFs of ?VidMmQueueAsyncOperation@@YAHPEAU_VIDMM_ASYNC_OPERATION@@@Z @ 0x1C0095D58
 * Callers:
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C0095D04 (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C00B3A24 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 *     ?VidMmUnpinAllocAsync@@YAJPEAVVIDMM_GLOBAL@@PEAVDXGALLOCATION@@@Z @ 0x1C00F17B0 (-VidMmUnpinAllocAsync@@YAJPEAVVIDMM_GLOBAL@@PEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002360 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidMmQueueAsyncOperation(struct _VIDMM_ASYNC_OPERATION *a1)
{
  __int64 v2; // rdi
  int v3; // eax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int64 v8; // rax
  struct _EX_RUNDOWN_REF *v9; // rsi

  if ( g_VidMmAsyncOpPendingCount > 64 )
    return 0LL;
  v2 = operator new(72LL, 0x33346956u, 64LL);
  if ( !v2 )
    return 0LL;
  _InterlockedIncrement(&g_VidMmAsyncOpPendingCount);
  v3 = *((_DWORD *)a1 + 8);
  if ( v3 == 2 )
  {
    v8 = *((_QWORD *)a1 + 8);
    if ( v8 )
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 444));
  }
  else if ( v3 == 3 )
  {
    v9 = *(struct _EX_RUNDOWN_REF **)(*((_QWORD *)a1 + 6) + 24LL);
    if ( !ExAcquireRundownProtection(v9 + 29) )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 62LL, v9, 0LL, 0LL);
    }
  }
  v4 = *((_OWORD *)a1 + 1);
  *(_OWORD *)v2 = *(_OWORD *)a1;
  v5 = *((_OWORD *)a1 + 2);
  *(_OWORD *)(v2 + 16) = v4;
  v6 = *((_OWORD *)a1 + 3);
  *(_OWORD *)(v2 + 32) = v5;
  *(_QWORD *)&v5 = *((_QWORD *)a1 + 8);
  *(_OWORD *)(v2 + 48) = v6;
  *(_QWORD *)(v2 + 64) = v5;
  *(_QWORD *)v2 = 0LL;
  *(_QWORD *)(v2 + 16) = VidMmProcessAsyncOperation;
  *(_QWORD *)(v2 + 24) = v2;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)v2, DelayedWorkQueue);
  return 1LL;
}
