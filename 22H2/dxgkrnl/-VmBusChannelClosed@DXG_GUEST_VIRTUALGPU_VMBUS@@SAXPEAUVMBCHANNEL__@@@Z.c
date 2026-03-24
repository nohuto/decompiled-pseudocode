/*
 * XREFs of ?VmBusChannelClosed@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C023D740
 * Callers:
 *     ?VmBusChannelSuspend@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C023DCC0 (-VmBusChannelSuspend@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C0040104 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?DisableChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAXXZ @ 0x1C0040D14 (-DisableChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAXXZ.c)
 */

void __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelClosed(struct VMBCHANNEL__ *a1)
{
  __int64 v2; // rdi
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax

  if ( bTracingEnabled )
    VgpuTrace(1, 0, 0LL, L"DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelClosed", (wchar_t *)L"%p", a1);
  v2 = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *))qword_1C00B4348)(a1);
  KeSetEvent(*(PRKEVENT *)(v2 + 4288), 0, 0);
  DXG_VMBUS_CHANNEL_BASE::DisableChannel((DXG_VMBUS_CHANNEL_BASE *)(v2 + 4240));
  if ( *(_QWORD *)(v2 + 4240) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v2 + 136, 0LL);
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
        v8 = WdLogNewEntry5_WdLowResource(v5, v4, v6, v7);
        *(_QWORD *)(v8 + 24) = 11212LL;
        WdLogEvent5_WdLowResource(v8);
      }
    }
    ExReleasePushLockSharedEx(v2 + 136, 0LL);
    KeLeaveCriticalRegion();
  }
}
