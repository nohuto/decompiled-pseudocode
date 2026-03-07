struct CDrawListPrimitive *__fastcall CRenderingBatchCommand::GetPrimitive(CRenderingBatchCommand *this)
{
  if ( *(_DWORD *)this == 4 )
    return CMegaRectBatchCommand::GetPrimitive(this);
  else
    return *(struct CDrawListPrimitive **)(*((_QWORD *)this + 1) + 64LL);
}
