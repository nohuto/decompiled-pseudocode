__int64 __fastcall CAnimationTriggerGeneratedT<CAnimationTrigger,CPropertyChangeResource>::SetOrAppendAnimations(
        CResource *this,
        __int64 a2,
        char a3)
{
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // edi
  char v9; // [rsp+68h] [rbp+20h] BYREF

  v5 = CResource::RegisterNNotifiersInternal(this, *(struct CResource ***)(a2 + 8), *(_QWORD *)a2);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xF00u, 0LL);
  }
  else
  {
    if ( !a3 )
      CResource::UnRegisterNotifiers<CBaseExpression>(this);
    std::vector<CBaseExpression *>::insert<CBaseExpression * *,0>((char *)this + 104, &v9, *((_QWORD *)this + 14));
    CAnimationTrigger::OnAnimationsChanged(this);
  }
  return v7;
}
