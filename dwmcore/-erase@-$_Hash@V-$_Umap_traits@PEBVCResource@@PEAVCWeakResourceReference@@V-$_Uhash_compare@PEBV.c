__int64 __fastcall std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::erase(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // r11
  __int64 v4; // rax
  _QWORD *v5; // rcx
  __int64 v6; // r11
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0LL;
  v3 = 0xCBF29CE484222325uLL;
  do
  {
    v4 = *(unsigned __int8 *)(v2 + a2);
    ++v2;
    v3 = 0x100000001B3LL * (v4 ^ v3);
  }
  while ( v2 < 8 );
  v5 = *(_QWORD **)(std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_Find_last<CResource const *>(
                      v2,
                      v12,
                      a2,
                      v3)
                  + 8);
  if ( !v5 )
    return 0LL;
  v7 = qword_1803E3078;
  v8 = 2 * (v6 & xmmword_1803E3090);
  if ( *(_QWORD **)(qword_1803E3078 + 16 * (v6 & xmmword_1803E3090) + 8) == v5 )
  {
    if ( *(_QWORD **)(qword_1803E3078 + 16 * (v6 & xmmword_1803E3090)) == v5 )
    {
      v9 = qword_1803E3068;
      *(_QWORD *)(qword_1803E3078 + 16 * (v6 & xmmword_1803E3090)) = qword_1803E3068;
    }
    else
    {
      v9 = v5[1];
    }
    *(_QWORD *)(v7 + 8 * v8 + 8) = v9;
  }
  else if ( *(_QWORD **)(qword_1803E3078 + 16 * (v6 & xmmword_1803E3090)) == v5 )
  {
    *(_QWORD *)(qword_1803E3078 + 16 * (v6 & xmmword_1803E3090)) = *v5;
  }
  v10 = *v5;
  --qword_1803E3070;
  *(_QWORD *)v5[1] = v10;
  *(_QWORD *)(v10 + 8) = v5[1];
  operator delete(v5, 0x20uLL);
  return 1LL;
}
