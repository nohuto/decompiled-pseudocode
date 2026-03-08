/*
 * XREFs of IopExceptionCleanupEx @ 0x140941A08
 * Callers:
 *     IopAllocateAndPopulateWriteIrp @ 0x140240590 (IopAllocateAndPopulateWriteIrp.c)
 *     NtSetInformationFile @ 0x14027E490 (NtSetInformationFile.c)
 *     IopFreeCopyObjectsFromDataBuffer @ 0x1402F9948 (IopFreeCopyObjectsFromDataBuffer.c)
 *     NtLockFile @ 0x1406B1EB0 (NtLockFile.c)
 *     BuildQueryDirectoryIrp @ 0x1406B22C0 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x1406B2A90 (NtQueryVolumeInformationFile.c)
 *     NtQueryInformationFile @ 0x1406EAEB0 (NtQueryInformationFile.c)
 *     NtUnlockFile @ 0x14075F620 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x14076D8E0 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x14077B8F0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtReadFileScatter @ 0x140798190 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x140799670 (NtWriteFileGather.c)
 *     IopXxxControlFile @ 0x1407C1720 (IopXxxControlFile.c)
 *     IopReadFile @ 0x1407E0C40 (IopReadFile.c)
 *     NtSetVolumeInformationFile @ 0x14087CFF0 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140942B50 (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x140947CF0 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140948300 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     IopReleaseFileObjectLock @ 0x140267920 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     IoFreeIrp @ 0x14030EC00 (IoFreeIrp.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     IoFreeMdl @ 0x1403147E0 (IoFreeMdl.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

LONG_PTR __fastcall IopExceptionCleanupEx(volatile __int32 *Object, PIRP Irp, PVOID a3, PVOID P, char a5)
{
  struct _IRP *MasterIrp; // rcx
  struct _MDL *MdlAddress; // rcx

  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( MasterIrp )
    ExFreePoolWithTag(MasterIrp, 0);
  MdlAddress = Irp->MdlAddress;
  if ( MdlAddress )
    IoFreeMdl(MdlAddress);
  if ( (Irp->Flags & 0x200000) != 0 )
  {
    ObfDereferenceObjectWithTag(
      (PVOID)((unsigned __int64)Irp->Overlay.AsynchronousParameters.UserApcContext & 0xFFFFFFFFFFFFFFF8uLL),
      0x49526F49u);
    Irp->Flags &= ~0x200000u;
  }
  IoFreeIrp(Irp);
  if ( a5 )
    IopReleaseFileObjectLock(Object);
  if ( a3 )
    ObfDereferenceObject(a3);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return ObfDereferenceObject((PVOID)Object);
}
