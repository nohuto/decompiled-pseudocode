/*
 * XREFs of IopGetSetSecurityObject @ 0x1406C8520
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402CB940 (ObfReferenceObject.c)
 *     IopQueueThreadIrp @ 0x1402CB9A0 (IopQueueThreadIrp.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402CC2B0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402CC670 (ExAcquireResourceSharedLite.c)
 *     IopReleaseFileObjectLock @ 0x1402CDEE0 (IopReleaseFileObjectLock.c)
 *     IoGetRelatedDeviceObject @ 0x1402D20D0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x1402D2170 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x1402D21F0 (IopAllocateIrpExReturn.c)
 *     KeInitializeEvent @ 0x1402D40A0 (KeInitializeEvent.c)
 *     KeResetEvent @ 0x140344C50 (KeResetEvent.c)
 *     IopGetDevicePDO @ 0x14034C5D8 (IopGetDevicePDO.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406352D8 (IopWaitAndAcquireFileObjectLock.c)
 *     ObDereferenceSecurityDescriptor @ 0x1406D8460 (ObDereferenceSecurityDescriptor.c)
 *     ObLogSecurityDescriptor @ 0x1406D8C70 (ObLogSecurityDescriptor.c)
 *     SeQuerySecurityDescriptorInfo @ 0x1406DE310 (SeQuerySecurityDescriptorInfo.c)
 *     IopSetDeviceSecurityDescriptor @ 0x14076A88C (IopSetDeviceSecurityDescriptor.c)
 *     IopSetDeviceSecurityDescriptors @ 0x140780B90 (IopSetDeviceSecurityDescriptors.c)
 *     IopAllocateIrpCleanup @ 0x140890EA4 (IopAllocateIrpCleanup.c)
 *     SeAssignWorldSecurityDescriptor @ 0x14091D2A8 (SeAssignWorldSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopGetSetSecurityObject(
        _QWORD *Object,
        int a2,
        DWORD *a3,
        UNICODE_STRING *a4,
        PULONG Length,
        int a6,
        unsigned int a7,
        __int64 a8,
        char a9)
{
  _QWORD *v12; // r14
  _QWORD *v13; // rbx
  struct _KTHREAD *v14; // r14
  char PreviousMode; // di
  int v16; // eax
  char v17; // r15
  struct _KTHREAD *v18; // rax
  __int64 v19; // r9
  unsigned int v20; // edi
  char v21; // r12
  PDEVICE_OBJECT RelatedDeviceObject; // r15
  __int64 Irp; // rax
  IRP *v24; // rdi
  struct _KEVENT *p_Event; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  ULONG *v27; // rax
  PULONG v28; // r14
  struct _KTHREAD *v29; // rax
  NTSTATUS v30; // eax
  struct _KTHREAD *CurrentThread; // rbx
  struct _KTHREAD *v33; // rdi
  PSECURITY_DESCRIPTOR SecurityDescriptor; // rbx
  ULONG *v35; // r8
  DWORD *v36; // rcx
  _DWORD *DevicePDO; // rax
  struct _KTHREAD *v38; // rdi
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+38h] [rbp-60h] BYREF
  __int64 v40; // [rsp+40h] [rbp-58h]
  __int128 v41; // [rsp+48h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-40h] BYREF
  __int64 v43; // [rsp+A0h] [rbp+8h] BYREF
  DWORD *v44; // [rsp+B0h] [rbp+18h]

  v44 = a3;
  v40 = 0LL;
  if ( *(_WORD *)Object == 3 )
    v12 = Object;
  else
    v12 = (_QWORD *)Object[1];
  v13 = 0LL;
  if ( *(_WORD *)Object != 3 )
    v13 = Object;
  if ( !v13 || !*((_WORD *)v13 + 44) && !v13[8] || (v13[10] & 0x800) != 0 )
  {
    if ( a2 == 3 )
    {
      v20 = 0;
      if ( !v13 || (v13[10] & 0x100) == 0 )
      {
        v20 = ObLogSecurityDescriptor(a4);
        if ( (v20 & 0x80000000) == 0 )
        {
          ExFreePoolWithTag(a4, 0);
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceExclusiveLite(&IopSecurityResource, 1u);
          if ( v12[34] )
            *(_DWORD *)(v12[39] + 32LL) &= ~0x800u;
          v12[34] = v40;
          ExReleaseResourceLite(&IopSecurityResource);
          KeLeaveCriticalRegionThread((__int64)CurrentThread);
        }
      }
      return v20;
    }
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        v33 = KeGetCurrentThread();
        --v33->KernelApcDisable;
        ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
        SecurityDescriptor = (PSECURITY_DESCRIPTOR)v12[34];
        ObjectsSecurityDescriptor = SecurityDescriptor;
        if ( SecurityDescriptor
          && _InterlockedExchangeAdd64((volatile signed __int64 *)SecurityDescriptor - 3, 1uLL) <= 0 )
        {
          __fastfail(0xEu);
        }
        ExReleaseResourceLite(&IopSecurityResource);
        KeLeaveCriticalRegionThread((__int64)v33);
        v35 = Length;
        v36 = a3;
        goto LABEL_51;
      }
      return 0;
    }
    DevicePDO = IopGetDevicePDO((__int64)v12);
    v13 = DevicePDO;
    if ( !DevicePDO )
      return (unsigned int)IopSetDeviceSecurityDescriptor(v12, a3, a4, a7, a8);
    v20 = IopSetDeviceSecurityDescriptors(v12, DevicePDO, a3, a4, a7, a8);
    goto LABEL_56;
  }
  if ( a2 == 2 )
    return 0;
  v41 = 0LL;
  memset(&Event, 0, sizeof(Event));
  v14 = KeGetCurrentThread();
  PreviousMode = v14->PreviousMode;
  ObfReferenceObject(v13);
  v16 = *((_DWORD *)v13 + 20);
  if ( (v16 & 2) != 0 )
  {
    v17 = (v16 & 4) != 0;
    v18 = KeGetCurrentThread();
    --v18->KernelApcDisable;
    v19 = KeAbPreAcquire((ULONG_PTR)(v13 + 16), 0LL, 0);
    LOBYTE(v43) = 0;
    if ( _InterlockedExchange((volatile __int32 *)v13 + 29, 1) )
    {
      v20 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)v13, PreviousMode, v17, v19, &v43);
    }
    else
    {
      if ( v19 )
        *(_BYTE *)(v19 + 26) |= 1u;
      ObfReferenceObject(v13);
      v20 = 0;
    }
    if ( !(_BYTE)v43 )
    {
      v21 = 1;
      goto LABEL_16;
    }
LABEL_56:
    HalPutDmaAdapter((PADAPTER_OBJECT)v13);
    return v20;
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v21 = 0;
LABEL_16:
  if ( (v13[10] & 0x4000000) == 0 )
    KeResetEvent((PRKEVENT)(v13 + 19));
  RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v13);
  Irp = IopAllocateIrpExReturn();
  v24 = (IRP *)Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = v13;
    *(_QWORD *)(Irp + 152) = v14;
    *(_BYTE *)(Irp + 64) = a9;
    if ( (v13[10] & 2) != 0 )
    {
      *(_BYTE *)(Irp + 71) |= 2u;
      p_Event = 0LL;
    }
    else
    {
      *(_DWORD *)(Irp + 16) = 4;
      p_Event = &Event;
    }
    v24->UserEvent = p_Event;
    v24->UserIosb = (PIO_STATUS_BLOCK)&v41;
    v24->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = v24->Tail.Overlay.CurrentStackLocation;
    v27 = v44;
    v28 = Length;
    if ( a2 == 1 )
    {
      CurrentStackLocation[-1].MajorFunction = 20;
      CurrentStackLocation[-1].Parameters.Read.Length = *v27;
      CurrentStackLocation[-1].Parameters.Create.Options = *v28;
      v24->UserBuffer = a4;
    }
    else
    {
      CurrentStackLocation[-1].MajorFunction = 21;
      CurrentStackLocation[-1].Parameters.Read.Length = *v27;
      CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = a4;
    }
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v13;
    IopQueueThreadIrp((__int64)v24);
    v29 = KeGetCurrentThread();
    ++v29->OtherOperationCount;
    __incgsdword(0x2EE4u);
    v30 = IofCallDriver(RelatedDeviceObject, v24);
    v20 = v30;
    if ( v21 )
    {
      if ( v30 == 259 )
      {
        KeWaitForSingleObject(v13 + 19, Executive, 0, 0, 0LL);
        v20 = *((_DWORD *)v13 + 14);
      }
      IopReleaseFileObjectLock((PADAPTER_OBJECT)v13);
    }
    else if ( v30 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v20 = v41;
    }
    if ( v20 != -1073741808 )
    {
      if ( a2 == 1 )
      {
        if ( v20 == -2147483643 )
          v20 = -1073741789;
        *v28 = DWORD2(v41);
      }
      return v20;
    }
    if ( a2 == 1 )
    {
      if ( (RelatedDeviceObject->Characteristics & 0x100) != 0 )
      {
        v38 = KeGetCurrentThread();
        --v38->KernelApcDisable;
        ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
        SecurityDescriptor = RelatedDeviceObject->SecurityDescriptor;
        ObjectsSecurityDescriptor = SecurityDescriptor;
        if ( SecurityDescriptor
          && _InterlockedExchangeAdd64((volatile signed __int64 *)SecurityDescriptor - 3, 1uLL) <= 0 )
        {
          __fastfail(0xEu);
        }
        ExReleaseResourceLite(&IopSecurityResource);
        KeLeaveCriticalRegionThread((__int64)v38);
        v35 = v28;
        v36 = v44;
LABEL_51:
        v20 = SeQuerySecurityDescriptorInfo(v36, a4, v35, &ObjectsSecurityDescriptor);
        if ( SecurityDescriptor )
          ObDereferenceSecurityDescriptor(ObjectsSecurityDescriptor, 1LL);
        return v20;
      }
      return (unsigned int)SeAssignWorldSecurityDescriptor(a4, v28, v44);
    }
    if ( !a2 && (RelatedDeviceObject->Flags & 0x100) != 0 )
      return (unsigned int)-1073741808;
    return 0;
  }
  IopAllocateIrpCleanup((PADAPTER_OBJECT)v13, 0LL);
  return 3221225626LL;
}
