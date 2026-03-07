char __fastcall CGroupBatchCommand::ApplyRenderState(CGroupBatchCommand *this, struct IDrawListStateSink *a2)
{
  if ( *((_DWORD *)this + 4) != 24 )
    (*(void (__fastcall **)(struct IDrawListStateSink *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( *((_BYTE *)this + 20) != 3 )
    (*(void (__fastcall **)(struct IDrawListStateSink *))(*(_QWORD *)a2 + 24LL))(a2);
  (*(void (__fastcall **)(struct IDrawListStateSink *, CGroupBatchCommand *))(*(_QWORD *)a2 + 16LL))(a2, this);
  return 1;
}
