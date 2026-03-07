void __fastcall CComposition::RemoveVisualTree(CComposition *this, const struct CVisualTree *a2)
{
  const struct CVisualTree **i; // rdx
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  for ( i = (const struct CVisualTree **)*((_QWORD *)this + 7); i != *((const struct CVisualTree ***)this + 8); ++i )
  {
    if ( *i == a2 )
    {
      detail::vector_facade<CVisualTree *,detail::buffer_impl<CVisualTree *,16,1,detail::liberal_expansion_policy>>::clear_region(
        (char *)this + 56,
        ((__int64)i - *((_QWORD *)this + 7)) >> 3,
        1LL);
      break;
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v5);
}
