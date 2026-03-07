void __fastcall SimplifyFilter(unsigned int a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  BOOL v4; // r10d
  __int64 v6; // r11
  __int64 v7; // r9
  int *v8; // rcx
  int v9; // eax

  v4 = 0;
  *a3 = 0;
  if ( a1 )
  {
    v6 = a1;
    do
    {
      if ( ((*(_DWORD *)a2 - 5242880) & 0xFFEFFFFF) != 0 )
      {
        v7 = (unsigned int)*a3;
        v8 = (int *)(a4 + 56 * v7);
        *(_OWORD *)v8 = *(_OWORD *)a2;
        *((_OWORD *)v8 + 1) = *(_OWORD *)(a2 + 16);
        *((_OWORD *)v8 + 2) = *(_OWORD *)(a2 + 32);
        *((_QWORD *)v8 + 6) = *(_QWORD *)(a2 + 48);
        if ( v4 )
        {
          v9 = *v8;
          if ( (*v8 & 0xFF00000) != 0 )
          {
            switch ( v9 )
            {
              case 0x100000:
                *v8 = 3145728;
                break;
              case 0x200000:
                *v8 = 0x400000;
                break;
              case 0x300000:
                *v8 = 0x100000;
                break;
              case 0x400000:
                *v8 = 0x200000;
                break;
            }
          }
          else
          {
            *v8 = v9 ^ 0x10000;
          }
        }
        *a3 = v7 + 1;
      }
      else
      {
        v4 = !v4;
      }
      a2 += 56LL;
      --v6;
    }
    while ( v6 );
  }
}
