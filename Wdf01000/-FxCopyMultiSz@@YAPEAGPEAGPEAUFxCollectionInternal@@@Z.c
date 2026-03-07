wchar_t *__fastcall FxCopyMultiSz(wchar_t *Buffer, FxCollectionInternal *StringCollection)
{
  FxCollectionInternal *i; // rsi
  size_t v5; // rbx

  for ( i = (FxCollectionInternal *)&StringCollection->m_ListHead.Flink[-1].Blink;
        i != StringCollection;
        i = (FxCollectionInternal *)&i->m_ListHead.Flink[-1].Blink )
  {
    v5 = (unsigned __int16)(*(_WORD *)(*(_QWORD *)&i->m_Count + 104LL) + 2);
    memmove(Buffer, *(const void **)(*(_QWORD *)&i->m_Count + 112LL), v5);
    Buffer = (wchar_t *)((char *)Buffer + v5);
  }
  if ( !StringCollection->m_Count )
    *Buffer++ = 0;
  *Buffer = 0;
  return Buffer + 1;
}
