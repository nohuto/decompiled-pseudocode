/*
 * XREFs of Log @ 0x1C001F73C
 * Callers:
 *     ComputeRGBLUTAA @ 0x1C001BB38 (ComputeRGBLUTAA.c)
 *     pDCIAdjClr @ 0x1C001C210 (pDCIAdjClr.c)
 *     AdjustSrcDevGamma @ 0x1C001CB90 (AdjustSrcDevGamma.c)
 *     RaisePower @ 0x1C001F508 (RaisePower.c)
 * Callees:
 *     FD6DivL @ 0x1C001F814 (FD6DivL.c)
 *     FractionToMantissa @ 0x1C001F978 (FractionToMantissa.c)
 */

__int64 __fastcall Log(__int64 a1)
{
  int v1; // ebx
  int v2; // edx
  int v3; // edi
  __int64 v4; // rcx
  int v6; // eax

  if ( (int)a1 < 10000 )
  {
    if ( (int)a1 < 100 )
    {
      if ( (int)a1 < 10 )
      {
        if ( (int)a1 <= 0 )
          return 4288967296LL;
        v1 = -6000000;
        LODWORD(a1) = 100000000 * a1;
      }
      else
      {
        v1 = -5000000;
        LODWORD(a1) = 10000000 * a1;
      }
    }
    else
    {
      v1 = -3000000;
      if ( (int)a1 < 1000 )
        v1 = -4000000;
      v6 = 100000;
      if ( (int)a1 < 1000 )
        v6 = 1000000;
      LODWORD(a1) = v6 * a1;
    }
  }
  else if ( (int)a1 >= 1000000 )
  {
    if ( (int)a1 >= 10000000 )
    {
      if ( (int)a1 < 100000000 )
      {
        v1 = 1000000;
        LODWORD(a1) = 10 * a1;
      }
      else if ( (int)a1 < 1000000000 )
      {
        v1 = 2000000;
      }
      else
      {
        if ( (int)a1 >= 2147483642 )
          return 3331930LL;
        v1 = 3000000;
        LODWORD(a1) = FD6DivL(a1, 10LL);
      }
    }
    else
    {
      v1 = 0;
      LODWORD(a1) = 100 * a1;
    }
  }
  else if ( (int)a1 < 100000 )
  {
    v1 = -2000000;
    LODWORD(a1) = 10000 * a1;
  }
  else
  {
    v1 = -1000000;
    LODWORD(a1) = 1000 * a1;
  }
  v2 = (int)a1 / 1000000;
  v3 = *(_DWORD *)&aAapalldelay4[2 * ((int)a1 / 1000000) + 12];
  v4 = (unsigned int)((int)a1 % 1000000);
  if ( (_DWORD)v4 )
    v3 += FractionToMantissa(v4, (unsigned int)dword_1C02EE710[v2]);
  return (unsigned int)(v3 + v1);
}
