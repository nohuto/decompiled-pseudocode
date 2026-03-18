/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@SAXPEAX@Z @ 0x1C00DB080
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00205B4 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic(HDC **a1)
{
  if ( *a1 )
  {
    XDCOBJ::vAltUnlockFast(a1);
    *a1 = 0LL;
  }
}
