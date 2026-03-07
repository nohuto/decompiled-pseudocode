void __fastcall KeyframeInterpolation::Interpolate(
        __int64 a1,
        double a2,
        unsigned int a3,
        struct _D3DCOLORVALUE *a4,
        struct _D3DCOLORVALUE *a5,
        struct _D3DCOLORVALUE *a6)
{
  int v6; // edx
  float v7; // xmm1_4
  int v8; // edx
  __int64 v9; // rdx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  struct _D3DCOLORVALUE *v13; // rax
  char r_low; // al
  void *retaddr; // [rsp+48h] [rbp+0h]

  v6 = *(_DWORD *)(a1 + 16);
  if ( !v6 )
    goto LABEL_2;
  v8 = v6 - 1;
  if ( v8 )
  {
    v9 = (unsigned int)(v8 - 1);
    if ( (_DWORD)v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( !v11 )
        {
LABEL_2:
          v7 = a2;
          KeyframeInterpolation::ExpressionValueLerp(a3, v7, (__int64)a4, (__int64)a5, (__int64)a6);
          return;
        }
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( v12 != 1 )
            ModuleFailFastForHRESULT(2147942487LL, retaddr);
          v13 = a5;
          if ( a2 < 1.0 )
            v13 = a4;
          r_low = LOBYTE(v13->r);
          LODWORD(a6[4].b) = 17;
          LOBYTE(a6->r) = r_low;
          LOBYTE(a6[4].a) = 1;
        }
        else
        {
          InterpolateInLinearGamma__lambda_d9ec8cec7b93f46268f106f2fd316fdd_(a4, a5, a6);
        }
      }
      else
      {
        InterpolateInLinearGamma__lambda_3407e8815db8ff72220510f30343e01a_(a4, a5, a6);
      }
    }
    else
    {
      KeyframeInterpolation::InterpolateHsl(a2, v9, &a4->r, &a5->r, (__int64)a6);
    }
  }
  else
  {
    KeyframeInterpolation::InterpolateSpherical(a1, a3, a4, a5, a6);
  }
}
