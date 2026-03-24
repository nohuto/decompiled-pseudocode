/*
 * XREFs of IopIrpHasExtensionType @ 0x1402E6690
 * Callers:
 *     IopFreeIrpExtension @ 0x1402E5F78 (IopFreeIrpExtension.c)
 *     IoMakeAssociatedIrpPriv @ 0x1402E6098 (IoMakeAssociatedIrpPriv.c)
 *     IoPropagateActivityIdToThread @ 0x1402E6390 (IoPropagateActivityIdToThread.c)
 *     IoGetFsTrackOffsetState @ 0x1402E63D0 (IoGetFsTrackOffsetState.c)
 *     IoReuseIrp @ 0x1402E6400 (IoReuseIrp.c)
 *     IoIsKernelPagingRead @ 0x140313A90 (IoIsKernelPagingRead.c)
 *     IoSetGenericIrpExtension @ 0x140379B90 (IoSetGenericIrpExtension.c)
 *     IoGetCopyInformationExtension @ 0x1403F0BA0 (IoGetCopyInformationExtension.c)
 *     IopFreeCopyObjectsFromIrp @ 0x1403F11A4 (IopFreeCopyObjectsFromIrp.c)
 *     IoClearAdapterCryptoEngineExtension @ 0x140507770 (IoClearAdapterCryptoEngineExtension.c)
 *     IoClearFsTrackOffsetState @ 0x1405077C0 (IoClearFsTrackOffsetState.c)
 *     IoGetAdapterCryptoEngineExtension @ 0x1405077F0 (IoGetAdapterCryptoEngineExtension.c)
 *     IoGetFsZeroingOffset @ 0x140507830 (IoGetFsZeroingOffset.c)
 *     IoSetFsZeroingOffset @ 0x140507930 (IoSetFsZeroingOffset.c)
 *     IoSetFsZeroingOffsetRequired @ 0x140507970 (IoSetFsZeroingOffsetRequired.c)
 *     IopPerfCompleteRequest @ 0x140507D14 (IopPerfCompleteRequest.c)
 * Callees:
 *     <none>
 */

char __fastcall IopIrpHasExtensionType(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  int v3; // eax

  v2 = *(_QWORD *)(a1 + 200);
  if ( *(char *)(a1 + 71) < 0 )
  {
    if ( a2 != 2 )
      return 0;
  }
  else
  {
    if ( !v2 )
      return 0;
    v3 = *(unsigned __int16 *)(v2 + 2);
    if ( !_bittest(&v3, a2) )
      return 0;
  }
  return 1;
}
