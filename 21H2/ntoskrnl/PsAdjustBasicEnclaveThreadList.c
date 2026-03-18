/*
 * XREFs of PsAdjustBasicEnclaveThreadList @ 0x1405E2E00
 * Callers:
 *     PsDispatchIumService @ 0x1405E1764 (PsDispatchIumService.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     PspFindVsmEnclaveThread @ 0x1408826B4 (PspFindVsmEnclaveThread.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PsAdjustBasicEnclaveThreadList(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // rdi
  _QWORD *PoolWithTag; // rax
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v10; // rbp
  _BOOL8 v11; // r8
  unsigned __int64 *v12; // rdi
  int VsmEnclaveThread; // eax
  _QWORD *v14; // rsi
  _QWORD *v15; // rax
  struct _KTHREAD *v16; // rsi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v19; // edx
  int v20; // r9d

  v3 = 0LL;
  if ( a3 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x74457350u);
    v3 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    *((_DWORD *)PoolWithTag + 9) = 0;
    PoolWithTag[3] = a2;
    *((_DWORD *)PoolWithTag + 8) = a3;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = (volatile signed __int64 *)(a1 + 112);
  ExAcquirePushLockExclusiveEx(a1 + 112, 0LL);
  if ( !a3 )
  {
    v12 = *(unsigned __int64 **)(a1 + 104);
    while ( v12 )
    {
      VsmEnclaveThread = PspFindVsmEnclaveThread(a2, v12, v11);
      if ( VsmEnclaveThread >= 0 )
      {
        if ( VsmEnclaveThread <= 0 )
          break;
        v12 = (unsigned __int64 *)v12[1];
      }
      else
      {
        v12 = (unsigned __int64 *)*v12;
      }
    }
    RtlAvlRemoveNode((unsigned __int64 *)(a1 + 104), v12);
    goto LABEL_21;
  }
  v14 = *(_QWORD **)(a1 + 104);
  LOBYTE(v11) = 0;
  if ( !v14 )
    goto LABEL_20;
  while ( (int)PspFindVsmEnclaveThread(a2, v14, v11) >= 0 )
  {
    v15 = (_QWORD *)v14[1];
    if ( !v15 )
    {
      LOBYTE(v11) = 1;
      goto LABEL_20;
    }
LABEL_18:
    v14 = v15;
  }
  v15 = (_QWORD *)*v14;
  if ( *v14 )
    goto LABEL_18;
  LOBYTE(v11) = 0;
LABEL_20:
  RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 104), (unsigned __int64)v14, v11, v3);
  v12 = 0LL;
LABEL_21:
  if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 112);
  v16 = KeGetCurrentThread();
  if ( (unsigned __int64)v10 - qword_140C50630 >= 0x8000000000LL )
    SessionId = -1;
  else
    SessionId = MmGetSessionIdEx((__int64)v16->ApcState.Process);
  _disable();
  p_Process = (__int64)&v16[1].Process;
  v19 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)v10 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != SessionId )
  {
    ++v19;
    p_Process += 96LL;
    if ( v19 >= 6 )
      goto LABEL_32;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( !p_Process )
  {
LABEL_32:
    if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v16, a1 + 112, SessionId, 0LL);
    _enable();
    goto LABEL_40;
  }
  if ( *(__int64 *)p_Process < 0 )
  {
    *(_BYTE *)p_Process |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(p_Process);
    _disable();
  }
  v20 = *(_DWORD *)(p_Process + 88);
  *(_DWORD *)(p_Process + 88) = 0;
  *(_BYTE *)(p_Process + 17) = 0;
  *(_QWORD *)p_Process = 0LL;
  v16->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
  _enable();
  if ( v20 )
    KiAbThreadRemoveBoostsSlow((ULONG_PTR)v16, a1 + 112, v20);
LABEL_40:
  KeLeaveCriticalRegion();
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  return 0LL;
}
