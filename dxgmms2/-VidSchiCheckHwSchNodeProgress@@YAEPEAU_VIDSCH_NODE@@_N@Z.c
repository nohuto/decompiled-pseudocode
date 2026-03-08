/*
 * XREFs of ?VidSchiCheckHwSchNodeProgress@@YAEPEAU_VIDSCH_NODE@@_N@Z @ 0x1C001C8D0
 * Callers:
 *     ?VidSchiNotifyReadyQueueRemoved@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C001D1A2 (-VidSchiNotifyReadyQueueRemoved@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     ?VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C0042D18 (-VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     VidSchiProcessSuspendContextCompletedDpc @ 0x1C0045F04 (VidSchiProcessSuspendContextCompletedDpc.c)
 *     VidSchiSuspendResumeHwContext @ 0x1C0046764 (VidSchiSuspendResumeHwContext.c)
 *     VidSchiCheckNodeTimeout @ 0x1C00A5B80 (VidSchiCheckNodeTimeout.c)
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0013414 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00134D8 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 */

char __fastcall VidSchiCheckHwSchNodeProgress(struct _VIDSCH_NODE *a1, char a2)
{
  char v2; // bl
  __int64 v3; // rax
  _QWORD v6[4]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v7; // [rsp+40h] [rbp-18h]

  v2 = 0;
  v3 = *((_QWORD *)a1 + 3) + 1728LL;
  v7 = 0;
  v6[0] = v3;
  if ( a2 )
    AcquireSpinLock::Acquire((Acquire *)v6);
  if ( *((_DWORD *)a1 + 428) || *((_DWORD *)a1 + 430) )
    v2 = 1;
  else
    *((_DWORD *)a1 + 110) = 0;
  AcquireSpinLock::Release((AcquireSpinLock *)v6);
  return v2;
}
