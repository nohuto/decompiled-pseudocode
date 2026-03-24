/*
 * XREFs of rimFindPausedDeviceAndCompleteRead @ 0x1C0055C40
 * Callers:
 *     rimCompleteReads @ 0x1C0053548 (rimCompleteReads.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C004B460 (WPP_RECORDER_SF_qq.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0055804 (RimDeviceTypeToRimInputType.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0175130 (rimProcessDeviceBufferAndStartRead.c)
 */

__int64 __fastcall rimFindPausedDeviceAndCompleteRead(struct RawInputManagerObject *a1)
{
  struct RawInputManagerObject **v1; // r14
  struct RawInputManagerObject *v3; // rbx
  unsigned int v4; // ebp
  char *v6; // rdi
  char v7; // al
  int v8; // edx
  __int64 v9; // rax
  struct RawInputManagerObject **v10; // rcx

  v1 = (struct RawInputManagerObject **)((char *)a1 + 592);
  v3 = (struct RawInputManagerObject *)*((_QWORD *)a1 + 74);
  v4 = -1073741823;
  if ( v3 != (struct RawInputManagerObject *)((char *)a1 + 592) )
  {
    while ( 1 )
    {
      v6 = (char *)v3 - 192;
      v7 = *((_BYTE *)v3 - 56);
      if ( v7 == 3 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 264LL);
        v7 = v6[136];
      }
      if ( v7 == 2 && (*((_DWORD *)v6 + 72) & 0x80u) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 265LL);
      if ( *((struct RawInputManagerObject **)v6 + 53) != a1 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 266LL);
      if ( ((unsigned int)RimDeviceTypeToRimInputType((__int64)(v6 + 88), (unsigned __int8)v6[136]) & *((_DWORD *)a1 + 21)) == 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 267LL);
      v9 = *(_QWORD *)v3;
      if ( *(struct RawInputManagerObject **)(*(_QWORD *)v3 + 8LL) != v3
        || (v10 = (struct RawInputManagerObject **)*((_QWORD *)v3 + 1), *v10 != v3) )
      {
        __fastfail(3u);
      }
      *v10 = (struct RawInputManagerObject *)v9;
      *(_QWORD *)(v9 + 8) = v10;
      *((_QWORD *)v3 + 1) = v3;
      *(_QWORD *)v3 = v3;
      if ( (*((_DWORD *)v6 + 68) & 0x400) == 0 )
      {
        rimProcessDeviceBufferAndStartRead(a1, (struct RIMDEV *)(v6 + 88));
        if ( !*((_BYTE *)a1 + 584) )
          break;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 3;
        WPP_RECORDER_SF_qq(
          (_DWORD)gRimLog,
          v8,
          1,
          12,
          (__int64)&WPP_983e01fc9fa9381bba5b22f4de9fad94_Traceguids,
          (_BYTE)v3 + 64,
          (char)a1);
      }
      v3 = *v1;
      if ( *v1 == (struct RawInputManagerObject *)v1 )
        return v4;
    }
    return 0;
  }
  return v4;
}
