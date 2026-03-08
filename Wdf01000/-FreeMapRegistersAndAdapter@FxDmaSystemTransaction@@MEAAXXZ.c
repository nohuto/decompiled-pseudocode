/*
 * XREFs of ?FreeMapRegistersAndAdapter@FxDmaSystemTransaction@@MEAAXXZ @ 0x1C001ECC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 */

void __fastcall FxDmaSystemTransaction::FreeMapRegistersAndAdapter(FxDmaSystemTransaction *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  KIRQL v3; // si
  const void *_a1; // rax

  m_Globals = this->m_Globals;
  v3 = KfRaiseIrql(2u);
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0xAu, WPP_FxDmaTransactionSystem_hpp_Traceguids, _a1);
  }
  ((void (*)(void))this->m_AdapterInfo->AdapterObject->DmaOperations->FreeAdapterChannel)();
  KeLowerIrql(v3);
}
