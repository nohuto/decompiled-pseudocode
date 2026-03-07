struct _PLGRUN *__fastcall prunPlgRead32(
        struct _PLGDDA *a1,
        struct _PLGRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        XLATEOBJ *pxlo,
        int a6,
        int a7,
        int a8)
{
  ULONG *v10; // rdi
  unsigned int v11; // r10d
  __int64 v12; // rbp
  __int64 v13; // r14
  unsigned __int8 *v14; // r14
  int v15; // r13d
  __int64 v16; // r8
  __int64 v17; // r12
  unsigned __int8 *v18; // rax
  __int64 v19; // r15
  ULONG v20; // eax

  v10 = (ULONG *)&a3[4 * a6];
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
          if ( pxlo )
            v20 = XLATEOBJ_iXlate(pxlo, v20);
          *(_DWORD *)a2 = v20;
          a2 = prunPumpDDA(a1, a2);
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
    if ( pxlo )
    {
      v13 = v11;
      do
      {
        *(_DWORD *)a2 = XLATEOBJ_iXlate(pxlo, *v10);
        a2 = prunPumpDDA(a1, a2);
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
        *(_DWORD *)a2 = *v10;
        a2 = prunPumpDDA(a1, a2);
        vAdvXDDA(a1);
        ++v10;
        --v12;
      }
      while ( v12 );
    }
  }
  return a2;
}
