/*
 * XREFs of rimProcessHidInput @ 0x1C017573C
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0175130 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C0166854 (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     rimStackAttachAndProcessInput @ 0x1C01761B4 (rimStackAttachAndProcessInput.c)
 *     ApiSetProcessHidRawInput @ 0x1C01D02A0 (ApiSetProcessHidRawInput.c)
 */

char __fastcall rimProcessHidInput(__int64 a1, __int64 a2)
{
  int v4; // eax
  char result; // al

  if ( (*(_DWORD *)(a2 + 184) & 0x4000) == 0 && (*(_DWORD *)(a2 + 200) & 0x80u) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 357);
  if ( *(_QWORD *)(a2 + 480) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 358);
  if ( !*(_DWORD *)(a1 + 88) && (*(_DWORD *)(a2 + 200) & 0x80u) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 359);
  if ( (*(_QWORD *)(a1 + 640) || *(_DWORD *)(a1 + 864))
    && (v4 = *(_DWORD *)(a2 + 184), (v4 & 0x2000) != 0)
    && (v4 & 0x20000) != 0
    && (v4 & 0x400000) == 0 )
  {
    if ( (v4 & 0x100000) == 0 )
    {
      *(_DWORD *)(a2 + 184) = v4 | 0x100000;
      ZwSetEvent(*(HANDLE *)(a1 + 384), 0LL);
    }
    *(_BYTE *)(a1 + 584) = 1;
    return InputTraceLogging::RIM::DropInput(a2);
  }
  else
  {
    result = rimStackAttachAndProcessInput(a1, a2, *(_QWORD *)(*(_QWORD *)(a2 + 464) + 24LL), (int)a2 + 256, 0);
    if ( (*(_DWORD *)(a2 + 184) & 0x8000) != 0 )
      return ApiSetProcessHidRawInput(a2);
  }
  return result;
}
