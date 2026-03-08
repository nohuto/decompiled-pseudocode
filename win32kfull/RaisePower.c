/*
 * XREFs of RaisePower @ 0x1C014B26A
 * Callers:
 *     HT_CreateDeviceHalftoneInfo @ 0x1C00195AC (HT_CreateDeviceHalftoneInfo.c)
 *     HT_ComputeRGBGammaTable @ 0x1C0252900 (HT_ComputeRGBGammaTable.c)
 *     AdjustSrcDevGamma @ 0x1C0256104 (AdjustSrcDevGamma.c)
 *     ComputeBGRMappingTable @ 0x1C0256580 (ComputeBGRMappingTable.c)
 *     ComputeRGBLUTAA @ 0x1C0257424 (ComputeRGBLUTAA.c)
 *     pDCIAdjClr @ 0x1C02583A8 (pDCIAdjClr.c)
 *     BuildExpandAAInfo @ 0x1C025C820 (BuildExpandAAInfo.c)
 * Callees:
 *     DivFD6 @ 0x1C014AF0C (DivFD6.c)
 *     FD6DivL @ 0x1C014AFC0 (FD6DivL.c)
 *     Log @ 0x1C014B004 (Log.c)
 *     MulFD6 @ 0x1C014B146 (MulFD6.c)
 *     AntiLog @ 0x1C025555C (AntiLog.c)
 */

__int64 __fastcall RaisePower(int a1, int a2, char a3)
{
  char v3; // si
  int v4; // ebx
  int v5; // r10d
  int v6; // r9d
  __int64 result; // rax
  int v8; // edi
  int v9; // ebp
  unsigned int v10; // eax
  unsigned int v11; // r9d

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = 1000000;
  if ( (a3 & 2) != 0 )
  {
    if ( a2 != 1 )
      goto LABEL_8;
    return (unsigned int)a1;
  }
  if ( a2 == 1000000 )
    return (unsigned int)a1;
  if ( a2 == 1000000 * (a2 / 1000000) )
  {
    v4 = a2 / 1000000;
    v3 = a3 | 2;
  }
LABEL_8:
  if ( a1 > 0 )
  {
    v8 = 0;
    v9 = 0;
  }
  else
  {
    v5 = -a1;
    v8 = 1;
    v9 = 1;
    if ( !a1 )
      return 0LL;
  }
  if ( !v4 )
    return v8 != 0 ? -1000000 : 1000000;
  if ( v5 != 10000000 )
    v6 = Log(v5);
  if ( (v3 & 2) != 0 )
  {
    v8 = (v4 & 1) != 0 ? v9 : 0;
    if ( (v3 & 1) == 0 )
    {
      v11 = v4 * v6;
      goto LABEL_24;
    }
    v10 = FD6DivL(v6, v4);
  }
  else if ( (v3 & 1) != 0 )
  {
    v10 = DivFD6(v6, v4);
  }
  else
  {
    v10 = MulFD6(v6, v4);
  }
  v11 = v10;
LABEL_24:
  result = AntiLog(v11);
  if ( v8 )
    return (unsigned int)-(int)result;
  return result;
}
