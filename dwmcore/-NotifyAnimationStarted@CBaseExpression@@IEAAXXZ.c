void __fastcall CBaseExpression::NotifyAnimationStarted(CBaseExpression *this)
{
  bool v1; // zf
  CAnimationLoggingManager *AnimationLoggingManagerNoRef; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  struct CResource *v5; // r8
  unsigned int v6; // r9d

  v1 = (*((_BYTE *)this + 232) & 4) == 0;
  *((_DWORD *)this + 72) = 4;
  if ( !v1 )
  {
    AnimationLoggingManagerNoRef = CBaseExpression::GetAnimationLoggingManagerNoRef(this);
    CAnimationLoggingManager::LogAnimationStarted(
      AnimationLoggingManagerNoRef,
      *(_QWORD *)(v4 + 168),
      v5,
      v6,
      *(_DWORD *)(v3 + 192));
  }
}
