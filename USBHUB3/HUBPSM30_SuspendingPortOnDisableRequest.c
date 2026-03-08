/*
 * XREFs of HUBPSM30_SuspendingPortOnDisableRequest @ 0x1C00139B0
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_Suspend30PortUsingControlTransfer @ 0x1C0004AF8 (HUBHTX_Suspend30PortUsingControlTransfer.c)
 */

__int64 __fastcall HUBPSM30_SuspendingPortOnDisableRequest(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBHTX_Suspend30PortUsingControlTransfer(v1);
  _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v1 + 1328) + 1636LL), 8u);
  return 1000LL;
}
