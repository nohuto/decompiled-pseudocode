/*
 * XREFs of TUNNEL_UnregisterForPnPNotifications @ 0x1C008E9B8
 * Callers:
 *     HUBFDO_EvtPrePoFxUnregisterDevice @ 0x1C000F020 (HUBFDO_EvtPrePoFxUnregisterDevice.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall TUNNEL_UnregisterForPnPNotifications(__int64 a1)
{
  void *v2; // rcx
  NTSTATUS result; // eax

  v2 = *(void **)(a1 + 2752);
  if ( v2 )
  {
    result = IoUnregisterPlugPlayNotificationEx(v2);
    *(_QWORD *)(a1 + 2752) = 0LL;
  }
  return result;
}
