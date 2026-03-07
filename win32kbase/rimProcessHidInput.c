void __fastcall rimProcessHidInput(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  if ( (*(_DWORD *)(a2 + 184) & 0x10000) == 0 && (*(_DWORD *)(a2 + 200) & 0x80u) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 377);
  if ( *(_QWORD *)(a2 + 472) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 378);
  if ( !*(_DWORD *)(a1 + 88) && (*(_DWORD *)(a2 + 200) & 0x80u) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 379);
  if ( (*(_QWORD *)(a1 + 832) || *(_DWORD *)(a1 + 1056))
    && (v4 = *(_DWORD *)(a2 + 184), (v4 & 0x2000) != 0)
    && (v4 & 0x80000) != 0
    && (v4 & 0x1000000) == 0 )
  {
    if ( (v4 & 0x400000) == 0 )
    {
      *(_DWORD *)(a2 + 184) = v4 | 0x400000;
      ZwSetEvent(*(HANDLE *)(a1 + 344), 0LL);
    }
    *(_BYTE *)(a1 + 776) = 1;
    InputTraceLogging::RIM::DropInput(a2);
  }
  else
  {
    rimStackAttachAndProcessInput(a1, a2, *(_QWORD *)(*(_QWORD *)(a2 + 456) + 24LL), a2 + 256, 0);
    if ( (*(_DWORD *)(a2 + 184) & 0x20000) != 0 )
    {
      Feature_RIMUserCritOpt__private_ReportDeviceUsage();
      if ( IS_USERCRIT_OWNED_AT_ALL(v6, v5, v7, v8) )
        ApiSetProcessHidRawInput(a2, *(_QWORD *)(*(_QWORD *)(a2 + 456) + 24LL), *(_DWORD *)(a2 + 264));
      else
        rimQueueApiSetHidRawInputAsyncWorkItem(a1, a2);
    }
  }
}
