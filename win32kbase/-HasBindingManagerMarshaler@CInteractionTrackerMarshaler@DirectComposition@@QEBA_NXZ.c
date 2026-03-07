bool __fastcall DirectComposition::CInteractionTrackerMarshaler::HasBindingManagerMarshaler(
        DirectComposition::CInteractionTrackerMarshaler *this)
{
  bool v2; // zf

  if ( (unsigned int)Feature_503751999__private_IsEnabledDeviceUsage() )
    v2 = *((_QWORD *)this + 56) == 0LL;
  else
    v2 = *((_QWORD *)this + 57) == 0LL;
  return !v2;
}
