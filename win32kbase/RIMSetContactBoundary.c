/*
 * XREFs of RIMSetContactBoundary @ 0x1C01BDA20
 * Callers:
 *     RIMAddSimulatedPointerDeviceData @ 0x1C01B2DEC (RIMAddSimulatedPointerDeviceData.c)
 *     RIMApplyTransforms @ 0x1C01BD0C8 (RIMApplyTransforms.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMTransformPointerDevicePointToPhysical @ 0x1C00EFE38 (RIMTransformPointerDevicePointToPhysical.c)
 *     RIMTransformPhysicalPointToScreen @ 0x1C01BE428 (RIMTransformPhysicalPointToScreen.c)
 *     ApiSetApplyMagInputTransform @ 0x1C023BE74 (ApiSetApplyMagInputTransform.c)
 */

__int64 __fastcall RIMSetContactBoundary(__int64 a1, _DWORD *a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  int v8; // edi
  unsigned int v9; // r15d
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  int v14; // r8d
  int v16; // [rsp+60h] [rbp+40h] BYREF
  int v17; // [rsp+64h] [rbp+44h]
  int v18; // [rsp+68h] [rbp+48h] BYREF
  int v19; // [rsp+6Ch] [rbp+4Ch]
  __int64 v20; // [rsp+70h] [rbp+50h] BYREF
  int v21; // [rsp+78h] [rbp+58h]

  v20 = a3;
  v8 = 0;
  if ( !a2 )
  {
    v21 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1698);
    LODWORD(a3) = v20;
  }
  if ( !a1 )
  {
    v21 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1699);
    LODWORD(a3) = v20;
  }
  v9 = a5;
  v16 = a3 - (a4 >> 1);
  v18 = a3 + (a4 >> 1);
  v17 = HIDWORD(v20) - (a5 >> 1);
  v19 = HIDWORD(v20) + (a5 >> 1);
  v10 = *(_DWORD *)(a1 + 360);
  if ( (v10 & 8) == 0 || (v10 & 0x2000) != 0 )
  {
    RIMTransformPointerDevicePointToPhysical(a1, v16, &v20);
    v8 = RIMTransformPhysicalPointToScreen(a1, &v20, &v16);
    if ( v8 < 0 )
      return (unsigned int)v8;
    RIMTransformPointerDevicePointToPhysical(a1, v18, &v20);
    v8 = RIMTransformPhysicalPointToScreen(a1, &v20, &v18);
    if ( v8 < 0 )
      return (unsigned int)v8;
  }
  else
  {
    ApiSetApplyMagInputTransform(&v16, &v18);
  }
  v11 = v16;
  v12 = v18;
  v13 = v17;
  v14 = v19;
  *a2 = v16;
  a2[2] = v12;
  a2[1] = v13;
  a2[3] = v14;
  if ( v11 == v12 && a4 )
    a2[2] = v11 + 1;
  if ( v13 == v14 && v9 )
    a2[3] = v13 + 1;
  return (unsigned int)v8;
}
