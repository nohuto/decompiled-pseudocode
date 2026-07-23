/*
 * XREFs of NtAlertThreadByThreadId @ 0x140626080
 * Callers:
 *     <none>
 * Callees:
 *     KeAlertThreadByThreadId @ 0x14025C2F0 (KeAlertThreadByThreadId.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     PsLookupThreadByThreadId @ 0x140625A50 (PsLookupThreadByThreadId.c)
 */

NTSTATUS __cdecl NtAlertThreadByThreadId(HANDLE ThreadId)
{
  struct _KTHREAD *CurrentThread; // rbx
  NTSTATUS v2; // edi
  NTSTATUS result; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  _DWORD *v6; // r9
  _KPROCESS *Process; // rax
  struct _DMA_ADAPTER *v8; // rbx
  PETHREAD Thread; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  Thread = 0LL;
  result = PsLookupThreadByThreadId(ThreadId, &Thread);
  if ( result >= 0 )
  {
    Process = CurrentThread->Process;
    v8 = (struct _DMA_ADAPTER *)Thread;
    if ( Thread->Process == Process )
      KeAlertThreadByThreadId((__int64)Thread, v4, v5, v6);
    else
      v2 = -1073741790;
    HalPutDmaAdapter(v8);
    return v2;
  }
  return result;
}
