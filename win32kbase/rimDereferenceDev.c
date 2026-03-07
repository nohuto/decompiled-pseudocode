LONG_PTR __fastcall rimDereferenceDev(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdi
  int v6; // eax
  void *v7; // rsi
  void *v8; // rbp
  int v9; // edx
  int v10; // r8d

  v4 = *(_QWORD **)(a1 + 32);
  if ( !v4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 84LL);
  v6 = *(_DWORD *)(a1 + 184);
  v7 = *(void **)(a1 + 16);
  v8 = *(void **)(a1 + 24);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( (v6 & 0x20) == 0 && (v6 & 0x2000) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 188) & 8) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 97LL);
    if ( *(_QWORD *)(a1 + 192) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 98LL);
  }
  if ( v4[4] == PsGetCurrentProcess(a1, a2, a3, a4) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qq(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        v10,
        (_DWORD)gRimLog,
        4,
        1,
        10,
        (__int64)&WPP_11533c3e880c32a58e181bbd9ba8979b_Traceguids,
        (char)v7,
        a1);
    }
    ObCloseHandle(v7, 1);
  }
  ZwClose(v8);
  return ObfDereferenceObject(v4);
}
