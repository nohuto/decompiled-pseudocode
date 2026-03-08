/*
 * XREFs of ?PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z @ 0x1C003F408
 * Callers:
 *     ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z @ 0x1C000E6B0 (-SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z.c)
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x1C000F9C0 (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z.c)
 * Callees:
 *     ?PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z @ 0x1C00125F4 (-PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z.c)
 */

void __fastcall DXGADAPTER::PowerRuntimeComponentIdleStateCallback(
        DXGADAPTER *this,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  int v5; // r14d
  PSLIST_ENTRY v8; // rax

  v5 = a3;
  if ( *((_QWORD *)this + 480)
    && (a2 == 1 || a2 == 4)
    && _InterlockedIncrement((volatile signed __int32 *)this + 948) > 1 )
  {
    while ( 1 )
    {
      v8 = ExpInterlockedPopEntrySList((PSLIST_HEADER)this + 239);
      if ( v8 )
        break;
      if ( KeGetCurrentIrql() < 2u )
        KeWaitForSingleObject((char *)this + 3760, Executive, 0, 0, 0LL);
      else
        KeStallExecutionProcessor(0x64u);
    }
    LODWORD(v8[1].Next) = a2;
    HIDWORD(v8[1].Next) = v5;
    *((_BYTE *)&v8[1].Next + 8) = a4;
    ExInterlockedInsertTailList((PLIST_ENTRY)((char *)this + 3800), (PLIST_ENTRY)v8, (PKSPIN_LOCK)this + 473);
    KeSetEvent((PRKEVENT)((char *)this + 3712), 0, 0);
  }
  else
  {
    DXGADAPTER::PowerRuntimeComponentIdleStateCallback_Worker(this, a2, a3, a4);
  }
}
