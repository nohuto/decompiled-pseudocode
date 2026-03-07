void __fastcall Base853Encoder::AppendByte(Base853Encoder *this, unsigned __int8 a2)
{
  int v2; // ebx
  int v4; // r8d

  v2 = a2;
  Base853Encoder::EnsureZeroesAreSerialized(this);
  v4 = *((_DWORD *)this + 3);
  *((_DWORD *)this + 2) |= v2 << (8 * (3 - v4));
  *((_DWORD *)this + 3) = v4 + 1;
  if ( v4 == 3 )
    Base853Encoder::EncodeBlock(this);
}
