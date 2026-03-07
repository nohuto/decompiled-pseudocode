struct CDrawListPrimitive *__fastcall CMegaRectBatchCommand::GetPrimitive(CMegaRectBatchCommand *this)
{
  struct CDrawListPrimitive *result; // rax

  result = (struct CDrawListPrimitive *)*((_QWORD *)this + 12);
  if ( !result )
    return *(struct CDrawListPrimitive **)(*((_QWORD *)this + 1) + 64LL);
  return result;
}
