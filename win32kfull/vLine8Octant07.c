__int64 __fastcall vLine8Octant07(int *a1, _BYTE *a2, int a3, char a4)
{
  int v4; // r10d
  int v5; // edi
  int v6; // ebx
  int v7; // r11d
  __int64 result; // rax

  v4 = a1[6];
  v5 = a1[4];
  v6 = a1[5];
  v7 = a1[3];
  result = a1[1];
LABEL_4:
  a2 += result;
  while ( 1 )
  {
    *a2 = a4;
    if ( !--v7 )
      return result;
    ++a2;
    v4 += v6;
    if ( v4 >= 0 )
    {
      v4 -= v5;
      result = a3;
      goto LABEL_4;
    }
  }
}
