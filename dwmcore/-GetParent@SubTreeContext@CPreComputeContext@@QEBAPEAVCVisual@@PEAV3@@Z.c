struct CVisual *__fastcall CPreComputeContext::SubTreeContext::GetParent(
        CPreComputeContext::SubTreeContext *this,
        struct CVisual *a2)
{
  if ( a2 == *(struct CVisual **)(*((_QWORD *)this + 54) + 64LL) )
    return 0LL;
  else
    return (struct CVisual *)*((_QWORD *)a2 + 11);
}
