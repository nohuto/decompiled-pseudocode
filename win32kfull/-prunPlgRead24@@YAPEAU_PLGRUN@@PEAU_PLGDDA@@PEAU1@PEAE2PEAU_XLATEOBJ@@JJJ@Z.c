struct _PLGRUN *__fastcall prunPlgRead24(
        struct _PLGDDA *a1,
        struct _PLGRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        XLATEOBJ *pxlo,
        int iColor,
        int a7,
        int a8)
{
  __int64 v9; // rdx
  unsigned __int8 *v11; // rdi
  __int64 v12; // rsi
  unsigned __int8 *v13; // rsi
  int v14; // r13d
  __int64 v15; // r8
  __int64 v16; // r12
  unsigned __int8 *v17; // rax
  __int64 v18; // r15
  ULONG v19; // eax

  v9 = iColor;
  HIBYTE(iColor) = 0;
  v11 = &a3[2 * v9 + v9];
  if ( a4 )
  {
    v13 = &a4[4 * ((__int64)a8 >> 5)];
    v14 = *(_DWORD *)v13;
    if ( (_DWORD)v9 != a7 )
    {
      v15 = a8 & 0x1F;
      v16 = (unsigned int)(a7 - v9);
      do
      {
        v17 = v13 + 4;
        if ( v15 >= 32 )
          v14 = *(_DWORD *)v17;
        v18 = 0LL;
        if ( v15 < 32 )
        {
          v17 = v13;
          v18 = v15;
        }
        v13 = v17;
        if ( (v14 & dword_1C032B830[v18]) != 0 )
        {
          LOWORD(iColor) = *(_WORD *)v11;
          BYTE2(iColor) = v11[2];
          if ( pxlo )
            v19 = XLATEOBJ_iXlate(pxlo, iColor);
          else
            v19 = iColor;
          *(_DWORD *)a2 = v19;
          a2 = prunPumpDDA(a1, a2);
        }
        vAdvXDDA(a1);
        v11 += 3;
        v15 = v18 + 1;
        --v16;
      }
      while ( v16 );
    }
  }
  else if ( (_DWORD)v9 != a7 )
  {
    v12 = (unsigned int)(a7 - v9);
    if ( pxlo )
    {
      do
      {
        LOWORD(iColor) = *(_WORD *)v11;
        BYTE2(iColor) = v11[2];
        *(_DWORD *)a2 = XLATEOBJ_iXlate(pxlo, iColor);
        a2 = prunPumpDDA(a1, a2);
        vAdvXDDA(a1);
        v11 += 3;
        --v12;
      }
      while ( v12 );
    }
    else
    {
      do
      {
        LOWORD(iColor) = *(_WORD *)v11;
        BYTE2(iColor) = v11[2];
        *(_DWORD *)a2 = iColor;
        a2 = prunPumpDDA(a1, a2);
        vAdvXDDA(a1);
        v11 += 3;
        --v12;
      }
      while ( v12 );
    }
  }
  return a2;
}
