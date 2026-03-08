/*
 * XREFs of ?WaitForWinstaRundown@@YAXPEAU_KEVENT@@@Z @ 0x1C00F60A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WaitForWinstaRundown(struct _KEVENT *StartContext)
{
  if ( StartContext )
    KeSetEvent(StartContext, 1, 0);
  ExWaitForRundownProtectionRelease(gWinstaRunRef);
  ExRundownCompleted(gWinstaRunRef);
}
