__int64 __fastcall RIMRetrieveRealAngularPhysicalValues(__int64 a1, int *a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // r14d
  char v6; // cl
  __int16 v7; // bp
  int v8; // esi
  int v9; // r12d
  __int64 v11; // r15
  _BYTE *v12; // rax
  unsigned int v13; // r14d
  unsigned int v14; // r8d
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // rax
  unsigned int v18; // eax
  char v19; // [rsp+60h] [rbp+8h]
  unsigned int v20; // [rsp+70h] [rbp+18h]

  v2 = 0;
  v20 = 62831;
  v5 = 0;
  v6 = *(_BYTE *)(a1 + 32) & 0xF;
  v7 = 0;
  v19 = v6;
  v8 = -4;
  if ( !a2 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 157);
    v6 = v19;
  }
  v9 = *a2;
  if ( !*a2 )
    return 1LL;
  v11 = *(_DWORD *)(a1 + 36) & 0xF;
  if ( (*(_DWORD *)(a1 + 36) & 0xF) != 0 )
  {
    v12 = word_1C02A4708;
    while ( *v12 != v6 )
    {
      ++v5;
      v12 += 4;
      if ( v5 >= 0xB )
        goto LABEL_11;
    }
    v7 = word_1C02A4708[2 * v5 + 1];
LABEL_11:
    v13 = RIMComputePower(v7);
    if ( !v13 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 181);
    v14 = -v9;
    if ( v9 >= 0 )
      v14 = v9;
    if ( (unsigned int)v11 < 5 )
    {
      v15 = dword_1C02A46B0[v11];
      if ( v15 == 4 )
      {
        if ( v7 > -4 || !(v14 / v13) )
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
            v16 = dword_1C02A46A0[v17] + 10 * v16;
          }
          while ( v8 > v7 );
          v20 = v16;
        }
        v18 = 360 * v14 / v20;
      }
      else
      {
        if ( v15 != 3 || v7 > -2 )
          return v2;
        v18 = v14 / v13;
      }
      v2 = 1;
      *a2 = v18;
    }
  }
  return v2;
}
