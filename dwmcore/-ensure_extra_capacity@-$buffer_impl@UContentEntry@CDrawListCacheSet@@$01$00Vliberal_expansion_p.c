unsigned __int64 __fastcall detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        CDrawListCacheSet::ContentEntry **a1,
        unsigned __int64 a2)
{
  CDrawListCacheSet::ContentEntry *v3; // rcx
  CDrawListCacheSet::ContentEntry *v4; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  CDrawListCacheSet::ContentEntry *v8; // rax
  CDrawListCacheSet::ContentEntry *v9; // r8
  CDrawListCacheSet::ContentEntry *v10; // rdx
  CDrawListCacheSet::ContentEntry *v11; // rbx
  CDrawListCacheSet::ContentEntry *v12; // rcx
  bool v13; // zf
  CDrawListCacheSet::ContentEntry *v14; // rdx
  _QWORD v15[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v16[32]; // [rsp+40h] [rbp-28h] BYREF

  v3 = a1[2];
  v4 = a1[1];
  result = 0xAAAAAAAAAAAAAAABuLL * ((v3 - v4) >> 3);
  if ( result < a2 )
  {
    v6 = 0xAAAAAAAAAAAAAAABuLL * ((v4 - *a1) >> 3);
    if ( v6 + a2 < v6 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x180146CE4LL);
    }
    v7 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)(0xAAAAAAAAAAAAAAABuLL * ((v3 - *a1) >> 3)),
           0xAAAAAAAAAAAAAAABuLL * ((v3 - *a1) >> 3),
           v6 + a2);
    v8 = (CDrawListCacheSet::ContentEntry *)operator new(saturated_mul(v7, 0x18uLL));
    v9 = a1[1];
    v10 = *a1;
    v15[0] = v8;
    v15[2] = 0LL;
    v11 = v8;
    v15[1] = v6;
    ((void (__fastcall *)(_BYTE *, CDrawListCacheSet::ContentEntry *, CDrawListCacheSet::ContentEntry *, _QWORD *))std::uninitialized_move<std::move_iterator<CDrawListCacheSet::ContentEntry *>,stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *>>)(
      v16,
      v10,
      v9,
      v15);
    detail::destruct_range<CDrawListCacheSet::ContentEntry>(*a1);
    v12 = *a1;
    v13 = *a1 == (CDrawListCacheSet::ContentEntry *)(a1 + 3);
    *a1 = v11;
    if ( v13 )
      v12 = 0LL;
    operator delete(v12);
    v14 = *a1;
    result = 3 * v7;
    a1[1] = (CDrawListCacheSet::ContentEntry *)((char *)*a1 + 24 * v6);
    a1[2] = (CDrawListCacheSet::ContentEntry *)((char *)v14 + 24 * v7);
  }
  return result;
}
