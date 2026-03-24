/*
 * XREFs of ?prunPlgRead24@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02D8640
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00C8500 (XLATEOBJ_iXlate.c)
 *     ?prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z @ 0x1C02D8D54 (-prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z.c)
 *     ?vAdvXDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C02D8F28 (-vAdvXDDA@@YAXPEAU_PLGDDA@@@Z.c)
 */

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
  unsigned __int8 *v11; // rbx
  unsigned int v12; // r10d
  __int64 v13; // rbp
  __int64 v14; // r14
  int v15; // ecx
  unsigned __int8 *v16; // r14
  int v17; // r13d
  __int64 v18; // r8
  __int64 v19; // r12
  __int64 v20; // r15
  int v21; // eax
  unsigned __int8 *v22; // rax
  ULONG v23; // eax
  int v25; // [rsp+60h] [rbp+18h]

  v9 = iColor;
  HIBYTE(iColor) = 0;
  v11 = &a3[2 * v9 + v9];
  if ( a4 )
  {
    v15 = a8 & 0x1F;
    v16 = &a4[4 * ((__int64)a8 >> 5)];
    v17 = *(_DWORD *)v16;
    if ( (_DWORD)v9 != a7 )
    {
      v18 = a8 & 0x1F;
      v19 = (unsigned int)(a7 - v9);
      do
      {
        if ( v18 >= 32 )
          v17 = *((_DWORD *)v16 + 1);
        v20 = 0LL;
        if ( v18 < 32 )
          v20 = v18;
        v21 = 0;
        if ( v18 < 32 )
          v21 = v15;
        v25 = v21;
        v22 = v16 + 4;
        if ( v18 < 32 )
          v22 = v16;
        v16 = v22;
        if ( (dword_1C02FC6F0[v20] & v17) != 0 )
        {
          LOWORD(iColor) = *(_WORD *)v11;
          BYTE2(iColor) = v11[2];
          if ( pxlo )
            v23 = XLATEOBJ_iXlate(pxlo, iColor);
          else
            v23 = iColor;
          *(_DWORD *)a2 = v23;
          a2 = prunPumpDDA(a1, a2);
        }
        vAdvXDDA(a1);
        v18 = v20 + 1;
        v11 += 3;
        v15 = v25 + 1;
        --v19;
      }
      while ( v19 );
    }
  }
  else if ( (_DWORD)v9 != a7 )
  {
    v12 = a7 - v9;
    if ( pxlo )
    {
      v14 = v12;
      do
      {
        LOWORD(iColor) = *(_WORD *)v11;
        BYTE2(iColor) = v11[2];
        *(_DWORD *)a2 = XLATEOBJ_iXlate(pxlo, iColor);
        a2 = prunPumpDDA(a1, a2);
        vAdvXDDA(a1);
        v11 += 3;
        --v14;
      }
      while ( v14 );
    }
    else
    {
      v13 = v12;
      do
      {
        LOWORD(iColor) = *(_WORD *)v11;
        BYTE2(iColor) = v11[2];
        *(_DWORD *)a2 = iColor;
        a2 = prunPumpDDA(a1, a2);
        vAdvXDDA(a1);
        v11 += 3;
        --v13;
      }
      while ( v13 );
    }
  }
  return a2;
}
