void __fastcall detail::buffer_impl<CCheckMPOCache::PlaneInfo,6,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        char **a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // r9
  char *v4; // rcx
  char *v5; // rsi
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdi
  char *v9; // rax
  char *v10; // r8
  char *v11; // rdx
  char *v12; // rbx
  char *v13; // rcx
  bool v14; // zf
  _QWORD v15[4]; // [rsp+20h] [rbp-58h] BYREF
  char v16[32]; // [rsp+40h] [rbp-38h] BYREF
  void *v17; // [rsp+80h] [rbp+8h] BYREF

  v3 = 0xCCCCCCCCCCCCCCCDuLL;
  v4 = a1[2];
  v5 = a1[1];
  if ( 0xCCCCCCCCCCCCCCCDuLL * ((v4 - v5) >> 5) < a2 )
  {
    v6 = 0xCCCCCCCCCCCCCCCDuLL * ((v5 - *a1) >> 5);
    v7 = v6 + a2;
    if ( v6 + a2 < v6 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v8 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)(v3 * ((v4 - *a1) >> 5)),
           v3 * ((v4 - *a1) >> 5),
           v7);
    v9 = (char *)operator new(saturated_mul(v8, 0xA0uLL));
    v10 = a1[1];
    v11 = *a1;
    v15[0] = v9;
    v15[2] = 0LL;
    v12 = v9;
    v15[1] = v6;
    std::uninitialized_move<std::move_iterator<CCheckMPOCache::PlaneInfo *>,stdext::checked_array_iterator<CCheckMPOCache::PlaneInfo *>>(
      (__int64)v16,
      v11,
      v10,
      v15);
    v13 = *a1;
    v14 = *a1 == (char *)(a1 + 3);
    v17 = 0LL;
    *a1 = v12;
    if ( v14 )
      v13 = 0LL;
    operator delete(v13);
    a1[1] = &(*a1)[160 * v6];
    a1[2] = &(*a1)[160 * v8];
    std::unique_ptr<char [0]>::~unique_ptr<char [0]>(&v17);
  }
}
