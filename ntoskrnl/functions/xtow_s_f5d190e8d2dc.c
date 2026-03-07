__int64 __fastcall xtow_s(unsigned int a1, __int16 *a2, unsigned __int64 a3, unsigned int a4, int a5)
{
  unsigned int v8; // r11d
  unsigned __int64 v10; // rsi
  __int16 *v11; // rdi
  __int16 *v12; // r8
  __int16 *v13; // r9
  unsigned int v14; // ecx
  _WORD *v15; // rdx
  __int16 v16; // ax
  __int16 v17; // cx

  v8 = a1;
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
    v10 = 0LL;
    v11 = a2;
    if ( a5 )
    {
      v11 = a2 + 1;
      *a2 = 45;
      v8 = -a1;
      v10 = 1LL;
    }
    v12 = v11;
    do
    {
      v13 = v11;
      v14 = v8 % a4;
      v15 = v11 + 1;
      v8 /= a4;
      v16 = 87;
      if ( v14 <= 9 )
        v16 = 48;
      ++v10;
      *v11 = v14 + v16;
      if ( !v8 )
        break;
      ++v11;
    }
    while ( v10 < a3 );
    if ( v10 >= a3 )
    {
      *a2 = 0;
      goto LABEL_4;
    }
    *v15 = 0;
    do
    {
      v17 = *v13;
      *v13-- = *v12;
      *v12++ = v17;
    }
    while ( v12 < v13 );
    return 0LL;
  }
  else
  {
LABEL_18:
    xHalTimerWatchdogStop();
    return 22LL;
  }
}
