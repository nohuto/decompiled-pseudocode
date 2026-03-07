_QWORD *__fastcall std::vector<CConditionalExpression::ConditionExpressionListEntry>::_Emplace_reallocate<CConditionalExpression::ConditionExpressionListEntry>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v6; // rax
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rax
  _QWORD *v14; // rsi
  __int64 v15; // rbp
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // r8
  __int64 v19; // rcx

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v6 + 1;
  v10 = (a1[2] - *a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v3);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = (_QWORD *)(v13 + (v4 & 0xFFFFFFFFFFFFFFF0uLL));
  v15 = v13;
  *v14 = 0LL;
  if ( v14 != a3 )
  {
    *v14 = *a3;
    *a3 = 0LL;
  }
  v16 = a3 + 1;
  v14[1] = 0LL;
  if ( v14 + 1 != a3 + 1 )
  {
    v14[1] = *v16;
    *v16 = 0LL;
  }
  v17 = a1[1];
  v18 = (_QWORD *)v13;
  v19 = *a1;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<CConditionalExpression::ConditionExpressionListEntry *>(v19, a2, v13);
    v17 = a1[1];
    v18 = v14 + 2;
    v19 = a2;
  }
  std::_Uninitialized_move<CConditionalExpression::ConditionExpressionListEntry *>(v19, v17, v18);
  std::vector<CConditionalExpression::ConditionExpressionListEntry>::_Change_array(a1, v15, v9, v3);
  return v14;
}
