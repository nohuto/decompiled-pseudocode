void __fastcall FxChildList::CopyAddress(
        FxChildList *this,
        _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *Dest,
        _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *Source)
{
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 v4; // rdx
  __int64 v5; // r9
  void (__fastcall *v6)(unsigned __int64, __int64, __int64); // r10

  if ( Source )
  {
    if ( this->m_EvtAddressDescriptionCopy )
    {
      ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
      v6(ObjectHandleUnchecked, v5, v4);
    }
    else
    {
      memmove(Dest, Source, this->m_AddressDescriptionSize);
    }
  }
}
