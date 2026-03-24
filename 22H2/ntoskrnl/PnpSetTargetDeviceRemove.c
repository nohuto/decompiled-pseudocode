/*
 * XREFs of PnpSetTargetDeviceRemove @ 0x14074A49C
 * Callers:
 *     PnpQueueQueryAndRemoveEvent @ 0x14072F89C (PnpQueueQueryAndRemoveEvent.c)
 *     PnpRequestDeviceRemoval @ 0x14074C54C (PnpRequestDeviceRemoval.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1407BE4D0 (PiDevCfgProcessDeviceCallback.c)
 *     IopQueueDeviceResetEvent @ 0x1408A099C (IopQueueDeviceResetEvent.c)
 *     IopRetryDeviceRemovalForReset @ 0x1408A0A20 (IopRetryDeviceRemovalForReset.c)
 * Callees:
 *     memset @ 0x140413800 (memset.c)
 *     PnpInsertEventInQueue @ 0x140634C88 (PnpInsertEventInQueue.c)
 *     PnpInitializeTargetDeviceRemoveEvent @ 0x140749B08 (PnpInitializeTargetDeviceRemoveEvent.c)
 *     PnpAllocateCriticalMemory @ 0x14074A7F4 (PnpAllocateCriticalMemory.c)
 */

__int64 __fastcall PnpSetTargetDeviceRemove(
        _QWORD *Object,
        int a2,
        int a3,
        int a4,
        int a5,
        unsigned int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        _DWORD *a11,
        __int64 a12,
        __int64 a13,
        __int64 *a14)
{
  __int64 v15; // rcx
  unsigned int v19; // ebp
  void *CriticalMemory; // rax
  __int64 v21; // rbx

  v15 = 0LL;
  if ( a11 )
    *a11 = 259;
  if ( PnpShutdownEvent.Header.SignalState
    && !_InterlockedCompareExchange64((volatile signed __int64 *)PnpDeviceActionThread, 0LL, 0LL) )
  {
    return 3221225865LL;
  }
  if ( Object )
    v15 = *(_QWORD *)(Object[39] + 40LL);
  v19 = *(unsigned __int16 *)(v15 + 40) + 194;
  CriticalMemory = (void *)PnpAllocateCriticalMemory(a2 != 0 ? 3 : 0, 1LL, v19, 1265659472LL);
  v21 = (__int64)CriticalMemory;
  if ( !CriticalMemory )
    return 3221225626LL;
  memset(CriticalMemory, 0, v19);
  PnpInitializeTargetDeviceRemoveEvent((GUID *)v21, v19, Object, a2, a3, a4, a5, a6, a7, a8, a11, a12, a13);
  *(_QWORD *)(v21 + 32) = a9;
  *(_QWORD *)(v21 + 40) = a10;
  if ( a14 )
  {
    *a14 = v21;
    ++*(_DWORD *)(v21 + 64);
  }
  return PnpInsertEventInQueue(v21);
}
