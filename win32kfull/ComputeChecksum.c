__int64 __fastcall ComputeChecksum(char *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r9d
  unsigned int i; // r8d
  char v5; // al
  __int16 v7; // [rsp+10h] [rbp+10h]

  v3 = HIWORD(a2);
  if ( (a3 & 1) != 0 )
  {
    LOWORD(a2) = (unsigned __int8)*a1 + (_WORD)a2;
    LOWORD(v3) = a2 + v3;
    ++a1;
  }
  for ( i = a3 >> 1; i; --i )
  {
    v5 = *a1;
    a1 += 2;
    LOBYTE(v7) = v5;
    HIBYTE(v7) = *(a1 - 1);
    LOWORD(a2) = v7 + a2;
    LOWORD(v3) = a2 + v3;
  }
  return (unsigned __int16)a2 | ((unsigned __int16)v3 << 16);
}
