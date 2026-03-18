/*
 * XREFs of SmKmVirtualLockContextIncreaseWsMin @ 0x1405FBF80
 * Callers:
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

__int64 __fastcall SmKmVirtualLockContextIncreaseWsMin(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // edi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  int v11; // eax
  unsigned __int64 v12; // rax
  struct _KTHREAD *v13; // r14
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v16; // edx
  int v17; // r8d
  unsigned __int64 v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+38h] [rbp-18h] BYREF
  __int64 v21; // [rsp+40h] [rbp-10h] BYREF
  __int64 v22; // [rsp+48h] [rbp-8h] BYREF
  char v23; // [rsp+90h] [rbp+40h] BYREF
  int v24; // [rsp+A0h] [rbp+50h] BYREF
  unsigned __int64 v25; // [rsp+A8h] [rbp+58h] BYREF

  CurrentThread = KeGetCurrentThread();
  v25 = 0LL;
  v19 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  if ( a3 >= *(_QWORD *)(BugCheckParameter2 + 16) )
  {
    do
    {
      v22 = 0LL;
      v21 = 0LL;
      v24 = 0;
      v20 = 0LL;
      v7 = MmQueryWorkingSetInformation(&v22, &v21, &v20, &v25, &v19, &v24);
      if ( v7 < 0 )
        break;
      v8 = (a2 + 0x3FFFFF) & 0xFFFFFFFFFFC00000uLL;
      v9 = v8 + v25;
      if ( v8 + v25 <= v25 )
      {
        v7 = -1073741675;
        break;
      }
      v10 = v19;
      v25 += v8;
      if ( v9 > v19 )
        v10 = v9;
      v23 = 0;
      v19 = v10;
      v11 = MmAdjustWorkingSetSizeEx(v9, v10, 0, 1, 0, &v23);
      v7 = v11;
      if ( v11 >= 0 )
      {
        v12 = *(_QWORD *)(BugCheckParameter2 + 16);
        if ( v12 + v8 > v12 )
          *(_QWORD *)(BugCheckParameter2 + 16) = v12 + v8;
        v7 = 0;
        break;
      }
    }
    while ( v11 == -1073741748 );
  }
  else
  {
    v7 = 1075380276;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  v13 = KeGetCurrentThread();
  if ( BugCheckParameter2 - qword_140C50630 >= 0x8000000000LL )
    SessionId = -1;
  else
    SessionId = MmGetSessionIdEx((__int64)v13->ApcState.Process);
  _disable();
  p_Process = (__int64)&v13[1].Process;
  v16 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != SessionId )
  {
    ++v16;
    p_Process += 96LL;
    if ( v16 >= 6 )
      goto LABEL_25;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( !p_Process )
  {
LABEL_25:
    if ( (*((_DWORD *)&v13->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v13, BugCheckParameter2, SessionId, 0LL);
    _enable();
    goto LABEL_33;
  }
  if ( *(__int64 *)p_Process < 0 )
  {
    *(_BYTE *)p_Process |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(p_Process);
    _disable();
  }
  v17 = *(_DWORD *)(p_Process + 88);
  *(_DWORD *)(p_Process + 88) = 0;
  *(_BYTE *)(p_Process + 17) = 0;
  *(_QWORD *)p_Process = 0LL;
  v13->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
  _enable();
  if ( v17 )
    KiAbThreadRemoveBoostsSlow((ULONG_PTR)v13, BugCheckParameter2, v17);
LABEL_33:
  KeLeaveCriticalRegion();
  return (unsigned int)v7;
}
