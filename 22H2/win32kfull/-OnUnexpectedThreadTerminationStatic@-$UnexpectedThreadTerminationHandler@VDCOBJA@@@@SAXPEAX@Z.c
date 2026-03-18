/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@SAXPEAX@Z @ 0x1C013E610
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C013E6D4 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic(XDCOBJ *a1)
{
  if ( *(_QWORD *)a1 )
  {
    XDCOBJ::vAltUnlockNoNullSet(a1);
    *(_QWORD *)a1 = 0LL;
  }
}
