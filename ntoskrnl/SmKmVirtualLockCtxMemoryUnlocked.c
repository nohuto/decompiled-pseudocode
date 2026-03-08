/*
 * XREFs of SmKmVirtualLockCtxMemoryUnlocked @ 0x1405C9DA4
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x1405C93E8 (SmKmStoreHelperCommandProcess.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x1405C9C84 (SmKmVirtualLockCtxLockMemory.c)
 * Callees:
 *     MmAdjustWorkingSetSizeEx @ 0x14020C61C (MmAdjustWorkingSetSizeEx.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     MmQueryWorkingSetInformation @ 0x140299640 (MmQueryWorkingSetInformation.c)
 */

void __fastcall SmKmVirtualLockCtxMemoryUnlocked(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+38h] [rbp-20h] BYREF
  _QWORD v12[3]; // [rsp+40h] [rbp-18h] BYREF
  char v13; // [rsp+80h] [rbp+28h] BYREF
  int v14; // [rsp+88h] [rbp+30h] BYREF
  unsigned __int64 v15; // [rsp+90h] [rbp+38h] BYREF
  unsigned __int64 v16; // [rsp+98h] [rbp+40h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 8), -a2);
  v3 = *(_QWORD *)(BugCheckParameter2 + 8);
  v4 = *(_QWORD *)(BugCheckParameter2 + 16);
  if ( v3 < v4 && (!v3 || v4 - v3 >= 0x800000) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    v6 = *(_QWORD *)(BugCheckParameter2 + 8);
    v7 = *(_QWORD *)(BugCheckParameter2 + 16) - v6;
    if ( v7 >= 0x800000 || !v6 && *(_QWORD *)(BugCheckParameter2 + 16) )
    {
      v14 = 0;
      if ( (int)MmQueryWorkingSetInformation(v12, &v11, &v10, &v15, &v16, &v14) >= 0 )
      {
        v8 = v15;
        v9 = v7 & 0xFFFFFFFFFFC00000uLL;
        *(_QWORD *)(BugCheckParameter2 + 16) -= v9;
        if ( v8 >= v9 )
        {
          v15 = v8 - v9;
          v13 = 0;
          MmAdjustWorkingSetSizeEx(v8 - v9, v16, 0LL, 0, 0, &v13);
        }
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
  }
}
