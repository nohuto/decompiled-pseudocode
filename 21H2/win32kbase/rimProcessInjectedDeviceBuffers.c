/*
 * XREFs of rimProcessInjectedDeviceBuffers @ 0x1C0003D68
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0003B78 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1C00042B8 (RIMTransferInjectionDeviceDataFifoToDataBuffer.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C019A7B0 (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     ?PauseDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C01A8D4C (-PauseDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall rimProcessInjectedDeviceBuffers(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD *v10; // rbx
  _QWORD *v11; // rcx

  v3 = *(_DWORD *)(a2 + 184);
  v5 = a1;
  if ( (v3 & 0x2000) == 0 && (v3 & 0x40) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  LOBYTE(v6) = *(_BYTE *)(a2 + 48);
  LOBYTE(a1) = 1;
  if ( !(_BYTE)v6 && *(_DWORD *)(a2 + 916) || (_BYTE)v6 == 1 && *(_DWORD *)(a2 + 692) )
  {
    if ( *(_BYTE *)(v5 + 808) )
    {
      if ( (_BYTE)v6 )
      {
        if ( !*(_DWORD *)(a2 + 688) )
        {
          LOBYTE(v6) = InputTraceLogging::RIM::DropInput(a2, 8LL);
          *(_DWORD *)(a2 + 692) = 0;
        }
      }
      else if ( !*(_DWORD *)(a2 + 912) )
      {
        LOBYTE(v6) = InputTraceLogging::RIM::DropInput(a2, 8LL);
        *(_DWORD *)(a2 + 916) = 0;
      }
      return v6;
    }
    if ( (_BYTE)v6 )
    {
      if ( *(_DWORD *)(a2 + 688) )
LABEL_14:
        MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    }
    else if ( *(_DWORD *)(a2 + 912) )
    {
      goto LABEL_14;
    }
    RIMTransferInjectionDeviceDataFifoToDataBuffer(a1, a2);
    InputTraceLogging::RIM::PauseDevice((const struct RIMDEV *)a2);
    *(_DWORD *)(a2 + 184) |= 0x200u;
    v10 = (_QWORD *)(a2 + 104);
    if ( (_QWORD *)*v10 != v10 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
    v6 = v5 + 816;
    v11 = *(_QWORD **)(v5 + 824);
    if ( *v11 != v5 + 816 )
      __fastfail(3u);
    *v10 = v6;
    v10[1] = v11;
    *v11 = v10;
    *(_QWORD *)(v5 + 824) = v10;
  }
  return v6;
}
