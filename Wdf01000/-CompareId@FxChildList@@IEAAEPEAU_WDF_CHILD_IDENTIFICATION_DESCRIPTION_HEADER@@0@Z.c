unsigned __int8 __fastcall FxChildList::CompareId(
        FxChildList *this,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *Lhs,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *Rhs)
{
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 (__fastcall *v4)(unsigned __int64); // r9

  if ( !this->m_EvtIdentificationDescriptionCompare )
    return this->m_IdentificationDescriptionSize == RtlCompareMemory(Lhs, Rhs, this->m_IdentificationDescriptionSize);
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
  return v4(ObjectHandleUnchecked);
}
