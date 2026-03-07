__int64 __fastcall RIMQueryDev(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  ULONG *v4; // rbx
  NTSTATUS v5; // eax
  int v6; // edx
  int v7; // r8d
  unsigned int v8; // esi
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  int v13; // r10d
  int IoStatusBlock; // [rsp+20h] [rbp-68h]

  v2 = *(unsigned __int8 *)(a2 + 48);
  v4 = (ULONG *)(a1 + 32 * (v2 + 4));
  if ( (_BYTE)v2 == 2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1426LL);
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
  v8 = v5;
  if ( v5 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v6) = 0;
    }
    if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qd(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v7,
        (_DWORD)gRimLog,
        2,
        1,
        21,
        (__int64)&WPP_11533c3e880c32a58e181bbd9ba8979b_Traceguids,
        a2,
        v5);
    }
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
        || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v10) = 0;
      }
      if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_qDD(
          WPP_GLOBAL_Control->AttachedDevice,
          v10,
          v11,
          (_DWORD)gRimLog,
          2,
          1,
          23,
          (__int64)&WPP_11533c3e880c32a58e181bbd9ba8979b_Traceguids,
          a2,
          v12,
          v13);
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v10) = 0;
      }
      if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_DDDD(
          WPP_GLOBAL_Control->AttachedDevice,
          v10,
          v11,
          (_DWORD)gRimLog,
          IoStatusBlock,
          1,
          22,
          (__int64)&WPP_11533c3e880c32a58e181bbd9ba8979b_Traceguids,
          *(_BYTE *)(a2 + 456),
          *(_BYTE *)(a2 + 457),
          0,
          0);
      }
      *(_QWORD *)(a2 + 484) = 0LL;
    }
  }
  *(_DWORD *)(a2 + 200) &= ~0x40u;
  return v8;
}
