__int64 __fastcall std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Copy<std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Copy_tag>(
        _QWORD *a1,
        _QWORD *a2,
        char a3,
        __int64 a4)
{
  _QWORD *v6; // rdx
  __int64 **v7; // r8
  __int64 *i; // rcx
  __int64 result; // rax
  __int64 j; // rcx

  LOBYTE(a4) = a3;
  *(_QWORD *)(*a1 + 8LL) = std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Copy_nodes<std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Copy_tag>(
                             a1,
                             *(_QWORD *)(*a2 + 8LL),
                             *a1,
                             a4);
  v6 = (_QWORD *)*a1;
  a1[1] = a2[1];
  v7 = (__int64 **)v6[1];
  if ( *((_BYTE *)v7 + 25) )
  {
    *v6 = v6;
    result = *a1;
    *(_QWORD *)(*a1 + 16LL) = *a1;
  }
  else
  {
    for ( i = *v7; !*((_BYTE *)i + 25); i = (__int64 *)*i )
      v7 = (__int64 **)i;
    *v6 = v7;
    result = *(_QWORD *)(*a1 + 8LL);
    for ( j = *(_QWORD *)(result + 16); !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 16) )
      result = j;
    *(_QWORD *)(*a1 + 16LL) = result;
  }
  return result;
}
