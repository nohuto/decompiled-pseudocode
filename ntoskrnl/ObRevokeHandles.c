/*
 * XREFs of ObRevokeHandles @ 0x14067FB30
 * Callers:
 *     SepDeleteLogonSessionTrack @ 0x1407DAE44 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ObpHandleRevocationBlockRemoveInsertedObject @ 0x14097838C (ObpHandleRevocationBlockRemoveInsertedObject.c)
 */

char __fastcall ObRevokeHandles(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // r9
  _QWORD *v4; // rdi
  _QWORD *v6; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(a1 + 2), 0LL);
  v4 = (_QWORD *)*a1;
  while ( v4 != a1 )
  {
    v6 = v4;
    LOBYTE(v3) = 1;
    v4 = (_QWORD *)*v4;
    ObpHandleRevocationBlockRemoveInsertedObject(v6, a1, 1LL, v3);
  }
  ExReleasePushLockEx(a1 + 2, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
