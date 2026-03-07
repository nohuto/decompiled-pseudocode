bool __fastcall CLegacyRenderTarget::IsPrimaryMonitor(CLegacyRenderTarget *this)
{
  bool result; // al

  result = 0;
  if ( *((float *)this + 4507) == 0.0 && *((float *)this + 4508) == 0.0 )
    return *((_BYTE *)this + 18553) != 0;
  return result;
}
