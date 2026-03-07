void __fastcall FxChildList::CopyId(
        FxChildList *this,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *Dest,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *Source)
{
  void *ObjectHandleUnchecked; // rax
  __int64 v4; // r9
  __int64 v5; // r10
  void (__fastcall *v6)(void *, __int64, __int64); // r11

  if ( this->m_EvtIdentificationDescriptionCopy )
  {
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
    v6(ObjectHandleUnchecked, v4, v5);
  }
  else
  {
    memmove(Dest, Source, this->m_IdentificationDescriptionSize);
  }
}
