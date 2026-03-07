char __fastcall CSceneSurfaceMaterialInput::SetSurfaceContentRect(__int64 a1, float *a2)
{
  char result; // al
  _OWORD *v3; // r10
  __int64 *v4; // r11
  __int64 v5; // rax

  result = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(a2, (float *)(a1 + 88));
  if ( !result )
  {
    v5 = *v4;
    *(_OWORD *)(v4 + 11) = *v3;
    return (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v5 + 72))(v4, 0LL, v4);
  }
  return result;
}
