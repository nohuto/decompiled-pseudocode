/*
 * XREFs of SmKmIsVolumeIoPossible @ 0x14092B754
 * Callers:
 *     SmKmStoreFileCreateForIoType @ 0x14092C5EC (SmKmStoreFileCreateForIoType.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x1402F4B10 (IoSetThreadHardErrorMode.c)
 *     IoAllocateIrp @ 0x1402F76C0 (IoAllocateIrp.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     IoGetRelatedDeviceObject @ 0x14035C670 (IoGetRelatedDeviceObject.c)
 *     IoFreeIrp @ 0x14035E290 (IoFreeIrp.c)
 *     ZwQueryVolumeInformationFile @ 0x1403FAEA0 (ZwQueryVolumeInformationFile.c)
 *     SmKmSendUsageNotification @ 0x14092C078 (SmKmSendUsageNotification.c)
 */

__int64 __fastcall SmKmIsVolumeIoPossible(__int64 a1, int *a2)
{
  IRP *v4; // rdi
  int v5; // ebp
  BOOLEAN v6; // r14
  NTSTATUS Status; // ebx
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  IRP *Irp; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-28h] BYREF
  __int64 FsInformation; // [rsp+60h] [rbp+8h] BYREF

  FsInformation = 0LL;
  IoStatusBlock = 0LL;
  v4 = 0LL;
  v5 = 0;
  v6 = IoSetThreadHardErrorMode(0);
  Status = ZwQueryVolumeInformationFile(*(HANDLE *)a1, &IoStatusBlock, &FsInformation, 8u, FileFsDeviceInformation);
  if ( Status == 259 )
  {
    KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 8) + 152LL), Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
  {
    if ( (FsInformation & 0x100000000LL) != 0 )
    {
LABEL_5:
      Status = 0;
      goto LABEL_10;
    }
    RelatedDeviceObject = IoGetRelatedDeviceObject(*(PFILE_OBJECT *)(a1 + 8));
    Irp = IoAllocateIrp(RelatedDeviceObject->StackSize, 0);
    v4 = Irp;
    if ( Irp )
    {
      Status = SmKmSendUsageNotification(Irp, *(PFILE_OBJECT *)(a1 + 8));
      if ( Status < 0 )
        goto LABEL_5;
      *(_QWORD *)(a1 + 40) = v4;
      v5 = 1;
      v4 = 0LL;
    }
    else
    {
      Status = -1073741670;
    }
  }
LABEL_10:
  *a2 = v5;
  if ( v4 )
    IoFreeIrp(v4);
  IoSetThreadHardErrorMode(v6);
  return (unsigned int)Status;
}
