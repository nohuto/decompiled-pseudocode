/*
 * XREFs of NtCancelIoFileEx @ 0x1406823E0
 * Callers:
 *     <none>
 * Callees:
 *     IopReferenceFileObject @ 0x1402C90B0 (IopReferenceFileObject.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     IopCancelIrpsInFileObjectList @ 0x140313D7C (IopCancelIrpsInFileObjectList.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x140657884 (IopCancelIrpsInThreadListForCurrentProcess.c)
 */

__int64 __fastcall NtCancelIoFileEx(void *a1, __int64 a2, unsigned __int64 a3)
{
  KPROCESSOR_MODE PreviousMode; // r8
  __int64 v6; // rdx
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  struct _DMA_ADAPTER *v9; // rdi
  int v10; // eax
  int v11; // ebx
  PADAPTER_OBJECT DmaAdapter; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v13; // [rsp+68h] [rbp+20h]

  DmaAdapter = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( a3 < 0x7FFFFFFF0000LL )
      v6 = a3;
    *(_DWORD *)v6 = *(_DWORD *)v6;
  }
  result = IopReferenceFileObject(a1, 0, PreviousMode, (PVOID *)&DmaAdapter, 0LL);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    ++CurrentThread->OtherOperationCount;
    __incgsdword(0x2EE4u);
    v9 = DmaAdapter;
    v10 = IopCancelIrpsInFileObjectList((__int64)DmaAdapter, (int)KeGetCurrentThread()->ApcState.Process, a2, 0, 0, 0);
    v11 = v10;
    if ( !a2 || !v10 )
      v11 = IopCancelIrpsInThreadListForCurrentProcess((__int64)v9, a2) | v10;
    v13 = v11 == 0 ? 0xC0000225 : 0;
    *(_DWORD *)a3 = v13;
    *(_QWORD *)(a3 + 8) = 0LL;
    HalPutDmaAdapter(v9);
    return v13;
  }
  return result;
}
