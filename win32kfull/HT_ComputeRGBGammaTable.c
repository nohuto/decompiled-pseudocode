LONG __stdcall HT_ComputeRGBGammaTable(
        USHORT GammaTableEntries,
        USHORT GammaTableType,
        USHORT RedGamma,
        USHORT GreenGamma,
        USHORT BlueGamma,
        LPBYTE pGammaTable)
{
  __int64 v6; // rdi
  int v8; // ebx
  LONG v9; // ebp
  int v10; // esi
  int v11; // r12d
  __int64 v12; // r15
  int v13; // r13d
  int v14; // ecx
  LPBYTE v15; // rsi
  LPBYTE v16; // rbx
  LPBYTE v17; // r14
  __int16 v18; // di
  int v19; // ebp
  int v20; // eax
  LONG result; // eax
  int v22; // [rsp+20h] [rbp-38h]
  LONG v23; // [rsp+28h] [rbp-30h]

  v6 = GammaTableEntries;
  v8 = GreenGamma;
  v9 = GammaTableEntries;
  v10 = RedGamma;
  v23 = GammaTableEntries;
  if ( (unsigned int)GammaTableEntries - 2 > 0xFE )
    return 0;
  v11 = 0;
  v12 = 1LL;
  v13 = DivFD6(1, (unsigned int)GammaTableEntries - 1);
  v14 = 100 * v10;
  v15 = pGammaTable;
  v22 = 100 * v8;
  if ( GammaTableType == 1 )
  {
    v16 = &pGammaTable[v6];
    v17 = &pGammaTable[v6 + v6];
  }
  else
  {
    v16 = pGammaTable + 1;
    v12 = 3LL;
    v17 = pGammaTable + 2;
  }
  v18 = v6 - 1;
  if ( v18 )
  {
    v19 = v14;
    do
    {
      *v15 = (char)(32 - RaisePower(v11, v19, 1)) / 64;
      *v16 = (char)(32 - RaisePower(v11, v22, 1)) / 64;
      v20 = RaisePower(v11, 100 * (unsigned int)BlueGamma, 1);
      v15 += v12;
      v16 += v12;
      v11 += v13;
      *v17 = (255 * v20 + 500000) / 1000000;
      v17 += v12;
      --v18;
    }
    while ( v18 );
    v9 = v23;
  }
  *v17 = -1;
  result = v9;
  *v16 = -1;
  *v15 = -1;
  return result;
}
