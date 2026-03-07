unsigned __int64 __fastcall FxCalculateTotalStringSize(
        FxCollectionInternal *StringCollection,
        unsigned __int8 Verify,
        unsigned __int8 *ContainsOnlyStrings)
{
  _LIST_ENTRY *Flink; // r10
  __int64 i; // r9
  __int64 v5; // rax
  FxCollectionInternal *p_Blink; // r10

  Flink = StringCollection->m_ListHead.Flink;
  for ( i = 0LL; ; i += (unsigned __int16)(*(_WORD *)(v5 + 104) + 2) )
  {
    p_Blink = (FxCollectionInternal *)&Flink[-1].Blink;
    if ( p_Blink == StringCollection )
      break;
    v5 = *(_QWORD *)&p_Blink->m_Count;
    if ( Verify && *(_WORD *)(v5 + 8) != 4103 )
    {
      *ContainsOnlyStrings = 0;
      return 0LL;
    }
    Flink = p_Blink->m_ListHead.Flink;
  }
  if ( ContainsOnlyStrings )
    *ContainsOnlyStrings = 1;
  if ( StringCollection->m_Count )
    return i + 2;
  else
    return 4LL;
}
