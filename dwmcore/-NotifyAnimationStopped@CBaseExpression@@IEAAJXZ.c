__int64 __fastcall CBaseExpression::NotifyAnimationStopped(CBaseExpression *this)
{
  unsigned int v1; // edi
  __int64 v4; // rcx
  int v5; // r9d
  int v6; // eax
  unsigned int v7; // ecx

  v1 = 0;
  if ( *((_DWORD *)this + 72) == 4 && (*((_BYTE *)this + 216) & 2) != 0 )
  {
    *((_DWORD *)this + 72) = 2;
    if ( (CNotificationResource::ShouldNotify(this) || CPtrArrayBase::GetCount((CPtrArrayBase *)(v4 + 24)))
      && (v6 = CExpressionManager::QueueAnimationStateChange(
                 *(_QWORD *)(*((_QWORD *)this + 2) + 424LL),
                 v5,
                 (int *)this),
          v1 = v6,
          v6 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x5AAu, 0LL);
    }
    else if ( (*(unsigned __int8 (__fastcall **)(CBaseExpression *))(*(_QWORD *)this + 248LL))(this) )
    {
      CExpressionManager::EnsureAutoCompleteOnOccludedAnimationRemoved(
        *(CExpressionManager **)(*((_QWORD *)this + 2) + 424LL),
        this);
    }
  }
  return v1;
}
