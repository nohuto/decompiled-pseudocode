bool __fastcall CFlipExBuffer::StartCompositionEarly(CFlipExBuffer *this)
{
  bool result; // al

  result = 0;
  if ( *((_BYTE *)this + 627) )
  {
    if ( *((_BYTE *)this + 629) )
      return *((_DWORD *)this + 96) == 0;
  }
  return result;
}
