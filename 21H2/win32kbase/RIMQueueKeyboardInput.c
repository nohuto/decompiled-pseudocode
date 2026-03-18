/*
 * XREFs of RIMQueueKeyboardInput @ 0x1C0003AA8
 * Callers:
 *     RIMIDEInjectKeyboardInput @ 0x1C00039D0 (RIMIDEInjectKeyboardInput.c)
 *     ?DeliverKeyboardInputToRim@@YAXPEAU_IVKeyboardInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z @ 0x1C01EC4A8 (-DeliverKeyboardInputToRim@@YAXPEAU_IVKeyboardInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV.c)
 * Callees:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0003B78 (rimProcessDeviceBufferAndStartRead.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x1C0034D74 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C019A7B0 (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMQueueKeyboardInput(
        struct RawInputManagerObject *a1,
        struct RIMDEV *a2,
        _QWORD *a3,
        unsigned int a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rsi
  _QWORD *v7; // rbp
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
  v7 = a3;
  if ( (v4 & 0x2000) == 0 && (v4 & 0x40) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( (unsigned int)v6 > 0x10 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
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
        (__int64)&WPP_7878fd3f7fa83d1a8663537599fa40db_Traceguids,
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
        v12 = *v7;
        v13 = ((unsigned __int8)*((_DWORD *)a2 + 174) + 1) & 0xF;
        v7 = (_QWORD *)((char *)v7 + 12);
        *((_DWORD *)a2 + 174) = v13;
        v14 = 3 * v13;
        LODWORD(v13) = *((_DWORD *)v7 - 1);
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
