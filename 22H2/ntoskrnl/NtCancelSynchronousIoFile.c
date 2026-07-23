/*
 * XREFs of NtCancelSynchronousIoFile @ 0x140894760
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     IopCancelSynchronousIrpsForThread @ 0x140891230 (IopCancelSynchronousIrpsForThread.c)
 */

NTSTATUS __cdecl NtCancelSynchronousIoFile(
        HANDLE ThreadHandle,
        PIO_STATUS_BLOCK IoRequestToCancel,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  KPROCESSOR_MODE PreviousMode; // r9
  __int64 v6; // r8
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax
  struct _DMA_ADAPTER *v9; // rsi
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  NTSTATUS v11; // [rsp+68h] [rbp+20h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v6 = (__int64)IoStatusBlock;
    *(_DWORD *)v6 = *(_DWORD *)v6;
  }
  Object = 0LL;
  result = ObReferenceObjectByHandle(ThreadHandle, 1u, (POBJECT_TYPE)PsThreadType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    ++CurrentThread->OtherOperationCount;
    __incgsdword(0x2EE4u);
    v9 = (struct _DMA_ADAPTER *)Object;
    v11 = (unsigned int)IopCancelSynchronousIrpsForThread((__int64)Object, (__int64)IoRequestToCancel) == 0
        ? 0xC0000225
        : 0;
    IoStatusBlock->Status = v11;
    IoStatusBlock->Information = 0LL;
    HalPutDmaAdapter(v9);
    return v11;
  }
  return result;
}
