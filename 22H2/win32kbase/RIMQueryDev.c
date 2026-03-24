/*
 * XREFs of RIMQueryDev @ 0x1C0005BF0
 * Callers:
 *     rimOnPnpArrived @ 0x1C0056904 (rimOnPnpArrived.c)
 *     RIMRefreshDeviceAttributes @ 0x1C0157D30 (RIMRefreshDeviceAttributes.c)
 * Callees:
 *     RIMGetKbdExId @ 0x1C0005D3C (RIMGetKbdExId.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C0008458 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0057570 (WPP_RECORDER_SF_qDD.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0137454 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall RIMQueryDev(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  ULONG *v4; // rbx
  NTSTATUS v5; // eax
  int v6; // edx
  unsigned int v7; // esi
  int v9; // edx
  int v10; // eax
  int v11; // ecx

  v2 = *(unsigned __int8 *)(a2 + 48);
  v4 = (ULONG *)(a1 + 32 * (v2 + 4));
  if ( (_BYTE)v2 == 2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 895LL);
  v5 = ZwDeviceIoControlFile(
         *(HANDLE *)(a2 + 224),
         0LL,
         0LL,
         0LL,
         (PIO_STATUS_BLOCK)(a2 + 256),
         v4[2],
         0LL,
         0,
         (PVOID)(a2 + v4[3]),
         v4[4]);
  *(_DWORD *)(a2 + 292) = v5;
  v7 = v5;
  if ( v5 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_qd((_DWORD)gRimLog, v6, 1, 20, (__int64)&WPP_ca8085c5223136153291efdbd0fc109f_Traceguids, a2, v5);
  }
  if ( *(_BYTE *)(a2 + 48) == 1 )
  {
    if ( (int)RIMGetKbdExId(*(HANDLE *)(a2 + 224)) < 0 )
    {
      v10 = *(unsigned __int8 *)(a2 + 464);
      v11 = *(unsigned __int8 *)(a2 + 465);
      *(_DWORD *)(a2 + 492) = v10;
      *(_DWORD *)(a2 + 496) = v11;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_qDD(
          (_DWORD)gRimLog,
          v9,
          1,
          22,
          (__int64)&WPP_ca8085c5223136153291efdbd0fc109f_Traceguids,
          a2,
          v10,
          v11);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDDD(
          (_DWORD)gRimLog,
          *(unsigned __int8 *)(a2 + 464),
          1,
          21,
          (__int64)&WPP_ca8085c5223136153291efdbd0fc109f_Traceguids,
          *(_BYTE *)(a2 + 464),
          *(_BYTE *)(a2 + 465),
          0,
          0);
      *(_QWORD *)(a2 + 492) = 0LL;
    }
  }
  *(_DWORD *)(a2 + 200) &= ~0x40u;
  return v7;
}
