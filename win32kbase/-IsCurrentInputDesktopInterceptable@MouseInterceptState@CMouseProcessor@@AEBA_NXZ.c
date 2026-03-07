bool __fastcall CMouseProcessor::MouseInterceptState::IsCurrentInputDesktopInterceptable(
        CMouseProcessor::MouseInterceptState *this)
{
  char v1; // bl

  v1 = 0;
  if ( *((_BYTE *)this + 16) )
    return *((_QWORD *)this + 3) == ApiSetEdtionGetInputDesktopId();
  return v1;
}
