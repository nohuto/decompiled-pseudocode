__int64 __fastcall RIMQueueKeyboardInput(
        struct RawInputManagerObject *a1,
        struct RIMDEV *a2,
        _QWORD *a3,
        unsigned int a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rsi
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // xmm0_8
  __int64 v13; // rax
  __int64 v14; // rcx
  int v16; // edx
  int v17; // r8d

  v4 = *((_DWORD *)a2 + 46);
  v5 = 0;
  v6 = a4;
  if ( (v4 & 0x2000) == 0 && (v4 & 0x40) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2000LL);
  if ( (unsigned int)v6 > 0x10 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2001LL);
  v10 = *((_DWORD *)a2 + 173);
  if ( v10 + (unsigned int)v6 < v10 || v10 + (unsigned int)v6 > 0x10 )
  {
    InputTraceLogging::RIM::DropInput(a2, 7LL);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v16) = 0;
    }
    if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_ddd(
        WPP_GLOBAL_Control->AttachedDevice,
        v16,
        v17,
        (_DWORD)gRimLog,
        2,
        1,
        46,
        (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids,
        *((_DWORD *)a2 + 173),
        16,
        v6);
    }
    return (unsigned int)-1073741789;
  }
  else
  {
    if ( (_DWORD)v6 )
    {
      v11 = v6;
      do
      {
        v12 = *a3;
        v13 = ((unsigned __int8)*((_DWORD *)a2 + 174) + 1) & 0xF;
        a3 = (_QWORD *)((char *)a3 + 12);
        *((_DWORD *)a2 + 174) = v13;
        v14 = 3 * v13;
        LODWORD(v13) = *((_DWORD *)a3 - 1);
        *(_QWORD *)((char *)a2 + 4 * v14 + 700) = v12;
        *((_DWORD *)a2 + v14 + 177) = v13;
        ++*((_DWORD *)a2 + 173);
        --v11;
      }
      while ( v11 );
    }
    rimProcessDeviceBufferAndStartRead(a1, a2);
  }
  return v5;
}
