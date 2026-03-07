struct _SLIST_ENTRY *__fastcall DXGPRESENTHISTORYTOKENQUEUE::GetPresentHistoryTokenSlot(union _SLIST_HEADER *this)
{
  PSLIST_ENTRY v2; // rax

  v2 = ExpInterlockedPopEntrySList(this + 3);
  if ( v2 )
    return v2 + 1;
  if ( DXGPRESENTHISTORYTOKENQUEUE::GrowPresentHistoryBuffer(this)
    && (v2 = ExpInterlockedPopEntrySList(this + 3)) != 0LL )
  {
    return v2 + 1;
  }
  else
  {
    return 0LL;
  }
}
