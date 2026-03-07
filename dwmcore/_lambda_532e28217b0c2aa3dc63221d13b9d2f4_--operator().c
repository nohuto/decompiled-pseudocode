void __fastcall lambda_532e28217b0c2aa3dc63221d13b9d2f4_::operator()(
        const struct ExpressionWalkContext **a1,
        _QWORD *a2)
{
  unsigned int *v2; // rsi
  unsigned int *v4; // rbp
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int64 WeakRefToSelf; // rax

  v2 = (unsigned int *)a2[1];
  v4 = &v2[*a2];
  while ( v2 != v4 )
  {
    v5 = *v2;
    v6 = *(_QWORD *)(*((_QWORD *)*a1 + 2) + 424LL);
    WeakRefToSelf = CInteractionTracker::GetWeakRefToSelf();
    CExpressionManager::InsertExpressionsInOrderForTarget(v6, a1[1], WeakRefToSelf, v5);
    ++v2;
  }
}
