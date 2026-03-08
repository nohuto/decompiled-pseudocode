/*
 * XREFs of ?VidSchiAsyncReCreateSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0041814
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C000A580 (VidSchDdiNotifyDpc.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C003A0D4 (VidSchDdiNotifyDpcWorker.c)
 *     VidSchCaptureLogs @ 0x1C01074B0 (VidSchCaptureLogs.c)
 * Callees:
 *     ?VidSchiQueueAsyncOperation@@YAJPEAU_VIDSCH_NODE@@W4VIDSCH_ASYNC_OPERATION_TYPE@@PEATVIDSCH_ASYNC_OPERATION_DATA@@@Z @ 0x1C0042B70 (-VidSchiQueueAsyncOperation@@YAJPEAU_VIDSCH_NODE@@W4VIDSCH_ASYNC_OPERATION_TYPE@@PEATVIDSCH_ASYN.c)
 */

void __fastcall VidSchiAsyncReCreateSchedulingLog(struct _VIDSCH_NODE *a1)
{
  struct _VIDSCH_NODE *v1; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v2; // [rsp+28h] [rbp-10h]
  int v3; // [rsp+2Ch] [rbp-Ch]

  v3 = 0;
  v1 = a1;
  v2 = (byte_1C00769C3 & 2) != 0 ? 0x2000 : 2048;
  VidSchiQueueAsyncOperation(a1, v2, &v1);
}
