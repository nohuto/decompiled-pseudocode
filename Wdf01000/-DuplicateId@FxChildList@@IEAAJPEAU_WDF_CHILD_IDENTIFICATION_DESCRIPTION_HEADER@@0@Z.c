__int64 __fastcall FxChildList::DuplicateId(
        FxChildList *this,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *Dest,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *Source)
{
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 (__fastcall *v6)(unsigned __int64, __int64, __int64); // r11

  if ( this->m_EvtIdentificationDescriptionDuplicate )
  {
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
    return v6(ObjectHandleUnchecked, v5, v4);
  }
  else
  {
    memmove(Dest, Source, this->m_IdentificationDescriptionSize);
    return 0LL;
  }
}
