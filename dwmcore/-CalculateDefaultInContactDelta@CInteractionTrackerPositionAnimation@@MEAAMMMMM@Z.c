float __fastcall CInteractionTrackerPositionAnimation::CalculateDefaultInContactDelta(
        CInteractionTrackerPositionAnimation *this,
        float a2,
        float a3,
        float a4,
        float a5)
{
  if ( (a4 <= a2 || a3 > 0.0) && (a2 <= a5 || a3 < 0.0) )
    return a3;
  else
    return (float)(1.0 - (float)(*(float *)(*((_QWORD *)this + 68) + 16LL) * 0.0099999998)) * a3;
}
