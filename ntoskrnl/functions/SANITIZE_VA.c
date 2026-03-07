__int64 __fastcall SANITIZE_VA(__int64 a1, __int16 a2, char a3)
{
  if ( a3 == 1 )
  {
    if ( ((a2 - 35) & 0xFFF7) != 0 )
      return a1 << 16 >> 16;
    else
      return (unsigned int)a1;
  }
  return a1;
}
