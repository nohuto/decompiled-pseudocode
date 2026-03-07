__int64 __fastcall FxChildList::DuplicateAddress(
        FxChildList *this,
        _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *Dest,
        _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *Source)
{
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 (__fastcall *v6)(unsigned __int64, __int64, __int64); // r11

  if ( this->m_EvtAddressDescriptionDuplicate )
  {
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
    return v6(ObjectHandleUnchecked, v5, v4);
  }
  else
  {
    memmove(Dest, Source, this->m_AddressDescriptionSize);
    return 0LL;
  }
}
