/*
 * XREFs of IopSetDiskIoAttributionExtension @ 0x1402B1E30
 * Callers:
 *     IoSynchronousPageWriteEx @ 0x14024F830 (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x14027F4F0 (IoPageReadEx.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14027F900 (IoSetDiskIoAttributionFromThread.c)
 *     IoMakeAssociatedIrpPriv @ 0x1402B19E8 (IoMakeAssociatedIrpPriv.c)
 *     IoUpdateIrpIoAttributionHandle @ 0x1402B1DB0 (IoUpdateIrpIoAttributionHandle.c)
 *     IopSetDiskIoAttributionFromProcess @ 0x1402B1DD4 (IopSetDiskIoAttributionFromProcess.c)
 *     IoPropagateIrpExtensionEx @ 0x1402B2100 (IoPropagateIrpExtensionEx.c)
 *     IoAsynchronousPageWrite @ 0x1402FE3CC (IoAsynchronousPageWrite.c)
 * Callees:
 *     IopReferenceIoAttributionFromProcess @ 0x140216ED8 (IopReferenceIoAttributionFromProcess.c)
 *     IopAllocateIrpExtension @ 0x1402B22EC (IopAllocateIrpExtension.c)
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
    && *(_QWORD *)(*(_QWORD *)(v7 + 1296) + 1568LL)
    && (a4 & 1) == 0 )
  {
    IopReferenceIoAttributionFromProcess(v7, 1, &v9);
  }
  *(_QWORD *)(IrpExtension + 16) = v9;
  return 0LL;
}
