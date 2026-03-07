struct CVisual *__fastcall CVisualReferenceController::GetVisualNoRef(CVisualReferenceController *this)
{
  struct CVisual *result; // rax

  result = (struct CVisual *)*((_QWORD *)this + 9);
  if ( result )
    return (struct CVisual *)*((_QWORD *)result + 2);
  return result;
}
