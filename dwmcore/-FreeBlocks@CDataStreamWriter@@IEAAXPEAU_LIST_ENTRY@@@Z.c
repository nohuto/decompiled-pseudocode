/*
 * XREFs of ?FreeBlocks@CDataStreamWriter@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1800BBF4C
 * Callers:
 *     ??1CRenderData@@MEAA@XZ @ 0x1800BBA08 (--1CRenderData@@MEAA@XZ.c)
 *     ?Reset@CDataStreamWriter@@QEAAXXZ @ 0x1800BBEA0 (-Reset@CDataStreamWriter@@QEAAXXZ.c)
 *     ?FreeBatchPool@CInternalMilCmdConnection@@AEAAXXZ @ 0x1800BBEE0 (-FreeBatchPool@CInternalMilCmdConnection@@AEAAXXZ.c)
 *     ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x1801B261C (--_GCCommandBatch@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 */

void __fastcall CDataStreamWriter::FreeBlocks(CDataStreamWriter *this, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v4; // rcx

  Flink = a2->Flink;
  while ( Flink != a2 )
  {
    v4 = Flink;
    Flink = Flink->Flink;
    operator delete(v4);
  }
}
