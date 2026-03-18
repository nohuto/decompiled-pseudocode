/*
 * XREFs of ?DelegateChainingResetSetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KI@Z @ 0x1C01C0F00
 * Callers:
 *     ?DelegateChainingResetAndCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z @ 0x1C01C0D30 (-DelegateChainingResetAndCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z @ 0x1C01CD2C4 (-LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z.c)
 *     ?ReevaluateQFrameHasDelegation@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C01D1D14 (-ReevaluateQFrameHasDelegation@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z.c)
 */

void __fastcall CTouchProcessor::DelegateChainingResetSetPointerInfoNodeDelegateAction(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        int a4)
{
  struct CPointerInfoNode *v7; // rax
  CTouchProcessor *v8; // rcx
  struct CPointerInfoNode *v9; // rbx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax

  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15150);
  v7 = CTouchProcessor::LookupNode((CTouchProcessor *)this, a2, a3);
  v9 = v7;
  switch ( a4 )
  {
    case 585:
      v10 = *(_DWORD *)v7;
      if ( (v10 & 0x1000000) == 0 || (v10 & 0x2000000) != 0 || (v10 & 0x4000000) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15161);
      *(_DWORD *)v9 &= ~0x4000000u;
      break;
    case 586:
      v11 = *(_DWORD *)v7;
      if ( (v11 & 0x10000000) == 0 || (v11 & 0x20000000) != 0 || (v11 & 0x40000000) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15168);
      *(_DWORD *)v9 &= ~0x40000000u;
      break;
    case 593:
      v12 = *((_DWORD *)v7 + 1);
      if ( (v12 & 1) == 0 || (v12 & 2) != 0 || (v12 & 4) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15175);
      *((_DWORD *)v9 + 1) &= ~4u;
      break;
    case 594:
      v13 = *((_DWORD *)v7 + 1);
      if ( (v13 & 0x10) == 0 || (v13 & 0x20) != 0 || (v13 & 0x40) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15182);
      *((_DWORD *)v9 + 1) &= ~0x40u;
      break;
    default:
      *(_DWORD *)v7 &= ~0x400000u;
      break;
  }
  CTouchProcessor::ReevaluateQFrameHasDelegation(v8, a2, *((_DWORD *)v9 + 2));
}
