/*
 * XREFs of ?ResetSchedulerFromTDR@ADAPTER_RENDER@@QEAAXXZ @ 0x1C02BCF30
 * Callers:
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02BCD08 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ADAPTER_RENDER::ResetSchedulerFromTDR(ADAPTER_RENDER *this)
{
  if ( !*((_QWORD *)this + 93) )
  {
    WdLogSingleEntry1(1LL, 2740LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pVidSchGlobal", 2740LL, 0LL, 0LL, 0LL, 0LL);
  }
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*((_QWORD *)this + 92) + 8LL) + 744LL))(
    *((_QWORD *)this + 93),
    1LL);
}
