void __fastcall detail::buffer_impl<CCustomKernelEffect::ConstantBufferRow,8,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        void **a1,
        unsigned __int64 a2)
{
  _BYTE *v3; // rcx
  _BYTE *v4; // rsi
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  LPVOID v7; // rax
  void *v8; // r8
  void *v9; // rdx
  LPVOID v10; // rbx
  void *v11; // rcx
  bool v12; // zf
  __int64 v13; // rsi
  _QWORD v14[4]; // [rsp+20h] [rbp-48h] BYREF
  char v15[32]; // [rsp+40h] [rbp-28h] BYREF

  v3 = a1[2];
  v4 = a1[1];
  if ( (v3 - v4) >> 4 < a2 )
  {
    v5 = (v4 - (_BYTE *)*a1) >> 4;
    if ( v5 + a2 < v5 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x180181A74LL);
    }
    v6 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)((v3 - (_BYTE *)*a1) >> 4),
           (v3 - (_BYTE *)*a1) >> 4,
           v5 + a2);
    v7 = operator new(saturated_mul(v6, 0x10uLL));
    v8 = a1[1];
    v9 = *a1;
    v14[0] = v7;
    v14[2] = 0LL;
    v10 = v7;
    v14[1] = v5;
    ((void (__fastcall *)(char *, void *, void *, _QWORD *))std::uninitialized_move<std::move_iterator<CCustomKernelEffect::ConstantBufferRow *>,stdext::checked_array_iterator<CCustomKernelEffect::ConstantBufferRow *>>)(
      v15,
      v9,
      v8,
      v14);
    v11 = *a1;
    v12 = *a1 == a1 + 3;
    *a1 = v10;
    if ( v12 )
      v11 = 0LL;
    operator delete(v11);
    v13 = (__int64)*a1 + 16 * v5;
    a1[2] = (char *)*a1 + 16 * v6;
    a1[1] = (void *)v13;
  }
}
