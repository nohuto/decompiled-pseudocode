__int64 __fastcall x64toa_s(unsigned __int64 a1, char *a2, unsigned __int64 a3, unsigned int a4, int a5)
{
  unsigned __int64 v7; // r11
  unsigned __int64 v9; // rsi
  char *v10; // rdi
  char *v11; // r8
  unsigned __int64 v12; // rbp
  char *v13; // r9
  unsigned __int64 v14; // rcx
  _BYTE *v15; // rdx
  char v16; // al
  char v17; // cl

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
      *a2 = 45;
      v10 = a2 + 1;
      v9 = 1LL;
      v7 = -(__int64)a1;
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
