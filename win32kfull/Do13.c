__int64 __fastcall Do13(_BYTE *a1, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  int v5; // ebx
  int i; // r9d
  __int64 result; // rax
  int v9; // edx
  signed __int64 v10; // r8
  __int64 v11; // r11

  v5 = a4 >> 2;
  for ( i = a4 & 3; v5; --v5 )
  {
    *a1 = (*a3 + 2 * (*a3 + 1) + (unsigned int)*a2) >> 2;
    a1[1] = (a3[1] + 2 * (a3[1] + 1) + (unsigned int)a2[1]) >> 2;
    a1[2] = (a3[2] + 2 * (a3[2] + 1) + (unsigned int)a2[2]) >> 2;
    result = a3[3];
    a3 += 4;
    v9 = a2[3];
    a2 += 4;
    a1[3] = (unsigned int)(3 * result + v9 + 2) >> 2;
    a1 += 4;
  }
  if ( i )
  {
    v10 = a3 - a2;
    v11 = a1 - a2;
    do
    {
      result = a2[v10];
      a2[v11] = (3 * (_DWORD)result + (unsigned int)*a2 + 2) >> 2;
      ++a2;
      --i;
    }
    while ( i );
  }
  return result;
}
