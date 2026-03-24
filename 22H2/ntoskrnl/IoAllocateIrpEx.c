/*
 * XREFs of IoAllocateIrpEx @ 0x1402F9A50
 * Callers:
 *     FsRtlGetFileExtents @ 0x1404EEC80 (FsRtlGetFileExtents.c)
 *     FsRtlSetFileSize @ 0x140669A10 (FsRtlSetFileSize.c)
 *     FsRtlSetKernelEaFile @ 0x140669B30 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140669CD0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140669ED0 (FsRtlKernelFsControlFile.c)
 *     FsRtlGetFileSize @ 0x140702130 (FsRtlGetFileSize.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14088AD4C (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlQueryInformationFile @ 0x14088C2D0 (FsRtlQueryInformationFile.c)
 *     VfIrpSendSynchronousIrp @ 0x1409D1520 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x1402D2220 (IopAllocateIrpPrivate.c)
 *     IopAllocateIrpWithExtension @ 0x1402E5F20 (IopAllocateIrpWithExtension.c)
 *     IovAllocateIrp @ 0x1409C47B0 (IovAllocateIrp.c)
 */

_QWORD *__fastcall IoAllocateIrpEx(__int64 a1, __int64 a2, __int64 a3)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !IopDispatchAllocateIrp )
    return IopAllocateIrpPrivate(a1, a2, a3);
  if ( IopDispatchAllocateIrp == 2 )
    return IopAllocateIrpWithExtension(a1, a2, a3);
  return (_QWORD *)IovAllocateIrp(a1, a2, a3, retaddr);
}
