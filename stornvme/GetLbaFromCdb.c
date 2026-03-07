__int64 __fastcall GetLbaFromCdb(_BYTE *a1, int a2)
{
  char v2; // al
  __int64 v4; // [rsp+18h] [rbp+18h]

  if ( a2 == 16 )
  {
    HIBYTE(v4) = a1[2];
    BYTE6(v4) = a1[3];
    BYTE5(v4) = a1[4];
    BYTE4(v4) = a1[5];
    BYTE3(v4) = a1[6];
    BYTE2(v4) = a1[7];
    BYTE1(v4) = a1[8];
    v2 = a1[9];
  }
  else
  {
    HIBYTE(v4) = 0;
    *(_DWORD *)((char *)&v4 + 3) = (unsigned __int8)a1[2];
    BYTE2(v4) = a1[3];
    BYTE1(v4) = a1[4];
    v2 = a1[5];
  }
  LOBYTE(v4) = v2;
  return v4;
}
