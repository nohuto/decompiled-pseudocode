/*
 * XREFs of IoAllocateIrpEx @ 0x140352E90
 * Callers:
 *     FsRtlGetFileExtents @ 0x14053A498 (FsRtlGetFileExtents.c)
 *     FsRtlSetKernelEaFile @ 0x140786AA0 (FsRtlSetKernelEaFile.c)
 *     FsRtlSetFileSize @ 0x14079BDF4 (FsRtlSetFileSize.c)
 *     FsRtlQueryKernelEaFile @ 0x1407D8DE0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1407DB1B0 (FsRtlKernelFsControlFile.c)
 *     FsRtlGetFileSize @ 0x1407F4020 (FsRtlGetFileSize.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14093A078 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlQueryInformationFile @ 0x14093BDB0 (FsRtlQueryInformationFile.c)
 *     VfIrpSendSynchronousIrp @ 0x140ACAAA8 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x1402B18A4 (IopAllocateIrpWithExtension.c)
 *     IopAllocateIrpPrivate @ 0x1403122C0 (IopAllocateIrpPrivate.c)
 *     IovAllocateIrp @ 0x140ABDCE0 (IovAllocateIrp.c)
 *     VfTargetDriversIsEnabled @ 0x140AC8614 (VfTargetDriversIsEnabled.c)
 */

PSLIST_ENTRY __fastcall IoAllocateIrpEx(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // bl
  unsigned __int8 v4; // di
  int IsEnabled; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a3;
  v4 = a2;
  if ( !IopDispatchAllocateIrp )
    return IopAllocateIrpPrivate(a1, a2, a3);
  if ( IopDispatchAllocateIrp == 2 )
    return (PSLIST_ENTRY)IopAllocateIrpWithExtension(a1, a2, a3);
  if ( ViVerifyAllDrivers == 1 )
    return (PSLIST_ENTRY)IovAllocateIrp(a1, a2, a3, retaddr);
  IsEnabled = VfTargetDriversIsEnabled(retaddr);
  a3 = v3;
  a2 = v4;
  if ( !IsEnabled )
    return (PSLIST_ENTRY)IopAllocateIrpWithExtension(a1, a2, a3);
  else
    return (PSLIST_ENTRY)IovAllocateIrp(a1, v4, v3, retaddr);
}
