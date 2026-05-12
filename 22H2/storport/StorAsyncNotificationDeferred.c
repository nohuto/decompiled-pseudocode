/*
 * XREFs of StorAsyncNotificationDeferred @ 0x1C0038418
 * Callers:
 *     StorPortNotification @ 0x1C000E7B0 (StorPortNotification.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x1C0002E10 (RaidQueueDeferredItem.c)
 */

char __fastcall StorAsyncNotificationDeferred(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v5; // rdx
  char result; // al

  v5 = a2 + 1616;
  result = 0;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 16), 134684676, 134684677) != 134684677 )
    v5 = 0LL;
  if ( v5 )
  {
    *(_DWORD *)(v5 + 32) = 12;
    *(_QWORD *)(v5 + 40) = a2 + 1864;
    *(_DWORD *)(v5 + 36) = a3;
    *(_QWORD *)(a2 + 1872) = a4;
    RaidQueueDeferredItem((char *)(a1 + 1152), (struct _SLIST_ENTRY *)v5);
    return 1;
  }
  return result;
}
