__int64 __fastcall PnpSetTargetDeviceRemove(
        _QWORD *Object,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        int a10,
        _DWORD *a11,
        __int64 a12,
        __int64 a13,
        __int64 *a14)
{
  __int64 v17; // rcx
  unsigned int v18; // ebp
  void *CriticalMemory; // rax
  __int64 v20; // rbx

  if ( a11 )
    *a11 = 259;
  if ( PnpShutdownEvent.Header.SignalState
    && !_InterlockedCompareExchange64((volatile signed __int64 *)&PnpDeviceActionThread, 0LL, 0LL) )
  {
    return 3221225865LL;
  }
  if ( Object )
    v17 = *(_QWORD *)(Object[39] + 40LL);
  else
    v17 = 0LL;
  v18 = *(unsigned __int16 *)(v17 + 40) + 194;
  CriticalMemory = (void *)PnpAllocateCriticalMemory(a2 != 0 ? 3 : 0, 256LL, v18, 1265659472LL);
  v20 = (__int64)CriticalMemory;
  if ( !CriticalMemory )
    return 3221225626LL;
  PnpInitializeTargetDeviceRemoveEvent(CriticalMemory, v18, Object, a3, a4, a5, a6, a7, a8, (__int64)a11, a12, a13);
  *(_QWORD *)(v20 + 32) = 0LL;
  *(_QWORD *)(v20 + 40) = 0LL;
  if ( a14 )
  {
    *a14 = v20;
    ++*(_DWORD *)(v20 + 64);
  }
  return PnpInsertEventInQueue(v20);
}
