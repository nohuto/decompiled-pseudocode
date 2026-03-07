void __fastcall SymCryptFdefRawDivMod(void *Src, int a2, _DWORD *a3, __int64 a4, void *a5, _DWORD *a6)
{
  __int64 v6; // rdi
  int v9; // ebp
  unsigned __int64 v11; // rsi
  int v12; // ebx
  __int64 v13; // rdi
  int v14; // r11d
  char v15; // bp
  int v16; // r10d
  __int64 v17; // rdx
  __int64 v18; // r11
  unsigned __int64 v19; // r9
  unsigned int v20; // r12d
  unsigned int v21; // r12d
  _DWORD *v22; // rbx
  int v23; // [rsp+20h] [rbp-48h]
  int v24; // [rsp+78h] [rbp+10h]
  int v25; // [rsp+80h] [rbp+18h]

  v6 = (unsigned int)(16 * a2);
  v9 = a3[1] << 6 >> 2;
  v11 = ((unsigned __int64)(unsigned int)a3[3] + 31) >> 5;
  v23 = v9;
  if ( (unsigned int)v6 >= (unsigned int)v11 )
  {
    a6[1] = 0;
    *a6 = 0;
    memmove(a6 + 2, Src, 4LL * (unsigned int)v6);
    a6[(unsigned int)(v6 + 3)] = 0;
    a6[(unsigned int)(v6 + 2)] = 0;
    v12 = -a3[3] & 0x1F;
    v13 = (unsigned int)(v6 - v11 + 1);
    if ( a4 )
      SymCryptWipe(a4 + 4 * v13, 4LL * (unsigned int)(v11 - 1));
    v14 = v13 + v11;
    v15 = 32 - v12;
    v16 = 2 - v11;
    do
    {
      v17 = (unsigned int)a6[(unsigned int)(v11 + v13)];
      v18 = (unsigned int)(v14 - 1);
      v25 = v18;
      v13 = (unsigned int)(v13 - 1);
      v19 = (((unsigned __int64)(unsigned int)v17 << 32) + (unsigned int)a6[v18]) >> v15;
      v20 = (((unsigned int)v19
            + (((unsigned __int64)(unsigned int)a3[6] >> 1) & -((unsigned int)v19 >> 31))
            + ((unsigned int)a3[6] + 0x100000000LL)
            * (unsigned int)((v17 + ((unsigned __int64)(unsigned int)a6[(unsigned int)(v18 + 2)] << 32)) >> v15)) >> 32)
          + 1;
      v21 = ~((unsigned __int64)-(__int64)v20 >> 32) + v20;
      v22 = &a6[(unsigned int)(v16 + v18)];
      v24 = SymCryptFdefRawMultSubUint32(v22, a3 + 16, v21, (unsigned int)v11);
      SymCryptFdefRawMaskedAddSubdigit(v22, a3 + 16, (unsigned int)-v24, (unsigned int)v11);
      if ( a4 )
        *(_DWORD *)(a4 + 4 * v13) = v21 - v24;
      v16 = 2 - v11;
      v14 = v25;
    }
    while ( (_DWORD)v13 );
    if ( a5 )
    {
      memmove(a5, a6 + 2, 4LL * (unsigned int)v11);
      SymCryptWipe((__int64)a5 + 4 * (unsigned int)v11, 4LL * (unsigned int)(v23 - v11));
    }
  }
  else
  {
    if ( a4 )
      SymCryptWipe(a4, (unsigned int)(a2 << 6));
    if ( a5 )
    {
      memmove(a5, Src, 4 * v6);
      SymCryptWipe((__int64)a5 + 4 * v6, 4LL * (unsigned int)(v9 - v6));
    }
    xHalTimerWatchdogStop();
  }
}
