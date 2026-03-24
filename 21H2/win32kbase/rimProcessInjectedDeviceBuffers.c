/*
 * XREFs of rimProcessInjectedDeviceBuffers @ 0x1C0175898
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0175130 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C0166854 (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1C016A6C4 (RIMTransferInjectionDeviceDataFifoToDataBuffer.c)
 *     ?PauseDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C0173B70 (-PauseDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 */

char __fastcall rimProcessInjectedDeviceBuffers(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rdi
  __int64 v5; // rax
  int v6; // r8d
  __int64 *v7; // rbx
  __int64 **v8; // rcx

  v2 = *(_DWORD *)(a2 + 184);
  v4 = a1;
  if ( (v2 & 0x2000) == 0 && (v2 & 0x40) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 979);
  LOBYTE(v5) = *(_BYTE *)(a2 + 48);
  LOBYTE(a1) = 1;
  if ( !(_BYTE)v5 && *(_DWORD *)(a2 + 924) || (_BYTE)v5 == 1 && *(_DWORD *)(a2 + 700) )
  {
    if ( !*(_BYTE *)(v4 + 584) )
    {
      if ( (_BYTE)v5 )
      {
        if ( *(_DWORD *)(a2 + 696) )
        {
          v6 = 1001;
          goto LABEL_14;
        }
      }
      else if ( *(_DWORD *)(a2 + 920) )
      {
        v6 = 997;
LABEL_14:
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, v6);
      }
      RIMTransferInjectionDeviceDataFifoToDataBuffer(a1, a2);
      InputTraceLogging::RIM::PauseDevice((const struct RIMDEV *)a2);
      *(_DWORD *)(a2 + 184) |= 0x200u;
      v7 = (__int64 *)(a2 + 104);
      if ( (__int64 *)*v7 != v7 )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1015);
      v5 = v4 + 592;
      v8 = *(__int64 ***)(v4 + 600);
      if ( *v8 != (__int64 *)(v4 + 592) )
        __fastfail(3u);
      *v7 = v5;
      v7[1] = (__int64)v8;
      *v8 = v7;
      *(_QWORD *)(v4 + 600) = v7;
      return v5;
    }
    if ( (_BYTE)v5 )
    {
      if ( !*(_DWORD *)(a2 + 696) )
      {
        LOBYTE(v5) = InputTraceLogging::RIM::DropInput(a2);
        *(_DWORD *)(a2 + 700) = 0;
      }
    }
    else if ( !*(_DWORD *)(a2 + 920) )
    {
      LOBYTE(v5) = InputTraceLogging::RIM::DropInput(a2);
      *(_DWORD *)(a2 + 924) = 0;
    }
  }
  return v5;
}
