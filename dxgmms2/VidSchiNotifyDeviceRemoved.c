/*
 * XREFs of VidSchiNotifyDeviceRemoved @ 0x1C00474C0
 * Callers:
 *     VidSchiMarkDeviceAsError @ 0x1C0014B80 (VidSchiMarkDeviceAsError.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     VidSchNotifyDeviceRemoved @ 0x1C0040140 (VidSchNotifyDeviceRemoved.c)
 */

void __fastcall VidSchiNotifyDeviceRemoved(__int64 a1)
{
  KIRQL CurrentIrql; // al
  struct _DEVICE_OBJECT *v3; // rcx
  struct _IO_WORKITEM *WorkItem; // rdi

  CurrentIrql = KeGetCurrentIrql();
  v3 = *(struct _DEVICE_OBJECT **)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) + 216LL);
  if ( CurrentIrql >= 2u )
  {
    WorkItem = IoAllocateWorkItem(v3);
    if ( WorkItem )
    {
      WdLogSingleEntry0(4LL);
      IoQueueWorkItemEx(
        WorkItem,
        (PIO_WORKITEM_ROUTINE_EX)VidSchNotifyDeviceRemoved,
        DelayedWorkQueue,
        *(PVOID *)(*(_QWORD *)(a1 + 40) + 2640LL));
    }
    else
    {
      WdLogSingleEntry0(1LL);
      ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Can't allocate memory to hold IO work item.",
        201LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    VidSchNotifyDeviceRemoved(v3, *(PVOID *)(*(_QWORD *)(a1 + 40) + 2640LL), 0LL);
  }
}
