void __fastcall CTouchProcessor::DelegateChainingResetSetPointerInfoNodeDelegateAction(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        int a4)
{
  CTouchProcessor *v8; // rcx
  struct CPointerInfoNode *v9; // rax
  CTouchProcessor *v10; // rcx
  struct CPointerInfoNode *v11; // rbx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax

  if ( (unsigned int)Feature_AbydosInfra__private_IsEnabledDeviceUsage() )
  {
    if ( this[5] != KeGetCurrentThread() )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15244);
    v9 = CTouchProcessor::LookupNode(v8, a2, a3);
    v11 = v9;
    switch ( a4 )
    {
      case 585:
        v12 = *(_DWORD *)v9;
        if ( (v12 & 0x1000000) == 0 || (v12 & 0x2000000) != 0 || (v12 & 0x4000000) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15255);
        *(_DWORD *)v11 &= ~0x4000000u;
        break;
      case 586:
        v13 = *(_DWORD *)v9;
        if ( (v13 & 0x10000000) == 0 || (v13 & 0x20000000) != 0 || (v13 & 0x40000000) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15262);
        *(_DWORD *)v11 &= ~0x40000000u;
        break;
      case 593:
        v14 = *((_DWORD *)v9 + 1);
        if ( (v14 & 1) == 0 || (v14 & 2) != 0 || (v14 & 4) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15269);
        *((_DWORD *)v11 + 1) &= ~4u;
        break;
      case 594:
        v15 = *((_DWORD *)v9 + 1);
        if ( (v15 & 0x10) == 0 || (v15 & 0x20) != 0 || (v15 & 0x40) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15276);
        *((_DWORD *)v11 + 1) &= ~0x40u;
        break;
      default:
        *(_DWORD *)v9 &= ~0x400000u;
        break;
    }
    CTouchProcessor::ReevaluateQFrameHasDelegation(v10, a2, *((_DWORD *)v11 + 2));
  }
}
