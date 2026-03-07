ContextTable *__fastcall ContextTable::ContextTable(ContextTable *this)
{
  LODWORD(qword_1803E3288) = 0;
  Block = 0LL;
  RtlInitializeSRWLock(&unk_1803E3290);
  return (ContextTable *)&Block;
}
