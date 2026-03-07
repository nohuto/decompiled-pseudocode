__int64 __fastcall std::map__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Try_emplace__anonymous_namespace_::AnimationId_const___(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // r8
  __int64 v8; // r8
  int v9; // r9d
  __int64 v10; // rax
  __int64 v11; // rdi
  char v12; // [rsp+30h] [rbp-38h] BYREF
  void *v13; // [rsp+38h] [rbp-30h]
  __int128 v14; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h]
  __int64 v16; // [rsp+88h] [rbp+20h] BYREF

  std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Find_lower_bound__anonymous_namespace_::AnimationId_(
    a1,
    &v14);
  if ( *(_BYTE *)(v15 + 25) || *(_QWORD *)v6 < *(_QWORD *)(v15 + 32) && *(_DWORD *)(v6 + 8) < *(_DWORD *)(v15 + 40) )
  {
    std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Check_grow_by_1(a1);
    v8 = *(_QWORD *)(a1 + 8);
    v16 = a3;
    v10 = std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void________std::piecewise_construct_t_const___std::tuple__anonymous_namespace_::AnimationId_const____std::tuple____(
            (unsigned int)&v12,
            (int)a1 + 8,
            v8,
            v9,
            (__int64)&v16);
    v11 = *(_QWORD *)(v10 + 8);
    *(_QWORD *)(v10 + 8) = 0LL;
    if ( v13 )
      std::_Deallocate<16,0>(v13, 0x38uLL);
    *(_QWORD *)a2 = std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Insert_node(
                      (_QWORD *)(a1 + 8),
                      (__int64)&v14,
                      v11);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v15;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
