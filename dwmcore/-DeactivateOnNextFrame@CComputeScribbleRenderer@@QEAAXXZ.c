/*
 * XREFs of ?DeactivateOnNextFrame@CComputeScribbleRenderer@@QEAAXXZ @ 0x1801F86B0
 * Callers:
 *     ?TurnOffScribblingForTarget@CSuperWetInkManager@@AEBAXPEAVIMonitorTarget@@@Z @ 0x1801C9EE8 (-TurnOffScribblingForTarget@CSuperWetInkManager@@AEBAXPEAVIMonitorTarget@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?StopInternal@CComputeScribbleScheduler@@AEAAXXZ @ 0x180200DCC (-StopInternal@CComputeScribbleScheduler@@AEAAXXZ.c)
 */

void __fastcall CComputeScribbleRenderer::DeactivateOnNextFrame(CComputeScribbleRenderer *this)
{
  RTL_SRWLOCK *v2; // rbx

  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)g_pComposition + 82) + 32LL))(
    *((_QWORD *)g_pComposition + 82),
    0LL,
    0x400000LL);
  v2 = (RTL_SRWLOCK *)*((_QWORD *)this + 4);
  AcquireSRWLockExclusive(v2 + 11);
  CComputeScribbleScheduler::StopInternal((CComputeScribbleScheduler *)v2);
  if ( v2 != (RTL_SRWLOCK *)-88LL )
    ReleaseSRWLockExclusive(v2 + 11);
  *((_BYTE *)this + 49) = 0;
}
