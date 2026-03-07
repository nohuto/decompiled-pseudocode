int *__fastcall DecomposeRectangleEdgeFlags(int a1, int *a2, int *a3, int *a4, int *a5)
{
  int v6; // ecx
  int v7; // r10d
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // r11d
  int *result; // rax

  v6 = a1 & 0x3000000;
  v7 = 3;
  if ( v6 == 0x1000000 )
  {
    v8 = 1;
  }
  else if ( v6 == 0x2000000 )
  {
    v8 = 2;
  }
  else
  {
    v8 = 3;
    if ( v6 != 50331648 )
      v8 = 0;
  }
  *a2 = v8;
  switch ( a1 & 3 )
  {
    case 1:
      v9 = 1;
      break;
    case 2:
      v9 = 2;
      break;
    case 3:
      v9 = 3;
      break;
    default:
      v9 = 0;
      break;
  }
  *a3 = v9;
  v10 = a1 & 0x300;
  if ( v10 == 256 )
  {
    v11 = 1;
  }
  else if ( v10 == 512 )
  {
    v11 = 2;
  }
  else
  {
    v11 = 3;
    if ( v10 != 768 )
      v11 = 0;
  }
  *a4 = v11;
  v12 = a1 & 0x30000;
  if ( v12 == 0x10000 )
  {
    v7 = 1;
  }
  else if ( v12 == 0x20000 )
  {
    v7 = 2;
  }
  else if ( v12 != 196608 )
  {
    v7 = 0;
  }
  result = a5;
  *a5 = v7;
  return result;
}
