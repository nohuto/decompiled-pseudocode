/*
 * XREFs of ObHandleRevocationBlockAddObject @ 0x1409782CC
 * Callers:
 *     ObpCreateHandle @ 0x1407C0130 (ObpCreateHandle.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x14035A830 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 */

void __fastcall ObHandleRevocationBlockAddObject(struct _EX_RUNDOWN_REF *a1, __int64 a2)
{
  char v3; // si
  __int64 v4; // rdi
  BOOLEAN v5; // al
  struct _KTHREAD *CurrentThread; // rdx
  BOOLEAN v7; // r15
  struct _EX_RUNDOWN_REF **Count; // rax

  v3 = 0;
  v4 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(a2 - 48);
  v5 = ExAcquireRundownProtection_0(a1 + 3);
  CurrentThread = KeGetCurrentThread();
  v7 = v5;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&a1[2], 0LL);
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 16), (signed __int64)a1, 0LL) )
  {
    Count = (struct _EX_RUNDOWN_REF **)a1[1].Count;
    if ( *Count != a1 )
      __fastfail(3u);
    *(_QWORD *)v4 = a1;
    v3 = 1;
    *(_QWORD *)(v4 + 8) = Count;
    *Count = (struct _EX_RUNDOWN_REF *)v4;
    a1[1].Count = v4;
  }
  ExReleasePushLockEx((__int64 *)&a1[2], 0LL);
  KeLeaveCriticalRegion();
  if ( v7 )
  {
    if ( !v3 )
      ExReleaseRundownProtection_0(a1 + 3);
  }
}
