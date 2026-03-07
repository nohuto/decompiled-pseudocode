FxDeviceText *__fastcall FxDeviceText::_CleanupList(_SINGLE_LIST_ENTRY *Head)
{
  FxDeviceText *Next; // rcx
  FxDeviceText *result; // rax

  Next = (FxDeviceText *)Head->Next;
  if ( Next )
  {
    Next->m_Entry.Next = 0LL;
    result = FxDeviceText::`scalar deleting destructor'(Next);
  }
  Head->Next = 0LL;
  return result;
}
