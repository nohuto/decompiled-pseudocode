/*
 * XREFs of ?SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z @ 0x1C0204A94
 * Callers:
 *     ?DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z @ 0x1C01EFF70 (-DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z @ 0x1C01FC0C4 (-LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z.c)
 *     ?ReevaluateQFrameHasDelegation@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C0200AF4 (-ReevaluateQFrameHasDelegation@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z.c)
 */

void __fastcall CTouchProcessor::SetPointerInfoNodeDelegateAction(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6)
{
  struct CPointerInfoNode *v9; // rax
  CTouchProcessor *v10; // rcx
  struct CPointerInfoNode *v11; // rbx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // edi
  int v18; // r8d
  int v19; // eax
  _DWORD *v20; // rdi
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax

  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15096);
  v9 = CTouchProcessor::LookupNode((CTouchProcessor *)this, a2, a3);
  v11 = v9;
  if ( a5 )
  {
    switch ( a4 )
    {
      case 585:
        v12 = *(_DWORD *)v9;
        if ( (v12 & 0x1000000) == 0 || (v12 & 0x2000000) != 0 || (v12 & 0x4000000) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15109);
        *(_DWORD *)v11 |= 0x2000000u;
        break;
      case 586:
        *(_DWORD *)v9 |= 0x20000000u;
        break;
      case 593:
        v13 = *((_DWORD *)v9 + 1);
        if ( (v13 & 1) == 0 || (v13 & 2) != 0 || (v13 & 4) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15123);
        *((_DWORD *)v11 + 1) |= 2u;
        break;
      case 594:
        v14 = *((_DWORD *)v9 + 1);
        if ( (v14 & 0x10) == 0 || (v14 & 0x20) != 0 || (v14 & 0x40) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15130);
        *((_DWORD *)v11 + 1) |= 0x20u;
        break;
      default:
        v15 = *(_DWORD *)v9;
        if ( (v15 & 0x100000) == 0 || (v15 & 0x200000) != 0 || (v15 & 0x400000) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15137);
        *(_DWORD *)v11 |= 0x200000u;
        break;
    }
    goto LABEL_77;
  }
  if ( a6 )
  {
    switch ( a4 )
    {
      case 585:
        v16 = *(_DWORD *)v9;
        v17 = 0x1000000;
        if ( (v16 & 0x800000) != 0 && (v16 & 0x1000000) == 0 )
          goto LABEL_51;
        v18 = 15146;
        goto LABEL_50;
      case 586:
        v19 = *(_DWORD *)v9;
        v17 = 0x10000000;
        if ( (v19 & 0x8000000) != 0 && (v19 & 0x10000000) == 0 )
          goto LABEL_51;
        v18 = 15152;
        goto LABEL_50;
      case 593:
        v20 = (_DWORD *)((char *)v9 + 4);
        if ( *(int *)v9 >= 0 || (*v20 & 1) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15158);
        *v20 |= 1u;
        break;
      case 594:
        v21 = *((_DWORD *)v9 + 1);
        if ( (v21 & 8) == 0 || (v21 & 0x10) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15163);
        *((_DWORD *)v11 + 1) |= 0x10u;
        break;
      default:
        v17 = 0x100000;
        if ( (*(_DWORD *)v9 & 0x100000) == 0 )
        {
LABEL_51:
          *(_DWORD *)v11 |= v17;
          break;
        }
        v18 = 15168;
LABEL_50:
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, v18);
        goto LABEL_51;
    }
  }
  else
  {
    switch ( a4 )
    {
      case 585:
        v22 = *(_DWORD *)v9;
        if ( (v22 & 0x1000000) == 0 || (v22 & 0x2000000) != 0 || (v22 & 0x4000000) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15190);
        *(_DWORD *)v11 |= 0x4000000u;
        break;
      case 586:
        v23 = *(_DWORD *)v9;
        if ( (v23 & 0x10000000) == 0 || (v23 & 0x20000000) != 0 || (v23 & 0x40000000) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15197);
        *(_DWORD *)v11 |= 0x40000000u;
        break;
      case 593:
        v24 = *((_DWORD *)v9 + 1);
        if ( (v24 & 1) == 0 || (v24 & 2) != 0 || (v24 & 4) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15204);
        *((_DWORD *)v11 + 1) |= 4u;
        break;
      case 594:
        v25 = *((_DWORD *)v9 + 1);
        if ( (v25 & 0x10) == 0 || (v25 & 0x20) != 0 || (v25 & 0x40) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15211);
        *((_DWORD *)v11 + 1) |= 0x40u;
        break;
      default:
        *(_DWORD *)v9 |= 0x400000u;
        break;
    }
  }
LABEL_77:
  CTouchProcessor::ReevaluateQFrameHasDelegation(v10, a2, *((_DWORD *)v11 + 2));
}
