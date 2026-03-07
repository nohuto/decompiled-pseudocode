__int64 __fastcall CGenericInkTipPointSource::Initialize(
        CGenericInkTipPointSource *this,
        struct CSharedSectionBase *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  void *v9; // rdi
  __int64 v10; // r8
  __int64 result; // rax
  gsl::details *v12; // rcx
  int v13; // edi
  void *v14; // rcx
  _QWORD v15[2]; // [rsp+20h] [rbp-30h] BYREF
  void **v16; // [rsp+30h] [rbp-20h]
  volatile __int32 **v17; // [rsp+38h] [rbp-18h] BYREF
  char v18; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v9 = CSharedSectionBase::ResolveAllocation(a2, a3, a4);
  if ( v9 )
  {
    v17 = 0LL;
    v16 = (void **)((char *)this + 24);
    v18 = 1;
    gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v15, v10);
    if ( v15[0] == -1LL )
    {
      gsl::details::terminate(v12);
      __debugbreak();
    }
    v15[1] = v9;
    v13 = CSharedCircularQueue::Create((unsigned int *)v15, a5, &v17, 0);
    if ( v18 )
    {
      v14 = *v16;
      *v16 = v17;
      if ( v14 )
        operator delete(v14);
    }
    if ( v13 >= 0 )
    {
      Microsoft::WRL::ComPtr<CSharedSectionBase>::operator=((__int64 *)this + 2, (__int64)a2);
      result = 0LL;
      *((_DWORD *)this + 8) = a3;
      *((_DWORD *)this + 9) = a4;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x31,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericinktippointsource.cpp",
        (const char *)(unsigned int)v13);
      return (unsigned int)v13;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericinktippointsource.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  return result;
}
