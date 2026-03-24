/*
 * XREFs of IopGetFileObjectExtension @ 0x1402D6F90
 * Callers:
 *     IoSetOplockPrivateFoExt @ 0x140206248 (IoSetOplockPrivateFoExt.c)
 *     CcInitializeCacheMapEx @ 0x14022DF30 (CcInitializeCacheMapEx.c)
 *     IoGetFileMemoryPartitionInformation @ 0x1402D6F4C (IoGetFileMemoryPartitionInformation.c)
 *     IoGetOplockFullFoExt @ 0x1402D6F68 (IoGetOplockFullFoExt.c)
 *     IopGetSetSpecificExtension @ 0x1402D7298 (IopGetSetSpecificExtension.c)
 *     IoChangeFileObjectFilterContext @ 0x1402D736C (IoChangeFileObjectFilterContext.c)
 *     IoGetOplockKeyContextEx @ 0x1402D7E90 (IoGetOplockKeyContextEx.c)
 *     IopSetLockOperationProcess @ 0x1402D7EBC (IopSetLockOperationProcess.c)
 *     IoGetInitiatorProcess @ 0x14032C4D0 (IoGetInitiatorProcess.c)
 *     IoSetOplockKeyContext @ 0x140390744 (IoSetOplockKeyContext.c)
 *     IoFreeSfioStreamIdentifier @ 0x140505720 (IoFreeSfioStreamIdentifier.c)
 *     IoGetOplockKeyContext @ 0x140505850 (IoGetOplockKeyContext.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x140506FD8 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopOpenLinkOrRenameTarget @ 0x140608E08 (IopOpenLinkOrRenameTarget.c)
 *     IopCloseFile @ 0x14064A140 (IopCloseFile.c)
 *     IopSynchronousServiceTail @ 0x14064C4A0 (IopSynchronousServiceTail.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x140650C60 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopSymlinkSetFoExtension @ 0x14067FE4C (IopSymlinkSetFoExtension.c)
 *     IopSymlinkCreateECP @ 0x140682E30 (IopSymlinkCreateECP.c)
 *     IopGraftName @ 0x140683164 (IopGraftName.c)
 *     IopSetFileObjectIosbRange @ 0x140892864 (IopSetFileObjectIosbRange.c)
 *     IoCopyDeviceObjectHint @ 0x1408938C0 (IoCopyDeviceObjectHint.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopGetFileObjectExtension(__int64 a1, int a2, _QWORD *a3)
{
  _QWORD *v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD **)(a1 + 208);
  if ( !v3 )
  {
    if ( a3 )
      *a3 = 0LL;
    return 0LL;
  }
  if ( v3 == IopRevocationExtension )
    return 0LL;
  result = v3[a2 + 1];
  if ( a3 )
    *a3 = v3;
  return result;
}
