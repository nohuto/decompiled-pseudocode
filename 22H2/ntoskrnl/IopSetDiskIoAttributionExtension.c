/*
 * XREFs of IopSetDiskIoAttributionExtension @ 0x1402E66DC
 * Callers:
 *     IoUpdateIrpIoAttributionHandle @ 0x1402010C0 (IoUpdateIrpIoAttributionHandle.c)
 *     IoSynchronousPageWriteEx @ 0x14029C49C (IoSynchronousPageWriteEx.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14029C670 (IoSetDiskIoAttributionFromThread.c)
 *     IoPageReadEx @ 0x14029C7C0 (IoPageReadEx.c)
 *     IoAsynchronousPageWrite @ 0x1402E5D7C (IoAsynchronousPageWrite.c)
 *     IoMakeAssociatedIrpPriv @ 0x1402E6098 (IoMakeAssociatedIrpPriv.c)
 *     IoPropagateIrpExtensionEx @ 0x1402E67D0 (IoPropagateIrpExtensionEx.c)
 *     IopSetDiskIoAttributionFromProcess @ 0x14031D458 (IopSetDiskIoAttributionFromProcess.c)
 * Callees:
 *     IopReferenceIoAttributionFromProcess @ 0x140278FDC (IopReferenceIoAttributionFromProcess.c)
 *     IopAllocateIrpExtension @ 0x1402E6980 (IopAllocateIrpExtension.c)
 */

__int64 __fastcall IopSetDiskIoAttributionExtension(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 IrpExtension; // rbx
  __int64 v7; // rcx
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  IrpExtension = IopAllocateIrpExtension(a1, 6LL);
  if ( !IrpExtension )
    return 3221225626LL;
  v7 = *(_QWORD *)(a3 + 544);
  if ( (*(_DWORD *)(v7 + 2172) & 0x1000) != 0
    && *(_QWORD *)(v7 + 1296)
    && *(_QWORD *)(*(_QWORD *)(v7 + 1296) + 1352LL)
    && (a4 & 1) == 0 )
  {
    IopReferenceIoAttributionFromProcess(v7, 1, &v9);
  }
  *(_QWORD *)(IrpExtension + 16) = v9;
  return 0LL;
}
