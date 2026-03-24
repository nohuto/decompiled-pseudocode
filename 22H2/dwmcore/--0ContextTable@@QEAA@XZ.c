/*
 * XREFs of ??0ContextTable@@QEAA@XZ @ 0x1800DFC70
 * Callers:
 *     _dynamic_initializer_for__Contexts__ @ 0x180003520 (_dynamic_initializer_for__Contexts__.c)
 * Callees:
 *     <none>
 */

ContextTable *__fastcall ContextTable::ContextTable(ContextTable *this)
{
  LODWORD(qword_18034B4E0) = 0;
  *(_OWORD *)&Block = 0LL;
  RtlInitializeSRWLock(&unk_18034B4E8);
  return (ContextTable *)&Block;
}
