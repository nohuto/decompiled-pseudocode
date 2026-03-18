/*
 * XREFs of rimFindPausedDeviceAndCompleteRead @ 0x1C00483F8
 * Callers:
 *     rimCompleteReads @ 0x1C0044C40 (rimCompleteReads.c)
 * Callees:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0003B78 (rimProcessDeviceBufferAndStartRead.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003D298 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00A2040 (RimDeviceTypeToRimInputType.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimFindPausedDeviceAndCompleteRead(struct RawInputManagerObject *a1, __int64 a2, __int64 a3)
{
  struct RawInputManagerObject *v3; // rsi
  _QWORD **v4; // r14
  unsigned int v5; // ebp
  _QWORD *v6; // rbx
  _QWORD *v8; // rdi
  char v9; // al
  __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rcx

  v3 = a1;
  v4 = (_QWORD **)((char *)a1 + 816);
  v5 = -1073741823;
  while ( 1 )
  {
    v6 = *v4;
    if ( *v4 == v4 )
      break;
    v8 = v6 - 24;
    v9 = *((_BYTE *)v6 - 56);
    if ( v9 == 3 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
      v9 = *((_BYTE *)v8 + 136);
    }
    if ( v9 == 2 && (*((_DWORD *)v8 + 72) & 0x80u) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    if ( (struct RawInputManagerObject *)v8[53] != v3 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    if ( ((unsigned int)RimDeviceTypeToRimInputType(v8 + 11, *((unsigned __int8 *)v8 + 136), a3) & *((_DWORD *)v3 + 21)) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, a2, a3);
    v11 = *v6;
    if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v12 = (_QWORD *)v6[1], (_QWORD *)*v12 != v6) )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    v6[1] = v6;
    *v6 = v6;
    if ( (v8[34] & 0x400) == 0 )
    {
      rimProcessDeviceBufferAndStartRead(v3, (struct RIMDEV *)(v8 + 11), 0);
      if ( !*((_BYTE *)v3 + 808) )
        return 0;
    }
    a1 = (struct RawInputManagerObject *)WPP_GLOBAL_Control;
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qq(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        a3,
        (_DWORD)gRimLog,
        3,
        1,
        12,
        (__int64)&WPP_fb4da5122c8637fa36fe5a9ef1cf41b2_Traceguids,
        (_BYTE)v6 + 64,
        (char)v3);
  }
  return v5;
}
