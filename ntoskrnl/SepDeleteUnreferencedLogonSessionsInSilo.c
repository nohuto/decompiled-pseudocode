/*
 * XREFs of SepDeleteUnreferencedLogonSessionsInSilo @ 0x1409CD120
 * Callers:
 *     SeShutdownServerSilo @ 0x1409C5F40 (SeShutdownServerSilo.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     PsAttachSiloToCurrentThread @ 0x1402993A0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402993C0 (PsDetachSiloFromCurrentThread.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     SepDeleteLogonSessionTrack @ 0x1407DAE44 (SepDeleteLogonSessionTrack.c)
 */

struct _KTHREAD *__fastcall SepDeleteUnreferencedLogonSessionsInSilo(struct _LIST_ENTRY *a1)
{
  __int64 v2; // rdi
  struct _LIST_ENTRY *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // r14
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v7; // rbx
  struct _ERESOURCE *v8; // r15
  __int64 i; // rcx
  __int64 v10; // rdx
  struct _KTHREAD *v11; // rax
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0LL;
  v3 = PsAttachSiloToCurrentThread(a1);
  v4 = 0LL;
  v5 = 16LL;
  do
  {
    CurrentThread = KeGetCurrentThread();
    v7 = SepLogonSessions;
    --CurrentThread->KernelApcDisable;
    v8 = &SepRmDbLock + (v2 & 3);
    ExAcquireResourceExclusiveLite(v8, 1u);
    for ( i = *(_QWORD *)(v4 + v7); i; i = *(_QWORD *)i )
    {
      if ( *(struct _LIST_ENTRY **)(i + 160) == a1 )
      {
        v10 = *(_QWORD *)(i + 24);
        if ( !v10 || (*(_DWORD *)(i + 32) & 8) == 0 && v10 == 1 )
        {
          v13 = *(_QWORD *)(i + 8);
          ExReleaseResourceLite(v8);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          SepDeleteLogonSessionTrack(&v13, 0);
          v11 = KeGetCurrentThread();
          --v11->KernelApcDisable;
          ExAcquireResourceExclusiveLite(v8, 1u);
          i = SepLogonSessions + 8 * v2;
        }
      }
    }
    ExReleaseResourceLite(v8);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ++v2;
    v4 += 8LL;
    --v5;
  }
  while ( v5 );
  return PsDetachSiloFromCurrentThread(v3);
}
