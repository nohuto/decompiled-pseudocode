/*
 * XREFs of KiHandleBound @ 0x14056A8C0
 * Callers:
 *     KiBoundFault @ 0x140424800 (KiBoundFault.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ExReferenceCallBackBlock @ 0x14034C060 (ExReferenceCallBackBlock.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 KiHandleBound()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v1; // edi
  struct _EX_RUNDOWN_REF *v2; // rax
  struct _EX_RUNDOWN_REF *v3; // rbx
  signed __int64 v4; // rax
  signed __int64 v5; // rtt

  CurrentThread = KeGetCurrentThread();
  v1 = 0;
  --CurrentThread->KernelApcDisable;
  v2 = ExReferenceCallBackBlock(&KiBoundsCallback);
  v3 = v2;
  if ( v2 )
  {
    v1 = ((__int64 (*)(void))v2[1].Count)();
    _m_prefetchw(&KiBoundsCallback);
    v4 = KiBoundsCallback;
    while ( ((unsigned __int64)v3 ^ v4) < 0xF )
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange64(&KiBoundsCallback, v4 + 1, v4);
      if ( v5 == v4 )
        goto LABEL_6;
    }
    ExReleaseRundownProtection_0(v3);
  }
LABEL_6:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v1;
}
