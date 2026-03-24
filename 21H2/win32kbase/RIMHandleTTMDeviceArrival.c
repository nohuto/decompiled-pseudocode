/*
 * XREFs of RIMHandleTTMDeviceArrival @ 0x1C01820FC
 * Callers:
 *     RIMHandlePowerDeviceArrival @ 0x1C00ACE0C (RIMHandlePowerDeviceArrival.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0046B08 (WPP_RECORDER_SF_d.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0055804 (RimDeviceTypeToRimInputType.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C006A730 (RawInputManagerDeviceObjectReference.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_SF_dqqdS @ 0x1C01823F0 (WPP_RECORDER_SF_dqqdS.c)
 *     WPP_RECORDER_SF_qdSD @ 0x1C01825D4 (WPP_RECORDER_SF_qdSD.c)
 */

__int64 __fastcall RIMHandleTTMDeviceArrival(__int64 a1)
{
  int v2; // edi
  int v3; // edx
  unsigned int v4; // edi
  int v5; // r8d
  int v6; // r9d
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  __int64 v11; // [rsp+28h] [rbp-40h]

  if ( !gbTtmEnabled )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 49);
  if ( *(_BYTE *)(a1 + 48) == 3 || (*(_DWORD *)(a1 + 200) & 0x40) != 0 )
  {
    v2 = 0;
  }
  else
  {
    v2 = RawInputManagerDeviceObjectReference(*(void **)(a1 + 32));
    if ( v2 >= 0 )
    {
      v4 = RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dqqdS(*(_QWORD *)(a1 + 216), v3, v5, v6);
      v2 = TtmNotifyDeviceArrival(2LL, a1, &gTTMDevCallbacks, v4);
      if ( v2 < 0 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 99);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qdSD(
            *(unsigned __int8 *)(a1 + 48),
            v7,
            v8,
            v9,
            a1 + 208,
            a1,
            *(_BYTE *)(a1 + 48),
            *(_QWORD *)(a1 + 216),
            v2);
        if ( v2 != -1073741768 )
          *(_DWORD *)(a1 + 1320) = 1;
        ObfDereferenceObject(*(PVOID *)(a1 + 32));
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v11) = v2;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, 4, 1, 12, (__int64)&WPP_aac38269f52f3d1812b82afa174c5f16_Traceguids, v11);
  }
  return (unsigned int)v2;
}
