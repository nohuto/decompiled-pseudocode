struct _PLGRUN *__fastcall prunPlgRead8(
        struct _PLGDDA *a1,
        struct _PLGRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *a5,
        int a6,
        int a7,
        int a8)
{
  struct _PLGRUN *v8; // r11
  unsigned __int8 *v10; // rbx
  unsigned int v11; // r10d
  __int64 v12; // rsi
  __int64 v13; // rbp
  unsigned __int8 *v14; // r14
  int v15; // r12d
  __int64 v16; // r8
  __int64 v17; // r15
  unsigned __int8 *v18; // rax
  __int64 v19; // rbp
  ULONG v20; // eax

  v8 = a2;
  v10 = &a3[a6];
  if ( a4 )
  {
    v14 = &a4[4 * ((__int64)a8 >> 5)];
    v15 = *(_DWORD *)v14;
    if ( a6 != a7 )
    {
      v16 = a8 & 0x1F;
      v17 = (unsigned int)(a7 - a6);
      do
      {
        v18 = v14 + 4;
        if ( v16 >= 32 )
          v15 = *(_DWORD *)v18;
        v19 = 0LL;
        if ( v16 < 32 )
        {
          v18 = v14;
          v19 = v16;
        }
        v14 = v18;
        if ( (v15 & dword_1C032B830[v19]) != 0 )
        {
          v20 = *v10;
          if ( a5 )
            v20 = a5->pulXlate[*v10];
          *(_DWORD *)v8 = v20;
          prunPumpDDA(a1, v8);
        }
        vAdvXDDA(a1);
        ++v10;
        v16 = v19 + 1;
        --v17;
      }
      while ( v17 );
    }
  }
  else if ( a6 != a7 )
  {
    v11 = a7 - a6;
    if ( a5 )
    {
      v13 = v11;
      do
      {
        *(_DWORD *)v8 = a5->pulXlate[*v10];
        prunPumpDDA(a1, v8);
        vAdvXDDA(a1);
        ++v10;
        --v13;
      }
      while ( v13 );
    }
    else
    {
      v12 = v11;
      do
      {
        *(_DWORD *)v8 = *v10;
        prunPumpDDA(a1, v8);
        vAdvXDDA(a1);
        ++v10;
        --v12;
      }
      while ( v12 );
    }
  }
  return v8;
}
