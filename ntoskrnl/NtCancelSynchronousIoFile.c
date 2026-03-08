/*
 * XREFs of NtCancelSynchronousIoFile @ 0x140944F70
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     IopCancelSynchronousIrpsForThread @ 0x140941564 (IopCancelSynchronousIrpsForThread.c)
 */

NTSTATUS __fastcall NtCancelSynchronousIoFile(void *a1, __int64 a2, unsigned __int64 a3)
{
  KPROCESSOR_MODE PreviousMode; // r9
  __int64 v6; // r8
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax
  PVOID v9; // rsi
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v11; // [rsp+68h] [rbp+20h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( a3 < 0x7FFFFFFF0000LL )
      v6 = a3;
    *(_DWORD *)v6 = *(_DWORD *)v6;
  }
  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, 1u, (POBJECT_TYPE)PsThreadType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    ++CurrentThread->OtherOperationCount;
    __incgsdword(0x2EE4u);
    v9 = Object;
    v11 = (unsigned int)IopCancelSynchronousIrpsForThread((__int64)Object, a2) == 0 ? 0xC0000225 : 0;
    *(_DWORD *)a3 = v11;
    *(_QWORD *)(a3 + 8) = 0LL;
    ObfDereferenceObject(v9);
    return v11;
  }
  return result;
}
