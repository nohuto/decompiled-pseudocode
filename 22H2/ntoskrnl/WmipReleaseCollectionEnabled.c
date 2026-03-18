/*
 * XREFs of WmipReleaseCollectionEnabled @ 0x1408758FC
 * Callers:
 *     WmipDoDisableRequest @ 0x1407D6368 (WmipDoDisableRequest.c)
 *     WmipSendEnableRequest @ 0x1407D640C (WmipSendEnableRequest.c)
 *     WmipEnableCollectionForNewGuid @ 0x14086B0BC (WmipEnableCollectionForNewGuid.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x1408838E4 (WmipDisableCollectionForRemovedGuid.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
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
