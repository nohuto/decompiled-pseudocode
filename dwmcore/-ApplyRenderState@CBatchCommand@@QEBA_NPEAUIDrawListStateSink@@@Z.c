bool __fastcall CBatchCommand::ApplyRenderState(CBatchCommand *this, struct IDrawListStateSink *a2)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  switch ( *(_DWORD *)this )
  {
    case 1:
      return CRenderingBatchCommand::ApplyRenderState(this, a2);
    case 2:
      (**(void (__fastcall ***)(struct IDrawListStateSink *, _QWORD))a2)(a2, *((_QWORD *)this + 1));
      return 0;
    case 3:
      return CGroupBatchCommand::ApplyRenderState(this, a2);
    default:
      if ( (unsigned int)(*(_DWORD *)this - 4) > 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      return CRenderingBatchCommand::ApplyRenderState(this, a2);
  }
}
