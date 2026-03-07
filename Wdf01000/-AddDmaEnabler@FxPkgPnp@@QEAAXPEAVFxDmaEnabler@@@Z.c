void __fastcall FxPkgPnp::AddDmaEnabler(FxPkgPnp *this, FxDmaEnabler *Enabler)
{
  const void *_a2; // rax
  const void *_a1; // rdx
  _FX_DRIVER_GLOBALS *v6; // r10

  if ( this->m_Globals->FxVerboseOn )
  {
    _a2 = (const void *)FxObject::GetObjectHandleUnchecked(Enabler);
    WPP_IFR_SF_qq(v6, 5u, 0xCu, 0xCu, WPP_FxPkgPnpKM_cpp_Traceguids, _a1, _a2);
  }
  FxTransactionedList::Add(this->m_DmaEnablerList, this->m_Globals, &Enabler->m_TransactionLink);
}
