char __fastcall HexFromUchar(unsigned __int8 a1, _BYTE *a2, unsigned int a3)
{
  char result; // al

  if ( a3 >= 2 )
  {
    *a2 = `HexFromUchar'::`2'::hexDigits[(unsigned __int64)a1 >> 4];
    result = `HexFromUchar'::`2'::hexDigits[a1 & 0xF];
    a2[1] = result;
  }
  return result;
}
