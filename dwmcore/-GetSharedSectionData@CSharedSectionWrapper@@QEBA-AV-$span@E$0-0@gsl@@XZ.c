gsl::details *__fastcall CSharedSectionWrapper::GetSharedSectionData(__int64 a1, gsl::details *a2)
{
  unsigned int v3; // r8d
  void *v4; // rdi
  gsl::details *v5; // rcx
  bool v6; // zf
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*(_QWORD *)(a1 + 64) )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  if ( *(_DWORD *)(a1 + 76) == -1 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  v4 = CSharedSectionBase::ResolveAllocation(
         *(CSharedSectionBase **)(a1 + 64),
         *(unsigned int *)(a1 + 72),
         *(unsigned int *)(a1 + 76));
  gsl::details::extent_type<-1>::extent_type<-1>(a2, v3);
  v6 = *(_QWORD *)a2 == -1LL;
  *((_QWORD *)a2 + 1) = v4;
  if ( v6 || !v4 && *(_QWORD *)a2 )
  {
    gsl::details::terminate(v5);
    JUMPOUT(0x18024E44DLL);
  }
  return a2;
}
