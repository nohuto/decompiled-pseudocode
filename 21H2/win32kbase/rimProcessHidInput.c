/*
 * XREFs of rimProcessHidInput @ 0x1C01A99EC
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0003B78 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     rimStackAttachAndProcessInput @ 0x1C0004590 (rimStackAttachAndProcessInput.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C019A7B0 (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     ApiSetProcessHidRawInput @ 0x1C020EF90 (ApiSetProcessHidRawInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimProcessHidInput(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax

  if ( (*(_DWORD *)(a2 + 184) & 0x10000) == 0 && (*(_DWORD *)(a2 + 200) & 0x80u) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( *(_QWORD *)(a2 + 472) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( !*(_DWORD *)(a1 + 88) && (*(_DWORD *)(a2 + 200) & 0x80u) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( (*(_QWORD *)(a1 + 864) || *(_DWORD *)(a1 + 1088))
    && (v5 = *(_DWORD *)(a2 + 184), (v5 & 0x2000) != 0)
    && (v5 & 0x80000) != 0
    && (v5 & 0x1000000) == 0 )
  {
    if ( (v5 & 0x400000) == 0 )
    {
      *(_DWORD *)(a2 + 184) = v5 | 0x400000;
      ZwSetEvent(*(HANDLE *)(a1 + 344), 0LL);
    }
    *(_BYTE *)(a1 + 808) = 1;
    InputTraceLogging::RIM::DropInput(a2);
  }
  else
  {
    rimStackAttachAndProcessInput(a1, a2, *(_QWORD *)(*(_QWORD *)(a2 + 456) + 24LL), a2 + 256, 0);
    if ( (*(_DWORD *)(a2 + 184) & 0x20000) != 0 )
      ApiSetProcessHidRawInput(a2);
  }
}
