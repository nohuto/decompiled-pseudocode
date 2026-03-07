bool __fastcall CAnimationInterpolator::GetInterpolatedValue(
        CAnimationInterpolator *this,
        __int64 a2,
        float *a3,
        bool *a4)
{
  const struct DwmAnimationPrimitive *PrimitiveAtIndex; // rbp
  int v8; // eax
  bool v9; // r13
  const struct DwmAnimationPrimitive *v10; // r12
  bool CurrentPrimitive; // di
  const struct DwmAnimationPrimitive *v12; // rbx
  int v13; // ecx
  __int64 v14; // rax
  float v16; // xmm6_4
  float v17; // xmm0_4

  PrimitiveAtIndex = CAnimationInterpolator::GetPrimitiveAtIndex(this, 0);
  v8 = (***(__int64 (__fastcall ****)(_QWORD))this)(*(_QWORD *)this);
  v9 = 0;
  v10 = CAnimationInterpolator::GetPrimitiveAtIndex(this, v8 - 1);
  if ( !PrimitiveAtIndex )
    return 0;
  CurrentPrimitive = CAnimationInterpolator::FindCurrentPrimitive(this, a2);
  if ( !CurrentPrimitive )
    return CurrentPrimitive;
  v12 = (const struct DwmAnimationPrimitive *)((char *)PrimitiveAtIndex + 32 * *((unsigned int *)this + 2));
  v13 = *(_DWORD *)v12;
  if ( *(_DWORD *)v12 == 4 || v13 == 6 && v12 == v10 )
    v9 = 1;
  while ( ((v13 - 3) & 0xFFFFFFFC) == 0 && v13 != 4 )
  {
    if ( PrimitiveAtIndex == v12 )
      return 0;
    v14 = CAnimationInterpolator::TransformTime(this, v12, a2);
    a2 = v14;
    if ( *((_QWORD *)v12 + 1) < v14 )
      return 0;
    while ( 1 )
    {
      v12 = (const struct DwmAnimationPrimitive *)((char *)v12 - 32);
      if ( *((_QWORD *)v12 + 1) <= v14 )
        break;
      if ( v12 == PrimitiveAtIndex )
        return 0;
    }
    v13 = *(_DWORD *)v12;
  }
  if ( *(_DWORD *)v12 == 1 )
  {
    v17 = CAnimationInterpolator::InterpolateCubic(this, v12, a2);
    goto LABEL_22;
  }
  if ( *(_DWORD *)v12 == 2 )
  {
    v17 = CAnimationInterpolator::InterpolateSinusoidal(this, v12, a2);
LABEL_22:
    v16 = v17;
    goto LABEL_23;
  }
  if ( *(_DWORD *)v12 != 4 )
    return 0;
  v16 = *((float *)v12 + 4);
LABEL_23:
  if ( !_finite(v16) )
    return 0;
  *a3 = v16;
  if ( a4 )
    *a4 = v9;
  return CurrentPrimitive;
}
