/*
 * XREFs of ?WakeInjectedFlushWaiter@@YAXXZ @ 0x1C01290E0
 * Callers:
 *     EditionForegroundQAccessibleToMouseProducer @ 0x1C0110340 (EditionForegroundQAccessibleToMouseProducer.c)
 * Callees:
 *     <none>
 */

void __fastcall WakeInjectedFlushWaiter(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (unsigned __int8)IsInputThread(a1, a2, a3) )
  {
    if ( gbMouseInjectionBlockedOnDIT )
      KeSetEvent(gpkeDITMouseInjectionResponseEvent, 1, 0);
  }
}
