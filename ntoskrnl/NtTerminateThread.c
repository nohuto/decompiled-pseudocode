/*
 * XREFs of NtTerminateThread @ 0x1407DADE0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 *     PspTerminateThreadByPointer @ 0x1407DA8F0 (PspTerminateThreadByPointer.c)
 */

__int64 __fastcall NtTerminateThread(ULONG_PTR a1, unsigned int a2)
{
  unsigned int v2; // ebx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 result; // rax
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  Object = 0LL;
  v2 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( a1 )
  {
    if ( a1 == -2LL )
      goto LABEL_3;
    result = ObpReferenceObjectByHandleWithTag(
               a1,
               1,
               (__int64)PsThreadType,
               CurrentThread->PreviousMode,
               0x65547350u,
               &Object,
               0LL,
               0LL);
    v2 = result;
    if ( (int)result >= 0 )
    {
      if ( Object != CurrentThread )
      {
        v2 = PspTerminateThreadByPointer((__int64)Object, a2, 0);
        ObfDereferenceObjectWithTag(Object, 0x65547350u);
        return v2;
      }
      ObfDereferenceObjectWithTag(Object, 0x65547350u);
LABEL_3:
      PspTerminateThreadByPointer((__int64)CurrentThread, a2, 1);
      return v2;
    }
  }
  else
  {
    if ( LODWORD(CurrentThread->ApcState.Process[1].ActiveProcessors.StaticBitmap[8]) != 1 )
      goto LABEL_3;
    return 3221225691LL;
  }
  return result;
}
