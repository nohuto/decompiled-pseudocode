_QWORD *__fastcall std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Copy_nodes<std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Copy_tag>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        char a4)
{
  __int64 v5; // rbp
  HANDLE ProcessHeap; // rax
  _QWORD *v11; // rsi
  __int64 v12; // r9
  char v13; // di
  __int64 v14; // r9
  void *retaddr; // [rsp+38h] [rbp+0h]

  v5 = *a1;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    ProcessHeap = GetProcessHeap();
    v11 = HeapAlloc(ProcessHeap, 0, 0x28uLL);
    if ( !v11 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    LOBYTE(v12) = a4;
    v11[4] = *(_QWORD *)(a2 + 32);
    *v11 = v5;
    v11[2] = v5;
    *((_WORD *)v11 + 12) = 0;
    v11[1] = a3;
    *((_BYTE *)v11 + 24) = *(_BYTE *)(a2 + 24);
    v13 = *(_BYTE *)(v5 + 25);
    *v11 = std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Copy_nodes<std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Copy_tag>(
             a1,
             *(_QWORD *)a2,
             v11,
             v12);
    LOBYTE(v14) = a4;
    v11[2] = std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Copy_nodes<std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Copy_tag>(
               a1,
               *(_QWORD *)(a2 + 16),
               v11,
               v14);
    if ( !v13 )
      return (_QWORD *)v5;
    return v11;
  }
  return (_QWORD *)v5;
}
