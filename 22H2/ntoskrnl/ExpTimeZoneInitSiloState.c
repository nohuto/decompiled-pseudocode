/*
 * XREFs of ExpTimeZoneInitSiloState @ 0x1405D1B7C
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1409064C0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140252678 (PsGetServerSiloGlobals.c)
 *     HalSystemVectorDispatchEntry @ 0x1402526A0 (HalSystemVectorDispatchEntry.c)
 *     PsDetachSiloFromCurrentThread @ 0x14034C200 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14034C220 (PsAttachSiloToCurrentThread.c)
 *     ZwSetSystemTime @ 0x1403FCFE0 (ZwSetSystemTime.c)
 *     memset @ 0x140413800 (memset.c)
 *     ExpReadTimeZoneInformation @ 0x1405D1A44 (ExpReadTimeZoneInformation.c)
 *     ExReleaseTimeRefreshLock @ 0x1407095C0 (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x1407095E4 (ExAcquireTimeRefreshLock.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407A9984 (ExpRefreshTimeZoneInformation.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpTimeZoneInitSiloState(__int64 a1)
{
  unsigned int v1; // ebx
  _QWORD *ServerSiloGlobals; // rdi
  struct _LIST_ENTRY *v3; // rcx
  struct _LIST_ENTRY *v4; // rsi
  PVOID PoolWithTag; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  int v11; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v11 = 0;
  ServerSiloGlobals = PsGetServerSiloGlobals(a1);
  v4 = PsAttachSiloToCurrentThread(v3);
  ExpReadTimeZoneInformation(L"TimeZoneVirtualizationSupported", 0, &v11);
  if ( v11 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x3F0uLL, 0x5A547845u);
    ServerSiloGlobals[133] = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x3F0uLL);
      v6 = ServerSiloGlobals[133];
      *((_BYTE *)ServerSiloGlobals + 1049) = 1;
      *(_DWORD *)(v6 + 432) = -1;
      ExpReadTimeZoneInformation(L"ActiveTimeBias", -1, (void *)(ServerSiloGlobals[133] + 436LL));
      LOBYTE(v7) = 1;
      ExAcquireTimeRefreshLock(v7);
      LOBYTE(v8) = 1;
      ExpRefreshTimeZoneInformation(v8);
      ExReleaseTimeRefreshLock();
      ZwSetSystemTime(0LL, 0LL);
    }
    else
    {
      v1 = -1073741670;
    }
  }
  else
  {
    v9 = HalSystemVectorDispatchEntry();
    ServerSiloGlobals[133] = *((_QWORD *)PsGetServerSiloGlobals(v9) + 133);
  }
  PsDetachSiloFromCurrentThread(v4);
  return v1;
}
