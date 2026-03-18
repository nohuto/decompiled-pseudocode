/*
 * XREFs of PspGetNextJob @ 0x14068A6EC
 * Callers:
 *     PspGetNextSilo @ 0x14068A6A0 (PspGetNextSilo.c)
 *     PspEnforceLimits @ 0x1407B67A0 (PspEnforceLimits.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 *     PspUnlockJobListShared @ 0x14068A79C (PspUnlockJobListShared.c)
 */

__int64 *__fastcall PspGetNextJob(_QWORD *Object)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *v2; // rbp
  __int64 *v4; // rbx

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PspJobListLock, 0LL);
  v4 = (__int64 *)PspJobList;
  if ( Object )
    v4 = (__int64 *)Object[3];
  while ( v4 != &PspJobList )
  {
    if ( ObReferenceObjectSafeWithTag((__int64)(v4 - 3)) )
    {
      v2 = v4 - 3;
      break;
    }
    v4 = (__int64 *)*v4;
  }
  PspUnlockJobListShared(CurrentThread);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457350u);
  return v2;
}
