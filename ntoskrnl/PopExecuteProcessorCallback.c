/*
 * XREFs of PopExecuteProcessorCallback @ 0x1402E1A10
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueTargetDpc @ 0x140235F8C (PopQueueTargetDpc.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

LONG __fastcall PopExecuteProcessorCallback(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  int v4; // eax

  v4 = (*(__int64 (__fastcall **)(struct _KPRCB *, _QWORD, _QWORD))a2)(
         KeGetCurrentPrcb(),
         *(_QWORD *)(a2 + 8),
         *(_QWORD *)(a2 + 16));
  if ( v4 < 0 )
    *(_DWORD *)(a2 + 40) = v4;
  return PopQueueTargetDpc(BugCheckParameter2, a2);
}
