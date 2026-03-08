/*
 * XREFs of IoAllocateDriverObjectExtension @ 0x14039FF80
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140336900 (KeAcquireQueuedSpinLock.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoAllocateDriverObjectExtension(
        PDRIVER_OBJECT DriverObject,
        PVOID ClientIdentificationAddress,
        ULONG DriverObjectExtensionSize,
        PVOID *DriverObjectExtension)
{
  char v4; // si
  __int64 Pool2; // rax
  struct _DRIVER_OBJECT *v9; // rbx
  KIRQL v10; // r9
  struct _DRIVER_OBJECT *v11; // r8
  struct _DRIVER_OBJECT *v12; // rdx

  *DriverObjectExtension = 0LL;
  v4 = 0;
  if ( DriverObjectExtensionSize > 0xFFFFFFEF )
    return -1073741670;
  Pool2 = ExAllocatePool2(64LL, DriverObjectExtensionSize + 16LL, 1986622020LL);
  v9 = (struct _DRIVER_OBJECT *)Pool2;
  if ( !Pool2 )
    return -1073741670;
  *(_QWORD *)(Pool2 + 8) = ClientIdentificationAddress;
  v10 = KeAcquireQueuedSpinLock(0xAuLL);
  v11 = DriverObject->DriverExtension[1].DriverObject;
  v12 = v11;
  if ( v11 )
  {
    while ( v12->DeviceObject != ClientIdentificationAddress )
    {
      v12 = *(struct _DRIVER_OBJECT **)&v12->Type;
      if ( !v12 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    *(_QWORD *)&v9->Type = v11;
    v4 = 1;
    DriverObject->DriverExtension[1].DriverObject = v9;
  }
  KeReleaseQueuedSpinLock(0xAuLL, v10);
  if ( v4 )
  {
    *DriverObjectExtension = &v9->Flags;
    return 0;
  }
  else
  {
    ExFreePoolWithTag(v9, 0);
    return -1073741771;
  }
}
