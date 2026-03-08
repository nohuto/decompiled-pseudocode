/*
 * XREFs of IopCancelIoFile @ 0x14077006C
 * Callers:
 *     NtCancelIoFileEx @ 0x14076FFC0 (NtCancelIoFileEx.c)
 *     IopIoRingDispatchCancel @ 0x14094630C (IopIoRingDispatchCancel.c)
 * Callees:
 *     IopCancelIrpsInFileObjectList @ 0x14030F360 (IopCancelIrpsInFileObjectList.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x1407700F8 (IopCancelIrpsInThreadListForCurrentProcess.c)
 */

__int64 __fastcall IopCancelIoFile(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // eax
  int v6; // ebx

  CurrentThread = KeGetCurrentThread();
  ++CurrentThread->OtherOperationCount;
  __incgsdword(0x2EE4u);
  v5 = IopCancelIrpsInFileObjectList(a1, (__int64)KeGetCurrentThread()->ApcState.Process, a2, 0LL, 0, 0);
  v6 = v5;
  if ( !a2 || !v5 )
    v6 = IopCancelIrpsInThreadListForCurrentProcess(a1, a2) | v5;
  return v6 == 0 ? 0xC0000225 : 0;
}
