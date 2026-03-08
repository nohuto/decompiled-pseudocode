/*
 * XREFs of strtoxlX @ 0x1403D3030
 * Callers:
 *     strtol @ 0x1403D3258 (strtol.c)
 *     strtolX @ 0x1403D3288 (strtolX.c)
 *     strtoul @ 0x1403D32B8 (strtoul.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403023F0 (xHalTimerWatchdogStop.c)
 *     __pctype_func @ 0x1403D7BE4 (__pctype_func.c)
 */

__int64 __fastcall strtoxlX(__int64 a1, unsigned __int8 *a2, unsigned __int8 **a3, unsigned int a4, int a5, int a6)
{
  unsigned int v6; // r14d
  __int64 v9; // rbp
  unsigned __int8 *v10; // rdi
  unsigned int v11; // ebx
  __int64 v12; // rcx
  int v13; // esi
  __int64 v14; // rdx
  unsigned int v15; // r12d
  __int64 v16; // rcx
  int v17; // ecx
  unsigned __int8 *v18; // rdi

  v6 = a4;
  if ( a3 )
    *a3 = a2;
  if ( !a2 || a4 && a4 - 2 > 0x22 )
  {
    xHalTimerWatchdogStop();
    return 0LL;
  }
  v9 = *a2;
  v10 = a2 + 1;
  v11 = 0;
  while ( (*(_BYTE *)(((__int64 (*)(void))_pctype_func)() + 2 * v9) & 8) != 0 )
    v9 = *v10++;
  v13 = a5;
  if ( (_BYTE)v9 == 45 )
  {
    v13 = a5 | 2;
  }
  else if ( (_BYTE)v9 != 43 )
  {
    goto LABEL_13;
  }
  LOBYTE(v9) = *v10++;
LABEL_13:
  if ( v6 )
  {
    if ( v6 - 2 > 0x22 )
    {
      if ( a3 )
        *a3 = a2;
      return 0LL;
    }
    if ( v6 == 16 && (_BYTE)v9 == 48 )
      goto LABEL_25;
  }
  else if ( (_BYTE)v9 == 48 )
  {
    if ( ((*v10 - 88) & 0xDF) == 0 )
    {
      v6 = 16;
LABEL_25:
      if ( ((*v10 - 88) & 0xDF) == 0 )
      {
        LOBYTE(v9) = v10[1];
        v10 += 2;
      }
      goto LABEL_27;
    }
    v6 = 8;
  }
  else
  {
    v6 = 10;
  }
LABEL_27:
  v14 = 0xFFFFFFFF % v6;
  v15 = 0xFFFFFFFF / v6;
  while ( 1 )
  {
    if ( (*(_BYTE *)(_pctype_func(v12, v14) + 2LL * (unsigned __int8)v9) & 4) != 0 )
    {
      v12 = (unsigned int)((char)v9 - 48);
    }
    else
    {
      if ( (*(_WORD *)(_pctype_func(v16, v14) + 2LL * (unsigned __int8)v9) & 0x103) == 0 )
        break;
      v17 = (char)v9 - 32;
      if ( (unsigned __int8)(v9 - 97) > 0x19u )
        v17 = (char)v9;
      v12 = (unsigned int)(v17 - 55);
    }
    if ( (unsigned int)v12 >= v6 )
      break;
    v13 |= 8u;
    if ( a6 || v11 < v15 || v11 == v15 && (v14 = 0xFFFFFFFF % v6, (unsigned int)v12 <= 0xFFFFFFFF % v6) )
    {
      v11 = v12 + v6 * v11;
    }
    else
    {
      v13 |= 4u;
      if ( !a3 )
        break;
    }
    LOBYTE(v9) = *v10++;
  }
  v18 = v10 - 1;
  if ( (v13 & 8) == 0 )
  {
    if ( a3 )
      v18 = a2;
    v11 = 0;
    goto LABEL_56;
  }
  if ( (v13 & 4) != 0 )
    goto LABEL_52;
  if ( (v13 & 1) == 0 )
  {
    if ( (v13 & 2) != 0 )
    {
      if ( v11 <= 0x80000000 )
        goto LABEL_56;
LABEL_52:
      if ( !a6 )
      {
        if ( (v13 & 1) != 0 )
          v11 = -1;
        else
          v11 = ((v13 & 2) != 0) + 0x7FFFFFFF;
      }
      goto LABEL_56;
    }
    if ( v11 > 0x7FFFFFFF )
      goto LABEL_52;
  }
LABEL_56:
  if ( a3 )
    *a3 = v18;
  if ( (v13 & 2) != 0 )
    return -v11;
  return v11;
}
