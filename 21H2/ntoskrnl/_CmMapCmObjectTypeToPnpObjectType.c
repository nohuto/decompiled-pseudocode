/*
 * XREFs of _CmMapCmObjectTypeToPnpObjectType @ 0x14077A710
 * Callers:
 *     PiDmGetCmObjectListFromCache @ 0x1406DCFC0 (PiDmGetCmObjectListFromCache.c)
 *     _CmRaiseCreateEvent @ 0x14076A8FC (_CmRaiseCreateEvent.c)
 *     _CmRaisePropertyChangeEvent @ 0x140770200 (_CmRaisePropertyChangeEvent.c)
 *     PiPnpRtlCmActionCallback @ 0x140779F10 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectGetCachedCmProperty @ 0x14077A4D4 (PiDmObjectGetCachedCmProperty.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x14077A624 (PiDmObjectUpdateCachedCmProperty.c)
 *     _CmRaiseDeleteEvent @ 0x140A27790 (_CmRaiseDeleteEvent.c)
 *     _PnpCmMatchCallbackRoutine @ 0x140A2CED0 (_PnpCmMatchCallbackRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmMapCmObjectTypeToPnpObjectType(int a1)
{
  int v1; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return 1LL;
  v3 = v1 - 1;
  if ( !v3 )
    return 2LL;
  v4 = v3 - 1;
  if ( !v4 )
    return 3LL;
  v5 = v4 - 1;
  if ( !v5 )
    return 4LL;
  v6 = v5 - 1;
  if ( !v6 )
    return 5LL;
  if ( v6 == 1 )
    return 6LL;
  return 0LL;
}
