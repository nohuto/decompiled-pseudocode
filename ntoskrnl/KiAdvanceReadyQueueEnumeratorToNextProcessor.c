__int64 __fastcall KiAdvanceReadyQueueEnumeratorToNextProcessor(unsigned int *a1)
{
  unsigned int v1; // r11d
  char v3; // bl
  unsigned int v4; // r8d
  unsigned int v5; // r9d
  char v6; // cl
  bool v7; // zf
  unsigned int v8; // eax
  int v9; // r10d
  __int64 v10; // r9
  char v11; // al

  v1 = *a1;
  v3 = *((_BYTE *)a1 + 9);
  v4 = 0;
  do
  {
    v5 = (unsigned __int8)++*((_BYTE *)a1 + 10);
    if ( v5 >= v1 )
    {
      *((_BYTE *)a1 + 10) = 0;
      LOBYTE(v5) = 0;
    }
    if ( (_BYTE)v5 == v3 )
    {
      v6 = *((_BYTE *)a1 + 8);
      v7 = (a1[1] & ~(1 << v6)) == 0;
      v8 = a1[1] & ~(1 << v6);
      a1[1] = v8;
      if ( v7 )
        return (unsigned int)-2147483622;
      _BitScanReverse(&v8, v8);
      *((_BYTE *)a1 + 8) = v8;
    }
    v9 = 1 << *((_BYTE *)a1 + 8);
    v10 = 6LL * (unsigned __int8)v5;
  }
  while ( ((a1[2 * v10 + 22] | a1[2 * v10 + 23]) & v9) == 0 );
  *((_BYTE *)a1 + 11) = 0;
  v11 = 0;
  if ( (v9 & a1[2 * v10 + 22]) != 0 )
  {
    *((_BYTE *)a1 + 11) = 1;
    v11 = 1;
  }
  if ( (v9 & a1[2 * v10 + 23]) != 0 )
    *((_BYTE *)a1 + 11) = v11 | 2;
  return v4;
}
