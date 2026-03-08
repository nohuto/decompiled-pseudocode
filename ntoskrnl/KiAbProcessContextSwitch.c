/*
 * XREFs of KiAbProcessContextSwitch @ 0x140239508
 * Callers:
 *     KiQuantumEnd @ 0x140254F30 (KiQuantumEnd.c)
 *     KiHandleDeferredPreemption @ 0x1402AE8D0 (KiHandleDeferredPreemption.c)
 *     KeRemoveQueueEx @ 0x140315D50 (KeRemoveQueueEx.c)
 *     KeSetThreadSchedulerAssist @ 0x14056AE2C (KeSetThreadSchedulerAssist.c)
 * Callees:
 *     KiReadyDeferredReadyList @ 0x140226FA0 (KiReadyDeferredReadyList.c)
 *     KiAbPropagateBoosts @ 0x1402395C0 (KiAbPropagateBoosts.c)
 *     KiAbProcessThreadLocks @ 0x140239A40 (KiAbProcessThreadLocks.c)
 *     KiCheckForThreadDispatch @ 0x14023A168 (KiCheckForThreadDispatch.c)
 */

__int64 __fastcall KiAbProcessContextSwitch(__int64 a1, int a2)
{
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v5; // rdx
  _QWORD *v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF

  result = *(unsigned __int8 *)(a1 + 792);
  if ( ((unsigned int)result | *(unsigned __int8 *)(a1 + 870)) != 0x3F )
  {
    v6 = 0LL;
    CurrentPrcb = KeGetCurrentPrcb();
    v7 = 0LL;
    KiAbProcessThreadLocks(a1, 1, 1, 1, (__int64)&v6, (__int64)&v7, (__int64)&CurrentPrcb->AbSelfIoBoostsList);
    KiAbPropagateBoosts(&v7, &CurrentPrcb->AbSelfIoBoostsList, &v6);
    result = KiReadyDeferredReadyList((__int64)CurrentPrcb, &v6);
    if ( a2 )
    {
      LOBYTE(v5) = 2;
      return KiCheckForThreadDispatch(CurrentPrcb, v5);
    }
  }
  return result;
}
