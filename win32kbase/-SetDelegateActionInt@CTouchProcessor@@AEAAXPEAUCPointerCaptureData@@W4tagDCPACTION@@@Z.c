void __fastcall CTouchProcessor::SetDelegateActionInt(__int64 a1, __int64 a2, int a3)
{
  bool v4; // al
  _UNKNOWN **v5; // rdx
  void *v6; // r8
  int v7; // eax
  char v8; // [rsp+40h] [rbp-18h]

  switch ( a3 )
  {
    case 1:
      *(_DWORD *)(a2 + 304) |= 1u;
      break;
    case 2:
      *(_DWORD *)(a2 + 304) |= 2u;
      break;
    case 3:
      *(_DWORD *)(a2 + 304) |= 4u;
      break;
    case 4:
      if ( (*(_DWORD *)(a2 + 304) & 4) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12634);
      if ( (*(_DWORD *)(a2 + 304) & 0x20) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12635);
      if ( (*(_DWORD *)(a2 + 304) & 8) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12636);
      *(_DWORD *)(a2 + 304) |= 8u;
      break;
    case 5:
      if ( !gbIgnoreStressedOutStuff )
      {
        v7 = *(_DWORD *)(a2 + 304);
        if ( (v7 & 4) == 0 && (v7 & 8) == 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12642);
      }
      *(_DWORD *)(a2 + 304) |= 0x10u;
      break;
    case 6:
      if ( (*(_DWORD *)(a2 + 304) & 0x20) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12649);
      *(_DWORD *)(a2 + 304) |= 0x20u;
      break;
    default:
      v4 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      v5 = &WPP_RECORDER_INITIALIZED;
      if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v8 = a3;
        v6 = &WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids;
        LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        LOBYTE(v5) = v4;
        WPP_RECORDER_AND_TRACE_SF_L(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v5,
          (_DWORD)v6,
          295,
          2,
          7,
          295,
          (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids,
          v8);
      }
      break;
  }
}
