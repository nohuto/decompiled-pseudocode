void *__fastcall CSharedSectionBase::ResolveAllocation(
        CSharedSectionBase *this,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rax

  v3 = *((unsigned int *)this + 18);
  if ( a2 < v3 && a3 <= v3 - a2 && (v4 = *((_QWORD *)this + 10)) != 0 )
    return (void *)(a2 + v4);
  else
    return 0LL;
}
