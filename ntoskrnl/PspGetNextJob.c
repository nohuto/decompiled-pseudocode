/*
 * XREFs of PspGetNextJob @ 0x1406FB6B8
 * Callers:
 *     PspGetNextSilo @ 0x1406FB574 (PspGetNextSilo.c)
 *     PspEnforceLimits @ 0x1406FB5C0 (PspEnforceLimits.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x14022BD30 (ObReferenceObjectSafeWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     PspUnlockJobListShared @ 0x1406FB768 (PspUnlockJobListShared.c)
 */

__int64 *__fastcall PspGetNextJob(_QWORD *Object)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *v3; // rbp
  __int64 *v4; // rbx

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PspJobListLock, 0LL);
  v4 = (__int64 *)PspJobList;
  if ( Object )
    v4 = (__int64 *)Object[3];
  while ( v4 != &PspJobList )
  {
    if ( ObReferenceObjectSafeWithTag((__int64)(v4 - 3)) )
    {
      v3 = v4 - 3;
      break;
    }
    v4 = (__int64 *)*v4;
  }
  PspUnlockJobListShared(CurrentThread);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457350u);
  return v3;
}
