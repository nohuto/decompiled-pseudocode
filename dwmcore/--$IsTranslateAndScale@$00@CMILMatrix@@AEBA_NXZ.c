bool __fastcall CMILMatrix::IsTranslateAndScale<1>(__int64 a1)
{
  char IsPure2DUniform; // al
  char v3; // r11

  IsPure2DUniform = CMILMatrix::IsPure2DUniformZ<1>(a1);
  v3 = 0;
  if ( IsPure2DUniform )
    return CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(a1);
  return v3;
}
