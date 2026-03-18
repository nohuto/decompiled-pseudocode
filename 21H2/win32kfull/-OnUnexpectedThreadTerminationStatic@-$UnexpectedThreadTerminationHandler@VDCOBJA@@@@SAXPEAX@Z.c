/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@SAXPEAX@Z @ 0x1C015D7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00920F0 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic(__int64 **a1)
{
  if ( *a1 )
  {
    XDCOBJ::vAltUnlockFast(a1);
    *a1 = 0LL;
  }
}
