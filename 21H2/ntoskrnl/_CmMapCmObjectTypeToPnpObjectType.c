/*
 * XREFs of _CmMapCmObjectTypeToPnpObjectType @ 0x14062B1D8
 * Callers:
 *     PiDmGetCmObjectListFromCache @ 0x14061F234 (PiDmGetCmObjectListFromCache.c)
 *     PiPnpRtlCmActionCallback @ 0x14062A730 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectGetCachedCmProperty @ 0x14062AF9C (PiDmObjectGetCachedCmProperty.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x14062B0EC (PiDmObjectUpdateCachedCmProperty.c)
 *     _CmRaiseDeleteEvent @ 0x14072E050 (_CmRaiseDeleteEvent.c)
 *     _CmRaisePropertyChangeEvent @ 0x140744594 (_CmRaisePropertyChangeEvent.c)
 *     _CmRaiseCreateEvent @ 0x14074BC70 (_CmRaiseCreateEvent.c)
 *     _PnpCmMatchCallbackRoutine @ 0x14097C2A0 (_PnpCmMatchCallbackRoutine.c)
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
