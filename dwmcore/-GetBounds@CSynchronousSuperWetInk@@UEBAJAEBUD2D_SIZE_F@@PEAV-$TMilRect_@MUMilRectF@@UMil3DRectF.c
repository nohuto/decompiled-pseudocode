__int64 __fastcall CSynchronousSuperWetInk::GetBounds(__int64 a1, __int64 a2, _OWORD *a3)
{
  int *v3; // rdx
  _DWORD *v4; // r8
  __int64 v5; // r9
  int v6; // xmm1_4
  _OWORD *v7; // rcx
  _DWORD *v8; // r8
  int v10; // xmm0_4
  __int64 v11; // rcx
  int Bounds; // eax
  unsigned int v13; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  if ( !CSynchronousSuperWetInk::IsSuperWetCompatible((CSynchronousSuperWetInk *)(a1 - 312)) )
    return 0LL;
  if ( *(_DWORD *)(v5 - 140) == 2 )
  {
    v6 = *v3;
    if ( COERCE_FLOAT(*v3 & _xmm) >= 0.0000011920929 || COERCE_FLOAT(v3[1] & _xmm) >= 0.0000011920929 )
    {
      v10 = v3[1];
      *v4 = 0;
      v4[1] = 0;
      v4[2] = v6;
      v4[3] = v10;
    }
    else if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)(v5 - 240)) )
    {
      *v8 = 0;
      v8[1] = 0;
      v8[2] = 1065353216;
      v8[3] = 1065353216;
    }
    else
    {
      *(_OWORD *)v8 = *v7;
    }
    return 0LL;
  }
  v11 = *(_QWORD *)(v5 - 128);
  if ( !v11 )
    return 0LL;
  Bounds = CCompositionSurfaceBitmap::GetBounds(v11 + 224, (__int64)v3, v4);
  v13 = Bounds;
  if ( Bounds >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB7,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\synchronoussuperwetink.cpp",
    (const char *)(unsigned int)Bounds);
  return v13;
}
