/*
 * XREFs of ?WakeInjectedFlushWaiter@@YAXXZ @ 0x1C01AB550
 * Callers:
 *     EditionForegroundQAccessibleToMouseProducer @ 0x1C00A5010 (EditionForegroundQAccessibleToMouseProducer.c)
 * Callees:
 *     <none>
 */

void __fastcall WakeInjectedFlushWaiter(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (unsigned __int8)IsInputThread(a1, a2, a3) )
  {
    if ( gbMouseInjectionBlockedOnDIT )
      KeSetEvent((PRKEVENT)WPP_MAIN_CB.Dpc.SystemArgument2, 1, 0);
  }
}
