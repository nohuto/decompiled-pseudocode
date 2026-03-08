/*
 * XREFs of FsRtlPrepareMdlWriteEx @ 0x14079A910
 * Callers:
 *     <none>
 * Callees:
 *     IoSynchronousCallDriver @ 0x1402E9470 (IoSynchronousCallDriver.c)
 *     IoFreeIrp @ 0x14030EC00 (IoFreeIrp.c)
 *     IoGetRelatedDeviceObject @ 0x1403121F0 (IoGetRelatedDeviceObject.c)
 *     IoBuildAsynchronousFsdRequest @ 0x14036D3B0 (IoBuildAsynchronousFsdRequest.c)
 *     FsRtlPrepareMdlWrite @ 0x14079A990 (FsRtlPrepareMdlWrite.c)
 */

__int64 __fastcall FsRtlPrepareMdlWriteEx(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER StartingOffset,
        ULONG Length,
        ULONG a4,
        PMDL *a5,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  NTSTATUS v10; // esi
  __int64 result; // rax
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rbp
  PIRP v13; // rax
  IRP *v14; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS Status; // ecx

  if ( (unsigned __int8)FsRtlPrepareMdlWrite(
                          (_DWORD)FileObject,
                          (_DWORD)StartingOffset,
                          Length,
                          a4,
                          (__int64)a5,
                          (__int64)IoStatusBlock) )
    return 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  v13 = IoBuildAsynchronousFsdRequest(4u, RelatedDeviceObject, 0LL, Length, StartingOffset, IoStatusBlock);
  v14 = v13;
  if ( v13 )
  {
    CurrentStackLocation = v13->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].FileObject = FileObject;
    CurrentStackLocation[-1].MinorFunction = 2;
    CurrentStackLocation[-1].Parameters.Create.Options = a4;
    v14->Flags |= 4u;
    v10 = IoSynchronousCallDriver(RelatedDeviceObject, v14);
    if ( v10 >= 0 )
    {
      *a5 = v14->MdlAddress;
      Status = v14->IoStatus.Status;
      v14->MdlAddress = 0LL;
      IoStatusBlock->Status = Status;
      IoStatusBlock->Information = v14->IoStatus.Information;
    }
    IoFreeIrp(v14);
    return (unsigned int)v10;
  }
  result = 3221225626LL;
  IoStatusBlock->Status = -1073741670;
  return result;
}
