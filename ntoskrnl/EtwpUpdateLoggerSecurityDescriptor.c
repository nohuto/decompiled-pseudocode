/*
 * XREFs of EtwpUpdateLoggerSecurityDescriptor @ 0x1409E9524
 * Callers:
 *     EtwpUpdateTrace @ 0x140744D3C (EtwpUpdateTrace.c)
 * Callees:
 *     ExfAcquireReleasePushLockExclusive @ 0x140201D54 (ExfAcquireReleasePushLockExclusive.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ObLogSecurityDescriptor @ 0x1406965B0 (ObLogSecurityDescriptor.c)
 *     ObDereferenceSecurityDescriptor @ 0x140696920 (ObDereferenceSecurityDescriptor.c)
 *     EtwpEventWriteTemplateSession @ 0x1409E0E14 (EtwpEventWriteTemplateSession.c)
 */

__int64 __fastcall EtwpUpdateLoggerSecurityDescriptor(__int64 a1, __int16 *a2)
{
  int v3; // edi
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rcx
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  v3 = ObLogSecurityDescriptor(a2, &v9, 0x10u);
  if ( v3 >= 0 )
  {
    v4 = _InterlockedExchange64((volatile __int64 *)(a1 + 784), (v9 | 0xF) & -(__int64)(v9 != 0));
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    _InterlockedOr(v8, 0);
    if ( (EtwpSecurityLock & 1) != 0 )
      ExfAcquireReleasePushLockExclusive((ULONG_PTR)&EtwpSecurityLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ObDereferenceSecurityDescriptor(v4 & 0xFFFFFFFFFFFFFFF0uLL, (v4 & 0xF) + 1);
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_CHANGE_SESSION_SD) )
      EtwpEventWriteTemplateSession(v6, &ETW_EVENT_CHANGE_SESSION_SD, a1);
  }
  return (unsigned int)v3;
}
