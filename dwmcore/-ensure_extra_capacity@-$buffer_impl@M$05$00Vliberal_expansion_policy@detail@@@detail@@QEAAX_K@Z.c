unsigned __int64 __fastcall detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        void **a1,
        unsigned __int64 a2)
{
  _BYTE *v3; // rcx
  _BYTE *v4; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdi
  void *v9; // rax
  void *v10; // r8
  void *v11; // rdx
  void *v12; // rbx
  void *v13; // rcx
  bool v14; // zf
  void *v15; // rcx
  _QWORD v16[4]; // [rsp+20h] [rbp-48h] BYREF
  char v17[32]; // [rsp+40h] [rbp-28h] BYREF

  v3 = a1[2];
  v4 = a1[1];
  result = (v3 - v4) >> 2;
  if ( result < a2 )
  {
    v6 = (v4 - (_BYTE *)*a1) >> 2;
    v7 = v6 + a2;
    if ( v6 + a2 < v6 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v8 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)((v3 - (_BYTE *)*a1) >> 2),
           (v3 - (_BYTE *)*a1) >> 2,
           v7);
    v9 = operator new(saturated_mul(v8, 4uLL));
    v10 = a1[1];
    v11 = *a1;
    v16[0] = v9;
    v16[2] = 0LL;
    v12 = v9;
    v16[1] = v6;
    ((void (__fastcall *)(char *, void *, void *, _QWORD *))std::move<std::move_iterator<enum D2D1_EDGE_FLAGS *>,stdext::checked_array_iterator<enum D2D1_EDGE_FLAGS *>>)(
      v17,
      v11,
      v10,
      v16);
    v13 = *a1;
    v14 = *a1 == a1 + 3;
    *a1 = v12;
    if ( v14 )
      v13 = 0LL;
    operator delete(v13);
    v15 = *a1;
    a1[1] = (char *)*a1 + 4 * v6;
    result = (unsigned __int64)v15 + 4 * v8;
    a1[2] = (void *)result;
  }
  return result;
}
