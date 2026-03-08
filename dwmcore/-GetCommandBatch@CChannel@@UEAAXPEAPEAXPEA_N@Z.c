/*
 * XREFs of ?GetCommandBatch@CChannel@@UEAAXPEAPEAXPEA_N@Z @ 0x1801CC3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1800BB644 (-FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 */

void __fastcall CChannel::GetCommandBatch(CDataStreamWriter **this, void **a2, bool *a3)
{
  CChannel *v3; // r9
  void **v4; // r10
  CDataStreamWriter *v5; // rcx
  struct _LIST_ENTRY *v6; // rax
  __int64 v7; // rax

  v3 = (CChannel *)this;
  v4 = a2;
  v5 = this[22];
  if ( v5 )
    v6 = CDataStreamWriter::FlushData(v5);
  else
    v6 = 0LL;
  *v4 = v6;
  v7 = *((_QWORD *)v3 + 22);
  *((_QWORD *)v3 + 22) = 0LL;
  *((_QWORD *)v3 + 28) = v7;
  *a3 = *((_BYTE *)v3 + 233);
  *((_BYTE *)v3 + 233) = 0;
}
