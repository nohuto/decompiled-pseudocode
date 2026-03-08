/*
 * XREFs of RtlpCSparseBitmapLock @ 0x140307040
 * Callers:
 *     RtlpCSparseBitmapPageDecommit @ 0x1403046C4 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpCSparseBitmapPageCommit @ 0x140306EB8 (RtlpCSparseBitmapPageCommit.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquireSpinLockShared @ 0x140308060 (ExAcquireSpinLockShared.c)
 */

KIRQL __fastcall RtlpCSparseBitmapLock(__int64 a1, int a2, __int64 a3)
{
  volatile LONG *v5; // rcx
  KIRQL result; // al
  struct _KTHREAD *CurrentThread; // rax

  v5 = (volatile LONG *)(a1 + 24);
  if ( *(_BYTE *)(a1 + 48) )
  {
    if ( a2 == 1 )
      result = ExAcquireSpinLockExclusive(v5);
    else
      result = ExAcquireSpinLockShared(v5);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    if ( a2 == 1 )
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v5, 0LL);
    else
      ExAcquirePushLockSharedEx((ULONG_PTR)v5, 0LL);
    result = -1;
  }
  *(_BYTE *)(a3 + 4) = result;
  *(_QWORD *)(a3 + 8) = a1;
  *(_DWORD *)a3 = a2;
  return result;
}
