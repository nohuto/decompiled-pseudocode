char __fastcall CRenderingBatchCommand::ApplyRenderState(CRenderingBatchCommand *this, struct IDrawListStateSink *a2)
{
  CRenderingBatchCommand *v3; // r8
  struct CDrawListPrimitive *Primitive; // rbx
  __int64 v5; // rdx

  v3 = this;
  if ( *((_BYTE *)this + 92) )
    return 1;
  if ( *(_DWORD *)this == 4 )
    Primitive = CMegaRectBatchCommand::GetPrimitive(this);
  else
    Primitive = *(struct CDrawListPrimitive **)(*((_QWORD *)this + 1) + 64LL);
  if ( *((float *)Primitive + 21) > *((float *)Primitive + 19)
    && *((float *)Primitive + 22) > *((float *)Primitive + 20) )
  {
    (*(void (__fastcall **)(struct IDrawListStateSink *, _QWORD))(*(_QWORD *)a2 + 8LL))(a2, *((unsigned int *)v3 + 21));
    LOBYTE(v5) = *((_BYTE *)Primitive + 72);
    (*(void (__fastcall **)(struct IDrawListStateSink *, __int64))(*(_QWORD *)a2 + 24LL))(a2, v5);
    return 1;
  }
  return 0;
}
