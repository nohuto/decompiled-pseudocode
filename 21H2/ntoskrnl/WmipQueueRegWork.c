/*
 * XREFs of WmipQueueRegWork @ 0x1406C8478
 * Callers:
 *     WmipUpdateRegistration @ 0x1406C81D4 (WmipUpdateRegistration.c)
 *     WmipRegisterDevice @ 0x1406C82F8 (WmipRegisterDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WmipQueueRegWork(int a1, __int64 a2)
{
  _DWORD *PoolWithTag; // rax
  unsigned int v5; // edi
  _DWORD *v6; // rbx
  _QWORD *v7; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x70696D57u);
  v5 = 0;
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 48));
    PoolWithTag[4] = a1;
    *((_QWORD *)PoolWithTag + 3) = a2;
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    v7 = off_140C04390[0];
    if ( *(PVOID **)off_140C04390[0] != &WmipRegWorkList )
      __fastfail(3u);
    *(_QWORD *)v6 = &WmipRegWorkList;
    *((_QWORD *)v6 + 1) = v7;
    *v7 = v6;
    off_140C04390[0] = (_UNKNOWN **)v6;
    KeReleaseMutex(&WmipSMMutex, 0);
    if ( _InterlockedIncrement(&WmipRegWorkItemCount) == 1 )
      ExQueueWorkItem(&WmipRegWorkQueue, DelayedWorkQueue);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
