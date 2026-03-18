/*
 * XREFs of RIMQueryDev @ 0x1C009EDA4
 * Callers:
 *     rimOnPnpArrived @ 0x1C004A09C (rimOnPnpArrived.c)
 *     RIMRefreshDeviceAttributes @ 0x1C0185AD0 (RIMRefreshDeviceAttributes.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C00044F0 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x1C0034434 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     RIMGetKbdExId @ 0x1C009EF24 (RIMGetKbdExId.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDDD @ 0x1C00A25B0 (WPP_RECORDER_AND_TRACE_SF_DDDD.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMQueryDev(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  ULONG *v5; // rbx
  NTSTATUS v6; // eax
  int v7; // edx
  int v8; // r8d
  unsigned int v9; // esi
  int v11; // edx
  int v12; // r8d
  int v13; // r9d
  int v14; // r10d
  int IoStatusBlock; // [rsp+20h] [rbp-58h]

  v3 = *(unsigned __int8 *)(a2 + 48);
  v5 = (ULONG *)(a1 + 32 * (v3 + 4));
  if ( (_BYTE)v3 == 2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v6 = ZwDeviceIoControlFile(
         *(HANDLE *)(a2 + 224),
         0LL,
         0LL,
         0LL,
         (PIO_STATUS_BLOCK)(a2 + 256),
         v5[2],
         0LL,
         0,
         (PVOID)(a2 + v5[3]),
         v5[4]);
  *(_DWORD *)(a2 + 292) = v6;
  v9 = v6;
  if ( v6 < 0 )
  {
    LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qd(
        WPP_GLOBAL_Control->AttachedDevice,
        v7,
        v8,
        (_DWORD)gRimLog,
        2,
        1,
        21,
        (__int64)&WPP_8fed67cf671c3c35dd73f9843ee5fb4d_Traceguids,
        a2,
        v6);
    }
  }
  if ( *(_BYTE *)(a2 + 48) == 1 )
  {
    if ( (int)RIMGetKbdExId(*(HANDLE *)(a2 + 224)) < 0 )
    {
      v13 = *(unsigned __int8 *)(a2 + 456);
      v14 = *(unsigned __int8 *)(a2 + 457);
      *(_DWORD *)(a2 + 484) = v13;
      *(_DWORD *)(a2 + 488) = v14;
      LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_qDD(
          WPP_GLOBAL_Control->AttachedDevice,
          v11,
          v12,
          (_DWORD)gRimLog,
          2,
          1,
          23,
          (__int64)&WPP_8fed67cf671c3c35dd73f9843ee5fb4d_Traceguids,
          a2,
          v13,
          v14);
      }
    }
    else
    {
      LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_DDDD(
          WPP_GLOBAL_Control->AttachedDevice,
          v11,
          v12,
          (_DWORD)gRimLog,
          IoStatusBlock,
          1,
          22,
          (__int64)&WPP_8fed67cf671c3c35dd73f9843ee5fb4d_Traceguids,
          *(_BYTE *)(a2 + 456),
          *(_BYTE *)(a2 + 457),
          0,
          0);
      }
      *(_QWORD *)(a2 + 484) = 0LL;
    }
  }
  *(_DWORD *)(a2 + 200) &= ~0x40u;
  return v9;
}
