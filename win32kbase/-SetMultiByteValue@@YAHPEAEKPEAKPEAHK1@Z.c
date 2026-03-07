__int64 __fastcall SetMultiByteValue(
        unsigned __int8 *a1,
        unsigned int a2,
        unsigned int *a3,
        int *a4,
        unsigned int a5,
        unsigned int *a6)
{
  int v6; // eax
  unsigned int v7; // r11d
  __int64 v8; // r10
  int *v9; // rdi
  unsigned int v11; // ebx
  unsigned int v12; // r9d
  char v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r10
  unsigned __int8 v16; // al

  v6 = *a4;
  v7 = 0;
  v8 = *a3;
  v9 = a4;
  if ( (unsigned int)*a4 <= 1 )
  {
    v11 = 1;
    v12 = 1;
LABEL_5:
    v13 = 0;
    goto LABEL_9;
  }
  if ( v6 <= 127 )
  {
    v11 = 8;
    v12 = 1;
    goto LABEL_5;
  }
  if ( v6 > 0x7FFF )
  {
    v11 = 32;
    v12 = 4;
    v13 = 2;
  }
  else
  {
    v11 = 16;
    v13 = 1;
    v12 = 2;
  }
LABEL_9:
  if ( v12 + (_DWORD)v8 + 1 < a2 )
  {
    v14 = v12;
    a1[v8] = byte_1C02A3B70[a5] + v13;
    v15 = (unsigned int)(v8 + 1);
    do
    {
      v16 = *(_BYTE *)v9;
      v9 = (int *)((char *)v9 + 1);
      a1[v15] = v16;
      v15 = (unsigned int)(v15 + 1);
      --v14;
    }
    while ( v14 );
    if ( a6 )
      *a6 = v11;
    *a3 = v15;
    return 1;
  }
  return v7;
}
