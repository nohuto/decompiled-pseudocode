__int64 __fastcall CScalar::OnAddBinding(CScalar *this, struct CBaseAnimation::AnimationBinding *a2)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  v2 = CBaseAnimation::RegisterAnimateResource(this);
  v4 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x45u, 0LL);
  return v4;
}
