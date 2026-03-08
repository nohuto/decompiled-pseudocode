/*
 * XREFs of KeDeregisterBoundCallback @ 0x140569F00
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ExReferenceCallBackBlock @ 0x14034C060 (ExReferenceCallBackBlock.c)
 *     ExCompareExchangeCallBack @ 0x140388EF8 (ExCompareExchangeCallBack.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x14078FD20 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     ExWaitForCallBacks @ 0x1409F8740 (ExWaitForCallBacks.c)
 */

__int64 __fastcall KeDeregisterBoundCallback(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // esi
  struct _EX_RUNDOWN_REF *v4; // rax
  struct _EX_RUNDOWN_REF *v5; // rbx
  char v6; // di
  signed __int64 v7; // rax
  signed __int64 v8; // rtt

  CurrentThread = KeGetCurrentThread();
  v3 = -1073741816;
  --CurrentThread->KernelApcDisable;
  v4 = ExReferenceCallBackBlock(&KiBoundsCallback);
  v5 = v4;
  if ( v4 )
  {
    v6 = 0;
    if ( v4[1].Count == a1 )
      v6 = ExCompareExchangeCallBack(&KiBoundsCallback, 0LL, (__int64)v4);
    _m_prefetchw(&KiBoundsCallback);
    v7 = KiBoundsCallback;
    while ( ((unsigned __int64)v5 ^ v7) < 0xF )
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange64(&KiBoundsCallback, v7 + 1, v7);
      if ( v8 == v7 )
        goto LABEL_8;
    }
    ExReleaseRundownProtection_0(v5);
LABEL_8:
    if ( v6 )
    {
      ExWaitForCallBacks(v5);
      SC_ENV::Free(v5);
      v3 = 0;
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v3;
}
