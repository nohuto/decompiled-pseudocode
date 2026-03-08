/*
 * XREFs of IopIrpHasExtensionType @ 0x1402B1D58
 * Callers:
 *     IopFreeIrpExtension @ 0x1402B18FC (IopFreeIrpExtension.c)
 *     IoMakeAssociatedIrpPriv @ 0x1402B19E8 (IoMakeAssociatedIrpPriv.c)
 *     IoGetFsTrackOffsetState @ 0x1402B1CF0 (IoGetFsTrackOffsetState.c)
 *     IoPropagateActivityIdToThread @ 0x1402B1D20 (IoPropagateActivityIdToThread.c)
 *     IoReuseIrp @ 0x1402B1EB0 (IoReuseIrp.c)
 *     IoIsKernelPagingRead @ 0x1402E46C0 (IoIsKernelPagingRead.c)
 *     IopFreeCopyObjectsFromIrp @ 0x1402F98FC (IopFreeCopyObjectsFromIrp.c)
 *     IoSetGenericIrpExtension @ 0x140390920 (IoSetGenericIrpExtension.c)
 *     IoGetFsZeroingOffset @ 0x1403A6A10 (IoGetFsZeroingOffset.c)
 *     IopPerfCompleteRequest @ 0x14045735E (IopPerfCompleteRequest.c)
 *     IoClearAdapterCryptoEngineExtension @ 0x140556880 (IoClearAdapterCryptoEngineExtension.c)
 *     IoClearFsTrackOffsetState @ 0x1405568D0 (IoClearFsTrackOffsetState.c)
 *     IoGetAdapterCryptoEngineExtension @ 0x140556900 (IoGetAdapterCryptoEngineExtension.c)
 *     IoGetCopyInformationExtension @ 0x140556940 (IoGetCopyInformationExtension.c)
 *     IoSetFsZeroingOffset @ 0x140556A40 (IoSetFsZeroingOffset.c)
 *     IoSetFsZeroingOffsetRequired @ 0x140556A80 (IoSetFsZeroingOffsetRequired.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall IopIrpHasExtensionType(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  char v3; // r8
  int v4; // eax

  v2 = *(_QWORD *)(a1 + 200);
  v3 = 0;
  if ( *(char *)(a1 + 71) < 0 )
    return a2 == 2;
  if ( v2 )
  {
    v4 = *(unsigned __int16 *)(v2 + 2);
    return _bittest(&v4, a2);
  }
  return v3;
}
