/*
 * XREFs of AlpcUnregisterLogRoutine @ 0x140977128
 * Callers:
 *     EtwpDisableKernelTrace @ 0x1407864C4 (EtwpDisableKernelTrace.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 AlpcUnregisterLogRoutine()
{
  unsigned int v0; // ebx
  void (__fastcall **v1)(__int64, int); // rcx
  void (__fastcall *v2)(__int64, int); // rax
  PVOID *v4; // rdx

  v0 = -1073741275;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&AlpcpLogLock, 0LL);
  v1 = (void (__fastcall **)(__int64, int))AlpcpLogCallbackListHead;
  if ( AlpcpLogCallbackListHead != &AlpcpLogCallbackListHead )
  {
    while ( 1 )
    {
      v2 = *v1;
      if ( v1[2] == EtwpTraceALPC )
        break;
      v1 = (void (__fastcall **)(__int64, int))*v1;
      if ( (char *)v2 == (char *)&AlpcpLogCallbackListHead )
        goto LABEL_4;
    }
    if ( *((void (__fastcall ***)(__int64, int))v2 + 1) != v1 || (v4 = (PVOID *)v1[1], *v4 != v1) )
      __fastfail(3u);
    *v4 = v2;
    *((_QWORD *)v2 + 1) = v4;
    ExFreePoolWithTag(v1, 0);
    v0 = 0;
  }
LABEL_4:
  AlpcpLogEnabled = AlpcpLogCallbackListHead != &AlpcpLogCallbackListHead;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpLogLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpLogLock);
  KeAbPostRelease((ULONG_PTR)&AlpcpLogLock);
  return v0;
}
