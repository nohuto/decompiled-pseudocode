FxDeviceText *__fastcall FindObjectForGivenLocale(_SINGLE_LIST_ENTRY *Head, unsigned int LocaleId)
{
  FxDeviceText *result; // rax

  for ( result = (FxDeviceText *)Head->Next;
        result && result->m_LocaleId != LocaleId;
        result = (FxDeviceText *)result->m_Entry.Next )
  {
    ;
  }
  return result;
}
