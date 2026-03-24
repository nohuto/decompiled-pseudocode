/*
 * XREFs of WmipReleaseCollectionEnabled @ 0x140781894
 * Callers:
 *     WmipSendEnableRequest @ 0x1406A3C24 (WmipSendEnableRequest.c)
 *     WmipEnableCollectionForNewGuid @ 0x1407572BC (WmipEnableCollectionForNewGuid.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140757904 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipDoDisableRequest @ 0x14077A6EC (WmipDoDisableRequest.c)
 * Callees:
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
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
