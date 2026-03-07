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
