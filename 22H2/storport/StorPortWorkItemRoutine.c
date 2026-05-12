/*
 * XREFs of StorPortWorkItemRoutine @ 0x1C003A280
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020190 (_guard_dispatch_icall_nop.c)
 *     RaidReleaseAdapterRemoveLock @ 0x1C0032D68 (RaidReleaseAdapterRemoveLock.c)
 */

void __fastcall StorPortWorkItemRoutine(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  void *DeviceExtension; // rdi
  void (__fastcall *v4)(__int64, _QWORD, PVOID); // rax

  DeviceExtension = DeviceObject->DeviceExtension;
  if ( Context )
  {
    if ( !DeviceExtension )
      return;
    _InterlockedExchange((volatile __int32 *)Context + 6, 1);
    v4 = (void (__fastcall *)(__int64, _QWORD, PVOID))_InterlockedExchange64((volatile __int64 *)Context + 1, 0LL);
    if ( v4 )
    {
      v4(*((_QWORD *)DeviceExtension + 70) + 16LL, *((_QWORD *)Context + 2), Context);
      if ( _InterlockedExchange((volatile __int32 *)Context + 6, 0) == 2 )
      {
        IoFreeWorkItem(*(PIO_WORKITEM *)Context);
        *(_QWORD *)Context = 0LL;
        ExFreePoolWithTag(Context, 0x49576152u);
        _InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 1258);
      }
    }
  }
  if ( DeviceExtension )
    RaidReleaseAdapterRemoveLock((__int64)DeviceExtension);
}
