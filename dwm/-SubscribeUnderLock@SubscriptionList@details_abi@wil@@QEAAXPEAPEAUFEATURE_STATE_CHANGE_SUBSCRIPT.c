/*
 * XREFs of ?SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x140004D20
 * Callers:
 *     ?SubscribeToEnabledStateChanges@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x140004B64 (-SubscribeToEnabledStateChanges@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANG.c)
 *     ?SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z@Z @ 0x140004C00 (-SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRI.c)
 *     ?EnsureSubscribedToProcessWideUsageFlushUnderLock@FeatureStateManager@details@wil@@AEAAXXZ @ 0x140004CAC (-EnsureSubscribedToProcessWideUsageFlushUnderLock@FeatureStateManager@details@wil@@AEAAXXZ.c)
 * Callees:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x140004E4C (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 */

void __fastcall wil::details_abi::SubscriptionList::SubscribeUnderLock(
        wil::details_abi::SubscriptionList *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **a2,
        void (*a3)(void *),
        void *a4)
{
  wil::details_abi::heap_buffer *v4; // rbx
  _QWORD *v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v9; // r10
  _QWORD *v10; // rdx
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v11; // r8
  __int64 v12; // rax
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  *a2 = 0LL;
  v4 = (wil::details_abi::SubscriptionList *)((char *)this + 40);
  v5 = (_QWORD *)*((_QWORD *)this + 5);
  v6 = 0LL;
  v9 = (*((_QWORD *)v4 + 1) - (_QWORD)v5) >> 4;
  if ( v9 )
  {
    v10 = v5;
    while ( 1 )
    {
      v11 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)(v6 + 1);
      if ( !*v10 )
        break;
      v10 += 2;
      ++v6;
      if ( (unsigned __int64)v11 >= v9 )
        goto LABEL_2;
    }
    v12 = 2 * v6;
    v5[v12] = a3;
    v5[v12 + 1] = a4;
    *a2 = v11;
  }
  else
  {
LABEL_2:
    v13[0] = a3;
    v13[1] = a4;
    if ( wil::details_abi::heap_buffer::push_back(v4, v13, 0x10uLL) )
      *a2 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)((*((_QWORD *)v4 + 1) - *(_QWORD *)v4) >> 4);
  }
}
