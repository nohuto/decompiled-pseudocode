__int64 __fastcall detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rsi
  __int64 v5; // rcx
  __int64 v6; // r10
  unsigned __int64 v7; // rdx
  unsigned __int64 v9; // r9
  __int64 result; // rax
  __int64 v11; // rdi
  __int64 i; // rbx
  __int64 v13; // rcx
  _QWORD v14[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v15[32]; // [rsp+40h] [rbp-28h] BYREF

  v5 = *a1;
  v6 = a2;
  v7 = a3 + a2;
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - v5) >> 3);
  if ( v7 > v9 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_16;
  }
  result = (a1[1] - v5) >> 3;
  v3 = v5 + 8 * result;
  if ( v7 != v9 )
  {
    if ( !v6 )
    {
LABEL_13:
      v14[0] = v5;
      v14[1] = v9;
      v14[2] = v6;
      result = ((__int64 (__fastcall *)(_BYTE *, unsigned __int64, __int64, _QWORD *))std::move<std::move_iterator<CDrawListCacheSet::ContentEntry *>,stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *>>)(
                 v15,
                 v5 + 24 * v7,
                 v3,
                 v14);
      goto LABEL_3;
    }
    if ( !v5 )
LABEL_14:
      _invalid_parameter_noinfo_noreturn();
    if ( v6 >= 0 )
    {
      if ( v9 >= v6 )
        goto LABEL_13;
      goto LABEL_14;
    }
LABEL_16:
    if ( !v6 )
      goto LABEL_13;
    goto LABEL_14;
  }
LABEL_3:
  v11 = 24 * a3;
  for ( i = v3 - 24 * a3; i != v3; i += 24LL )
  {
    v13 = *(_QWORD *)(i + 16);
    if ( v13 )
      result = CMILRefCountBaseT<IMILRefCount>::InternalRelease(v13);
  }
  a1[1] -= v11;
  return result;
}
