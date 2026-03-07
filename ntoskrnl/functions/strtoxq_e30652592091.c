unsigned __int64 __fastcall strtoxq(__int64 a1, unsigned __int8 *a2, unsigned __int8 **a3, signed int a4, int a5)
{
  signed int v5; // r14d
  __int64 v7; // rbp
  unsigned __int8 *v8; // rbx
  unsigned __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  int v13; // esi
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // ecx
  __int64 v18; // r8
  unsigned __int8 *v19; // rbx
  unsigned __int64 v22; // [rsp+80h] [rbp+18h]

  v5 = a4;
  if ( a3 )
    *a3 = a2;
  if ( !a2 || a4 && (unsigned int)(a4 - 2) > 0x22 )
  {
    xHalTimerWatchdogStop();
    return 0LL;
  }
  v7 = *a2;
  v8 = a2 + 1;
  v9 = 0LL;
  if ( (*(_BYTE *)(_pctype_func(a1, a2) + 2 * v7) & 8) != 0 )
  {
    do
    {
      do
        v12 = *v8++;
      while ( (_BYTE)v12 == (_BYTE)v7 );
      LOBYTE(v7) = v12;
    }
    while ( (*(_BYTE *)(_pctype_func(v11, v10) + 2 * v12) & 8) != 0 );
  }
  v13 = a5;
  if ( (_BYTE)v7 == 45 )
  {
    v13 = a5 | 2;
  }
  else if ( (_BYTE)v7 != 43 )
  {
    goto LABEL_13;
  }
  LOBYTE(v7) = *v8++;
LABEL_13:
  if ( v5 )
  {
    if ( v5 != 16 || (_BYTE)v7 != 48 )
      goto LABEL_23;
    goto LABEL_21;
  }
  if ( (_BYTE)v7 == 48 )
  {
    if ( ((*v8 - 88) & 0xDF) != 0 )
    {
      v5 = 8;
      goto LABEL_23;
    }
    v5 = 16;
LABEL_21:
    if ( ((*v8 - 88) & 0xDF) == 0 )
    {
      LOBYTE(v7) = v8[1];
      v8 += 2;
    }
    goto LABEL_23;
  }
  v5 = 10;
LABEL_23:
  v14 = v5;
  v15 = 0xFFFFFFFFFFFFFFFFuLL % v5;
  v22 = 0xFFFFFFFFFFFFFFFFuLL / v5;
  while ( 1 )
  {
    if ( (*(_BYTE *)(_pctype_func(v14, v15) + 2LL * (unsigned __int8)v7) & 4) != 0 )
    {
      v14 = (unsigned int)((char)v7 - 48);
    }
    else
    {
      if ( (*(_WORD *)(_pctype_func(v16, v15) + 2LL * (unsigned __int8)v7) & 0x103) == 0 )
        break;
      v17 = (char)v7 - 32;
      if ( (unsigned __int8)(v7 - 97) > 0x19u )
        v17 = (char)v7;
      v14 = (unsigned int)(v17 - 55);
    }
    if ( (unsigned int)v14 >= v5 )
      break;
    v13 |= 8u;
    if ( v9 < v22 )
    {
      v18 = (unsigned int)v14;
LABEL_40:
      v9 = v18 + v5 * v9;
      goto LABEL_41;
    }
    if ( v9 == v22 )
    {
      v18 = (unsigned int)v14;
      v15 = 0xFFFFFFFFFFFFFFFFuLL % v5;
      if ( (unsigned int)v14 <= v15 )
        goto LABEL_40;
    }
    v13 |= 4u;
    if ( !a3 )
      break;
LABEL_41:
    LOBYTE(v7) = *v8++;
  }
  v19 = v8 - 1;
  if ( (v13 & 8) != 0 )
  {
    if ( (v13 & 4) == 0 )
    {
      if ( (v13 & 1) != 0 )
        goto LABEL_53;
      if ( (v13 & 2) != 0 )
      {
        if ( v9 <= 0x8000000000000000uLL )
          goto LABEL_53;
LABEL_51:
        v9 = 0x8000000000000000uLL;
        goto LABEL_53;
      }
      if ( v9 <= 0x7FFFFFFFFFFFFFFFLL )
        goto LABEL_53;
    }
    if ( (v13 & 1) != 0 )
    {
      v9 = -1LL;
      goto LABEL_53;
    }
    if ( (v13 & 2) == 0 )
    {
      v9 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_53;
    }
    goto LABEL_51;
  }
  if ( a3 )
    v19 = a2;
  v9 = 0LL;
LABEL_53:
  if ( a3 )
    *a3 = v19;
  if ( (v13 & 2) != 0 )
    return -(__int64)v9;
  return v9;
}
