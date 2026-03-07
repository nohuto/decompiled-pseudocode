void __fastcall CConditionalExpression::InsertDependenciesInOrder(
        CConditionalExpression *this,
        const struct ExpressionWalkContext *a2)
{
  CBaseExpression **v2; // rbp
  CBaseExpression **i; // rbx
  CBaseExpression *v6; // rcx
  CBaseExpression *v7; // rcx

  v2 = (CBaseExpression **)*((_QWORD *)this + 44);
  for ( i = (CBaseExpression **)*((_QWORD *)this + 43); i != v2; i += 2 )
  {
    if ( *i )
      CBaseExpression::InsertInOrder(*i, a2);
    v6 = i[1];
    if ( v6 )
      CBaseExpression::InsertInOrder(v6, a2);
  }
  v7 = (CBaseExpression *)*((_QWORD *)this + 46);
  if ( v7 )
    CBaseExpression::InsertInOrder(v7, a2);
}
