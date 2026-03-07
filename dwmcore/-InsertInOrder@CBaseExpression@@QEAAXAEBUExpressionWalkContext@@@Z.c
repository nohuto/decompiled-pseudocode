void __fastcall CBaseExpression::InsertInOrder(CBaseExpression *this, const struct ExpressionWalkContext *a2)
{
  char v2; // bp
  int v3; // eax
  char v6; // cl
  unsigned int v7; // ecx
  bool v8; // zf
  __int64 i; // rsi
  __int64 v10; // rcx

  v2 = 0;
  v3 = *((_DWORD *)this + 39) + 1;
  *((_DWORD *)this + 39) = v3;
  if ( v3 > 1 )
    goto LABEL_5;
  v6 = 0;
  if ( *((_BYTE *)a2 + 8) && *((_QWORD *)this + 28) != *(_QWORD *)a2 )
  {
    *((_QWORD *)this + 28) = *(_QWORD *)a2;
    v6 = 1;
  }
  if ( *((_QWORD *)this + 20) == *(_QWORD *)a2 && !v6 )
    goto LABEL_5;
  v7 = CBaseExpression::s_recursionLevel;
  if ( CBaseExpression::s_recursionLevel <= 0x10 )
  {
    v2 = 1;
    v8 = (*((_BYTE *)this + 232) & 2) == 0;
    ++CBaseExpression::s_recursionLevel;
    if ( v8 )
    {
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 66); i = (unsigned int)(i + 1) )
        CBaseExpression::InsertInOrder(*(CBaseExpression **)(*((_QWORD *)this + 30) + 8 * i), a2);
    }
    if ( *((_DWORD *)this + 53) == 90 )
    {
      v10 = *(_QWORD *)(*((_QWORD *)this + 23) + 16LL);
      if ( v10 )
        CInteractionTracker::InsertDependenciesForProperty(v10, a2, *((unsigned int *)this + 48));
    }
    (*(void (__fastcall **)(CBaseExpression *, const struct ExpressionWalkContext *))(*(_QWORD *)this + 200LL))(
      this,
      a2);
    if ( (*((_BYTE *)this + 216) & 2) != 0 )
      CExpressionManager::AddSortedAnimation(*(CExpressionManager **)(*((_QWORD *)this + 2) + 424LL), this);
LABEL_5:
    v7 = CBaseExpression::s_recursionLevel;
  }
  *((_QWORD *)this + 20) = *(_QWORD *)a2;
  if ( v2 )
    CBaseExpression::s_recursionLevel = v7 - 1;
  --*((_DWORD *)this + 39);
}
