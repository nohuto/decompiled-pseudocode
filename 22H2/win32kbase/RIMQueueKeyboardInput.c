/*
 * XREFs of RIMQueueKeyboardInput @ 0x1C016A30C
 * Callers:
 *     RIMIDEInjectKeyboardInput @ 0x1C0169680 (RIMIDEInjectKeyboardInput.c)
 *     ?DeliverKeyboardInputToRim@@YAXPEAU_IVKeyboardInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z @ 0x1C01B3DA4 (-DeliverKeyboardInputToRim@@YAXPEAU_IVKeyboardInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV.c)
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C0045174 (WPP_RECORDER_SF_ddd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C0166784 (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0175060 (rimProcessDeviceBufferAndStartRead.c)
 */

__int64 __fastcall RIMQueueKeyboardInput(
        struct RawInputManagerObject *a1,
        struct RIMDEV *a2,
        __int64 *a3,
        unsigned int a4)
{
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rsi
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // xmm0_8
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // edx

  v4 = *((_DWORD *)a2 + 46);
  v5 = 0;
  v6 = a4;
  if ( (v4 & 0x2000) == 0 && (v4 & 0x40) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1999);
  if ( (unsigned int)v6 > 0x10 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2000);
  v10 = *((_DWORD *)a2 + 175);
  if ( v10 + (unsigned int)v6 < v10 || v10 + (unsigned int)v6 > 0x10 )
  {
    InputTraceLogging::RIM::DropInput((__int64)a2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_ddd(
        (_DWORD)gRimLog,
        v16,
        1,
        46,
        (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids,
        *((_DWORD *)a2 + 175),
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
        v13 = *((_DWORD *)a3 + 2);
        a3 = (__int64 *)((char *)a3 + 12);
        v14 = ((unsigned __int8)*((_DWORD *)a2 + 176) + 1) & 0xF;
        *((_DWORD *)a2 + 176) = v14;
        v15 = 3 * (v14 + 59);
        *(_QWORD *)((char *)a2 + 4 * v15) = v12;
        *((_DWORD *)a2 + v15 + 2) = v13;
        ++*((_DWORD *)a2 + 175);
        --v11;
      }
      while ( v11 );
    }
    rimProcessDeviceBufferAndStartRead(a1, a2);
  }
  return v5;
}
