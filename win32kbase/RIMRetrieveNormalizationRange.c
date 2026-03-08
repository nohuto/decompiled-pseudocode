/*
 * XREFs of RIMRetrieveNormalizationRange @ 0x1C01DF08C
 * Callers:
 *     RIMPopulatePointerDevice @ 0x1C01AF510 (RIMPopulatePointerDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C01B3FEC (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMRetrieveRealAngularPhysicalValues @ 0x1C01DF1D4 (RIMRetrieveRealAngularPhysicalValues.c)
 */

__int64 __fastcall RIMRetrieveNormalizationRange(unsigned __int16 a1, __int16 *a2, _QWORD *a3)
{
  int v3; // r14d
  unsigned int v6; // edi
  int v7; // r9d
  _WORD *v8; // rcx
  int v9; // edx
  unsigned int v10; // r8d
  __int16 v11; // r10
  __int128 v12; // xmm1
  __int64 v13; // xmm0_8
  __int128 v14; // xmm1
  __int128 v15; // xmm1
  __int64 v16; // xmm0_8
  __int128 v17; // xmm1
  __int128 v19; // [rsp+20h] [rbp-50h] BYREF
  __int128 v20; // [rsp+30h] [rbp-40h]
  __int128 v21; // [rsp+40h] [rbp-30h]
  __int128 v22; // [rsp+50h] [rbp-20h]
  __int64 v23; // [rsp+60h] [rbp-10h]
  int v24; // [rsp+A8h] [rbp+38h] BYREF
  int v25; // [rsp+B0h] [rbp+40h] BYREF

  v3 = a1;
  v6 = 0;
  if ( !a3 )
  {
    v24 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 23);
  }
  v7 = *((_DWORD *)a2 + 12);
  v8 = &unk_1C02A46CA;
  v9 = *((_DWORD *)a2 + 13);
  v10 = 0;
  v11 = *a2;
  v24 = v7;
  v25 = v9;
  while ( *(v8 - 1) != v11 || *v8 != a2[28] )
  {
    ++v10;
    v8 += 6;
    if ( v10 >= 5 )
      return v6;
  }
  v6 = 1;
  *a3 = *(_QWORD *)((char *)&unk_1C02A46CC + 12 * v10);
  if ( (v3 == 7485 || v3 == 7486 || v3 == 7489 || v3 == 19775) && v9 - v7 > 0 )
  {
    v12 = *((_OWORD *)a2 + 1);
    v19 = *(_OWORD *)a2;
    v21 = *((_OWORD *)a2 + 2);
    v13 = *((_QWORD *)a2 + 8);
    v20 = v12;
    v14 = *((_OWORD *)a2 + 3);
    v23 = v13;
    v22 = v14;
    RIMRetrieveRealAngularPhysicalValues(&v19, &v24);
    v15 = *((_OWORD *)a2 + 1);
    v19 = *(_OWORD *)a2;
    v21 = *((_OWORD *)a2 + 2);
    v16 = *((_QWORD *)a2 + 8);
    v20 = v15;
    v17 = *((_OWORD *)a2 + 3);
    v23 = v16;
    v22 = v17;
    RIMRetrieveRealAngularPhysicalValues(&v19, &v25);
  }
  return v6;
}
