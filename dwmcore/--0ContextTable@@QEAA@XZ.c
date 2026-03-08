/*
 * XREFs of ??0ContextTable@@QEAA@XZ @ 0x180103DA4
 * Callers:
 *     _dynamic_initializer_for__Contexts__ @ 0x180003D40 (_dynamic_initializer_for__Contexts__.c)
 * Callees:
 *     <none>
 */

ContextTable *__fastcall ContextTable::ContextTable(ContextTable *this)
{
  LODWORD(qword_1803E3288) = 0;
  Block = 0LL;
  RtlInitializeSRWLock(&unk_1803E3290);
  return (ContextTable *)&Block;
}
