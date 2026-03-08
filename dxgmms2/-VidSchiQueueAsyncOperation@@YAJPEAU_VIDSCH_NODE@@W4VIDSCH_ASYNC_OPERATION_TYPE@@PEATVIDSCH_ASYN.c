/*
 * XREFs of ?VidSchiQueueAsyncOperation@@YAJPEAU_VIDSCH_NODE@@W4VIDSCH_ASYNC_OPERATION_TYPE@@PEATVIDSCH_ASYNC_OPERATION_DATA@@@Z @ 0x1C0042B70
 * Callers:
 *     ?VidSchiAsyncReCreateSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0041814 (-VidSchiAsyncReCreateSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002360 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall VidSchiQueueAsyncOperation(__int64 a1, __int64 a2, __int128 *a3)
{
  __int64 v6; // rax
  __int128 v7; // xmm0

  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 11240)) > 1 )
  {
    WdLogSingleEntry0(4LL);
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 11240));
    KeSetEvent((PRKEVENT)(a1 + 11248), 0, 0);
    return 0LL;
  }
  v6 = operator new(64LL, 0x66356956u, 64LL);
  if ( v6 )
  {
    v7 = *a3;
    *(_QWORD *)(v6 + 32) = a1;
    *(_DWORD *)(v6 + 40) = 1;
    *(_OWORD *)(v6 + 48) = v7;
    *(_QWORD *)v6 = 0LL;
    *(_QWORD *)(v6 + 16) = VidSchiProcessAsyncOperation;
    *(_QWORD *)(v6 + 24) = v6;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)v6, DelayedWorkQueue);
    return 0LL;
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 11240));
  KeSetEvent((PRKEVENT)(a1 + 11248), 0, 0);
  WdLogSingleEntry0(3LL);
  return 3221225495LL;
}
