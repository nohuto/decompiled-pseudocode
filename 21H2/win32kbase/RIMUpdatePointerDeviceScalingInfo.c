/*
 * XREFs of RIMUpdatePointerDeviceScalingInfo @ 0x1C00A23DC
 * Callers:
 *     ?MapToDisplayPath@CInputSpaceRegion@@QEAAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C00A0DFC (-MapToDisplayPath@CInputSpaceRegion@@QEAAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     rimSetDeviceDisplayConfig @ 0x1C0199948 (rimSetDeviceDisplayConfig.c)
 * Callees:
 *     EngMulDiv @ 0x1C006E450 (EngMulDiv.c)
 *     rimConvertCoordinatesWithRounding @ 0x1C0199020 (rimConvertCoordinatesWithRounding.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMUpdatePointerDeviceScalingInfo(_DWORD *a1, _DWORD *a2, int *a3, __int64 a4)
{
  unsigned int v8; // ebp
  int v9; // edx
  unsigned int v10; // r12d
  unsigned int v11; // r8d
  unsigned int v12; // r11d
  unsigned int v13; // r10d
  unsigned int v14; // r15d
  int v15; // eax
  unsigned int v16; // r14d
  int v17; // r8d
  int v18; // eax
  unsigned int v19; // r15d
  int v20; // ecx
  unsigned int v21; // eax
  INT v22; // ebp
  int v23; // ecx
  int v24; // edx
  int v25; // ecx
  __int64 result; // rax
  int v27; // eax
  unsigned int v28; // ebp
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // ecx
  int v36; // ecx
  unsigned int v37; // [rsp+78h] [rbp+10h]
  INT v38; // [rsp+80h] [rbp+18h]

  if ( !a2[14] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( !a2[15] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( !a2[22] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v8 = a2[23];
  if ( !v8 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v8 = a2[23];
  }
  v9 = a2[14];
  v10 = a2[15];
  v11 = a2[22];
  *a3 = v9;
  a3[1] = v10;
  v12 = a2[36];
  v13 = a2[35];
  v14 = a2[38] - v12;
  v15 = a2[27];
  v16 = a2[37] - v13;
  v37 = v12;
  if ( v15 == 4 )
  {
    if ( (v9 << 14) / v10 < (v11 << 14) / v8 )
      v27 = (v9 << 14) / v11;
    else
      v27 = (v10 << 14) / v8;
    v28 = v27 * v8;
    v37 = (v12 * v27) >> 14;
    v16 = (v27 * v16) >> 14;
    v14 = (v27 * v14) >> 14;
    v13 = (v27 * v13) >> 14;
    v21 = (v11 * v27) >> 14;
    v8 = v28 >> 14;
    a3[3] = v8;
    a3[2] = v21;
  }
  else if ( v15 == 2 )
  {
    a3[2] = v11;
    v21 = v11;
    a3[3] = v8;
  }
  else
  {
    a3[2] = v9;
    a3[3] = v10;
    v17 = (v9 << 14) / v11;
    v18 = (v10 << 14) / v8;
    v8 = v10;
    v19 = v18 * v14;
    v20 = v18;
    v21 = v9;
    v14 = v19 >> 14;
    v16 = (v17 * v16) >> 14;
    v13 = (v17 * v13) >> 14;
    v37 = (v12 * v20) >> 14;
  }
  v38 = 0;
  if ( a4 )
  {
    v38 = EngMulDiv(abs32(v9 - v21) + 2 * v13, a1[2] - *a1, 2 * v9);
    v22 = EngMulDiv(abs32(v10 - v8) + 2 * v37, a1[3] - a1[1], 2 * v10);
  }
  else
  {
    v22 = 0;
  }
  a3[2] = v16;
  a3[3] = v14;
  if ( a4 )
  {
    *(_OWORD *)a4 = *(_OWORD *)a1;
    v23 = a3[2];
    if ( *a3 != v23 && !(unsigned int)rimConvertCoordinatesWithRounding(0, *a3, 0, a1[2], v23, (LONG *)(a4 + 8)) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v31);
    v24 = a3[1];
    v25 = a3[3];
    if ( v24 != v25 && !(unsigned int)rimConvertCoordinatesWithRounding(0, v24, 0, a1[3], v25, (LONG *)(a4 + 12)) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v34);
    *(_DWORD *)a4 += v38;
    *(_DWORD *)(a4 + 8) += v38;
    *(_DWORD *)(a4 + 4) += v22;
    *(_DWORD *)(a4 + 12) += v22;
  }
  result = (unsigned int)(a2[26] - 2);
  if ( (result & 0xFFFFFFFD) == 0 )
  {
    v35 = a3[1];
    a3[1] = *a3;
    result = (unsigned int)a3[2];
    *a3 = v35;
    v36 = a3[3];
    a3[3] = result;
    a3[2] = v36;
  }
  return result;
}
