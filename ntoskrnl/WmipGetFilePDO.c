/*
 * XREFs of WmipGetFilePDO @ 0x14077437C
 * Callers:
 *     IoWMIHandleToInstanceName @ 0x140774300 (IoWMIHandleToInstanceName.c)
 *     WmipTranslateFileHandle @ 0x1409DE90C (WmipTranslateFileHandle.c)
 * Callees:
 *     IoAllocateIrp @ 0x140208CF0 (IoAllocateIrp.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     IoSynchronousCallDriver @ 0x1402E9470 (IoSynchronousCallDriver.c)
 *     IoFreeIrp @ 0x14030EC00 (IoFreeIrp.c)
 *     IoGetRelatedDeviceObject @ 0x1403121F0 (IoGetRelatedDeviceObject.c)
 *     IoGetAttachedDeviceReference @ 0x140337BB0 (IoGetAttachedDeviceReference.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipGetFilePDO(void *a1, KPROCESSOR_MODE a2, _QWORD *a3)
{
  NTSTATUS v4; // ebx
  PFILE_OBJECT v5; // rsi
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rax
  PDEVICE_OBJECT AttachedDeviceReference; // rbp
  PIRP Irp; // rax
  IRP *v9; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _QWORD *Information; // rcx
  PFILE_OBJECT FileObject; // [rsp+68h] [rbp+20h] BYREF

  FileObject = 0LL;
  v4 = ObReferenceObjectByHandle(a1, 0, (POBJECT_TYPE)IoFileObjectType, a2, (PVOID *)&FileObject, 0LL);
  if ( v4 >= 0 )
  {
    v5 = FileObject;
    RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
    AttachedDeviceReference = IoGetAttachedDeviceReference(RelatedDeviceObject);
    Irp = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
    v9 = Irp;
    if ( Irp )
    {
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 1819;
      CurrentStackLocation[-1].Parameters.Read.Length = 4;
      CurrentStackLocation[-1].FileObject = v5;
      v9->IoStatus.Status = -1073741637;
      v4 = IoSynchronousCallDriver(AttachedDeviceReference, v9);
      if ( v4 >= 0 )
      {
        Information = (_QWORD *)v9->IoStatus.Information;
        *a3 = Information[1];
        ExFreePoolWithTag(Information, 0);
        v4 = 0;
      }
      IoFreeIrp(v9);
    }
    else
    {
      v4 = -1073741670;
    }
    ObfDereferenceObject(AttachedDeviceReference);
    if ( v5 )
      ObfDereferenceObject(v5);
  }
  return (unsigned int)v4;
}
