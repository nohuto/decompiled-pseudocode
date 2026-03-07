__int64 __fastcall ArrangeFrameControls(int a1, int a2, struct OEMBITMAPSET *a3)
{
  int v4; // r10d
  __int16 v5; // r11
  int v6; // r9d
  _WORD *v7; // r8
  __int64 v8; // rdi
  int v9; // ebx
  unsigned __int16 v10; // ax
  int v11; // edx
  __int16 v12; // ax
  __int16 v13; // r11
  __int16 v14; // ax

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = (_WORD *)((char *)a3 + 16);
  v8 = 93LL;
  do
  {
    v9 = (__int16)v7[2];
    if ( v7[2] )
    {
      v10 = v4 + v6;
      v11 = v9 + v5;
      if ( v11 <= a1 )
        v10 = v6;
      v6 = v10;
      v12 = 0;
      if ( v11 <= a1 )
        v12 = v5;
      v13 = v12;
      v14 = 0;
      if ( v11 <= a1 )
        v14 = v4;
      if ( a2 )
      {
        *v7 = v13;
        v7[1] = v6;
      }
      v4 = (unsigned __int16)v7[3];
      v5 = v9 + v13;
      if ( v14 >= (__int16)v4 )
        LOWORD(v4) = v14;
    }
    v7 += 4;
    --v8;
  }
  while ( v8 );
  return (unsigned int)(v4 + v6);
}
