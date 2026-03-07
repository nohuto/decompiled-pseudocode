_LIST_ENTRY *__fastcall FxRequestMemory::GetMdl(FxRequestMemory *this)
{
  return this->m_ChildListHead.Flink;
}
