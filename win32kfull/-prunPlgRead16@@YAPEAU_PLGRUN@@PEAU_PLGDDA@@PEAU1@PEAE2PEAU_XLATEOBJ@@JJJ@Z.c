/*
 * XREFs of ?prunPlgRead16@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C0302050
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00C3AA0 (XLATEOBJ_iXlate.c)
 *     ?prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z @ 0x1C0152040 (-prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z.c)
 *     ?vAdvXDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C030294C (-vAdvXDDA@@YAXPEAU_PLGDDA@@@Z.c)
 */

struct _PLGRUN *__fastcall prunPlgRead16(
        struct _PLGDDA *a1,
        struct _PLGRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        XLATEOBJ *pxlo,
        int a6,
        int a7,
        int a8)
{
  unsigned __int8 *v10; // rdi
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

  v10 = &a3[2 * a6];
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
          v20 = *(unsigned __int16 *)v10;
          if ( pxlo )
            v20 = XLATEOBJ_iXlate(pxlo, *(unsigned __int16 *)v10);
          *(_DWORD *)a2 = v20;
          a2 = prunPumpDDA(a1, a2);
        }
        vAdvXDDA(a1);
        v10 += 2;
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
        *(_DWORD *)a2 = XLATEOBJ_iXlate(pxlo, *(unsigned __int16 *)v10);
        a2 = prunPumpDDA(a1, a2);
        vAdvXDDA(a1);
        v10 += 2;
        --v13;
      }
      while ( v13 );
    }
    else
    {
      v12 = v11;
      do
      {
        *(_DWORD *)a2 = *(unsigned __int16 *)v10;
        a2 = prunPumpDDA(a1, a2);
        vAdvXDDA(a1);
        v10 += 2;
        --v12;
      }
      while ( v12 );
    }
  }
  return a2;
}
