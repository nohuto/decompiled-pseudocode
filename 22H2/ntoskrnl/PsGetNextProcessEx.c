/*
 * XREFs of PsGetNextProcessEx @ 0x1407C0AE0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     ObReferenceObjectSafeWithTag @ 0x1402C3620 (ObReferenceObjectSafeWithTag.c)
 *     PspUnlockProcessListShared @ 0x1403506E4 (PspUnlockProcessListShared.c)
 */

unsigned __int64 __fastcall PsGetNextProcessEx(_QWORD *Object)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 *v3; // r14
  int v4; // esi
  __int64 *v5; // rbx

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
  v5 = (__int64 *)PsActiveProcessHead;
  if ( Object )
    v5 = (__int64 *)Object[137];
  while ( v5 != &PsActiveProcessHead )
  {
    v3 = v5 - 137;
    if ( ObReferenceObjectSafeWithTag((__int64)(v5 - 137)) )
    {
      v4 = 1;
      break;
    }
    v5 = (__int64 *)*v5;
  }
  PspUnlockProcessListShared((__int64)CurrentThread);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  return (unsigned __int64)v3 & -(__int64)(v4 != 0);
}
