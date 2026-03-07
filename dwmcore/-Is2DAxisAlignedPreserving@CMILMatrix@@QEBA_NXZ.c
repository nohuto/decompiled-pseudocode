char __fastcall CMILMatrix::Is2DAxisAlignedPreserving(CMILMatrix *this)
{
  char v2; // r11

  if ( CMILMatrix::IsTranslateAndScaleIgnoreZ<1>((__int64)this)
    || (unsigned __int8)CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(this) )
  {
    return 1;
  }
  return v2;
}
