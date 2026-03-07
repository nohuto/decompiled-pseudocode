bool __fastcall CAnimationInterpolator::GetAnimationValue(
        CAnimationInterpolator *this,
        __int64 a2,
        float *a3,
        bool *a4)
{
  bool result; // al
  float v8; // [rsp+44h] [rbp-1Ch] BYREF
  int v9; // [rsp+48h] [rbp-18h] BYREF
  float v10; // [rsp+4Ch] [rbp-14h] BYREF
  signed __int64 v11; // [rsp+50h] [rbp-10h] BYREF

  v8 = 0.0;
  v10 = 0.0;
  v11 = 0LL;
  v9 = 0;
  result = CAnimationInterpolator::GetInterpolatedValue(this, a2, &v8, a4);
  if ( result )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, int *, float *, signed __int64 *))(**(_QWORD **)this + 16LL))(
               *(_QWORD *)this,
               &v9,
               &v10,
               &v11);
    if ( result
      && (!v9 || (result = CAnimationInterpolator::GetAdjustedHandoffValue((__int64)this, a2, v8, v9, v10, v11, &v8))) )
    {
      *a3 = v8;
    }
  }
  return result;
}
