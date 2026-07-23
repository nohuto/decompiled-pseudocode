/*
 * XREFs of IopAllocateAndPopulateWriteIrp @ 0x1403F14CC
 * Callers:
 *     IopPopulateCopyWriteWorkerData @ 0x1403F11F4 (IopPopulateCopyWriteWorkerData.c)
 *     IopWriteFile @ 0x1405CEB78 (IopWriteFile.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     IopReleaseFileObjectLock @ 0x1402CDEE0 (IopReleaseFileObjectLock.c)
 *     IopAllocateIrpExReturn @ 0x1402D21F0 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x1402D2590 (IopResetEvent.c)
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x14030F25C (IopVerifierExAllocatePoolWithQuota_1.c)
 *     IopProbeAndLockPages_0 @ 0x14031B0B8 (IopProbeAndLockPages_0.c)
 *     IoAllocateMdl @ 0x14035A110 (IoAllocateMdl.c)
 *     IopSetCopyInformationExtension @ 0x1403F0BDC (IopSetCopyInformationExtension.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     IopExceptionCleanupEx @ 0x1405CDBA4 (IopExceptionCleanupEx.c)
 */

__int64 __fastcall IopAllocateAndPopulateWriteIrp(__int64 a1, IRP **a2, __int64 a3, _DWORD *a4)
{
  int v5; // r14d
  IRP *Irp; // rax
  IRP *v7; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  int v9; // ecx
  struct _IRP *PoolWithQuota_1; // rax
  ULONG v11; // edx
  PMDL Mdl; // rax
  __int64 v13; // r8
  char v14; // dl
  int v15; // edx
  _DWORD *v16; // rax
  struct _DMA_ADAPTER *v17; // rcx

  v5 = 0;
  IopResetEvent(*(_QWORD *)(a1 + 16), (__int64)a2, a3, a4);
  Irp = (IRP *)IopAllocateIrpExReturn();
  v7 = Irp;
  if ( Irp )
  {
    Irp->Tail.Overlay.OriginalFileObject = *(PFILE_OBJECT *)(a1 + 16);
    Irp->Tail.Overlay.Thread = *(PETHREAD *)a1;
    Irp->Tail.Overlay.AuxiliaryBuffer = 0LL;
    Irp->RequestorMode = *(_BYTE *)(a1 + 8);
    Irp->PendingReturned = 0;
    Irp->Cancel = 0;
    Irp->CancelRoutine = 0LL;
    Irp->Flags = 0;
    Irp->UserEvent = *(PKEVENT *)(a1 + 32);
    Irp->UserIosb = *(PIO_STATUS_BLOCK *)(a1 + 56);
    Irp->Overlay.AllocationSize.QuadPart = *(_QWORD *)(a1 + 40);
    Irp->Overlay.AsynchronousParameters.UserApcContext = *(PVOID *)(a1 + 48);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 4;
    CurrentStackLocation[-1].FileObject = *(PFILE_OBJECT *)(a1 + 16);
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 80LL) & 0x10) != 0 )
      CurrentStackLocation[-1].Flags = 4;
    Irp->AssociatedIrp.MasterIrp = 0LL;
    Irp->MdlAddress = 0LL;
    v9 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
    if ( (v9 & 4) != 0 )
    {
      if ( *(_DWORD *)(a1 + 72) )
      {
        if ( *(_QWORD *)(a1 + 96) )
        {
          Irp->AssociatedIrp.MasterIrp = *(struct _IRP **)(a1 + 64);
          Irp->Flags |= 0x10u;
          Irp->UserBuffer = *(PVOID *)(a1 + 64);
        }
        else
        {
          PoolWithQuota_1 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_1(
                                             NonPagedPoolNxCacheAligned,
                                             *(unsigned int *)(a1 + 72));
          v7->AssociatedIrp.MasterIrp = PoolWithQuota_1;
          memmove(PoolWithQuota_1, *(const void **)(a1 + 64), *(unsigned int *)(a1 + 72));
          v7->Flags |= 0x30u;
        }
      }
      else
      {
        Irp->Flags |= 0x10u;
      }
    }
    else if ( (v9 & 0x10) != 0 )
    {
      v11 = *(_DWORD *)(a1 + 72);
      if ( v11 )
      {
        Mdl = IoAllocateMdl(*(PVOID *)(a1 + 64), v11, 0, 1u, Irp);
        if ( !Mdl )
          RtlRaiseStatus(-1073741670);
        if ( *(_QWORD *)(a1 + 96) )
          v14 = 0;
        else
          v14 = *(_BYTE *)(a1 + 8);
        IopProbeAndLockPages_0((__int64)Mdl, v14, v13, *(_QWORD *)(a1 + 24), CurrentStackLocation[-1].MajorFunction);
      }
    }
    else
    {
      Irp->UserBuffer = *(PVOID *)(a1 + 64);
    }
    v15 = v7->Flags | 0x200;
    v7->Flags = v15;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 80LL) & 8) != 0 )
    {
      v15 |= 1u;
      v7->Flags = v15;
    }
    if ( *(_BYTE *)(a1 + 10) )
      v7->Flags = v15 | 0x800;
    if ( !*(_QWORD *)(a1 + 96)
      || (v7->RequestorMode = 0,
          v7->UserBuffer = *(PVOID *)(a1 + 64),
          v5 = IopSetCopyInformationExtension((__int64)v7, *(_OWORD **)(a1 + 96)),
          v5 >= 0) )
    {
      CurrentStackLocation[-1].Parameters.Read.Length = *(_DWORD *)(a1 + 72);
      CurrentStackLocation[-1].Parameters.Create.Options = *(_DWORD *)(a1 + 88);
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = *(_QWORD *)(a1 + 80);
      v16 = *(_DWORD **)(*(_QWORD *)(a1 + 16) + 208LL);
      if ( v16 )
      {
        if ( (*v16 & 0x10) != 0 )
          CurrentStackLocation[-1].Parameters.Read.Flags = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 8LL);
      }
    }
    if ( v5 >= 0 )
    {
      *a2 = v7;
      return (unsigned int)v5;
    }
  }
  else
  {
    v5 = -1073741670;
  }
  if ( v7 )
  {
    IopExceptionCleanupEx(*(PADAPTER_OBJECT *)(a1 + 16), v7, *(PADAPTER_OBJECT *)(a1 + 32), 0LL, *(_BYTE *)(a1 + 9));
  }
  else
  {
    if ( *(_BYTE *)(a1 + 9) )
      IopReleaseFileObjectLock(*(PADAPTER_OBJECT *)(a1 + 16));
    v17 = *(struct _DMA_ADAPTER **)(a1 + 32);
    if ( v17 )
    {
      HalPutDmaAdapter(v17);
      *(_QWORD *)(a1 + 32) = 0LL;
    }
    HalPutDmaAdapter(*(PADAPTER_OBJECT *)(a1 + 16));
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return (unsigned int)v5;
}
