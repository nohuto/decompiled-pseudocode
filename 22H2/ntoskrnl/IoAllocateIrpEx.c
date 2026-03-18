/*
 * XREFs of IoAllocateIrpEx @ 0x140310DD0
 * Callers:
 *     FsRtlGetFileExtents @ 0x14053C938 (FsRtlGetFileExtents.c)
 *     FsRtlGetFileSize @ 0x1406AA1A0 (FsRtlGetFileSize.c)
 *     FsRtlKernelFsControlFile @ 0x140772DD0 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140773AC0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlSetKernelEaFile @ 0x1407D5EE0 (FsRtlSetKernelEaFile.c)
 *     FsRtlSetFileSize @ 0x1407EAC14 (FsRtlSetFileSize.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14093D098 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlQueryInformationFile @ 0x14093EDD0 (FsRtlQueryInformationFile.c)
 *     VfIrpSendSynchronousIrp @ 0x140ACEAA8 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x14022EFC0 (IopAllocateIrpPrivate.c)
 *     IopAllocateIrpWithExtension @ 0x14028FCA0 (IopAllocateIrpWithExtension.c)
 *     IovAllocateIrp @ 0x140AC1CE0 (IovAllocateIrp.c)
 *     VfTargetDriversIsEnabled @ 0x140ACC614 (VfTargetDriversIsEnabled.c)
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
    return IopAllocateIrpWithExtension(a1, a2, a3);
  if ( ViVerifyAllDrivers == 1 )
    return (PSLIST_ENTRY)IovAllocateIrp(a1, a2, a3, retaddr);
  IsEnabled = VfTargetDriversIsEnabled(retaddr);
  LOBYTE(a3) = v3;
  LOBYTE(a2) = v4;
  if ( !IsEnabled )
    return IopAllocateIrpWithExtension(a1, a2, a3);
  else
    return (PSLIST_ENTRY)IovAllocateIrp(a1, v4, v3, retaddr);
}
