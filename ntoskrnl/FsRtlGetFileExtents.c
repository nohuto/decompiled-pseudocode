/*
 * XREFs of FsRtlGetFileExtents @ 0x14053A498
 * Callers:
 *     MiAllocateEntireImageFileExtents @ 0x140A30264 (MiAllocateEntireImageFileExtents.c)
 *     MiAllocateFileExtents @ 0x140A303A8 (MiAllocateFileExtents.c)
 *     MiComputeIdealFirstSubsection @ 0x140A30A78 (MiComputeIdealFirstSubsection.c)
 * Callees:
 *     IoSynchronousCallDriver @ 0x1402E9470 (IoSynchronousCallDriver.c)
 *     IoFreeIrp @ 0x14030EC00 (IoFreeIrp.c)
 *     IoGetRelatedDeviceObject @ 0x1403121F0 (IoGetRelatedDeviceObject.c)
 *     IoAllocateIrpEx @ 0x140352E90 (IoAllocateIrpEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall FsRtlGetFileExtents(struct _FILE_OBJECT *a1, int a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rbx
  __int64 v10; // rdx
  IRP *Irp; // rax
  IRP *v12; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int v15; // ebx
  __int128 v16; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v17[2]; // [rsp+30h] [rbp-38h] BYREF
  int v18; // [rsp+40h] [rbp-28h]
  int v19; // [rsp+44h] [rbp-24h]

  v16 = 0LL;
  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  LOBYTE(v10) = RelatedDeviceObject->StackSize;
  Irp = (IRP *)IoAllocateIrpEx((__int64)RelatedDeviceObject, v10, 0LL);
  v12 = Irp;
  if ( !Irp )
    return 3221225626LL;
  v19 = 0;
  v17[0] = a3;
  v17[1] = a4;
  v18 = a2;
  Irp->RequestorMode = 0;
  Irp->UserIosb = (PIO_STATUS_BLOCK)&v16;
  Irp->UserEvent = 0LL;
  Irp->UserBuffer = a5;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 1037;
  CurrentStackLocation[-1].FileObject = a1;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 590747;
  CurrentStackLocation[-1].Parameters.Create.Options = 24;
  CurrentStackLocation[-1].Parameters.Read.Length = 16 * *a5 + 8;
  CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = (PNAMED_PIPE_CREATE_PARAMETERS)v17;
  v15 = IoSynchronousCallDriver(RelatedDeviceObject, Irp);
  IoFreeIrp(v12);
  return v15;
}
