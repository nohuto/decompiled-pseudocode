void __fastcall CExpressionManager::RemoveExpressionToBeRemoved(CExpressionManager *this, struct CBaseExpression *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 appended; // rax
  _QWORD *v6; // r11
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  struct CBaseExpression *v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = a2;
  std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::find<void>(
    (unsigned __int64)this + 656,
    &v10,
    (const unsigned __int8 *)&v11);
  v4 = *((_QWORD *)this + 83);
  if ( v10 != v4 )
  {
    appended = std::_Fnv1a_append_bytes(v3, (const unsigned __int8 *const)(v10 + 16), 8uLL);
    v7 = *((_QWORD *)this + 85);
    v8 = 2 * (*((_QWORD *)this + 88) & appended);
    if ( *(_QWORD **)(v7 + 16 * (*((_QWORD *)this + 88) & appended) + 8) == v6 )
    {
      if ( *(_QWORD **)(v7 + 16 * (*((_QWORD *)this + 88) & appended)) == v6 )
        *(_QWORD *)(v7 + 16 * (*((_QWORD *)this + 88) & appended)) = v4;
      else
        v4 = v6[1];
      *(_QWORD *)(v7 + 8 * v8 + 8) = v4;
    }
    else if ( *(_QWORD **)(v7 + 16 * (*((_QWORD *)this + 88) & appended)) == v6 )
    {
      *(_QWORD *)(v7 + 16 * (*((_QWORD *)this + 88) & appended)) = *v6;
    }
    v9 = *v6;
    --*((_QWORD *)this + 84);
    *(_QWORD *)v6[1] = v9;
    *(_QWORD *)(v9 + 8) = v6[1];
    std::_Deallocate<16,0>(v6, 0x18uLL);
  }
}
