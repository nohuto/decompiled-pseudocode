__int64 __fastcall CNaturalAnimation::SetProperty(CNaturalAnimation *a1, unsigned int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v8; // [rsp+20h] [rbp-18h]

  switch ( a3 )
  {
    case 18:
      v5 = CNaturalAnimation::SetScalarProperty(a1, a2, *a4);
      v4 = v5;
      if ( v5 >= 0 )
        return v4;
      v8 = 559;
      goto LABEL_14;
    case 35:
      v5 = CNaturalAnimation::SetVector2Property(a1, a2, (const struct D2DVector2 *)a4);
      v4 = v5;
      if ( v5 >= 0 )
        return v4;
      v8 = 563;
      goto LABEL_14;
    case 42:
      v5 = CNaturalAnimation::SetTimespanProperty(a1, a2, (const struct TimeSpan *)a4);
      v4 = v5;
      if ( v5 >= 0 )
        return v4;
      v8 = 571;
      goto LABEL_14;
    case 52:
      v5 = CNaturalAnimation::SetVector3Property(a1, a2, (const struct D2DVector3 *)a4);
      v4 = v5;
      if ( v5 >= 0 )
        return v4;
      v8 = 567;
LABEL_14:
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, v8, 0LL);
      return v4;
  }
  v4 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, -2147024809, 0x23Fu, 0LL);
  return v4;
}
