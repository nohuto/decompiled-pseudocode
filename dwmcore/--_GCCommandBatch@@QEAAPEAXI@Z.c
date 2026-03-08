/*
 * XREFs of ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x1801B261C
 * Callers:
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x180044740 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ??1CChannel@@AEAA@XZ @ 0x1801CB2C4 (--1CChannel@@AEAA@XZ.c)
 *     ?ReleaseCommandBatch@CChannel@@UEAAXXZ @ 0x1801CD440 (-ReleaseCommandBatch@CChannel@@UEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?FreeBlocks@CDataStreamWriter@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1800BBF4C (-FreeBlocks@CDataStreamWriter@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 */

struct _LIST_ENTRY *__fastcall CCommandBatch::`scalar deleting destructor'(struct _LIST_ENTRY *this)
{
  CDataStreamWriter *v2; // rcx

  CDataStreamWriter::FreeBlocks((CDataStreamWriter *)this, this);
  operator delete(this[2].Flink);
  CDataStreamWriter::FreeBlocks(v2, this + 1);
  operator delete(this);
  return this;
}
