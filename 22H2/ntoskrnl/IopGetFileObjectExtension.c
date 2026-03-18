/*
 * XREFs of IopGetFileObjectExtension @ 0x14030169C
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x14025E7B0 (CcInitializeCacheMapInternal.c)
 *     IoChangeFileObjectFilterContext @ 0x1402FD83C (IoChangeFileObjectFilterContext.c)
 *     IopGetSetSpecificExtension @ 0x140301568 (IopGetSetSpecificExtension.c)
 *     IoGetOplockKeyContextEx @ 0x140301640 (IoGetOplockKeyContextEx.c)
 *     IoGetOplockFullFoExt @ 0x140301674 (IoGetOplockFullFoExt.c)
 *     IopSetLockOperationProcess @ 0x14030176C (IopSetLockOperationProcess.c)
 *     IoSetOplockPrivateFoExt @ 0x1403024C8 (IoSetOplockPrivateFoExt.c)
 *     IoGetInitiatorProcess @ 0x14036DFE0 (IoGetInitiatorProcess.c)
 *     IoSetOplockKeyContext @ 0x1403CEAD8 (IoSetOplockKeyContext.c)
 *     IoFreeSfioStreamIdentifier @ 0x1405569A0 (IoFreeSfioStreamIdentifier.c)
 *     IoGetOplockKeyContext @ 0x140556AC0 (IoGetOplockKeyContext.c)
 *     IoGetShadowFileInformation @ 0x140556B00 (IoGetShadowFileInformation.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x14055850C (IopAdjustFileObjectKeepAliveCount.c)
 *     IopSynchronousServiceTail @ 0x1406E3F40 (IopSynchronousServiceTail.c)
 *     IopParseDevice @ 0x14072CDC0 (IopParseDevice.c)
 *     IopCloseFile @ 0x14072FFC0 (IopCloseFile.c)
 *     IopSymlinkCreateECP @ 0x1407CDD54 (IopSymlinkCreateECP.c)
 *     IopOpenLinkOrRenameTarget @ 0x1407D3564 (IopOpenLinkOrRenameTarget.c)
 *     IopGraftName @ 0x14087F9E8 (IopGraftName.c)
 *     IopSymlinkSetFoExtension @ 0x140881820 (IopSymlinkSetFoExtension.c)
 *     IopSetFileObjectIosbRange @ 0x140945FE8 (IopSetFileObjectIosbRange.c)
 *     IoCopyDeviceObjectHint @ 0x1409471B0 (IoCopyDeviceObjectHint.c)
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
