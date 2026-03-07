__int64 __fastcall sub_1400E63F0(
        unsigned __int8 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned int *a6)
{
  unsigned int v6; // ebx
  __int64 v7; // rdi
  _DWORD *v10; // rcx
  __int64 v11; // rax
  char **v12; // r15
  unsigned int v13; // ebp
  __int64 v14; // rax
  unsigned int v15; // r14d
  unsigned int v16; // r12d
  __int64 v17; // rcx
  _DWORD *v18; // rsi
  __int64 v19; // rcx
  __int128 v20; // xmm0
  _BYTE v22[4]; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v23[4]; // [rsp+3Ch] [rbp-4Ch] BYREF

  v6 = 0;
  v7 = a5;
  *a6 = 0;
  if ( a1 > 5u )
  {
    if ( a1 == 6 || a1 == 7 )
      return v6;
    if ( a1 == 8 )
    {
      v12 = *(char ***)(a5 + 32);
      v13 = 0;
      v14 = a5;
      do
      {
        v14 = *(_QWORD *)(v14 + 16);
        ++v13;
      }
      while ( v14 );
      if ( v13 <= 0x3F )
      {
        v15 = 32 * v13 + 24;
        if ( v12 )
        {
          v16 = 32 * v13 + 24;
          v15 += *(unsigned __int16 *)v12 + 2;
        }
        else
        {
          v16 = 0;
        }
        if ( v15 > a3 )
        {
          v6 = -1073741789;
          if ( a3 >= 4 )
          {
            *(_DWORD *)a4 = v15;
            *a6 = 4;
          }
        }
        else
        {
          sub_1400B6C40((char *)a4, 0, a3);
          *(_DWORD *)a4 = v15;
          *(_DWORD *)(a4 + 8) = v16;
          *(_DWORD *)(a4 + 16) = v13;
          if ( v12 )
          {
            v17 = a4 + v16;
            *(_WORD *)v17 = *(_WORD *)v12;
            sub_1400B6980((char *)(v17 + 2), v12[1], *(unsigned __int16 *)v12);
          }
          if ( v13 )
          {
            v18 = (_DWORD *)(a4 + 40);
            v19 = v13;
            do
            {
              v20 = *(_OWORD *)*(_QWORD *)(v7 + 8);
              *v18 = 528384;
              v18 += 8;
              *((_OWORD *)v18 - 3) = v20;
              *(_BYTE *)(v7 + 41) = 0;
              *(_DWORD *)(v7 + 44) = 0;
              v7 = *(_QWORD *)(v7 + 16);
              --v19;
            }
            while ( v19 );
          }
          *a6 = v15;
        }
        return v6;
      }
      return (unsigned int)-1073741811;
    }
    return (unsigned int)-1073741808;
  }
  if ( a1 != 5 && (!a1 || a1 != 4) )
    return (unsigned int)-1073741808;
  if ( !a5 )
    return (unsigned int)-1073741163;
  if ( a3 < 0x30 )
    return (unsigned int)-1073741811;
  do
  {
    v10 = *(_DWORD **)(v7 + 8);
    if ( *v10 == *(_DWORD *)(a4 + 24)
      && v10[1] == *(_DWORD *)(a4 + 28)
      && v10[2] == *(_DWORD *)(a4 + 32)
      && v10[3] == *(_DWORD *)(a4 + 36) )
    {
      break;
    }
    v7 = *(_QWORD *)(v7 + 16);
  }
  while ( v7 );
  if ( !v7 )
    return (unsigned int)-1073741163;
  if ( a1 == 5 )
  {
    *(_DWORD *)(v7 + 44) = 0;
    *(_QWORD *)(v7 + 24) = 0LL;
    *(_BYTE *)(v7 + 41) = 0;
  }
  else
  {
    v11 = *(_QWORD *)(a4 + 8);
    *(_QWORD *)(v7 + 24) = v11;
    if ( dword_1400DF408 == 2 )
    {
      if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _BYTE *, __int64, _BYTE *, __int64))qword_1400DF3E0)(
                            3LL,
                            v22,
                            4LL,
                            v23,
                            a4) )
        *(_BYTE *)(v7 + 41) = v22[0];
      return (unsigned int)((__int64 (__fastcall *)(__int64, __int64, __int64, _BYTE *, __int64))qword_1400DF3E0)(
                             2LL,
                             v7 + 44,
                             4LL,
                             v23,
                             a4);
    }
    else
    {
      *(_DWORD *)(v7 + 44) = HIDWORD(v11);
      *(_BYTE *)(v7 + 41) = BYTE2(v11);
    }
  }
  return v6;
}
