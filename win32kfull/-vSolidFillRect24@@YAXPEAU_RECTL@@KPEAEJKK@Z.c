void __fastcall vSolidFillRect24(struct _RECTL *a1, int a2, unsigned __int8 *a3, int a4, unsigned int a5)
{
  int v7; // r10d
  LONG *p_bottom; // r11
  int v9; // r8d
  int v10; // ecx
  unsigned __int8 *v11; // r9
  int v12; // edx
  int i; // eax

  v7 = a2;
  if ( a2 )
  {
    p_bottom = &a1->bottom;
    do
    {
      v9 = *(p_bottom - 3);
      v10 = *p_bottom - *(p_bottom - 2);
      v11 = &a3[3 * v9 + a4 * *(p_bottom - 2)];
      v12 = *(p_bottom - 1) - v9;
      if ( *p_bottom != *(p_bottom - 2) )
      {
        do
        {
          --v10;
          for ( i = v12; i; --i )
          {
            *(_WORD *)v11 = a5;
            v11[2] = BYTE2(a5);
            v11 += 3;
          }
          v11 += a4 - 3 * v12;
        }
        while ( v10 );
      }
      p_bottom += 4;
      --v7;
    }
    while ( v7 );
  }
}
