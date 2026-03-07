void __fastcall detail::buffer_impl<VertexXYW_ColorDW_UV2_AAFixup,40,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        const void **a1,
        unsigned __int64 a2)
{
  _BYTE *v3; // rcx
  _BYTE *v4; // rsi
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  const void *v7; // rax
  __int64 v8; // r8
  const void *v9; // rdx
  const void *v10; // rbx
  void *v11; // rcx
  bool v12; // zf
  unsigned __int64 v13; // rsi
  _QWORD v14[4]; // [rsp+20h] [rbp-48h] BYREF
  char v15[32]; // [rsp+40h] [rbp-28h] BYREF

  v3 = a1[2];
  v4 = a1[1];
  if ( (v3 - v4) >> 6 < a2 )
  {
    v5 = (v4 - (_BYTE *)*a1) >> 6;
    if ( v5 + a2 < v5 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x180177C16LL);
    }
    v6 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)((v3 - (_BYTE *)*a1) >> 6),
           (v3 - (_BYTE *)*a1) >> 6,
           v5 + a2);
    v7 = operator new(saturated_mul(v6, 0x40uLL));
    v8 = (__int64)a1[1];
    v9 = *a1;
    v14[0] = v7;
    v14[2] = 0LL;
    v10 = v7;
    v14[1] = v5;
    std::uninitialized_move<std::move_iterator<VertexXYW_ColorDW_UV2_AAFixup *>,stdext::checked_array_iterator<VertexXYW_ColorDW_UV2_AAFixup *>>(
      (__int64)v15,
      v9,
      v8,
      v14);
    v11 = (void *)*a1;
    v12 = *a1 == a1 + 4;
    *a1 = v10;
    if ( v12 )
      v11 = 0LL;
    operator delete(v11);
    v13 = (unsigned __int64)*a1 + 64 * v5;
    a1[2] = (char *)*a1 + 64 * v6;
    a1[1] = (const void *)v13;
  }
}
