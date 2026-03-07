char __fastcall UlongToHex(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // r8

  LODWORD(v3) = a3 - 1;
  v4 = a3 - 1;
  if ( (int)v3 >= 0 )
  {
    do
    {
      v3 = a2 & 0xF;
      a2 >>= 4;
      LOBYTE(v3) = `HexFromUchar'::`2'::hexDigits[v3];
      *(_BYTE *)(v4 + a1) = v3;
      --v4;
    }
    while ( v4 >= 0 );
  }
  return v3;
}
