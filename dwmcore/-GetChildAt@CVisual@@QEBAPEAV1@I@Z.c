struct CVisual *__fastcall CVisual::GetChildAt(CVisual *this)
{
  unsigned __int64 Count; // rax
  unsigned __int64 v2; // rdx
  __int64 *v3; // rcx

  Count = CPtrArrayBase::GetCount((CVisual *)((char *)this + 80));
  if ( Count <= v2 )
    return 0LL;
  else
    return (struct CVisual *)CPtrArrayBase::operator[](v3, v2);
}
