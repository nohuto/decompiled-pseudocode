/*
 * XREFs of ?SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z @ 0x1C019D8EC
 * Callers:
 *     ?DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z @ 0x1C018CDC0 (-DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z @ 0x1C0197108 (-LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z.c)
 *     ?ReevaluateQFrameHasDelegation@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C019AB08 (-ReevaluateQFrameHasDelegation@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z.c)
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
  int *v11; // rbx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // edi
  int v20; // r8d
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax

  if ( this[6] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 14404);
  v9 = CTouchProcessor::LookupNode((CTouchProcessor *)this, a2, a3);
  v11 = (int *)v9;
  if ( a5 )
  {
    switch ( a4 )
    {
      case 585:
        v12 = *(_DWORD *)v9;
        if ( (v12 & 0x1000000) == 0 || (v12 & 0x2000000) != 0 || (v12 & 0x4000000) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 14417);
          v12 = *v11;
        }
        v13 = v12 | 0x2000000;
        goto LABEL_64;
      case 586:
        *(_DWORD *)v9 |= 0x20000000u;
        goto LABEL_79;
      case 593:
        v14 = *((_DWORD *)v9 + 1);
        if ( (v14 & 1) == 0 || (v14 & 2) != 0 || (v14 & 4) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 14431);
          v14 = v11[1];
        }
        v15 = v14 | 2;
        break;
      case 594:
        v16 = *((_DWORD *)v9 + 1);
        if ( (v16 & 0x10) == 0 || (v16 & 0x20) != 0 || (v16 & 0x40) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 14438);
          v16 = v11[1];
        }
        v15 = v16 | 0x20;
        break;
      default:
        v17 = *(_DWORD *)v9;
        if ( (v17 & 0x100000) == 0 || (v17 & 0x200000) != 0 || (v17 & 0x400000) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 14445);
          v17 = *v11;
        }
        v13 = v17 | 0x200000;
        goto LABEL_64;
    }
LABEL_77:
    v11[1] = v15;
    goto LABEL_79;
  }
  if ( !a6 )
  {
    switch ( a4 )
    {
      case 585:
        v22 = *(_DWORD *)v9;
        if ( (v22 & 0x1000000) == 0 || (v22 & 0x2000000) != 0 || (v22 & 0x4000000) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 14498);
          v22 = *v11;
        }
        v13 = v22 | 0x4000000;
        goto LABEL_64;
      case 586:
        v23 = *(_DWORD *)v9;
        if ( (v23 & 0x10000000) == 0 || (v23 & 0x20000000) != 0 || (v23 & 0x40000000) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 14505);
          v23 = *v11;
        }
        v13 = v23 | 0x40000000;
        goto LABEL_64;
      case 593:
        v24 = *((_DWORD *)v9 + 1);
        if ( (v24 & 1) == 0 || (v24 & 2) != 0 || (v24 & 4) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 14512);
          v24 = v11[1];
        }
        v15 = v24 | 4;
        break;
      case 594:
        v25 = *((_DWORD *)v9 + 1);
        if ( (v25 & 0x10) == 0 || (v25 & 0x20) != 0 || (v25 & 0x40) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 14519);
          v25 = v11[1];
        }
        v15 = v25 | 0x40;
        break;
      default:
        *(_DWORD *)v9 |= 0x400000u;
        goto LABEL_79;
    }
    goto LABEL_77;
  }
  if ( a4 == 585 )
  {
    v18 = *(_DWORD *)v9;
    v19 = 0x1000000;
    if ( (v18 & 0x800000) != 0 && (v18 & 0x1000000) == 0 )
      goto LABEL_51;
    v20 = 14454;
    goto LABEL_50;
  }
  if ( a4 == 586 )
  {
    v18 = *(_DWORD *)v9;
    v19 = 0x10000000;
    if ( (v18 & 0x8000000) != 0 && (v18 & 0x10000000) == 0 )
      goto LABEL_51;
    v20 = 14460;
    goto LABEL_50;
  }
  if ( a4 != 593 )
  {
    if ( a4 == 594 )
    {
      v21 = *((_DWORD *)v9 + 1);
      if ( (v21 & 8) == 0 || (v21 & 0x10) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 14471);
        v21 = v11[1];
      }
      v15 = v21 | 0x10;
      goto LABEL_77;
    }
    v18 = *(_DWORD *)v9;
    v19 = 0x100000;
    if ( (v18 & 0x100000) == 0 )
    {
LABEL_51:
      v13 = v19 | v18;
LABEL_64:
      *v11 = v13;
      goto LABEL_79;
    }
    v20 = 14476;
LABEL_50:
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, v20);
    v18 = *v11;
    goto LABEL_51;
  }
  if ( *(int *)v9 >= 0 || (*((_DWORD *)v9 + 1) & 1) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 14466);
  v11[1] |= 1u;
LABEL_79:
  CTouchProcessor::ReevaluateQFrameHasDelegation(v10, a2, v11[2]);
}
