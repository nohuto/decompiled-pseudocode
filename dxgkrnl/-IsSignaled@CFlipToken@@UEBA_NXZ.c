bool __fastcall CFlipToken::IsSignaled(CFlipToken *this)
{
  bool result; // al

  result = 0;
  if ( !*((_QWORD *)this + 12) )
    return *((_BYTE *)this + 89) != 0;
  return result;
}
