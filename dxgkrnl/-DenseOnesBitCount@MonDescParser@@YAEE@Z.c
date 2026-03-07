unsigned __int8 __fastcall MonDescParser::DenseOnesBitCount(MonDescParser *this)
{
  unsigned __int8 result; // al

  result = 8;
  while ( (_BYTE)this != 0xFF )
  {
    --result;
    LOBYTE(this) = ((_BYTE)this + 1) | (unsigned __int8)this;
  }
  return result;
}
