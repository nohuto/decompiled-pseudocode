/*
 * XREFs of ?SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z @ 0x1C01D6700
 * Callers:
 *     ?DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z @ 0x1C01C4340 (-DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z.c)
 * Callees:
 *     ?LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z @ 0x1C01CE88C (-LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z.c)
 *     ?ReevaluateQFrameHasDelegation@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C01D2FFC (-ReevaluateQFrameHasDelegation@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::SetPointerInfoNodeDelegateAction(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        __int64 a3,
        int a4,
        int a5,
        int a6)
{
  unsigned int v7; // ebx
  struct CPointerInfoNode *v9; // rax
  __int64 v10; // rdx
  CTouchProcessor *v11; // rcx
  __int64 v12; // r8
  int *v13; // rbx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // edi
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax

  v7 = a3;
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v9 = CTouchProcessor::LookupNode((CTouchProcessor *)this, a2, v7);
  v13 = (int *)v9;
  if ( !a5 )
  {
    if ( !a6 )
    {
      switch ( a4 )
      {
        case 585:
          v24 = *(_DWORD *)v9;
          if ( (v24 & 0x1000000) == 0 || (v24 & 0x2000000) != 0 || (v24 & 0x4000000) != 0 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
            v24 = *v13;
          }
          v15 = v24 | 0x4000000;
          goto LABEL_63;
        case 586:
          v25 = *(_DWORD *)v9;
          if ( (v25 & 0x10000000) == 0 || (v25 & 0x20000000) != 0 || (v25 & 0x40000000) != 0 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
            v25 = *v13;
          }
          v15 = v25 | 0x40000000;
          goto LABEL_63;
        case 593:
          v26 = *((_DWORD *)v9 + 1);
          if ( (v26 & 1) == 0 || (v26 & 2) != 0 || (v26 & 4) != 0 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
            v26 = v13[1];
          }
          v17 = v26 | 4;
          break;
        case 594:
          v27 = *((_DWORD *)v9 + 1);
          if ( (v27 & 0x10) == 0 || (v27 & 0x20) != 0 || (v27 & 0x40) != 0 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
            v27 = v13[1];
          }
          v17 = v27 | 0x40;
          break;
        default:
          *(_DWORD *)v9 |= 0x400000u;
          goto LABEL_78;
      }
      goto LABEL_76;
    }
    switch ( a4 )
    {
      case 585:
        v20 = *(_DWORD *)v9;
        v21 = 0x1000000;
        if ( (v20 & 0x800000) != 0 && (v20 & 0x1000000) == 0 )
          goto LABEL_50;
        break;
      case 586:
        v20 = *(_DWORD *)v9;
        v21 = 0x10000000;
        if ( (v20 & 0x8000000) != 0 && (v20 & 0x10000000) == 0 )
          goto LABEL_50;
        break;
      case 593:
        if ( *(int *)v9 >= 0 || (v22 = *((_DWORD *)v9 + 1), (v22 & 1) != 0) )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
          v22 = v13[1];
        }
        v17 = v22 | 1;
        goto LABEL_76;
      case 594:
        v23 = *((_DWORD *)v9 + 1);
        if ( (v23 & 8) == 0 || (v23 & 0x10) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
          v23 = v13[1];
        }
        v17 = v23 | 0x10;
        goto LABEL_76;
      default:
        v20 = *(_DWORD *)v9;
        v21 = 0x100000;
        if ( (v20 & 0x100000) == 0 )
        {
LABEL_50:
          v15 = v21 | v20;
LABEL_63:
          *v13 = v15;
          goto LABEL_78;
        }
        break;
    }
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
    v20 = *v13;
    goto LABEL_50;
  }
  if ( a4 == 585 )
  {
    v14 = *(_DWORD *)v9;
    if ( (v14 & 0x1000000) == 0 || (v14 & 0x2000000) != 0 || (v14 & 0x4000000) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
      v14 = *v13;
    }
    v15 = v14 | 0x2000000;
    goto LABEL_63;
  }
  if ( a4 != 586 )
  {
    if ( a4 == 593 )
    {
      v16 = *((_DWORD *)v9 + 1);
      if ( (v16 & 1) == 0 || (v16 & 2) != 0 || (v16 & 4) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
        v16 = v13[1];
      }
      v17 = v16 | 2;
    }
    else
    {
      if ( a4 != 594 )
      {
        v19 = *(_DWORD *)v9;
        if ( (v19 & 0x100000) == 0 || (v19 & 0x200000) != 0 || (v19 & 0x400000) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
          v19 = *v13;
        }
        v15 = v19 | 0x200000;
        goto LABEL_63;
      }
      v18 = *((_DWORD *)v9 + 1);
      if ( (v18 & 0x10) == 0 || (v18 & 0x20) != 0 || (v18 & 0x40) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
        v18 = v13[1];
      }
      v17 = v18 | 0x20;
    }
LABEL_76:
    v13[1] = v17;
    goto LABEL_78;
  }
  *(_DWORD *)v9 |= 0x20000000u;
LABEL_78:
  CTouchProcessor::ReevaluateQFrameHasDelegation(v11, a2, (unsigned int)v13[2]);
}
