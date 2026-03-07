void __fastcall FxPkgPnp::RemoveChildList(FxPkgPnp *this, FxChildList *List)
{
  const void *_a2; // rax
  const void *_a1; // rdx
  _FX_DRIVER_GLOBALS *v6; // r10

  if ( this->m_Globals->FxVerboseOn )
  {
    _a2 = (const void *)FxObject::GetObjectHandleUnchecked(List);
    WPP_IFR_SF_qq(v6, 5u, 0xCu, 0x4Eu, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, _a1, _a2);
  }
  FxTransactionedList::Remove(&this->m_EnumInfo->m_ChildListList, this->m_Globals, &List->m_TransactionLink);
}
