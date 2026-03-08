/*
 * XREFs of IopGetFileObjectExtension @ 0x14023EB8C
 * Callers:
 *     IoChangeFileObjectFilterContext @ 0x14023AD2C (IoChangeFileObjectFilterContext.c)
 *     IopGetSetSpecificExtension @ 0x14023EA58 (IopGetSetSpecificExtension.c)
 *     IoGetOplockKeyContextEx @ 0x14023EB30 (IoGetOplockKeyContextEx.c)
 *     IoGetOplockFullFoExt @ 0x14023EB64 (IoGetOplockFullFoExt.c)
 *     IopSetLockOperationProcess @ 0x14023ED48 (IopSetLockOperationProcess.c)
 *     IoSetOplockPrivateFoExt @ 0x14023FA98 (IoSetOplockPrivateFoExt.c)
 *     IoGetInitiatorProcess @ 0x1403026B0 (IoGetInitiatorProcess.c)
 *     CcInitializeCacheMapInternal @ 0x140338F10 (CcInitializeCacheMapInternal.c)
 *     IoSetOplockKeyContext @ 0x1403C9528 (IoSetOplockKeyContext.c)
 *     IoFreeSfioStreamIdentifier @ 0x140554500 (IoFreeSfioStreamIdentifier.c)
 *     IoGetOplockKeyContext @ 0x140554620 (IoGetOplockKeyContext.c)
 *     IoGetShadowFileInformation @ 0x140554660 (IoGetShadowFileInformation.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x14055606C (IopAdjustFileObjectKeepAliveCount.c)
 *     IopSymlinkCreateECP @ 0x14077E314 (IopSymlinkCreateECP.c)
 *     IopOpenLinkOrRenameTarget @ 0x140783F08 (IopOpenLinkOrRenameTarget.c)
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 *     IopCloseFile @ 0x1407BACE0 (IopCloseFile.c)
 *     IopSynchronousServiceTail @ 0x1407C33C0 (IopSynchronousServiceTail.c)
 *     IopGraftName @ 0x14087A8D0 (IopGraftName.c)
 *     IopSymlinkSetFoExtension @ 0x14087CA70 (IopSymlinkSetFoExtension.c)
 *     IopSetFileObjectIosbRange @ 0x140942FC8 (IopSetFileObjectIosbRange.c)
 *     IoCopyDeviceObjectHint @ 0x140944190 (IoCopyDeviceObjectHint.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopGetFileObjectExtension(__int64 a1, int a2, _QWORD *a3)
{
  _QWORD *v3; // r9
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
