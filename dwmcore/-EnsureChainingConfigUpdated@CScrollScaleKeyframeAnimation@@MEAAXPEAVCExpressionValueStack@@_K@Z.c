void __fastcall CScrollScaleKeyframeAnimation::EnsureChainingConfigUpdated(
        CScrollScaleKeyframeAnimation *this,
        struct CExpressionValueStack *a2)
{
  __int64 v3; // rax
  CExpressionValue *v4; // rax
  float *v5; // rbx
  unsigned int v6; // eax
  unsigned int v7; // r10d
  _BYTE v8[88]; // [rsp+20h] [rbp-58h] BYREF

  v3 = (unsigned int)(*((_DWORD *)a2 + 4) - 1);
  if ( (unsigned int)v3 < *((_DWORD *)a2 + 12) )
  {
    v5 = (float *)(*((_QWORD *)a2 + 3) + 80 * v3);
  }
  else
  {
    v4 = CExpressionValue::CExpressionValue((CExpressionValue *)v8);
    v5 = (float *)&CExpressionValueStack::s_emptyValue;
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v4);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v8);
  }
  v6 = CInteractionTracker::BoundaryFromValue(*((_QWORD *)this + 73), *v5, 2u);
  CScrollKeyframeAnimation::UpdateChainingConfigIfBoundaryStateChanges(this, v7, v6);
}
