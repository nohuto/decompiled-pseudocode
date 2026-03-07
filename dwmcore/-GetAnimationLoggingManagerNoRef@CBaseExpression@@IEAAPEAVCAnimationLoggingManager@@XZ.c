struct CAnimationLoggingManager *__fastcall CBaseExpression::GetAnimationLoggingManagerNoRef(CBaseExpression *this)
{
  struct CAnimationLoggingManager *result; // rax

  result = (struct CAnimationLoggingManager *)*((_QWORD *)this + 6);
  if ( result )
    return (struct CAnimationLoggingManager *)*((_QWORD *)result + 8);
  return result;
}
