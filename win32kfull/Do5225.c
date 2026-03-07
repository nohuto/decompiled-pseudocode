unsigned __int64 __fastcall Do5225(_BYTE *a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 *a4, int a5)
{
  unsigned __int64 result; // rax
  int v8; // ebp
  int i; // r11d
  int v12; // r8d
  int v13; // edx
  int v14; // r9d
  signed __int64 v15; // rdi
  signed __int64 v16; // rbx
  __int64 v17; // rsi
  int v18; // r8d
  int v19; // r9d
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v8 = a5 >> 2;
  for ( i = a5 & 3; v8; --v8 )
  {
    *a1 = (*a2 + *a4 + 2 * (*a3 + 2 * (*a2 + *a3 + *a4 + 4 * ((unsigned int)*a3 + 1)))) >> 5;
    a1[1] = (a2[1] + a4[1] + 2 * (a3[1] + 2 * (a2[1] + a3[1] + a4[1] + 4 * ((unsigned int)a3[1] + 1)))) >> 5;
    a1[2] = (a2[2] + a4[2] + 2 * (a3[2] + 2 * (a2[2] + a3[2] + a4[2] + 4 * ((unsigned int)a3[2] + 1)))) >> 5;
    v12 = a3[3];
    a3 += 4;
    v13 = a4[3];
    a4 += 4;
    v14 = a2[3];
    a2 += 4;
    result = (unsigned int)(v12 + 2 * (v14 + v12 + v13 + 4 * (v12 + 1)));
    a1[3] = (unsigned int)(v14 + v13 + 2 * result) >> 5;
    a1 += 4;
  }
  if ( (a5 & 3) != 0 )
  {
    v15 = a3 - a2;
    v16 = a4 - a2;
    v17 = a1 - a2;
    do
    {
      v18 = *a2;
      v19 = a2[v16];
      result = a2[v15] + 2 * (v19 + a2[v15] + v18 + 4 * ((unsigned int)a2[v15] + 1));
      (a2++)[v17] = (unsigned int)(v19 + v18 + 2 * result) >> 5;
      --i;
    }
    while ( i );
  }
  return result;
}
