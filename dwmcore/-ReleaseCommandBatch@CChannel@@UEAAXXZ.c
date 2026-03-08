/*
 * XREFs of ?ReleaseCommandBatch@CChannel@@UEAAXXZ @ 0x1801CD440
 * Callers:
 *     <none>
 * Callees:
 *     ?Recycle@CDataStreamWriter@@QEAAXXZ @ 0x1800446C0 (-Recycle@CDataStreamWriter@@QEAAXXZ.c)
 *     ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x1801B261C (--_GCCommandBatch@@QEAAPEAXI@Z.c)
 */

void __fastcall CChannel::ReleaseCommandBatch(CChannel *this)
{
  struct _LIST_ENTRY *v2; // rcx

  v2 = (struct _LIST_ENTRY *)*((_QWORD *)this + 28);
  if ( v2 )
  {
    if ( *((_QWORD *)this + 22) )
    {
      CCommandBatch::`scalar deleting destructor'(v2);
    }
    else
    {
      CDataStreamWriter::Recycle((CDataStreamWriter *)v2);
      *((_QWORD *)this + 22) = *((_QWORD *)this + 28);
    }
    *((_QWORD *)this + 28) = 0LL;
  }
}
