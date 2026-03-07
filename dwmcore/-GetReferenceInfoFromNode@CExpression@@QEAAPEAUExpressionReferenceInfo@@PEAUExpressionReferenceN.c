struct ExpressionReferenceInfo *__fastcall CExpression::GetReferenceInfoFromNode(
        CExpression *this,
        struct ExpressionReferenceNode *a2)
{
  __int64 v2; // rax

  v2 = *((unsigned int *)a2 + 1);
  if ( (unsigned int)v2 >= *((_DWORD *)this + 110) )
    return 0LL;
  else
    return (struct ExpressionReferenceInfo *)(*((_QWORD *)this + 54) + 24 * v2);
}
