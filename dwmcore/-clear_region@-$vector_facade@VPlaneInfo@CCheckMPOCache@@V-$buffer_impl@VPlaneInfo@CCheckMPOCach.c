void __fastcall detail::vector_facade<CCheckMPOCache::PlaneInfo,detail::buffer_impl<CCheckMPOCache::PlaneInfo,6,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rax
  __int64 v7; // rdi
  __int128 v8; // [rsp+20h] [rbp-48h] BYREF
  __int64 v9; // [rsp+30h] [rbp-38h]
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+50h] [rbp-18h]

  v4 = *a1;
  v5 = a3;
  v6 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - v4) >> 5);
  if ( a3 > v6 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  v7 = 160 * v5;
  if ( v5 != v6 )
  {
    v9 = 0LL;
    *(_QWORD *)&v8 = v4;
    *((_QWORD *)&v8 + 1) = v6;
    v11 = 0LL;
    v10 = v8;
    std::move<std::move_iterator<CCheckMPOCache::PlaneInfo *>,stdext::checked_array_iterator<CCheckMPOCache::PlaneInfo *>>(
      (__int64)&v8,
      (const void *)(v7 + v4),
      v4 + 160 * v6,
      &v10);
  }
  a1[1] -= v7;
}
