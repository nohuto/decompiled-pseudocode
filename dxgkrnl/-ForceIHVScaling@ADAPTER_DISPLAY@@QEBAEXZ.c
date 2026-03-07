unsigned __int8 __fastcall ADAPTER_DISPLAY::ForceIHVScaling(ADAPTER_DISPLAY *this)
{
  unsigned __int8 result; // al

  result = 0;
  if ( *((_BYTE *)this + 290) )
  {
    if ( !*((_BYTE *)this + 289) )
      return 1;
  }
  return result;
}
