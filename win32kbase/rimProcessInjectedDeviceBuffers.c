char __fastcall rimProcessInjectedDeviceBuffers(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // r8
  _QWORD *v7; // rbx
  _QWORD *v8; // rcx

  v2 = *(_DWORD *)(a2 + 184);
  v4 = a1;
  if ( (v2 & 0x2000) == 0 && (v2 & 0x40) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1043LL);
  LOBYTE(v5) = *(_BYTE *)(a2 + 48);
  LOBYTE(a1) = 1;
  if ( !(_BYTE)v5 && *(_DWORD *)(a2 + 916) || (_BYTE)v5 == 1 && *(_DWORD *)(a2 + 692) )
  {
    if ( *(_BYTE *)(v4 + 776) )
    {
      if ( (_BYTE)v5 )
      {
        if ( !*(_DWORD *)(a2 + 688) )
        {
          LOBYTE(v5) = InputTraceLogging::RIM::DropInput(a2, 8LL);
          *(_DWORD *)(a2 + 692) = 0;
        }
      }
      else if ( !*(_DWORD *)(a2 + 912) )
      {
        LOBYTE(v5) = InputTraceLogging::RIM::DropInput(a2, 8LL);
        *(_DWORD *)(a2 + 916) = 0;
      }
      return v5;
    }
    if ( (_BYTE)v5 )
    {
      if ( *(_DWORD *)(a2 + 688) )
      {
        v6 = 1065LL;
        goto LABEL_15;
      }
    }
    else if ( *(_DWORD *)(a2 + 912) )
    {
      v6 = 1061LL;
LABEL_15:
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, v6);
    }
    RIMTransferInjectionDeviceDataFifoToDataBuffer(a1, a2);
    InputTraceLogging::RIM::PauseDevice((const struct RIMDEV *)a2);
    *(_DWORD *)(a2 + 184) |= 0x200u;
    v7 = (_QWORD *)(a2 + 104);
    if ( (_QWORD *)*v7 != v7 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1079LL);
    v5 = v4 + 784;
    v8 = *(_QWORD **)(v4 + 792);
    if ( *v8 != v4 + 784 )
      __fastfail(3u);
    *v7 = v5;
    v7[1] = v8;
    *v8 = v7;
    *(_QWORD *)(v4 + 792) = v7;
  }
  return v5;
}
