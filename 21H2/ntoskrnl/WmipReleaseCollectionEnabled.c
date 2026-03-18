/*
 * XREFs of WmipReleaseCollectionEnabled @ 0x1408119C4
 * Callers:
 *     WmipDoDisableRequest @ 0x1406D8814 (WmipDoDisableRequest.c)
 *     WmipSendEnableRequest @ 0x1406D88A4 (WmipSendEnableRequest.c)
 *     WmipEnableCollectionForNewGuid @ 0x14075DA88 (WmipEnableCollectionForNewGuid.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x14080EEFC (WmipDisableCollectionForRemovedGuid.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
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
