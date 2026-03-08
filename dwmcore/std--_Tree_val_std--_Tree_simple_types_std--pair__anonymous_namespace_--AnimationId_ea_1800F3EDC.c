/*
 * XREFs of std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Insert_node @ 0x1800F3EDC
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x180054C80 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     std::map__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Try_emplace__anonymous_namespace_::AnimationId_const_&_ @ 0x18010D9F0 (std--map__anonymous_namespace_--AnimationId_unsigned_int_A0x155a666c--AnimationId--_ea_18010D9F0.c)
 * Callees:
 *     std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Rrotate @ 0x18001E738 (std--_Tree_val_std--_Tree_simple_types_std--pair__anonymous_namespace_--AnimationId_const__unsig.c)
 *     std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Lrotate @ 0x1800F4014 (std--_Tree_val_std--_Tree_simple_types_std--pair__anonymous_namespace_--AnimationId_ea_1800F4014.c)
 */

__int64 __fastcall std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Insert_node(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r9
  _QWORD *v4; // r11
  _QWORD *v6; // rax
  __int64 v8; // rax
  __int64 i; // r10
  __int64 v10; // rax
  __int64 *v11; // rdx
  __int64 v12; // rcx

  ++a1[1];
  v3 = a3;
  v4 = (_QWORD *)*a1;
  v6 = *(_QWORD **)a2;
  *(_QWORD *)(a3 + 8) = *(_QWORD *)a2;
  if ( v6 != v4 )
  {
    if ( *(_DWORD *)(a2 + 8) )
    {
      *v6 = a3;
      if ( v6 == (_QWORD *)*v4 )
        *v4 = a3;
    }
    else
    {
      v6[2] = a3;
      if ( v6 == (_QWORD *)v4[2] )
        v4[2] = a3;
    }
    v8 = *(_QWORD *)(a3 + 8);
    for ( i = a3; ; v8 = *(_QWORD *)(i + 8) )
    {
      if ( *(_BYTE *)(v8 + 24) )
      {
        *(_BYTE *)(v4[1] + 24LL) = 1;
        return v3;
      }
      v10 = *(_QWORD *)(i + 8);
      v11 = *(__int64 **)(v10 + 8);
      v12 = *v11;
      if ( v10 == *v11 )
      {
        v12 = v11[2];
        if ( !*(_BYTE *)(v12 + 24) )
        {
LABEL_22:
          *(_BYTE *)(v10 + 24) = 1;
          *(_BYTE *)(v12 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) + 8LL) + 24LL) = 0;
          i = *(_QWORD *)(*(_QWORD *)(i + 8) + 8LL);
          continue;
        }
        if ( i == *(_QWORD *)(v10 + 16) )
          std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Lrotate(
            a1,
            *(_QWORD *)(i + 8),
            a3,
            v3);
        *(_BYTE *)(*(_QWORD *)(i + 8) + 24LL) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) + 8LL) + 24LL) = 0;
        std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Rrotate(
          (__int64)a1,
          *(_QWORD **)(*(_QWORD *)(i + 8) + 8LL));
      }
      else
      {
        if ( !*(_BYTE *)(v12 + 24) )
          goto LABEL_22;
        if ( i == *(_QWORD *)v10 )
          std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Rrotate(
            (__int64)a1,
            *(_QWORD **)(i + 8));
        *(_BYTE *)(*(_QWORD *)(i + 8) + 24LL) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) + 8LL) + 24LL) = 0;
        std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Lrotate(
          a1,
          *(_QWORD *)(*(_QWORD *)(i + 8) + 8LL),
          a3,
          v3);
      }
    }
  }
  *v4 = a3;
  v4[1] = a3;
  v4[2] = a3;
  *(_BYTE *)(a3 + 24) = 1;
  return v3;
}
