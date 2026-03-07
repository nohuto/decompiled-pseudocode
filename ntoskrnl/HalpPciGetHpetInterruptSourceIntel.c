__int64 __fastcall HalpPciGetHpetInterruptSourceIntel(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // r10
  unsigned int v6; // r9d
  _WORD *v7; // r8
  unsigned __int64 v8; // r11
  __int64 v9; // rax
  _WORD *v10; // r10
  _BYTE *v11; // rcx
  _WORD *i; // rax
  __int64 v13; // rdx
  _BYTE *v14; // rax

  v3 = *(unsigned int *)(a1 + 4);
  v6 = -1073741275;
  if ( (unsigned int)v3 >= 0x30 && (*(_BYTE *)(a1 + 37) & 1) != 0 )
  {
    v7 = (_WORD *)(a1 + 48);
    v8 = a1 + v3;
    if ( a1 + 52 <= (unsigned __int64)(a1 + v3) )
    {
      do
      {
        v9 = (unsigned __int16)v7[1];
        if ( (unsigned int)v9 < 4 || (unsigned __int64)v7 + v9 > v8 )
          break;
        v10 = v7;
        v7 = (_WORD *)((char *)v7 + v9);
        if ( !*v10 )
        {
          v11 = v10 + 8;
          for ( i = v10 + 9; i <= v7; i = v14 + 2 )
          {
            v13 = (unsigned __int8)v11[1];
            if ( (unsigned __int8)v13 < 2u )
              break;
            v14 = &v11[v13];
            if ( &v11[v13] > (_BYTE *)v7 )
              break;
            if ( (unsigned __int8)v13 >= 8u && *v11 == 4 && v11[4] == a2 )
            {
              if ( (_BYTE)v13 == 8 && v11[6] < 0x20u && v11[7] < 8u )
              {
                *(_QWORD *)(a3 + 4) = 0LL;
                v6 = 0;
                *(_DWORD *)a3 = 1;
                *(_DWORD *)(a3 + 4) = (unsigned __int16)v10[3];
                *(_BYTE *)(a3 + 8) = v11[5];
                *(_BYTE *)(a3 + 9) = v11[6];
                *(_BYTE *)(a3 + 10) = v11[7];
              }
              else
              {
                return (unsigned int)-1073741637;
              }
              return v6;
            }
            v11 += v13;
          }
        }
      }
      while ( (unsigned __int64)(v7 + 2) <= v8 );
    }
  }
  return v6;
}
