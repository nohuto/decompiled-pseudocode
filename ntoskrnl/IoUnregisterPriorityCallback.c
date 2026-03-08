/*
 * XREFs of IoUnregisterPriorityCallback @ 0x1405550E0
 * Callers:
 *     IopDeleteDriver @ 0x14085AE30 (IopDeleteDriver.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ExReferenceCallBackBlock @ 0x14034C060 (ExReferenceCallBackBlock.c)
 *     ExCompareExchangeCallBack @ 0x140388EF8 (ExCompareExchangeCallBack.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x14078FD20 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     ExWaitForCallBacks @ 0x1409F8740 (ExWaitForCallBacks.c)
 */

void __fastcall IoUnregisterPriorityCallback(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  signed __int64 *v3; // r14
  __int64 v4; // r15
  signed __int64 *v5; // rdi
  struct _EX_RUNDOWN_REF *v6; // rax
  struct _EX_RUNDOWN_REF *v7; // rbx
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  signed __int64 v10; // rax
  signed __int64 v11; // rtt

  if ( (*(_DWORD *)(a1 + 16) & 0x200) == 0 )
    return;
  CurrentThread = KeGetCurrentThread();
  v3 = IopUpdatePriorityCallbackRoutine;
  --CurrentThread->KernelApcDisable;
  v4 = 0LL;
  while ( 1 )
  {
    v5 = &IopUpdatePriorityCallbackRoutine[v4];
    v6 = ExReferenceCallBackBlock(v5);
    v7 = v6;
    if ( v6 )
    {
      if ( v6[4].Count != a1 )
      {
        _m_prefetchw(v3);
        v10 = *v3;
        while ( ((unsigned __int64)v7 ^ v10) < 0xF )
        {
          v11 = v10;
          v10 = _InterlockedCompareExchange64(v3, v10 + 1, v10);
          if ( v11 == v10 )
            goto LABEL_15;
        }
        ExReleaseRundownProtection_0(v7);
        goto LABEL_15;
      }
      if ( ExCompareExchangeCallBack(&IopUpdatePriorityCallbackRoutine[v4], 0LL, (__int64)v6) )
        break;
    }
LABEL_15:
    v4 = (unsigned int)(v4 + 1);
    ++v3;
    if ( (unsigned int)v4 >= 8 )
    {
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      return;
    }
  }
  _InterlockedAdd(&IopUpdatePriorityCallbackRoutineCount, 0xFFFFFFFF);
  _m_prefetchw(v5);
  v8 = *v5;
  if ( ((unsigned __int64)v7 ^ *v5) >= 0xF )
  {
LABEL_9:
    ExReleaseRundownProtection_0(v7);
  }
  else
  {
    while ( 1 )
    {
      v9 = v8;
      v8 = _InterlockedCompareExchange64(v5, v8 + 1, v8);
      if ( v9 == v8 )
        break;
      if ( ((unsigned __int64)v7 ^ v8) >= 0xF )
        goto LABEL_9;
    }
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  ExWaitForCallBacks(v7);
  SC_ENV::Free(v7);
  *(_DWORD *)(a1 + 16) &= ~0x200u;
}
