/*
 * XREFs of ?DxgkPowerRuntimeComponentIdleStateCallback@@YAXPEAXKK@Z @ 0x1C00125A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z @ 0x1C00125F4 (-PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z.c)
 */

void __fastcall DxgkPowerRuntimeComponentIdleStateCallback(DXGADAPTER *this, unsigned int a2, unsigned int a3)
{
  PSLIST_ENTRY v6; // rax

  if ( *((_QWORD *)this + 480)
    && (a2 == 1 || a2 == 4)
    && _InterlockedIncrement((volatile signed __int32 *)this + 948) > 1 )
  {
    while ( 1 )
    {
      v6 = ExpInterlockedPopEntrySList((PSLIST_HEADER)this + 239);
      if ( v6 )
        break;
      if ( KeGetCurrentIrql() < 2u )
        KeWaitForSingleObject((char *)this + 3760, Executive, 0, 0, 0LL);
      else
        KeStallExecutionProcessor(0x64u);
    }
    LODWORD(v6[1].Next) = a2;
    HIDWORD(v6[1].Next) = a3;
    *((_BYTE *)&v6[1].Next + 8) = 0;
    ExInterlockedInsertTailList((PLIST_ENTRY)((char *)this + 3800), (PLIST_ENTRY)v6, (PKSPIN_LOCK)this + 473);
    KeSetEvent((PRKEVENT)((char *)this + 3712), 0, 0);
  }
  else
  {
    DXGADAPTER::PowerRuntimeComponentIdleStateCallback_Worker(this, a2, a3, 0);
  }
}
