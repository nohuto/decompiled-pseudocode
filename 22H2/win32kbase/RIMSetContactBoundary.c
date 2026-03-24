/*
 * XREFs of RIMSetContactBoundary @ 0x1C01649F4
 * Callers:
 *     RIMAddSimulatedPointerDeviceData @ 0x1C015B62C (RIMAddSimulatedPointerDeviceData.c)
 *     RIMApplyTransforms @ 0x1C01642B8 (RIMApplyTransforms.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMTransformPhysicalPointToScreen @ 0x1C01653D8 (RIMTransformPhysicalPointToScreen.c)
 *     RIMTransformPointerDevicePointToPhysical @ 0x1C016544C (RIMTransformPointerDevicePointToPhysical.c)
 *     ApiSetApplyMagInputTransform @ 0x1C01CA3E4 (ApiSetApplyMagInputTransform.c)
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
  __int64 v16; // [rsp+60h] [rbp+40h] BYREF
  __int64 v17; // [rsp+68h] [rbp+48h] BYREF
  __int64 v18; // [rsp+70h] [rbp+50h] BYREF
  int v19; // [rsp+78h] [rbp+58h]

  v18 = a3;
  v8 = 0;
  if ( !a2 )
  {
    v19 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1671);
    LODWORD(a3) = v18;
  }
  if ( !a1 )
  {
    v19 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1672);
    LODWORD(a3) = v18;
  }
  v9 = a5;
  LODWORD(v16) = a3 - (a4 >> 1);
  LODWORD(v17) = a3 + (a4 >> 1);
  HIDWORD(v16) = HIDWORD(v18) - (a5 >> 1);
  HIDWORD(v17) = HIDWORD(v18) + (a5 >> 1);
  v10 = *(_DWORD *)(a1 + 312);
  if ( (v10 & 8) == 0 || (v10 & 0x2000) != 0 )
  {
    RIMTransformPointerDevicePointToPhysical(a1, v16, &v18);
    v8 = RIMTransformPhysicalPointToScreen(a1, &v18, &v16);
    if ( v8 < 0 )
      return (unsigned int)v8;
    RIMTransformPointerDevicePointToPhysical(a1, v17, &v18);
    v8 = RIMTransformPhysicalPointToScreen(a1, &v18, &v17);
  }
  else
  {
    ApiSetApplyMagInputTransform(&v16, &v17);
  }
  if ( v8 >= 0 )
  {
    v11 = v16;
    v12 = v17;
    v13 = HIDWORD(v16);
    v14 = HIDWORD(v17);
    *a2 = v16;
    a2[2] = v12;
    a2[1] = v13;
    a2[3] = v14;
    if ( v11 == v12 && a4 )
      a2[2] = v11 + 1;
    if ( v13 == v14 && v9 )
      a2[3] = v13 + 1;
  }
  return (unsigned int)v8;
}
