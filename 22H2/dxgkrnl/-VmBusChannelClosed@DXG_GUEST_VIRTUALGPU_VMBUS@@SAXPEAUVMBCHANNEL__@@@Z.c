/*
 * XREFs of ?VmBusChannelClosed@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C03792A0
 * Callers:
 *     ?VmBusChannelSuspend@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C0379900 (-VmBusChannelSuspend@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C005B17C (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?DisableChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAXXZ @ 0x1C005BE9C (-DisableChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAXXZ.c)
 */

void __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelClosed(struct VMBCHANNEL__ *a1)
{
  __int64 v2; // rdi
  struct _IO_WORKITEM *WorkItem; // rax

  if ( bTracingEnabled )
    VgpuTrace(1, 0, 0LL, L"DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelClosed", (wchar_t *)L"%p", a1);
  v2 = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *))qword_1C0141F08)(a1);
  KeSetEvent(*(PRKEVENT *)(v2 + 4528), 0, 0);
  DXG_VMBUS_CHANNEL_BASE::DisableChannel((DXG_VMBUS_CHANNEL_BASE *)(v2 + 4472));
  if ( *(_QWORD *)(v2 + 4472) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v2 + 136, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 152));
    if ( *(_DWORD *)(v2 + 200) == 1 )
    {
      WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(v2 + 216));
      if ( WorkItem )
      {
        IoQueueWorkItem(
          WorkItem,
          (PIO_WORKITEM_ROUTINE)DXG_GUEST_VIRTUALGPU_VMBUS::InvalidateAdapterWorkItem,
          NormalWorkQueue,
          WorkItem);
      }
      else
      {
        WdLogSingleEntry1(6LL, 13183LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to queue DxgkpInvalidateAdapterWorkItem",
          13183LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)(v2 + 152));
    ExReleasePushLockSharedEx(v2 + 136, 0LL);
    KeLeaveCriticalRegion();
  }
}
