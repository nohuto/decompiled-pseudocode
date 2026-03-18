/*
 * XREFs of RIMQueryDev @ 0x1C00B9950
 * Callers:
 *     rimOnPnpArrived @ 0x1C0076A78 (rimOnPnpArrived.c)
 *     RIMRefreshDeviceAttributes @ 0x1C017A550 (RIMRefreshDeviceAttributes.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C0005754 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x1C00365D0 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     RIMGetKbdExId @ 0x1C00B9AE0 (RIMGetKbdExId.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDDD @ 0x1C00B9CC8 (WPP_RECORDER_AND_TRACE_SF_DDDD.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMQueryDev(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  ULONG *v4; // rbx
  NTSTATUS v5; // eax
  char v6; // si
  unsigned int v7; // ebp
  int v9; // r8d
  int v10; // edx
  char v11; // dl
  int v12; // r9d
  int v13; // r10d
  char v14; // dl
  int IoStatusBlock; // [rsp+20h] [rbp-78h]
  ULONG IoControlCode; // [rsp+28h] [rbp-70h]
  __int64 OutputBufferLength; // [rsp+48h] [rbp-50h]

  v2 = *(unsigned __int8 *)(a2 + 48);
  v4 = (ULONG *)(a1 + 32 * (v2 + 4));
  if ( (_BYTE)v2 == 2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1357LL);
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
  v6 = 1;
  v7 = v5;
  if ( v5 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (v11 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v11 = 0;
    }
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v11,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        2u,
        1u,
        0x15u,
        (__int64)&WPP_0d2ee50f2455342177054e7d919ede81_Traceguids);
  }
  if ( *(_BYTE *)(a2 + 48) == 1 )
  {
    if ( (int)RIMGetKbdExId(*(HANDLE *)(a2 + 224)) < 0 )
    {
      v12 = *(unsigned __int8 *)(a2 + 456);
      v13 = *(unsigned __int8 *)(a2 + 457);
      *(_DWORD *)(a2 + 484) = v12;
      *(_DWORD *)(a2 + 488) = v13;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (v14 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        v14 = 0;
      }
      if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(OutputBufferLength) = v12;
        WPP_RECORDER_AND_TRACE_SF_qDD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v14,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gRimLog,
          2u,
          1u,
          0x17u,
          (__int64)&WPP_0d2ee50f2455342177054e7d919ede81_Traceguids,
          a2,
          OutputBufferLength,
          v13);
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v6 = 0;
      }
      if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = 22;
        LOBYTE(v10) = v6;
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_DDDD(
          WPP_GLOBAL_Control->AttachedDevice,
          v10,
          v9,
          (_DWORD)gRimLog,
          IoStatusBlock,
          IoControlCode,
          22,
          (__int64)&WPP_0d2ee50f2455342177054e7d919ede81_Traceguids,
          *(_BYTE *)(a2 + 456),
          *(_BYTE *)(a2 + 457),
          0,
          0);
      }
      *(_QWORD *)(a2 + 484) = 0LL;
    }
  }
  *(_DWORD *)(a2 + 200) &= ~0x40u;
  return v7;
}
