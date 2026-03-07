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
