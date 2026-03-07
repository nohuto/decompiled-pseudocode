__int64 __fastcall CD2DBitmap::Create(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        int a6,
        int a7,
        __int64 a8,
        _QWORD *a9)
{
  _QWORD *v9; // rsi
  void *v13; // rax
  __int64 v14; // r8
  unsigned int v15; // ecx
  _QWORD *v16; // rbx
  int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // edi

  v9 = a9;
  a9 = 0LL;
  *v9 = 0LL;
  v13 = DefaultHeap::Alloc(0x168uLL);
  if ( v13 )
  {
    LOBYTE(v14) = 1;
    v13 = (void *)CD2DBitmap::CD2DBitmap(v13, a1, v14, a3, a4, a5, a6, a7, 0, 1);
  }
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::operator=(&a9, v13);
  v16 = a9;
  if ( a9 )
  {
    v17 = (*(__int64 (__fastcall **)(_QWORD *))(*a9 + 48LL))(a9);
    v19 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x26u, 0LL);
    }
    else
    {
      a9 = 0LL;
      *v9 = v16;
    }
  }
  else
  {
    v19 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024882, 0x24u, 0LL);
  }
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(&a9);
  return v19;
}
