_QWORD *__fastcall std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_Find_last<CResource const *>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  _QWORD *v4; // rcx

  v4 = *(_QWORD **)(qword_1803E3078 + 16 * (a4 & xmmword_1803E3090) + 8);
  if ( v4 == (_QWORD *)qword_1803E3068 )
  {
    *a2 = qword_1803E3068;
  }
  else
  {
    while ( 1 )
    {
      if ( *a3 == v4[2] )
      {
        *a2 = *v4;
        a2[1] = v4;
        return a2;
      }
      if ( v4 == *(_QWORD **)(qword_1803E3078 + 16 * (a4 & xmmword_1803E3090)) )
        break;
      v4 = (_QWORD *)v4[1];
    }
    *a2 = v4;
  }
  a2[1] = 0LL;
  return a2;
}
