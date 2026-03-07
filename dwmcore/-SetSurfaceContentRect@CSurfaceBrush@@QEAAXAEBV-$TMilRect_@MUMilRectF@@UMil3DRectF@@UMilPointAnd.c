__int64 __fastcall CSurfaceBrush::SetSurfaceContentRect(__int64 a1, __int64 a2)
{
  _OWORD *v2; // rbx
  __int64 result; // rax
  _OWORD *v4; // r10
  __int64 *v5; // r11
  __int64 v6; // rax

  v2 = (_OWORD *)(a1 + 152);
  result = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(a2, a1 + 152);
  if ( !(_BYTE)result )
  {
    v6 = *v5;
    *v2 = *v4;
    return (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v6 + 72))(v5, 0LL, v5);
  }
  return result;
}
