/*
 * XREFs of ?RestartSchedulerFromTDR@ADAPTER_RENDER@@QEAAJXZ @ 0x1C02BCFC4
 * Callers:
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02BCD08 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::RestartSchedulerFromTDR(ADAPTER_RENDER *this)
{
  if ( !*((_QWORD *)this + 93) )
  {
    WdLogSingleEntry1(1LL, 2757LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pVidSchGlobal", 2757LL, 0LL, 0LL, 0LL, 0LL);
  }
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*((_QWORD *)this + 92) + 8LL) + 752LL))(
           *((_QWORD *)this + 93),
           1LL);
}
