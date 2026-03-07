__int64 __fastcall CSuperWetSource::EnsureVailPerFrameDataHostReaderQueue(CSuperWetSource *this)
{
  __int64 v2; // rax
  int v3; // edi
  void *v4; // rcx
  LPVOID v6; // rax
  void *v7; // rcx
  int v8[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+28h] [rbp-30h]
  void **v10; // [rsp+30h] [rbp-28h]
  volatile __int32 **v11; // [rsp+38h] [rbp-20h] BYREF
  char v12; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *((_QWORD *)this + 14) )
    goto LABEL_17;
  v11 = 0LL;
  v10 = (void **)((char *)this + 112);
  v2 = *((_QWORD *)this + 17);
  v12 = 1;
  if ( !v2 )
  {
    gsl::details::terminate(this);
    __debugbreak();
  }
  *(_QWORD *)v8 = 4096LL;
  v9 = v2;
  v3 = CSharedCircularQueue::Create((unsigned int *)v8, 0x80u, &v11, 1);
  if ( v12 )
  {
    v4 = *v10;
    *v10 = v11;
    if ( v4 )
      operator delete(v4);
  }
  if ( v3 >= 0 )
  {
LABEL_17:
    if ( *((_QWORD *)this + 15) )
      return 0LL;
    v6 = DefaultHeap::Alloc(0x80uLL);
    v7 = (void *)*((_QWORD *)this + 15);
    *((_QWORD *)this + 15) = v6;
    if ( v7 )
      operator delete(v7);
    if ( *((_QWORD *)this + 15) )
    {
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x31,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\superwetsource.cpp",
        (const char *)0x8007000ELL);
      return 2147942414LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\superwetsource.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
}
