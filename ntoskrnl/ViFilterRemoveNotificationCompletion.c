/*
 * XREFs of ViFilterRemoveNotificationCompletion @ 0x140ADC9F0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 */

__int64 __fastcall ViFilterRemoveNotificationCompletion(__int64 a1, __int64 a2)
{
  if ( *(_BYTE *)(a2 + 65) )
    KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 64) + 64LL), 0, 0);
  return 3221225494LL;
}
