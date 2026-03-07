void __fastcall detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,120,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        const void **a1,
        unsigned __int64 a2)
{
  _BYTE *v3; // rcx
  _BYTE *v4; // rsi
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rdi
  const void *v8; // rax
  __int64 v9; // r8
  const void *v10; // rdx
  const void *v11; // rbx
  void *v12; // rcx
  bool v13; // zf
  __int64 v14; // rsi
  _QWORD v15[4]; // [rsp+20h] [rbp-48h] BYREF
  char v16[32]; // [rsp+40h] [rbp-28h] BYREF

  v3 = a1[2];
  v4 = a1[1];
  if ( (v3 - v4) >> 4 < a2 )
  {
    v5 = (v4 - (_BYTE *)*a1) >> 4;
    v6 = v5 + a2;
    if ( v5 + a2 < v5 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v7 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)((v3 - (_BYTE *)*a1) >> 4),
           (v3 - (_BYTE *)*a1) >> 4,
           v6);
    v8 = operator new(saturated_mul(v7, 0x10uLL));
    v9 = (__int64)a1[1];
    v10 = *a1;
    v15[0] = v8;
    v15[2] = 0LL;
    v11 = v8;
    v15[1] = v5;
    std::uninitialized_move<std::move_iterator<CDrawListEntryBuilder::Align16Chunk *>,stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>>(
      (__int64)v16,
      v10,
      v9,
      v15);
    v12 = (void *)*a1;
    v13 = *a1 == a1 + 4;
    *a1 = v11;
    if ( v13 )
      v12 = 0LL;
    operator delete(v12);
    v14 = (__int64)*a1 + 16 * v5;
    a1[2] = (char *)*a1 + 16 * v7;
    a1[1] = (const void *)v14;
  }
}
