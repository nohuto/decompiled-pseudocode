/*
 * XREFs of RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1C00043BC
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0003AE4 (rimProcessDeviceBufferAndStartRead.c)
 *     rimProcessInjectedDeviceBuffers @ 0x1C0004228 (rimProcessInjectedDeviceBuffers.c)
 *     RIMOnPnpNotification @ 0x1C00383E0 (RIMOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C007EBF0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMTransferInjectionDeviceDataFifoToDataBuffer(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rbx
  char v4; // al
  unsigned int v5; // ecx
  __int64 result; // rax
  unsigned int v7; // r9d
  unsigned int v8; // r8d
  unsigned int v9; // r10d
  __int64 v10; // rdx
  __int64 v11; // xmm0_8
  __int64 v12; // rcx
  int v13; // r9d
  __int64 v14; // rcx
  unsigned int v15; // ecx
  unsigned int v16; // r9d
  unsigned int v17; // r10d
  __int64 v18; // rdx
  __int128 v19; // xmm0
  __int64 v20; // rcx
  int v21; // r9d
  PDEVICE_OBJECT v22; // rcx
  __int16 v23; // r9

  v2 = *(_DWORD *)(a2 + 184);
  v3 = a2;
  if ( (v2 & 0x2000) == 0 && (v2 & 0x40) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2702LL);
  v4 = *(_BYTE *)(v3 + 48);
  if ( v4 )
  {
    if ( v4 != 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2740LL);
    v5 = *(_DWORD *)(v3 + 692);
    if ( v5 > 0x10 )
    {
      LODWORD(result) = 16;
    }
    else
    {
      result = v5;
      if ( !v5 )
        return result;
    }
    v7 = *(_DWORD *)(v3 + 688);
    v8 = 16 - v7;
    if ( 16 - v7 >= (unsigned int)result )
      v8 = result;
    if ( v8 )
    {
      v9 = 0;
      do
      {
        ++v9;
        v10 = 3LL * (((unsigned __int8)*(_DWORD *)(v3 + 696) - (_BYTE)v5 + 1) & 0xF);
        v11 = *(_QWORD *)(v3 + 12LL * (((unsigned __int8)*(_DWORD *)(v3 + 696) - (_BYTE)v5 + 1) & 0xF) + 700);
        v12 = 3LL * v7;
        *(_QWORD *)(v3 + 4 * v12 + 496) = v11;
        *(_DWORD *)(v3 + 4 * v12 + 504) = *(_DWORD *)(v3 + 4 * v10 + 708);
        v13 = *(_DWORD *)(v3 + 688);
        --*(_DWORD *)(v3 + 692);
        v7 = v13 + 1;
        v5 = *(_DWORD *)(v3 + 692);
        *(_DWORD *)(v3 + 688) = v7;
      }
      while ( v9 < v8 );
      result = v7;
      v14 = 12LL * v7;
LABEL_13:
      *(_DWORD *)(v3 + 256) = 0;
      *(_QWORD *)(v3 + 264) = v14;
      return result;
    }
    v22 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(a2) = 0;
    }
    result = (__int64)&WPP_RECORDER_INITIALIZED;
    LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = 61;
      return WPP_RECORDER_AND_TRACE_SF_q(
               v22->AttachedDevice,
               a2,
               v8,
               (_DWORD)gRimLog,
               4,
               1,
               v23,
               (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids,
               v3);
    }
  }
  else
  {
    v15 = *(_DWORD *)(v3 + 916);
    if ( v15 <= 0x10 )
    {
      result = v15;
      if ( !v15 )
        return result;
    }
    else
    {
      LODWORD(result) = 16;
    }
    v16 = *(_DWORD *)(v3 + 912);
    v8 = 16 - v16;
    if ( 16 - v16 >= (unsigned int)result )
      v8 = result;
    if ( v8 )
    {
      v17 = 0;
      do
      {
        ++v17;
        v18 = 3LL * (((unsigned __int8)*(_DWORD *)(v3 + 920) - (_BYTE)v15 + 1) & 0xF);
        v19 = *(_OWORD *)(v3 + 24LL * (((unsigned __int8)*(_DWORD *)(v3 + 920) - (_BYTE)v15 + 1) & 0xF) + 924);
        v20 = 3LL * v16;
        *(_OWORD *)(v3 + 8 * v20 + 468) = v19;
        *(_QWORD *)(v3 + 8 * v20 + 484) = *(_QWORD *)(v3 + 8 * v18 + 940);
        v21 = *(_DWORD *)(v3 + 912);
        --*(_DWORD *)(v3 + 916);
        v16 = v21 + 1;
        v15 = *(_DWORD *)(v3 + 916);
        *(_DWORD *)(v3 + 912) = v16;
      }
      while ( v17 < v8 );
      result = v16;
      v14 = 24LL * v16;
      goto LABEL_13;
    }
    v22 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(a2) = 0;
    }
    result = (__int64)&WPP_RECORDER_INITIALIZED;
    LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = 60;
      return WPP_RECORDER_AND_TRACE_SF_q(
               v22->AttachedDevice,
               a2,
               v8,
               (_DWORD)gRimLog,
               4,
               1,
               v23,
               (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids,
               v3);
    }
  }
  return result;
}
