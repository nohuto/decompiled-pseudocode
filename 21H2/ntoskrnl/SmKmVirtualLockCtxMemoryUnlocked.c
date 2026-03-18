/*
 * XREFs of SmKmVirtualLockCtxMemoryUnlocked @ 0x1405FC2D0
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x14037DAEC (SmKmStoreHelperCommandProcess.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x1405FC1B0 (SmKmVirtualLockCtxLockMemory.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     MmQueryWorkingSetInformation @ 0x1402D02F0 (MmQueryWorkingSetInformation.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14036D62C (MmAdjustWorkingSetSizeEx.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
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
  struct _KTHREAD *v10; // rsi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v13; // edx
  int v14; // r8d
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16; // [rsp+38h] [rbp-18h] BYREF
  __int64 v17; // [rsp+40h] [rbp-10h] BYREF
  char v18; // [rsp+80h] [rbp+30h] BYREF
  int v19; // [rsp+88h] [rbp+38h] BYREF
  unsigned __int64 v20; // [rsp+90h] [rbp+40h] BYREF
  unsigned __int64 v21; // [rsp+98h] [rbp+48h] BYREF

  v20 = 0LL;
  v21 = 0LL;
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
      v17 = 0LL;
      v16 = 0LL;
      v19 = 0;
      v15 = 0LL;
      if ( (int)MmQueryWorkingSetInformation(&v17, &v16, &v15, &v20, &v21, &v19) >= 0 )
      {
        v8 = v20;
        v9 = v7 & 0xFFFFFFFFFFC00000uLL;
        *(_QWORD *)(BugCheckParameter2 + 16) -= v9;
        if ( v8 >= v9 )
        {
          v20 = v8 - v9;
          v18 = 0;
          MmAdjustWorkingSetSizeEx(v8 - v9, v21, 0, 0, 0, &v18);
        }
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2);
    v10 = KeGetCurrentThread();
    if ( BugCheckParameter2 - qword_140C50630 >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)v10->ApcState.Process);
    _disable();
    p_Process = (__int64)&v10[1].Process;
    v13 = 0;
    while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(p_Process + 18)
         || (*(_DWORD *)p_Process & 1) != 0
         || *(_DWORD *)(p_Process + 8) != SessionId )
    {
      ++v13;
      p_Process += 96LL;
      if ( v13 >= 6 )
        goto LABEL_21;
    }
    *(_BYTE *)(p_Process + 18) = 0;
    if ( !p_Process )
    {
LABEL_21:
      if ( (*((_DWORD *)&v10->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v10, BugCheckParameter2, SessionId, 0LL);
      _enable();
      goto LABEL_29;
    }
    if ( *(__int64 *)p_Process < 0 )
    {
      *(_BYTE *)p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process);
      _disable();
    }
    v14 = *(_DWORD *)(p_Process + 88);
    *(_DWORD *)(p_Process + 88) = 0;
    *(_BYTE *)(p_Process + 17) = 0;
    *(_QWORD *)p_Process = 0LL;
    v10->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
    _enable();
    if ( v14 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v10, BugCheckParameter2, v14);
LABEL_29:
    KeLeaveCriticalRegion();
  }
}
