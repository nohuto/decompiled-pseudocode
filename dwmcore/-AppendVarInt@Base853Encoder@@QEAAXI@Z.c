void __fastcall Base853Encoder::AppendVarInt(Base853Encoder *this, unsigned int a2)
{
  unsigned int i; // ebx

  for ( i = a2; i != (i & 0x7F); i >>= 7 )
    Base853Encoder::AppendByte(this, i | 0x80);
  if ( i || *((_DWORD *)this + 3) )
    Base853Encoder::AppendByte(this, i);
  else
    ++*((_DWORD *)this + 4);
}
