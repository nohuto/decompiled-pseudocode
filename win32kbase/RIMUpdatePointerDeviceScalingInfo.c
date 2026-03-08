/*
 * XREFs of RIMUpdatePointerDeviceScalingInfo @ 0x1C000FF84
 * Callers:
 *     ?MapToDisplayPath@CInputSpaceRegion@@QEAAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C0010320 (-MapToDisplayPath@CInputSpaceRegion@@QEAAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     rimSetDeviceDisplayConfig @ 0x1C01BEDF8 (rimSetDeviceDisplayConfig.c)
 * Callees:
 *     EngMulDiv @ 0x1C003BF30 (EngMulDiv.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimConvertCoordinatesWithRounding @ 0x1C00EFE8A (rimConvertCoordinatesWithRounding.c)
 */

__int64 __fastcall RIMUpdatePointerDeviceScalingInfo(_DWORD *a1, _DWORD *a2, int *a3, __int64 a4)
{
  unsigned int v7; // edx
  unsigned int v8; // r11d
  unsigned int v9; // r8d
  unsigned int v10; // r9d
  unsigned int v11; // r10d
  unsigned int v12; // ebp
  unsigned int v13; // r12d
  int v14; // eax
  unsigned int v15; // r13d
  int *v16; // r15
  int *v17; // r14
  int v18; // r8d
  unsigned int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // ebp
  INT v22; // ebp
  _DWORD *v23; // r8
  int v24; // edx
  __int64 result; // rax
  int v26; // eax
  unsigned int v27; // ebp
  int v28; // ecx
  int v29; // ecx
  unsigned int v30; // [rsp+30h] [rbp-58h]
  unsigned int v32; // [rsp+98h] [rbp+10h]
  INT v33; // [rsp+A8h] [rbp+20h]

  if ( !a2[14] )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1423LL);
  if ( !a2[15] )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1424LL);
  if ( !a2[22] )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1425LL);
  if ( !a2[23] )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1426LL);
  v7 = a2[14];
  v8 = a2[15];
  v9 = a2[22];
  v10 = a2[23];
  *a3 = v7;
  a3[1] = v8;
  v11 = a2[35];
  v12 = a2[36];
  v13 = a2[37] - v11;
  v14 = a2[27];
  v15 = a2[38] - v12;
  v30 = v8;
  v32 = v12;
  if ( v14 == 4 )
  {
    if ( (v7 << 14) / v8 < (v9 << 14) / v10 )
      v26 = (v7 << 14) / v9;
    else
      v26 = (v8 << 14) / v10;
    v16 = a3 + 2;
    v17 = a3 + 3;
    v13 = (v26 * v13) >> 14;
    v32 = (v12 * v26) >> 14;
    v27 = v10 * v26;
    v15 = (v26 * v15) >> 14;
    v11 = (unsigned int)(a2[35] * v26) >> 14;
    v19 = (v9 * v26) >> 14;
    v21 = v27 >> 14;
    a3[3] = v21;
    a3[2] = v19;
  }
  else
  {
    v16 = a3 + 2;
    v17 = a3 + 3;
    if ( v14 == 2 )
    {
      *v16 = v9;
      v19 = v9;
      *v17 = v10;
      v21 = v10;
    }
    else
    {
      *v16 = v7;
      *v17 = v8;
      v18 = (v7 << 14) / v9;
      v19 = v7;
      v20 = v12 * ((v8 << 14) / v10);
      v21 = v8;
      v15 = ((v8 << 14) / v10 * v15) >> 14;
      v13 = (v18 * v13) >> 14;
      v11 = (v18 * v11) >> 14;
      v32 = v20 >> 14;
    }
  }
  v33 = 0;
  if ( a4 )
  {
    v33 = EngMulDiv(abs32(v7 - v19) + 2 * v11, a1[2] - *a1, 2 * v7);
    v22 = EngMulDiv(abs32(v30 - v21) + 2 * v32, a1[3] - a1[1], 2 * v30);
  }
  else
  {
    v22 = 0;
  }
  *v16 = v13;
  *v17 = v15;
  if ( a4 )
  {
    v23 = a1;
    *(_OWORD *)a4 = *(_OWORD *)a1;
    if ( *a3 != *v16 )
    {
      if ( !(unsigned int)rimConvertCoordinatesWithRounding(0, *a3, 0, a1[2], *v16, (LONG *)(a4 + 8)) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1557LL);
      v23 = a1;
    }
    v24 = a3[1];
    if ( v24 != *v17 && !(unsigned int)rimConvertCoordinatesWithRounding(0, v24, 0, v23[3], *v17, (LONG *)(a4 + 12)) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1566LL);
    *(_DWORD *)a4 += v33;
    *(_DWORD *)(a4 + 8) += v33;
    *(_DWORD *)(a4 + 4) += v22;
    *(_DWORD *)(a4 + 12) += v22;
  }
  result = (unsigned int)(a2[26] - 2);
  if ( (result & 0xFFFFFFFD) == 0 )
  {
    v28 = a3[1];
    a3[1] = *a3;
    result = (unsigned int)*v16;
    *a3 = v28;
    v29 = *v17;
    *v17 = result;
    *v16 = v29;
  }
  return result;
}
