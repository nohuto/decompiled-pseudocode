/*
 * XREFs of x64tow_s @ 0x1403D8C8C
 * Callers:
 *     _i64tow_s @ 0x1403D8BF0 (_i64tow_s.c)
 *     _ui64tow_s @ 0x1403D8C50 (_ui64tow_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403023F0 (xHalTimerWatchdogStop.c)
 */

__int64 __fastcall x64tow_s(unsigned __int64 a1, __int16 *a2, unsigned __int64 a3, unsigned int a4, int a5)
{
  unsigned __int64 v7; // r11
  unsigned __int64 v9; // rsi
  __int16 *v10; // rdi
  __int16 *v11; // r8
  unsigned __int64 v12; // rbp
  __int16 *v13; // r9
  unsigned __int64 v14; // rcx
  _WORD *v15; // rdx
  __int16 v16; // ax
  __int16 v17; // cx

  v7 = a1;
  if ( !a2 || !a3 )
    goto LABEL_18;
  *a2 = 0;
  if ( a3 <= (unsigned __int64)(a5 != 0) + 1 )
  {
LABEL_4:
    xHalTimerWatchdogStop();
    return 34LL;
  }
  if ( a4 - 2 <= 0x22 )
  {
    v9 = 0LL;
    v10 = a2;
    if ( a5 )
    {
      v10 = a2 + 1;
      *a2 = 45;
      v7 = -(__int64)a1;
      v9 = 1LL;
    }
    v11 = v10;
    v12 = a4;
    do
    {
      v13 = v10;
      v14 = v7 % v12;
      v15 = v10 + 1;
      v7 /= v12;
      v16 = 87;
      if ( (unsigned int)v14 <= 9 )
        v16 = 48;
      ++v9;
      *v10 = v14 + v16;
      if ( !v7 )
        break;
      ++v10;
    }
    while ( v9 < a3 );
    if ( v9 >= a3 )
    {
      *a2 = 0;
      goto LABEL_4;
    }
    *v15 = 0;
    do
    {
      v17 = *v13;
      *v13-- = *v11;
      *v11++ = v17;
    }
    while ( v11 < v13 );
    return 0LL;
  }
  else
  {
LABEL_18:
    xHalTimerWatchdogStop();
    return 22LL;
  }
}
