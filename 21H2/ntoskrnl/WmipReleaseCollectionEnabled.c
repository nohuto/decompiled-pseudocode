/*
 * XREFs of WmipReleaseCollectionEnabled @ 0x140781994
 * Callers:
 *     WmipSendEnableRequest @ 0x1406C1214 (WmipSendEnableRequest.c)
 *     WmipEnableCollectionForNewGuid @ 0x140757ACC (WmipEnableCollectionForNewGuid.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140758114 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipDoDisableRequest @ 0x14077A7EC (WmipDoDisableRequest.c)
 * Callees:
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 */

LONG __fastcall WmipReleaseCollectionEnabled(__int64 a1)
{
  LONG result; // eax

  result = *(_DWORD *)(a1 + 16);
  if ( (result & 8) != 0 )
  {
    result = KeSetEvent(*(PRKEVENT *)(a1 + 96), 0, 0);
    *(_DWORD *)(a1 + 16) &= ~8u;
  }
  return result;
}
