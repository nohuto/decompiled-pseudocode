/*
 * XREFs of RIMRetrieveRealAngularPhysicalValues @ 0x1C0181724
 * Callers:
 *     RIMRetrieveNormalizationRange @ 0x1C01815CC (RIMRetrieveNormalizationRange.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMComputePower @ 0x1C0181498 (RIMComputePower.c)
 */

__int64 __fastcall RIMRetrieveRealAngularPhysicalValues(__int64 a1, int *a2)
{
  unsigned int v2; // ebx
  char v3; // r13
  int *v4; // r9
  unsigned int v6; // r15d
  __int16 v7; // r14
  int v8; // ebp
  int v9; // edi
  __int64 v11; // r12
  _BYTE *v12; // rax
  unsigned int *v13; // r9
  unsigned int v14; // r15d
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // rax
  unsigned int v18; // eax
  unsigned int v20; // [rsp+70h] [rbp+18h]

  v2 = 0;
  v3 = *(_BYTE *)(a1 + 32) & 0xF;
  v20 = 62831;
  v4 = a2;
  v6 = 0;
  v7 = 0;
  v8 = -4;
  if ( !a2 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 157);
    v4 = 0LL;
  }
  v9 = *v4;
  if ( !*v4 )
    return 1LL;
  v11 = *(_DWORD *)(a1 + 36) & 0xF;
  if ( (*(_DWORD *)(a1 + 36) & 0xF) != 0 )
  {
    v12 = word_1C0227118;
    do
    {
      if ( *v12 == v3 )
        break;
      ++v6;
      v12 += 4;
    }
    while ( v6 < 0xB );
    if ( v6 < 0xB )
      v7 = word_1C0227118[2 * v6 + 1];
    v14 = RIMComputePower(v7);
    if ( !v14 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 181);
      v13 = (unsigned int *)a2;
    }
    if ( v9 < 0 )
      v9 = -v9;
    if ( (unsigned int)v11 < 5 )
    {
      v15 = dword_1C02270F0[v11];
      if ( v15 == 4 )
      {
        if ( v7 > -4 || !(v9 / v14) )
          return v2;
        if ( v7 < -4 )
        {
          v16 = 62831;
          do
          {
            if ( v8 <= -8 )
              break;
            v17 = v2;
            --v8;
            ++v2;
            v16 = dword_1C0227108[v17] + 10 * v16;
          }
          while ( v8 > v7 );
          v20 = v16;
        }
        v18 = 360 * v9 / v20;
      }
      else
      {
        if ( v15 != 3 || v7 > -2 )
          return v2;
        v18 = v9 / v14;
      }
      v2 = 1;
      *v13 = v18;
    }
  }
  return v2;
}
