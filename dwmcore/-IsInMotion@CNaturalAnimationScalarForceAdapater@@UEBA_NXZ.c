char __fastcall CNaturalAnimationScalarForceAdapater::IsInMotion(CNaturalAnimationScalarForceAdapater *this)
{
  __int64 v1; // rax
  char v2; // bl
  CNaturalAnimation *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rdx
  struct CVector3Force *v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 4);
  v2 = 0;
  v7 = 0LL;
  if ( v1 )
    v3 = *(CNaturalAnimation **)(v1 + 16);
  else
    v3 = 0LL;
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v7);
  CNaturalAnimation::GetVector3Force(v3, &v7);
  if ( CScalarForceEvaluator::IsInMotion((struct CVector3Force *)((char *)v7 + 16))
    || CScalarForceEvaluator::IsInMotion((CScalarForceEvaluator *)(v4 + 84))
    || CScalarForceEvaluator::IsInMotion((CScalarForceEvaluator *)(v5 + 152)) )
  {
    v2 = 1;
  }
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v7);
  return v2;
}
